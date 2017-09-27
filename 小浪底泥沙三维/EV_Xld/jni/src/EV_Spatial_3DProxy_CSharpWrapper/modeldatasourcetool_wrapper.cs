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
		namespace Spatial3DProxy
		{
			/// <summary>
			/// 错误码
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			/// <memo></memo>
			public enum MODELERRORID
			{
						modelerror_noerror,
						modelerror_initscenefile,
						modelerror_savescenefile,
						modelerror_opendatasource_src,
						modelerror_opendataset_src,
						modelerror_opendatasource_des,
						modelerror_opendataset_des,
						modelerror_createdatasource,
						modelerror_createdataset,
						modelerror_isrunning,
						modelerror_parametererror,
						modelerror_desdataseterror,
						modelerror_loaddataseterror,
						modelerrorcount
			
			}

			/// <summary>
			/// 错误码描述对象
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			/// <memo></memo>
			public class ModelDataSourceTool : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				public ModelDataSourceTool() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("ModelDataSourceTool",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				///  操作类别
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				public enum WORKTYPE
				{
								WT_Export,
								WT_Import,
								WT_Copy
				
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_ModelDataSourceTool_initEnvironment_ev_bool_WorkType(IntPtr pNativeObject, EarthView.World.Spatial3DProxy.ModelDataSourceTool.WORKTYPE worktype);

				/// <summary>
				///  初始工作环境
				/// </summary>
				/// <param name=""></param>
				/// <returns>true初始化成功,false初始化失败</returns>
				/// <memo></memo>
				public bool InitEnvironment(EarthView.World.Spatial3DProxy.ModelDataSourceTool.WORKTYPE worktype)
				{
					byte ret=EarthView_World_Spatial3DProxy_ModelDataSourceTool_initEnvironment_ev_bool_WorkType(this.NativeObject, worktype);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_ModelDataSourceTool_reset_void(IntPtr pNativeObject);

				/// <summary>
				///  重置工作状态
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				public void Reset()
				{
					EarthView_World_Spatial3DProxy_ModelDataSourceTool_reset_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_ModelDataSourceTool_isRun_ev_bool(IntPtr pNativeObject);

				/// <summary>
				///  是否正在工作
				/// </summary>
				/// <param name=""></param>
				/// <returns>true正在工作,false停止工作</returns>
				/// <memo></memo>
				public bool IsRun()
				{
					byte ret=EarthView_World_Spatial3DProxy_ModelDataSourceTool_isRun_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_ModelDataSourceTool_setRunable_void_ev_bool(IntPtr pNativeObject, byte runable);

				/// <summary>
				///  设置是否工作
				/// </summary>
				/// <param name=""runable>true工作，false停止工作</param>
				/// <returns></returns>
				/// <memo></memo>
				public void SetRunable(bool runable)
				{
					EarthView_World_Spatial3DProxy_ModelDataSourceTool_setRunable_void_ev_bool(this.NativeObject, Convert.ToByte(runable));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_ModelDataSourceTool_exportModelDataSet_ev_bool_EVString_EVString_EVString(IntPtr pNativeObject, string datasourceurl, string datasetname, string exportfolder);

				/// <summary>
				///  导出模型数据集
				/// </summary>
				/// <param name="datasourceurl">数据源路径</param>
				/// <param name="datasetname">数据集名称</param>
				/// <param name="exportfolder">导出目录</param>
				/// <returns>true成功，false失败</returns>
				/// <memo></memo>
				public bool ExportModelDataSet(string datasourceurl, string datasetname, string exportfolder)
				{
					byte ret=EarthView_World_Spatial3DProxy_ModelDataSourceTool_exportModelDataSet_ev_bool_EVString_EVString_EVString(this.NativeObject, datasourceurl, datasetname, exportfolder);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3DProxy_ModelDataSourceTool_percentage_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 百分比
				/// </summary>
				/// <returns>返回当前百分比</returns>
				/// <memo></memo>
				public int Percentage()
				{
					int ret=EarthView_World_Spatial3DProxy_ModelDataSourceTool_percentage_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_ModelDataSourceTool_setPercentage_void_ev_int32(IntPtr pNativeObject, int percentage);

				/// <summary>
				/// 设置百分比
				/// </summary>
				/// <param name="percentage">百分比</param>
				/// <returns></returns>
				/// <memo></memo>
				public void SetPercentage(int percentage)
				{
					EarthView_World_Spatial3DProxy_ModelDataSourceTool_setPercentage_void_ev_int32(this.NativeObject, percentage);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_ModelDataSourceTool_getLastError_EVString();

				/// <summary>
				///  获取错误码
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误描述</returns>
				/// <memo></memo>
				public static string GetLastError()
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_ModelDataSourceTool_getLastError_EVString();
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_ModelDataSourceTool_setLastErrorID_void_ev_int32(int errorid);

				/// <summary>
				///  设置错误码
				/// </summary>
				/// <param name="errorid">设置错误号</param>
				/// <returns></returns>
				/// <memo></memo>
				public static void SetLastErrorID(int errorid)
				{
					EarthView_World_Spatial3DProxy_ModelDataSourceTool_setLastErrorID_void_ev_int32(errorid);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_d.so");
						private static bool csbLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

					#else 
						private static bool bLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy.so");
						private static bool csbLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

					#else 
						private static bool bLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadModelDataSourceTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::ModelDataSourceTool", new ModelDataSourceToolClassFactory());

				public ModelDataSourceTool(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ModelDataSourceTool FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ModelDataSourceTool obj = baseObj as  ModelDataSourceTool;
					if (object.Equals(obj, null))
					{
						obj = new ModelDataSourceTool(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "ModelDataSourceTool");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ModelDataSourceToolClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ModelDataSourceTool emptyInstance = new ModelDataSourceTool(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
