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
			/// 瓦片大小类
			/// </summary>
			public class TilePixelSize : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				public TilePixelSize() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTilePixelSize",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
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
				private static extern uint EarthView_World_Spatial_CTilePixelSize_getWidth_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取瓦片宽度
				/// </summary>
				/// <returns>瓦片宽度</returns>
				public uint GetWidth()
				{
					uint ret=EarthView_World_Spatial_CTilePixelSize_getWidth_ev_uint32(this.NativeObject);
					
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
				private static extern uint EarthView_World_Spatial_CTilePixelSize_getHeight_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取瓦片高度
				/// </summary>
				/// <returns>瓦片高度</returns>
				public uint GetHeight()
				{
					uint ret=EarthView_World_Spatial_CTilePixelSize_getHeight_ev_uint32(this.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_CTilePixelSize_setWidth_void_ev_uint32(IntPtr pNativeObject, uint dWidth);

				/// <summary>
				/// 设置瓦片宽度
				/// </summary>
				/// <param name="dWidth">瓦片宽度</param>
				/// <returns></returns>
				public void SetWidth(uint dWidth)
				{
					EarthView_World_Spatial_CTilePixelSize_setWidth_void_ev_uint32(this.NativeObject, dWidth);
					
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
				private static extern void EarthView_World_Spatial_CTilePixelSize_setHeight_void_ev_uint32(IntPtr pNativeObject, uint dHeight);

				/// <summary>
				/// 设置瓦片高度
				/// </summary>
				/// <param name="dHeight">瓦片高度</param>
				/// <returns></returns>
				public void SetHeight(uint dHeight)
				{
					EarthView_World_Spatial_CTilePixelSize_setHeight_void_ev_uint32(this.NativeObject, dHeight);
					
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
				private static extern IntPtr EarthView_World_Spatial_CTilePixelSize_clone_CTilePixelSize(IntPtr pNativeObject);

				/// <summary>
				/// 深度拷贝
				/// </summary>
				/// <returns>新对象指针</returns>
				public EarthView.World.Spatial.TilePixelSize Clone()
				{
					IntPtr __ptr = EarthView_World_Spatial_CTilePixelSize_clone_CTilePixelSize(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.TilePixelSize csObj = new EarthView.World.Spatial.TilePixelSize(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTilePixelSize");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.TilePixelSize;
						csObj.BindNativeObject(__ptr, "CTilePixelSize");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTilePixelSize = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadTilePixelSize = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTilePixelSize = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadTilePixelSize = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadTilePixelSize = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadTilePixelSize = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTilePixelSize = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadTilePixelSize = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadTilePixelSize = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadTilePixelSize = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadTilePixelSize = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadTilePixelSize = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilePixelSize", new TilePixelSizeClassFactory());

				public TilePixelSize(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static TilePixelSize FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TilePixelSize obj = baseObj as  TilePixelSize;
					if (object.Equals(obj, null))
					{
						obj = new TilePixelSize(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTilePixelSize");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TilePixelSizeClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TilePixelSize emptyInstance = new TilePixelSize(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
