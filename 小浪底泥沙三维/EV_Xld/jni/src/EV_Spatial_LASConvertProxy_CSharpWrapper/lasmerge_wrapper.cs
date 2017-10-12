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
		namespace SpatialLASConvertProxy
		{
			public class LasMerge : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public LasMerge() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLasMerge",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasMerge_setParam_void_CLasMergeQuadTreeParam(IntPtr pNativeObject, IntPtr param);

				/// <summary>
				/// 设置参数
				/// </summary>
				/// <returns></returns>
				public void SetParam(ref LasMergeQuadTreeParam param)
				{
					EarthView_World_SpatialLASConvertProxy_CLasMerge_setParam_void_CLasMergeQuadTreeParam(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_SpatialLASConvertProxy_CLasMerge_getParam_CLasMergeQuadTreeParam(IntPtr pNativeObject);

				/// <summary>
				/// 获取参数
				/// </summary>
				/// <returns></returns>
				public LasMergeQuadTreeParam GetParam()
				{
					IntPtr __ptr = EarthView_World_SpatialLASConvertProxy_CLasMerge_getParam_CLasMergeQuadTreeParam(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					LasMergeQuadTreeParam csObj = new LasMergeQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CLasMergeQuadTreeParam");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as LasMergeQuadTreeParam;
						csObj.BindNativeObject(__ptr, "CLasMergeQuadTreeParam");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasMerge_merge_void_EVString_LasRecordInfoList(IntPtr pNativeObject, string srcFolder, IntPtr lasRecordInfoList);

				/// <summary>
				/// 合并多个.evlas数据集生成.evlasxg数据集
				/// </summary>
				/// <returns></returns>
				public void Merge(string srcFolder, LasRecordInfoList lasRecordInfoList)
				{
					EarthView_World_SpatialLASConvertProxy_CLasMerge_merge_void_EVString_LasRecordInfoList(this.NativeObject, srcFolder, object.Equals(lasRecordInfoList, null) ? IntPtr.Zero : lasRecordInfoList.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_d.so");
						private static bool csbLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.so");

					#else 
						private static bool bLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy.so");
						private static bool csbLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.so");

					#else 
						private static bool bLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasMerge = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasMerge", new LasMergeClassFactory());

				public LasMerge(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static LasMerge FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LasMerge obj = baseObj as  LasMerge;
					if (object.Equals(obj, null))
					{
						obj = new LasMerge(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLasMerge");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LasMergeClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LasMerge emptyInstance = new LasMerge(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
