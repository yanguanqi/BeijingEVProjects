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
			/// 瓦片参数类
			/// </summary>
			public class TileReference : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 拷贝构造函数
				/// </summary>
				/// <param name="tileReference">拷贝对象</param>
				/// <returns></returns>
				public TileReference(EarthView.World.Spatial.TileReference tileReference) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetileReference = new BasePtr(tileReference);
					list.Add("tileReference", valuetileReference.PtrVal);
					Create("CTileReference", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造
				/// </summary>
				/// <param name="pTileRule">瓦片规则</param>
				/// <returns></returns>
				public TileReference(EarthView.World.Spatial.TileRule tileRule) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetileRule = new BasePtr(tileRule);
					list.Add("tileRule", valuetileRule.PtrVal);
					Create("CTileReference", list);
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
				private static extern IntPtr EarthView_World_Spatial_CTileReference_getTileRuleRef_CTileRule(IntPtr pNativeObject);

				/// <summary>
				/// 获取TileRule对象
				/// </summary>
				/// <returns>TileRule对象引用，不需释放</returns>
				public EarthView.World.Spatial.TileRule GetTileRuleRef()
				{
					IntPtr __ptr = EarthView_World_Spatial_CTileReference_getTileRuleRef_CTileRule(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.TileRule csObj = new EarthView.World.Spatial.TileRule(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTileRule");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.TileRule;
						csObj.BindNativeObject(__ptr, "CTileRule");
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
				private static extern IntPtr EarthView_World_Spatial_CTileReference_getLevelInfo_CTileLevelInfo_ev_int32_ev_uint32(IntPtr pNativeObject, int level, uint dpiPerInch);

				/// <summary>
				/// 获取指定级别的级别信息对象
				/// </summary>
				/// <param name="level">瓦片级别</param>
				/// <param name="dpiPerInch">每英寸的DPI数（默认为96，用于计算比例尺和分辨率）</param>
				/// <returns>指定级别的信息对象指针，需要释放</returns>
				public EarthView.World.Spatial.TileLevelInfo GetLevelInfo(int level, uint dpiPerInch)
				{
					IntPtr __ptr = EarthView_World_Spatial_CTileReference_getLevelInfo_CTileLevelInfo_ev_int32_ev_uint32(this.NativeObject, level, dpiPerInch);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.TileLevelInfo csObj = new EarthView.World.Spatial.TileLevelInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTileLevelInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.TileLevelInfo;
						csObj.BindNativeObject(__ptr, "CTileLevelInfo");
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
				private static extern IntPtr EarthView_World_Spatial_CTileReference_getLevelInfo_CTileLevelInfo_ev_int32_void_ev_uint32(IntPtr pNativeObject, int level, IntPtr ptr1, uint dpiPerInch);

				/// <summary>
				/// 获取指定级别的级别信息对象，不建议使用
				/// </summary>
				/// <param name="level">瓦片级别</param>
				/// <param name="ptr1">某EarthView::World::Spatial::CTileLevelInfo对象的首地址</param>
				/// <param name="dpiPerInch">每英寸的DPI数（默认为96，用于计算比例尺和分辨率）</param>
				/// <returns>指定级别的信息对象指针，不需释放</returns>
				public EarthView.World.Spatial.TileLevelInfo GetLevelInfo(int level, IntPtr ptr1, uint dpiPerInch)
				{
					IntPtr __ptr = EarthView_World_Spatial_CTileReference_getLevelInfo_CTileLevelInfo_ev_int32_void_ev_uint32(this.NativeObject, level, ptr1, dpiPerInch);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.TileLevelInfo csObj = new EarthView.World.Spatial.TileLevelInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTileLevelInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.TileLevelInfo;
						csObj.BindNativeObject(__ptr, "CTileLevelInfo");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTileReference = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadTileReference = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTileReference = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadTileReference = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadTileReference = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadTileReference = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTileReference = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadTileReference = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadTileReference = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadTileReference = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadTileReference = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadTileReference = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileReference", new TileReferenceClassFactory());

				public TileReference(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static TileReference FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TileReference obj = baseObj as  TileReference;
					if (object.Equals(obj, null))
					{
						obj = new TileReference(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTileReference");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TileReferenceClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TileReference emptyInstance = new TileReference(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
