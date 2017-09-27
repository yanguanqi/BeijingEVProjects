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
			/// <summary>
			/// 瓦片几何要素类，描述一个瓦片所有要素的几何信息
			/// </summary>
			public class VectorTile : EarthView.World.Core.AllocatedObject
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CVectorTile_fromStream_CVectorTile_CDataStream_ev_uint32_ev_uint32(IntPtr stream, uint width, uint height);

				/// <summary>
				/// 生成VectorTile对象
				/// </summary>
				/// <param name="stream">数据流</param>
				/// <param name="width">瓦片宽度</param>
				/// <param name="height">瓦片高度</param>
				/// <returns>VectorTile对象</returns>
				public static EarthView.World.Spatial.VectorTile FromStream(EarthView.World.Core.DataStream stream, uint width, uint height)
				{
					IntPtr __ptr = EarthView_World_Spatial_CVectorTile_fromStream_CVectorTile_CDataStream_ev_uint32_ev_uint32(object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, width, height);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.VectorTile csObj = new EarthView.World.Spatial.VectorTile(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVectorTile");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.VectorTile;
						csObj.BindNativeObject(__ptr, "CVectorTile");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_CVectorTile_getElementCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取要素个数
				/// </summary>
				/// <returns>要素个数</returns>
				public uint GetElementCount()
				{
					uint ret=EarthView_World_Spatial_CVectorTile_getElementCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CVectorTile_getGeoElement_CGeoElement_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 按索引获取要素
				/// </summary>
				/// <param name="index">要素的索引号</param>
				/// <returns>指定要素对象的指针</returns>
				public EarthView.World.Spatial.GeoElement GetGeoElement(uint index)
				{
					IntPtr __ptr = EarthView_World_Spatial_CVectorTile_getGeoElement_CGeoElement_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoElement csObj = new EarthView.World.Spatial.GeoElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGeoElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoElement;
						csObj.BindNativeObject(__ptr, "CGeoElement");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial_CVectorTile_getID_ev_uint32_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取指定索引号对应要素的ID
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>相应ID</returns>
				public uint GetID(uint index)
				{
					uint ret=EarthView_World_Spatial_CVectorTile_getID_ev_uint32_ev_uint32(this.NativeObject, index);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CVectorTile_getGeoElementByID_CGeoElement_ev_uint32(IntPtr pNativeObject, uint id);

				/// <summary>
				/// 按ID获取要素
				/// </summary>
				/// <param name="index">要素的ID</param>
				/// <returns>指定要素对象的指针</returns>
				public EarthView.World.Spatial.GeoElement GetGeoElementByID(uint id)
				{
					IntPtr __ptr = EarthView_World_Spatial_CVectorTile_getGeoElementByID_CGeoElement_ev_uint32(this.NativeObject, id);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoElement csObj = new EarthView.World.Spatial.GeoElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGeoElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoElement;
						csObj.BindNativeObject(__ptr, "CGeoElement");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CVectorTile_getElementType_EVGeoElementType(IntPtr pNativeObject);

				/// <summary>
				/// 要素类型
				/// </summary>
				/// <returns>要素类型</returns>
				public EarthView.World.Spatial.EVGEOELEMENTTYPE GetElementType()
				{
					int ret=EarthView_World_Spatial_CVectorTile_getElementType_EVGeoElementType(this.NativeObject);
					
					return (EarthView.World.Spatial.EVGEOELEMENTTYPE)ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadVectorTile = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadVectorTile = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadVectorTile = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadVectorTile = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadVectorTile = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadVectorTile = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadVectorTile = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadVectorTile = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadVectorTile = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadVectorTile = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadVectorTile = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadVectorTile = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CVectorTile", new VectorTileClassFactory());

				public VectorTile(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static VectorTile FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					VectorTile obj = baseObj as  VectorTile;
					if (object.Equals(obj, null))
					{
						obj = new VectorTile(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CVectorTile");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class VectorTileClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					VectorTile emptyInstance = new VectorTile(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
