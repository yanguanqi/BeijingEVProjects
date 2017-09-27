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
			/// 瓦片路径规则类工厂
			/// </summary>
			public class TilePathRuleFactory : EarthView.World.Core.AllocatedObject
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
				private static extern IntPtr EarthView_World_Spatial_CTilePathRuleFactory_createTilePathRule_CTilePathRule_EVTileDataType_EVTilePathType_EVTileModeType(EarthView.World.Spatial.EVTILEDATATYPE dataType, EarthView.World.Spatial.EVTILEPATHTYPE tilePathType, EarthView.World.Spatial.EVTILEMODETYPE tileModeType);

				/// <summary>
				/// 生成瓦片路径规则
				/// </summary>
				/// <param name="dataType">数据类型，影像、矢量、DEM</param>
				/// <param name="tilePathType">路径类型，离散文件、库文件</param>
				/// <param name="tileModeType">模式，WGS84、Mercator还是古唐</param>
				/// <returns></returns>
				public static EarthView.World.Spatial.TilePathRule CreateTilePathRule(EarthView.World.Spatial.EVTILEDATATYPE dataType, EarthView.World.Spatial.EVTILEPATHTYPE tilePathType, EarthView.World.Spatial.EVTILEMODETYPE tileModeType)
				{
					IntPtr __ptr = EarthView_World_Spatial_CTilePathRuleFactory_createTilePathRule_CTilePathRule_EVTileDataType_EVTilePathType_EVTileModeType(dataType, tilePathType, tileModeType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.TilePathRule csObj = new EarthView.World.Spatial.TilePathRule(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTilePathRule");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.TilePathRule;
						csObj.BindNativeObject(__ptr, "CTilePathRule");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadTilePathRuleFactory = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilePathRuleFactory", new TilePathRuleFactoryClassFactory());

				public TilePathRuleFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static TilePathRuleFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TilePathRuleFactory obj = baseObj as  TilePathRuleFactory;
					if (object.Equals(obj, null))
					{
						obj = new TilePathRuleFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTilePathRuleFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TilePathRuleFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TilePathRuleFactory emptyInstance = new TilePathRuleFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
