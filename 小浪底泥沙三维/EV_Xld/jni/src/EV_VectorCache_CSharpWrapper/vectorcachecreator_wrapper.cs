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
			namespace VectorCache
			{
				/// <summary>
				/// 矢量缓存制作类
				/// </summary>
				public class VectorCacheCreator : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public VectorCacheCreator() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CVectorCacheCreator",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_VectorCache_CVectorCacheCreator_setBasicParam_ev_bool_CVectorCacheBasicParam(IntPtr pNativeObject, IntPtr param);

					/// <summary>
					/// 设置切割参数
					/// </summary>
					/// <param name="param">切割参数对象</param>
					/// <returns>成功返回true，否则返回false</returns>
					public bool SetBasicParam(EarthView.World.Spatial.VectorCache.VectorCacheBasicParam param)
					{
						byte ret=EarthView_World_Spatial_VectorCache_CVectorCacheCreator_setBasicParam_ev_bool_CVectorCacheBasicParam(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_VectorCache_CVectorCacheCreator_nameSwitch_EVString_EVString(IntPtr pNativeObject, ref IntPtr beforeName);

					/// <summary>
					/// 字符转换
					/// </summary>
					/// <param name="param">转换之前的字符</param>
					/// <returns></returns>
					public string NameSwitch(ref string beforeName)
					{
						IntPtr __ptrbeforeName = Marshal.StringToHGlobalAnsi(beforeName);
						IntPtr pTmpbeforeName = __ptrbeforeName;
						
						IntPtr __ptr = EarthView_World_Spatial_VectorCache_CVectorCacheCreator_nameSwitch_EVString_EVString(this.NativeObject, ref __ptrbeforeName);
						
						 Marshal.FreeHGlobal(pTmpbeforeName);
						beforeName= Marshal.PtrToStringAnsi(__ptrbeforeName);
						ClassFactory.FreeString(ref __ptrbeforeName);
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_VectorCache_CVectorCacheCreator_getBasicParamRef_CVectorCacheBasicParam(IntPtr pNativeObject);

					/// <summary>
					/// 获取切割参数
					/// </summary>
					/// <returns>切割参数对象指针</returns>
					public EarthView.World.Spatial.VectorCache.VectorCacheBasicParam GetBasicParamRef()
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorCache_CVectorCacheCreator_getBasicParamRef_CVectorCacheBasicParam(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.VectorCache.VectorCacheBasicParam csObj = new EarthView.World.Spatial.VectorCache.VectorCacheBasicParam(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVectorCacheBasicParam");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.VectorCache.VectorCacheBasicParam;
							csObj.BindNativeObject(__ptr, "CVectorCacheBasicParam");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_VectorCache_CVectorCacheCreator_addCreateDatasetInfo_ev_bool_IDataset_CCacheProcessInfo(IntPtr pNativeObject, IntPtr ref_dataset, IntPtr info);

					///ev_bool setDataSource(_in const IDataSource* datasource);//引用
					///const IDataSource* getDataSource();
					//// <summary>
					//// 添加切割信息
					//// </summary>
					//// <param name="dataset">切割数据集</param>
					//// <param name="info">切割信息</param>
					//// <returns>成功返回true，否则返回false</returns>
					public bool AddCreateDatasetInfo(EarthView.World.Spatial.GeoDataset.Idataset ref_dataset, EarthView.World.Spatial.VectorCache.CacheProcessInfo info)
					{
						byte ret=EarthView_World_Spatial_VectorCache_CVectorCacheCreator_addCreateDatasetInfo_ev_bool_IDataset_CCacheProcessInfo(this.NativeObject, object.Equals(ref_dataset, null) ? IntPtr.Zero : ref_dataset.NativeObject, object.Equals(info, null) ? IntPtr.Zero : info.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_VectorCache_CVectorCacheCreator_makeCache_EVVectorCacheProcessResult(IntPtr pNativeObject);

					/// <summary>
					/// 生成缓存
					/// </summary>
					/// <returns>处理结果，0正确</returns>
					public EarthView.World.Spatial.VectorCache.EVVECTORCACHEPROCESSRESULT MakeCache()
					{
						int ret=EarthView_World_Spatial_VectorCache_CVectorCacheCreator_makeCache_EVVectorCacheProcessResult(this.NativeObject);
						
						return (EarthView.World.Spatial.VectorCache.EVVECTORCACHEPROCESSRESULT)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_VectorCache_CVectorCacheCreator_getProcessMessageRef_CVectorCacheProcessMessage(IntPtr pNativeObject);

					/// <summary>
					/// 获取切割进程信息
					/// </summary>
					/// <returns>切割进程对象指针</returns>
					public EarthView.World.Spatial.VectorCache.VectorCacheProcessMessage GetProcessMessageRef()
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorCache_CVectorCacheCreator_getProcessMessageRef_CVectorCacheProcessMessage(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.VectorCache.VectorCacheProcessMessage csObj = new EarthView.World.Spatial.VectorCache.VectorCacheProcessMessage(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVectorCacheProcessMessage");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.VectorCache.VectorCacheProcessMessage;
							csObj.BindNativeObject(__ptr, "CVectorCacheProcessMessage");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_VectorCache_CVectorCacheCreator_stopProcess_void(IntPtr pNativeObject);

					/// <summary>
					/// 终止程序
					/// </summary>
					/// <returns></returns>
					public void StopProcess()
					{
						EarthView_World_Spatial_VectorCache_CVectorCacheCreator_stopProcess_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorCache_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_VectorCache_CVectorCacheCreator_checkValidTableName_ev_bool_StringVector_StringVector(IntPtr tableNameList, IntPtr errorNameList);

					/// <summary>
					/// 检测是否可用传入的名称创建数据库表
					/// </summary>
					/// <param name="tableNameList">待检测名称列表</param>
					/// <param name="errorNameList">错误名称列表</param>
					/// <returns>检测成功返回true，否则返回false</returns>
					public static bool CheckValidTableName(EarthView.World.Core.StringVector tableNameList, ref  EarthView.World.Core.StringVector errorNameList)
					{
						byte ret=EarthView_World_Spatial_VectorCache_CVectorCacheCreator_checkValidTableName_ev_bool_StringVector_StringVector(object.Equals(tableNameList, null) ? IntPtr.Zero : tableNameList.NativeObject, object.Equals(errorNameList, null) ? IntPtr.Zero : errorNameList.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_d.dll");
							private static bool csbLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_d.so");
							private static bool csbLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_CSharp_d.so");

						#else 
							private static bool bLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_d.dll");
							private static bool csbLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache.dll");
							private static bool csbLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_CSharp.dll");

						#elif Linux 
							private static bool bLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache.so");
							private static bool csbLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_CSharp.so");

						#else 
							private static bool bLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache.dll");
							private static bool csbLoadVectorCacheCreator = LoadDll.Load("EV_VectorCache_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorCache::CVectorCacheCreator", new VectorCacheCreatorClassFactory());

					public VectorCacheCreator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static VectorCacheCreator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						VectorCacheCreator obj = baseObj as  VectorCacheCreator;
						if (object.Equals(obj, null))
						{
							obj = new VectorCacheCreator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CVectorCacheCreator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class VectorCacheCreatorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						VectorCacheCreator emptyInstance = new VectorCacheCreator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
