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
			/// <summary>
			/// 二维图形扩展工具类
			/// 管理图形扩展方法
			/// </summary>
			public class MultiGeometry3DExtensionTool : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public MultiGeometry3DExtensionTool() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CMultiGeometry3DExtensionTool",  null);
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
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPointToBillboard_void_CMultiPoint3DExtension(IntPtr pointExtension);

				/// <summary>
				/// 将点用公告板符号拉伸成公告板
				/// </summary>
				/// <param name="pointExtension">点扩展的存储信息</param>
				/// <returns></returns>
				public static void ExtensionPointToBillboard(EarthView.World.Geometry3D.MultiPoint3DExtension pointExtension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPointToBillboard_void_CMultiPoint3DExtension(object.Equals(pointExtension, null) ? IntPtr.Zero : pointExtension.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPointToIcon_void_CMultiPoint3DExtension(IntPtr pointExtension);

				/// <summary>
				/// 将点用图标符号拉伸成图标元素
				/// </summary>
				/// <param name="pointExtension">点扩展的存储信息</param>
				/// <returns></returns>
				public static void ExtensionPointToIcon(EarthView.World.Geometry3D.MultiPoint3DExtension pointExtension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPointToIcon_void_CMultiPoint3DExtension(object.Equals(pointExtension, null) ? IntPtr.Zero : pointExtension.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPointToPhoto_void_CMultiPoint3DExtension(IntPtr pointExtension);

				/// <summary>
				/// 将点用图片符号拉伸成图片元素
				/// </summary>
				/// <param name="pointExtension">点扩展的存储信息</param>
				/// <returns></returns>
				public static void ExtensionPointToPhoto(EarthView.World.Geometry3D.MultiPoint3DExtension pointExtension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPointToPhoto_void_CMultiPoint3DExtension(object.Equals(pointExtension, null) ? IntPtr.Zero : pointExtension.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPointToModel_void_CMultiPoint3DExtension(IntPtr pointExtension);

				/// <summary>
				/// 将点用模型符号拉伸成模型
				/// </summary>
				/// <param name="pointExtension">点扩展的存储信息</param>
				/// <returns></returns>
				public static void ExtensionPointToModel(EarthView.World.Geometry3D.MultiPoint3DExtension pointExtension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPointToModel_void_CMultiPoint3DExtension(object.Equals(pointExtension, null) ? IntPtr.Zero : pointExtension.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionLineToSquard_void_CMultiPolyline3DExtension(IntPtr lineExtension);

				/// <summary>
				/// 将线用线符号拉伸成立方体
				/// </summary>
				/// <param name="lineExtension">线扩展的存储信息</param>
				/// <returns></returns>
				public static void ExtensionLineToSquard(EarthView.World.Geometry3D.MultiPolyline3DExtension lineExtension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionLineToSquard_void_CMultiPolyline3DExtension(object.Equals(lineExtension, null) ? IntPtr.Zero : lineExtension.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionLineToSurface_void_CMultiPolyline3DExtension(IntPtr lineExtension);

				/// <summary>
				/// 将线用线符号拉伸成墙
				/// </summary>
				/// <param name="lineExtension">线扩展的存储信息</param>
				/// <returns></returns>
				public static void ExtensionLineToSurface(EarthView.World.Geometry3D.MultiPolyline3DExtension lineExtension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionLineToSurface_void_CMultiPolyline3DExtension(object.Equals(lineExtension, null) ? IntPtr.Zero : lineExtension.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionLineToConduit_void_CMultiPolyline3DExtension(IntPtr lineExtension);

				/// <summary>
				/// 将线用线符号拉伸成管道
				/// </summary>
				/// <param name="lineExtension">线扩展的存储信息</param>
				/// <returns></returns>
				public static void ExtensionLineToConduit(EarthView.World.Geometry3D.MultiPolyline3DExtension lineExtension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionLineToConduit_void_CMultiPolyline3DExtension(object.Equals(lineExtension, null) ? IntPtr.Zero : lineExtension.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPolygonToCuboid_void_CMultiPolygon3DExtension(IntPtr ploygonExtension);

				/// <summary>
				/// 将面用面符号拉伸成体
				/// </summary>
				/// <param name="ploygonExtension">面扩展的存储信息</param>
				/// <returns></returns>
				public static void ExtensionPolygonToCuboid(EarthView.World.Geometry3D.MultiPolygon3DExtension ploygonExtension)
				{
					EarthView_World_Geometry3D_CMultiGeometry3DExtensionTool_extensionPolygonToCuboid_void_CMultiPolygon3DExtension(object.Equals(ploygonExtension, null) ? IntPtr.Zero : ploygonExtension.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadMultiGeometry3DExtensionTool = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool", new MultiGeometry3DExtensionToolClassFactory());

				public MultiGeometry3DExtensionTool(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static MultiGeometry3DExtensionTool FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MultiGeometry3DExtensionTool obj = baseObj as  MultiGeometry3DExtensionTool;
					if (object.Equals(obj, null))
					{
						obj = new MultiGeometry3DExtensionTool(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMultiGeometry3DExtensionTool");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MultiGeometry3DExtensionToolClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MultiGeometry3DExtensionTool emptyInstance = new MultiGeometry3DExtensionTool(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
