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
			/// 瓦片路径类
			/// </summary>
			public class TilePath : EarthView.World.Core.AllocatedObject
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
				private static extern void EarthView_World_Spatial_CTilePath_setTilePathRule_void_CTilePathRule(IntPtr pNativeObject, IntPtr tilepathrule);

				/// <summary>
				/// 设置瓦片路径规则
				/// </summary>
				/// <param name="tilepathrule">瓦片路径规则对象</param>
				/// <returns></returns>
				public void SetTilePathRule(EarthView.World.Spatial.TilePathRule tilepathrule)
				{
					EarthView_World_Spatial_CTilePath_setTilePathRule_void_CTilePathRule(this.NativeObject, object.Equals(tilepathrule, null) ? IntPtr.Zero : tilepathrule.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_CTilePath_getTilePathRule_CTilePathRule(IntPtr pNativeObject);

				/// <summary>
				/// 获取瓦片路径规则对象
				/// </summary>
				/// <returns>瓦片路径规则对象，不需释放</returns>
				public EarthView.World.Spatial.TilePathRule GetTilePathRule()
				{
					IntPtr __ptr = EarthView_World_Spatial_CTilePath_getTilePathRule_CTilePathRule(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.TilePathRule csObj = new EarthView.World.Spatial.TilePathRule(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTilePathRule");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.TilePathRule;
						csObj.BindNativeObject(__ptr, "CTilePathRule");
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
				private static extern IntPtr EarthView_World_Spatial_CTilePath_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString(IntPtr pNativeObject, int level, uint row, uint col, string format);

				/// <summary>
				/// 获取指定参数的路径
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="format">数据格式，如“jpg”</param>
				/// <returns>相应路径</returns>
				public string GetPath(int level, uint row, uint col, string format)
				{
					IntPtr __ptr = EarthView_World_Spatial_CTilePath_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString(this.NativeObject, level, row, col, format);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="tilepathrule">瓦片路径规则</param>
				/// <returns></returns>
				public TilePath(EarthView.World.Spatial.TilePathRule tilepathrule) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetilepathrule = new BasePtr(tilepathrule);
					list.Add("tilepathrule", valuetilepathrule.PtrVal);
					Create("CTilePath", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadTilePath = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadTilePath = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTilePath = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadTilePath = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadTilePath = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadTilePath = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTilePath = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadTilePath = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadTilePath = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadTilePath = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadTilePath = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadTilePath = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilePath", new TilePathClassFactory());

				public TilePath(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static TilePath FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TilePath obj = baseObj as  TilePath;
					if (object.Equals(obj, null))
					{
						obj = new TilePath(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTilePath");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TilePathClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TilePath emptyInstance = new TilePath(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
