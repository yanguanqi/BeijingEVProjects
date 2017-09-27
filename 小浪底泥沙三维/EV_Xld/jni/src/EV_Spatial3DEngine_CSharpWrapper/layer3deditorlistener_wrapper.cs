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
			namespace Atlas
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
			public class Layer3DEditorListener : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public Layer3DEditorListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLayer3DEditorListenerProxy", null);
					if (!"EarthView.World.Spatial3D.Layer3DEditorListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onStartEditing_CallBack_void_IGlobeLayer(IntPtr pLayer);

				protected onStartEditing_CallBack_void_IGlobeLayer m_onStartEditing_CallBack_void_IGlobeLayer;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_NoVirtual(IntPtr pNativeObject, IntPtr pLayer);

				/// <summary>
				/// 开始编辑响应函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void OnStartEditing_NoVirtual(EarthView.World.Spatial3D.Atlas.Iglobelayer pLayer)
				{
					EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_NoVirtual(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Function(IntPtr pLayer)
				{
					EarthView.World.Spatial3D.Atlas.Iglobelayer csobj_pLayer = new EarthView.World.Spatial3D.Atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pLayer.BindNativeObject(pLayer,"IGlobeLayer");
					csobj_pLayer.Delegate = true;
					IClassFactory csobj_pLayerClassFactory = GlobalClassFactoryMap.Get(csobj_pLayer.GetCppInstanceTypeName());
					if (csobj_pLayerClassFactory != null)
					{
						csobj_pLayer.Delegate = true;
						csobj_pLayer = csobj_pLayerClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Iglobelayer;
						csobj_pLayer.BindNativeObject(pLayer, "IGlobeLayer");
						csobj_pLayer.Delegate = true;
					}
					
					OnStartEditing(csobj_pLayer);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer(IntPtr pNativeObject, IntPtr pLayer);

				/// <summary>
				/// 开始编辑响应函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void OnStartEditing(EarthView.World.Spatial3D.Atlas.Iglobelayer pLayer)
				{
					EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onEndEditing_CallBack_void_IGlobeLayer(IntPtr pLayer);

				protected onEndEditing_CallBack_void_IGlobeLayer m_onEndEditing_CallBack_void_IGlobeLayer;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_NoVirtual(IntPtr pNativeObject, IntPtr pLayer);

				/// <summary>
				/// 结束编辑响应函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void OnEndEditing_NoVirtual(EarthView.World.Spatial3D.Atlas.Iglobelayer pLayer)
				{
					EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_NoVirtual(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject);
					
				}

				protected  void EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Function(IntPtr pLayer)
				{
					EarthView.World.Spatial3D.Atlas.Iglobelayer csobj_pLayer = new EarthView.World.Spatial3D.Atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pLayer.BindNativeObject(pLayer,"IGlobeLayer");
					csobj_pLayer.Delegate = true;
					IClassFactory csobj_pLayerClassFactory = GlobalClassFactoryMap.Get(csobj_pLayer.GetCppInstanceTypeName());
					if (csobj_pLayerClassFactory != null)
					{
						csobj_pLayer.Delegate = true;
						csobj_pLayer = csobj_pLayerClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Iglobelayer;
						csobj_pLayer.BindNativeObject(pLayer, "IGlobeLayer");
						csobj_pLayer.Delegate = true;
					}
					
					OnEndEditing(csobj_pLayer);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer(IntPtr pNativeObject, IntPtr pLayer);

				/// <summary>
				/// 结束编辑响应函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void OnEndEditing(EarthView.World.Spatial3D.Atlas.Iglobelayer pLayer)
				{
					EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onEndCommitModel_CallBack_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(IntPtr pLayer, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType, uint cacheID, uint dbID);

				protected onEndCommitModel_CallBack_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32 m_onEndCommitModel_CallBack_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr pLayer, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType, uint cacheID, uint dbID);

				/// <summary>
				/// 模型操作提交
				/// </summary>
				/// <param name="operType">模型操作类别</param>
				/// <param name="cacheID">未提交前模型的ID</param>
				/// <param name="dbID">提交后在数据库中的ID</param>
				/// <returns></returns>
				public virtual void OnEndCommitModel_NoVirtual(EarthView.World.Spatial3D.Atlas.Iglobelayer pLayer, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType, uint cacheID, uint dbID)
				{
					EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject, operType, cacheID, dbID);
					
				}

				protected  void EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Function(IntPtr pLayer, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType, uint cacheID, uint dbID)
				{
					EarthView.World.Spatial3D.Atlas.Iglobelayer csobj_pLayer = new EarthView.World.Spatial3D.Atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pLayer.BindNativeObject(pLayer,"IGlobeLayer");
					csobj_pLayer.Delegate = true;
					IClassFactory csobj_pLayerClassFactory = GlobalClassFactoryMap.Get(csobj_pLayer.GetCppInstanceTypeName());
					if (csobj_pLayerClassFactory != null)
					{
						csobj_pLayer.Delegate = true;
						csobj_pLayer = csobj_pLayerClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Iglobelayer;
						csobj_pLayer.BindNativeObject(pLayer, "IGlobeLayer");
						csobj_pLayer.Delegate = true;
					}
					
					OnEndCommitModel(csobj_pLayer, operType, cacheID, dbID);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr pLayer, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType, uint cacheID, uint dbID);

				/// <summary>
				/// 模型操作提交
				/// </summary>
				/// <param name="operType">模型操作类别</param>
				/// <param name="cacheID">未提交前模型的ID</param>
				/// <param name="dbID">提交后在数据库中的ID</param>
				/// <returns></returns>
				public virtual void OnEndCommitModel(EarthView.World.Spatial3D.Atlas.Iglobelayer pLayer, EarthView.World.Spatial3D.Dataset.ENTITYDATASETOPERTYPE operType, uint cacheID, uint dbID)
				{
					EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject, operType, cacheID, dbID);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onInsertMeshxg_CallBack_void_IGlobeLayer_ev_uint32_ev_uint32(IntPtr pLayer, uint cacheID, uint recordID);

				protected onInsertMeshxg_CallBack_void_IGlobeLayer_ev_uint32_ev_uint32 m_onInsertMeshxg_CallBack_void_IGlobeLayer_ev_uint32_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr pLayer, uint cacheID, uint recordID);

				/// <summary>
				/// meshxg插入操作
				/// </summary>
				/// <param name="cacheID">未提交前的ID</param>
				/// <param name="dbID">提交后在数据库中的ID</param>
				/// <returns></returns>
				public virtual void OnInsertMeshxg_NoVirtual(EarthView.World.Spatial3D.Atlas.Iglobelayer pLayer, uint cacheID, uint recordID)
				{
					EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject, cacheID, recordID);
					
				}

				protected  void EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Function(IntPtr pLayer, uint cacheID, uint recordID)
				{
					EarthView.World.Spatial3D.Atlas.Iglobelayer csobj_pLayer = new EarthView.World.Spatial3D.Atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pLayer.BindNativeObject(pLayer,"IGlobeLayer");
					csobj_pLayer.Delegate = true;
					IClassFactory csobj_pLayerClassFactory = GlobalClassFactoryMap.Get(csobj_pLayer.GetCppInstanceTypeName());
					if (csobj_pLayerClassFactory != null)
					{
						csobj_pLayer.Delegate = true;
						csobj_pLayer = csobj_pLayerClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Iglobelayer;
						csobj_pLayer.BindNativeObject(pLayer, "IGlobeLayer");
						csobj_pLayer.Delegate = true;
					}
					
					OnInsertMeshxg(csobj_pLayer, cacheID, recordID);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr pLayer, uint cacheID, uint recordID);

				/// <summary>
				/// meshxg插入操作
				/// </summary>
				/// <param name="cacheID">未提交前的ID</param>
				/// <param name="dbID">提交后在数据库中的ID</param>
				/// <returns></returns>
				public virtual void OnInsertMeshxg(EarthView.World.Spatial3D.Atlas.Iglobelayer pLayer, uint cacheID, uint recordID)
				{
					EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject, cacheID, recordID);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadLayer3DEditorListener = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CLayer3DEditorListener", new Layer3DEditorListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CLayer3DEditorListenerProxy", new Layer3DEditorListenerClassFactory());

				public Layer3DEditorListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer(IntPtr pObject, onStartEditing_CallBack_void_IGlobeLayer pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer(IntPtr pObject, onEndEditing_CallBack_void_IGlobeLayer pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(IntPtr pObject, onEndCommitModel_CallBack_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32(IntPtr pObject, onInsertMeshxg_CallBack_void_IGlobeLayer_ev_uint32_ev_uint32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_onStartEditing_CallBack_void_IGlobeLayer = EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer_Function;
						GC.KeepAlive(m_onStartEditing_CallBack_void_IGlobeLayer);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onStartEditing_void_IGlobeLayer(this.NativeObject, m_onStartEditing_CallBack_void_IGlobeLayer);
						m_onEndEditing_CallBack_void_IGlobeLayer = EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer_Function;
						GC.KeepAlive(m_onEndEditing_CallBack_void_IGlobeLayer);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndEditing_void_IGlobeLayer(this.NativeObject, m_onEndEditing_CallBack_void_IGlobeLayer);
						m_onEndCommitModel_CallBack_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32 = EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_onEndCommitModel_CallBack_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onEndCommitModel_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(this.NativeObject, m_onEndCommitModel_CallBack_void_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32);
						m_onInsertMeshxg_CallBack_void_IGlobeLayer_ev_uint32_ev_uint32 = EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_onInsertMeshxg_CallBack_void_IGlobeLayer_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3D_CLayer3DEditorListener_onInsertMeshxg_void_IGlobeLayer_ev_uint32_ev_uint32(this.NativeObject, m_onInsertMeshxg_CallBack_void_IGlobeLayer_ev_uint32_ev_uint32);
					}
				}
				public static Layer3DEditorListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Layer3DEditorListener obj = baseObj as  Layer3DEditorListener;
					if (object.Equals(obj, null))
					{
						obj = new Layer3DEditorListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLayer3DEditorListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class Layer3DEditorListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Layer3DEditorListener emptyInstance = new Layer3DEditorListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
