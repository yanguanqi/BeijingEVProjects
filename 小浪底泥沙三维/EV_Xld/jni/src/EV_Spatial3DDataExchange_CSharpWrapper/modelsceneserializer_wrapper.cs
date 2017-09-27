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
		namespace Spatial3D
		{
			namespace DataExchange
			{
				public class ModelSceneSerialzier : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public ModelSceneSerialzier(string scenefile) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuescenefile = new BasePtr(scenefile);
						list.Add("scenefile", valuescenefile.PtrVal);
						Create("CModelSceneSerialzier", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_setModelRootPath_void_EVString(IntPtr pNativeObject, string modelrootfolder);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public void SetModelRootPath(string modelrootfolder)
					{
						EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_setModelRootPath_void_EVString(this.NativeObject, modelrootfolder);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_parseModelSceneFile_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 解析场景文件，在模型入库时有意义
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public bool ParseModelSceneFile()
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_parseModelSceneFile_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_saveModelSceneFile_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public bool SaveModelSceneFile()
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_saveModelSceneFile_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_addNode_ev_bool_EVString_ev_real32_ev_real32_ev_real32_CVector3_ev_real32_ev_real32_ev_real32(IntPtr pNativeObject, string modelfilePath, float lat, float lon, float alt, IntPtr scale, float rotateX, float rotateY, float rotateZ);

					/// <summary>
					/// 添加一个场景节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public bool AddNode(string modelfilePath, float lat, float lon, float alt, EarthView.World.Spatial.Math.Vector3 scale, float rotateX, float rotateY, float rotateZ)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_addNode_ev_bool_EVString_ev_real32_ev_real32_ev_real32_CVector3_ev_real32_ev_real32_ev_real32(this.NativeObject, modelfilePath, lat, lon, alt, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, rotateX, rotateY, rotateZ);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_d.so");
							private static bool csbLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange.so");
							private static bool csbLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.so");

						#else 
							private static bool bLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadModelSceneSerialzier = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier", new ModelSceneSerialzierClassFactory());

					public ModelSceneSerialzier(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelSceneSerialzier FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelSceneSerialzier obj = baseObj as  ModelSceneSerialzier;
						if (object.Equals(obj, null))
						{
							obj = new ModelSceneSerialzier(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelSceneSerialzier");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelSceneSerialzierClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelSceneSerialzier emptyInstance = new ModelSceneSerialzier(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
