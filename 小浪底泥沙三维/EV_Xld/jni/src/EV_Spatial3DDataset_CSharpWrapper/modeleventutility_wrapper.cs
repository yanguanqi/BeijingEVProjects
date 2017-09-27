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
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				public class ModelEventUtility : EarthView.World.Core.AllocatedObject
				{
					public ModelEventUtility() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CModelEventUtility",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendStopRenderEvent_void_IDataset(IntPtr pDataset);

					/// <summary>
					/// 发送停止渲染事件
					/// </summary>
					/// <returns></returns>
					public static void SendStopRenderEvent(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendStopRenderEvent_void_IDataset(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendStartRenderEvent_void_IDataset(IntPtr pDataset);

					/// <summary>
					/// 发送开始渲染事件
					/// </summary>
					/// <returns></returns>
					public static void SendStartRenderEvent(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendStartRenderEvent_void_IDataset(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendRefreshAllModelEvent_void_IDataset(IntPtr pDataset);

					/// <summary>
					/// 发送更新所有模型事件
					/// </summary>
					/// <returns></returns>
					public static void SendRefreshAllModelEvent(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendRefreshAllModelEvent_void_IDataset(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateModelEvent_void_IDataset_IFeature_EntityDatasetOperType(IntPtr pDataset, IntPtr info, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType);

					/// <summary>
					/// 发送更新模型事件
					/// </summary>
					/// <returns></returns>
					public static void SendUpdateModelEvent(EarthView.World.Spatial.GeoDataset.Idataset pDataset, EarthView.World.Spatial.GeoDataset.Ifeature info, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType)
					{
						EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateModelEvent_void_IDataset_IFeature_EntityDatasetOperType(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject, object.Equals(info, null) ? IntPtr.Zero : info.NativeObject, operType);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateAltitudeEvent_void_IDataset(IntPtr pDataset);

					/// <summary>
					/// 发送更新高度模式事件
					/// </summary>
					/// <returns></returns>
					public static void SendUpdateAltitudeEvent(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateAltitudeEvent_void_IDataset(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateOctreeEvent_void_IDataset_IFeature_EntityDatasetOperType(IntPtr pDataset, IntPtr info, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType);

					/// <summary>
					/// 发送更新索引事件
					/// </summary>
					/// <returns></returns>
					public static void SendUpdateOctreeEvent(EarthView.World.Spatial.GeoDataset.Idataset pDataset, EarthView.World.Spatial.GeoDataset.Ifeature info, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType)
					{
						EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendUpdateOctreeEvent_void_IDataset_IFeature_EntityDatasetOperType(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject, object.Equals(info, null) ? IntPtr.Zero : info.NativeObject, operType);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendRefreshOctreeEvent_void_IDataset(IntPtr pDataset);

					/// <summary>
					/// 通知刷新八叉树
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public static void SendRefreshOctreeEvent(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendRefreshOctreeEvent_void_IDataset(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendCommitIDEvent_void_IDataset_EntityDatasetOperType_ev_uint32_ev_uint32(IntPtr pDataset, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType, uint cacheID, uint dbID);

					/// <summary>
					/// 通知提交的ID
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public static void SendCommitIDEvent(EarthView.World.Spatial.GeoDataset.Idataset pDataset, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType, uint cacheID, uint dbID)
					{
						EarthView_World_Spatial3D_Dataset_CModelEventUtility_sendCommitIDEvent_void_IDataset_EntityDatasetOperType_ev_uint32_ev_uint32(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject, operType, cacheID, dbID);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_d.so");
							private static bool csbLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.so");

						#else 
							private static bool bLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset.so");
							private static bool csbLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.so");

						#else 
							private static bool bLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadModelEventUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Dataset::CModelEventUtility", new ModelEventUtilityClassFactory());

					public ModelEventUtility(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelEventUtility FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelEventUtility obj = baseObj as  ModelEventUtility;
						if (object.Equals(obj, null))
						{
							obj = new ModelEventUtility(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelEventUtility");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelEventUtilityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelEventUtility emptyInstance = new ModelEventUtility(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
