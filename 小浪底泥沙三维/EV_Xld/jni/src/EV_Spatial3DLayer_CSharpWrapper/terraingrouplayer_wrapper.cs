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
				/// <summary>
				/// CTerrainGroupLayer(高程图层组)管理以下图层:
				/// 高程图层CTerrainLayer
				/// 嵌套的CTerrainGroupLayer				
				/// </summary>
				public class TerrainGroupLayer : EarthView.World.Spatial3D.Atlas.Iterrainlayer
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public TerrainGroupLayer() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTerrainGroupLayerProxy", null);
						if (!"EarthView.World.Spatial3D.Atlas.TerrainGroupLayer".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					public TerrainGroupLayer(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						Create("CTerrainGroupLayerProxy", list);
						if (!"EarthView.World.Spatial3D.Atlas.TerrainGroupLayer".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getType_EVLayerType_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					public new EarthView.World.Spatial.Atlas.EVLAYERTYPE GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getType_EVLayerType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Atlas.EVLAYERTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getType_EVLayerType(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					public override EarthView.World.Spatial.Atlas.EVLAYERTYPE GetType()
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getType_EVLayerType(this.NativeObject);
						
						return (EarthView.World.Spatial.Atlas.EVLAYERTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrain_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int level, int row, int col);

					/// <summary>
					/// 通过行列号获取高程
					/// </summary>
					/// <param name="level">网格级数</param>
					/// <param name="row">行号</param>
					/// <param name="col">列号</param>
					/// <returns>高程流</returns>
					public new EarthView.World.Core.MemoryDataStreamPtr GetTerrain_NoVirtual(int level, int row, int col)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrain_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_NoVirtual(this.NativeObject, level, row, col);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrain_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int level, int row, int col);

					/// <summary>
					/// 通过行列号获取高程
					/// </summary>
					/// <param name="level">网格级数</param>
					/// <param name="row">行号</param>
					/// <param name="col">列号</param>
					/// <returns>高程流</returns>
					public override EarthView.World.Core.MemoryDataStreamPtr GetTerrain(int level, int row, int col)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrain_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(this.NativeObject, level, row, col);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromMemoryCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int row, int col, int level);

					public new EarthView.World.Core.MemoryDataStreamPtr GetTerrainFromMemoryCache_NoVirtual(int row, int col, int level)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromMemoryCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_NoVirtual(this.NativeObject, row, col, level);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromMemoryCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int row, int col, int level);

					public override EarthView.World.Core.MemoryDataStreamPtr GetTerrainFromMemoryCache(int row, int col, int level)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromMemoryCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(this.NativeObject, row, col, level);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromDBCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int row, int col, int level);

					public new EarthView.World.Core.MemoryDataStreamPtr GetTerrainFromDBCache_NoVirtual(int row, int col, int level)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromDBCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_NoVirtual(this.NativeObject, row, col, level);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromDBCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int row, int col, int level);

					public override EarthView.World.Core.MemoryDataStreamPtr GetTerrainFromDBCache(int row, int col, int level)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromDBCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(this.NativeObject, row, col, level);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromServer_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int row, int col, int level);

					public new EarthView.World.Core.MemoryDataStreamPtr GetTerrainFromServer_NoVirtual(int row, int col, int level)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromServer_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_NoVirtual(this.NativeObject, row, col, level);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromServer_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int row, int col, int level);

					public override EarthView.World.Core.MemoryDataStreamPtr GetTerrainFromServer(int row, int col, int level)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromServer_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(this.NativeObject, row, col, level);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, ref double altitude);

					/// <summary>
					/// 通过经纬度获取高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="targetSamplesPerDegrees">每度采样数</param>	
					/// <param name="preTileResolution">已经获取到的高程瓦片的分辨率</param>	
					/// <param name="altitude">高程</param>
					/// <param name="tileResolution">瓦片的分辨率</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功</returns>
					public new EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt_NoVirtual(double latitude, double longitude, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latitude, double longitude, ref double altitude);

					/// <summary>
					/// 通过经纬度获取高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="targetSamplesPerDegrees">每度采样数</param>	
					/// <param name="preTileResolution">已经获取到的高程瓦片的分辨率</param>	
					/// <param name="altitude">高程</param>
					/// <param name="tileResolution">瓦片的分辨率</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功</returns>
					public override EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt(double latitude, double longitude, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64(this.NativeObject, latitude, longitude, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, ref double altitude);

					public new EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt_NoVirtual(double latitude, double longitude, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, source, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64(IntPtr pNativeObject, double latitude, double longitude, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, ref double altitude);

					public override EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt(double latitude, double longitude, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64(this.NativeObject, latitude, longitude, source, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude);

					public new EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt_NoVirtual(double latitude, double longitude, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, source, maxLivel, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(IntPtr pNativeObject, double latitude, double longitude, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude);

					public override EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt(double latitude, double longitude, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(this.NativeObject, latitude, longitude, source, maxLivel, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, ref double altitude);

					public new EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, ref double altitude);

					public override EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, ref double altitude);

					public new EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, source, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, ref double altitude);

					public override EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, source, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude);

					public new EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, source, maxLivel, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude);

					public override EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, source, maxLivel, ref altitude);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, ref double altitude, ref double tileResolution);

					public new EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, ref double altitude, ref double tileResolution)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, preTileResolution, ref altitude, ref tileResolution);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, ref double altitude, ref double tileResolution);

					public override EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, ref double altitude, ref double tileResolution)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, preTileResolution, ref altitude, ref tileResolution);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude, ref double tileResolution);

					public new EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude, ref double tileResolution)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, preTileResolution, source, maxLivel, ref altitude, ref tileResolution);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64(IntPtr pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude, ref double tileResolution);

					public override EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS GetHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, EarthView.World.Spatial3D.Atlas.Iterrainlayer.TERRAINDATASOURCE source, int maxLivel, ref double altitude, ref double tileResolution)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64(this.NativeObject, latitude, longitude, targetSamplesPerDegrees, preTileResolution, source, maxLivel, ref altitude, ref tileResolution);
						
						return (EarthView.World.Spatial3D.Atlas.ALTITUDESTATUS)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, ref double altitude);

					/// <summary>
					/// 获取当前缓存中最高级别的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高程</param>
					/// <returns>是否成功</returns>
					public new bool GetBestHeightAt_NoVirtual(double latitude, double longitude, ref double altitude)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, ref altitude);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latitude, double longitude, ref double altitude);

					/// <summary>
					/// 获取当前缓存中最高级别的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高程</param>
					/// <returns>是否成功</returns>
					public override bool GetBestHeightAt(double latitude, double longitude, ref double altitude)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64(this.NativeObject, latitude, longitude, ref altitude);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude, double preTileResolution, ref double altitude, ref double tileResolution);

					/// <summary>
					/// 获取当前缓存中最高级别的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="preTileResolution">已经获取到的高程瓦片的分辨率</param>	
					/// <param name="altitude">高程</param>
					/// <param name="tileResolution">瓦片的分辨率</param>
					/// <returns>是否成功</returns>
					public new bool GetBestHeightAt_NoVirtual(double latitude, double longitude, double preTileResolution, ref double altitude, ref double tileResolution)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latitude, longitude, preTileResolution, ref altitude, ref tileResolution);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latitude, double longitude, double preTileResolution, ref double altitude, ref double tileResolution);

					/// <summary>
					/// 获取当前缓存中最高级别的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="preTileResolution">已经获取到的高程瓦片的分辨率</param>	
					/// <param name="altitude">高程</param>
					/// <param name="tileResolution">瓦片的分辨率</param>
					/// <returns>是否成功</returns>
					public override bool GetBestHeightAt(double latitude, double longitude, double preTileResolution, ref double altitude, ref double tileResolution)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, latitude, longitude, preTileResolution, ref altitude, ref tileResolution);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr pSceneMgr);

					/// <summary>
					/// Globe加载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new void _notifyLayerAdd_NoVirtual(EarthView.World.Graphic.SceneManager pSceneMgr)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(this.NativeObject, object.Equals(pSceneMgr, null) ? IntPtr.Zero : pSceneMgr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerAdd_void_CSceneManager(IntPtr pNativeObject, IntPtr pSceneMgr);

					/// <summary>
					/// Globe加载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override void _notifyLayerAdd(EarthView.World.Graphic.SceneManager pSceneMgr)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerAdd_void_CSceneManager(this.NativeObject, object.Equals(pSceneMgr, null) ? IntPtr.Zero : pSceneMgr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerRemoved_void_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr pSceneMgr);

					/// <summary>
					/// Globe卸载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new void _notifyLayerRemoved_NoVirtual(EarthView.World.Graphic.SceneManager pSceneMgr)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerRemoved_void_CSceneManager_NoVirtual(this.NativeObject, object.Equals(pSceneMgr, null) ? IntPtr.Zero : pSceneMgr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerRemoved_void_CSceneManager(IntPtr pNativeObject, IntPtr pSceneMgr);

					/// <summary>
					/// Globe卸载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override void _notifyLayerRemoved(EarthView.World.Graphic.SceneManager pSceneMgr)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerRemoved_void_CSceneManager(this.NativeObject, object.Equals(pSceneMgr, null) ? IntPtr.Zero : pSceneMgr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_NoVirtual(IntPtr pNativeObject, string strDataSourceName, string strDatasetName, IntPtr pEvent);

					/// <summary>
					/// 数据集变更通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					public new void _notifyDataChanged_NoVirtual(string strDataSourceName, string strDatasetName, EarthView.World.Core.Event pEvent)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_NoVirtual(this.NativeObject, strDataSourceName, strDatasetName, object.Equals(pEvent, null) ? IntPtr.Zero : pEvent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(IntPtr pNativeObject, string strDataSourceName, string strDatasetName, IntPtr pEvent);

					/// <summary>
					/// 数据集变更通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					public override void _notifyDataChanged(string strDataSourceName, string strDatasetName, EarthView.World.Core.Event pEvent)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(this.NativeObject, strDataSourceName, strDatasetName, object.Equals(pEvent, null) ? IntPtr.Zero : pEvent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_addLayer_ev_bool_ITerrainLayer(IntPtr pNativeObject, IntPtr ref_layer);

					///层操作方法
					//// <summary>
					//// 添加一个EarthView::World::Spatial3D::Atlas::ITerrainLayer图层
					//// </summary>
					//// <param name="layer">EarthView::World::Spatial3D::Atlas::ITerrainLayer图层</param>
					//// <returns></returns>
					public bool AddLayer(EarthView.World.Spatial3D.Atlas.Iterrainlayer ref_layer)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_addLayer_ev_bool_ITerrainLayer(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_insertLayer_ev_bool_ev_uint32_ITerrainLayer(IntPtr pNativeObject, uint pos, IntPtr ref_layer);

					/// <summary>
					/// 插入一个EarthView::World::Spatial3D::Atlas::ITerrainLayer图层
					/// </summary>
					/// <param name="layer">EarthView::World::Spatial3D::Atlas::ITerrainLayer图层</param>
					/// <returns></returns>
					public bool InsertLayer(uint pos, EarthView.World.Spatial3D.Atlas.Iterrainlayer ref_layer)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_insertLayer_ev_bool_ev_uint32_ITerrainLayer(this.NativeObject, pos, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 删除图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>是否成功</returns>
					public bool RemoveLayer(uint index)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ev_uint32(this.NativeObject, index);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte removeLayer_CallBack_ev_bool_ITerrainLayer(IntPtr layer);

					protected removeLayer_CallBack_ev_bool_ITerrainLayer m_removeLayer_CallBack_ev_bool_ITerrainLayer;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ITerrainLayer_NoVirtual(IntPtr pNativeObject, IntPtr layer);

					/// <summary>
					/// 删除图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>是否成功</returns>
					public virtual bool RemoveLayer_NoVirtual(EarthView.World.Spatial3D.Atlas.Iterrainlayer layer)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ITerrainLayer_NoVirtual(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ITerrainLayer_Function(IntPtr layer)
					{
						EarthView.World.Spatial3D.Atlas.Iterrainlayer csobj_layer = new EarthView.World.Spatial3D.Atlas.Iterrainlayer(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_layer.BindNativeObject(layer,"ITerrainLayer");
						csobj_layer.Delegate = true;
						IClassFactory csobj_layerClassFactory = GlobalClassFactoryMap.Get(csobj_layer.GetCppInstanceTypeName());
						if (csobj_layerClassFactory != null)
						{
							csobj_layer.Delegate = true;
							csobj_layer = csobj_layerClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Iterrainlayer;
							csobj_layer.BindNativeObject(layer, "ITerrainLayer");
							csobj_layer.Delegate = true;
						}
						
						bool csret=RemoveLayer(csobj_layer);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ITerrainLayer(IntPtr pNativeObject, IntPtr layer);

					/// <summary>
					/// 删除图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>是否成功</returns>
					public virtual bool RemoveLayer(EarthView.World.Spatial3D.Atlas.Iterrainlayer layer)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ITerrainLayer(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getLayerCount_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取EarthView::World::Spatial3D::Atlas::ITerrainLayer的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Atlas::ITerrainLayer的数量</returns>
					public uint GetLayerCount()
					{
						uint ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getLayerCount_ev_uint32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getLayerIndex_ev_int32_ITerrainLayer(IntPtr pNativeObject, IntPtr layer);

					/// <summary>
					/// 获取EarthView::World::Spatial3D::Atlas::ITerrainLayer的索引
					/// </summary>
					/// <param name="layer">EarthView::World::Spatial3D::Atlas::ITerrainLayer图层</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::ITerrainLayer的索引</returns>
					public int GetLayerIndex(EarthView.World.Spatial3D.Atlas.Iterrainlayer layer)
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getLayerIndex_ev_int32_ITerrainLayer(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getLayer_ITerrainLayer_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取高程图层或者图层组
					/// 调用返回对象的getType方法，得到与EarthView::World::Spatial::Atlas::EVLayerType枚举值对应的整形值，然后强转成具体的图层类
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Atlas.Iterrainlayer GetLayer(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getLayer_ITerrainLayer_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Atlas.Iterrainlayer csObj = new EarthView.World.Spatial3D.Atlas.Iterrainlayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ITerrainLayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Iterrainlayer;
							csObj.BindNativeObject(__ptr, "ITerrainLayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_moveLayer_ev_bool_ev_uint32_ev_uint32(IntPtr pNativeObject, uint index, uint pos);

					/// <summary>
					/// 移动图层顺序
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="pos">移动后的顺序</param>
					/// <returns>是否成功</returns>
					public bool MoveLayer(uint index, uint pos)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_moveLayer_ev_bool_ev_uint32_ev_uint32(this.NativeObject, index, pos);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toXmlElement_CXmlElement_NoVirtual(IntPtr pNativeObject);

					public new EarthView.World.Core.XmlElement ToXmlElement_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toXmlElement_CXmlElement_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toXmlElement_CXmlElement(IntPtr pNativeObject);

					public override EarthView.World.Core.XmlElement ToXmlElement()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toXmlElement_CXmlElement(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setVisible_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte visible);

					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					public new void SetVisible_NoVirtual(bool visible)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setVisible_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(visible));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setVisible_void_ev_bool(IntPtr pNativeObject, byte visible);

					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					public override void SetVisible(bool visible)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setVisible_void_ev_bool(this.NativeObject, Convert.ToByte(visible));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isVisible_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 检测图层是否可视
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可视则返回true,反之则否</returns>
					public new bool IsVisible_NoVirtual()
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isVisible_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isVisible_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 检测图层是否可视
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可视则返回true,反之则否</returns>
					public override bool IsVisible()
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isVisible_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_fromXmlElement_void_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					public new void FromXmlElement_NoVirtual(EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_fromXmlElement_void_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_fromXmlElement_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					public override void FromXmlElement(EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_fromXmlElement_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_d.so");
							private static bool csbLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.so");

						#else 
							private static bool bLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#elif Linux 
							private static bool bLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer.so");
							private static bool csbLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_CSharp.so");

						#else 
							private static bool bLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadTerrainGroupLayer = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayer", new TerrainGroupLayerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayerProxy", new TerrainGroupLayerClassFactory());

					public TerrainGroupLayer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ITerrainLayer(IntPtr pObject, removeLayer_CallBack_ev_bool_ITerrainLayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64(IntPtr pObject, getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64(IntPtr pObject, getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(IntPtr pObject, getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(IntPtr pObject, getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(IntPtr pObject, getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64(IntPtr pObject, getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64(IntPtr pObject, getBestHeightAt_CallBack_ev_bool_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getBestHeightAt_CallBack_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrain_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(IntPtr pObject, getTerrain_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromMemoryCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(IntPtr pObject, getTerrainFromMemoryCache_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromDBCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(IntPtr pObject, getTerrainFromDBCache_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromServer_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(IntPtr pObject, getTerrainFromServer_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMaxLevel_ev_int32(IntPtr pObject, getMaxLevel_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMinLevel_ev_int32(IntPtr pObject, getMinLevel_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setMaxLevel_void_ev_int32(IntPtr pObject, setMaxLevel_CallBack_void_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setMinLevel_void_ev_int32(IntPtr pObject, setMinLevel_CallBack_void_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getSrs_LAYERSRS(IntPtr pObject, getSrs_CallBack_LAYERSRS pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getSceneName_EVString(IntPtr pObject, getSceneName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMinX_ev_real64(IntPtr pObject, getMinX_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMaxX_ev_real64(IntPtr pObject, getMaxX_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMinY_ev_real64(IntPtr pObject, getMinY_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMaxY_ev_real64(IntPtr pObject, getMaxY_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(IntPtr pObject, getHeightAt_CallBack_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerAdd_void_CSceneManager(IntPtr pObject, _notifyLayerAdd_CallBack_void_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerRemoved_void_CSceneManager(IntPtr pObject, _notifyLayerRemoved_CallBack_void_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(IntPtr pObject, _notifyRefreshed_CallBack_void_CCamera_LayerRefreshFactor pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyRefreshed_void_CCamera(IntPtr pObject, _notifyRefreshed_CallBack_void_CCamera pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(IntPtr pObject, _notifyDataChanged_CallBack_void_EVString_EVString_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getSceneManager_CSceneManager(IntPtr pObject, getSceneManager_CallBack_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getType_EVLayerType(IntPtr pObject, getType_CallBack_EVLayerType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDataset_IDataset(IntPtr pObject, getDataset_CallBack_IDataset pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDatasetName_EVString(IntPtr pObject, getDatasetName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDataSource_IDataSource(IntPtr pObject, getDataSource_CallBack_IDataSource pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_select_void_IQueryFilter_EVSelectionResultType(IntPtr pObject, select_CallBack_void_IQueryFilter_EVSelectionResultType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_clearSelection_void(IntPtr pObject, clearSelection_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setLayerSelection_void_ILayerSelection(IntPtr pObject, setLayerSelection_CallBack_void_ILayerSelection pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getLayerSelection_ILayerSelection(IntPtr pObject, getLayerSelection_CallBack_ILayerSelection pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setDescription_void_EVString(IntPtr pObject, setDescription_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_canEdit_ev_bool(IntPtr pObject, canEdit_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setCanEdit_void_ev_bool(IntPtr pObject, setCanEdit_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isEditing_ev_bool(IntPtr pObject, isEditing_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setEditing_void_ev_bool(IntPtr pObject, setEditing_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isVisible_ev_bool(IntPtr pObject, isVisible_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isSelectable_ev_bool(IntPtr pObject, isSelectable_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setSelectable_void_ev_bool(IntPtr pObject, setSelectable_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_ignoreScale_ev_bool(IntPtr pObject, ignoreScale_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setIgnoreScale_void_ev_bool(IntPtr pObject, setIgnoreScale_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDisplayMaxScale_ev_real64(IntPtr pObject, getDisplayMaxScale_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setDisplayMaxScale_void_ev_real64(IntPtr pObject, setDisplayMaxScale_CallBack_void_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDisplayMinScale_ev_real64(IntPtr pObject, getDisplayMinScale_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setDisplayMinScale_void_ev_real64(IntPtr pObject, setDisplayMinScale_CallBack_void_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getSpatialReference_ISpatialReference(IntPtr pObject, getSpatialReference_CallBack_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setSpatialReference_void_ISpatialReference(IntPtr pObject, setSpatialReference_CallBack_void_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setTransparentValue_void_ev_uint8(IntPtr pObject, setTransparentValue_CallBack_void_ev_uint8 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTransparentValue_ev_uint8(IntPtr pObject, getTransparentValue_CallBack_ev_uint8 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getExtent_IEnvelope(IntPtr pObject, getExtent_CallBack_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(IntPtr pObject, draw_CallBack_ev_bool_ISpatialDisplay_EVVectorLayerRendererType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_clone_ILayer(IntPtr pObject, clone_CallBack_ILayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toStream_void_CDataStream(IntPtr pObject, toStream_CallBack_void_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_fromXmlElement_void_CXmlElement(IntPtr pObject, fromXmlElement_CallBack_void_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toXmlElement_CXmlElement(IntPtr pObject, toXmlElement_CallBack_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_fromStream_void_CDataStream(IntPtr pObject, fromStream_CallBack_void_CDataStream pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_removeLayer_CallBack_ev_bool_ITerrainLayer = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ITerrainLayer_Function;
							GC.KeepAlive(m_removeLayer_CallBack_ev_bool_ITerrainLayer);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_removeLayer_ev_bool_ITerrainLayer(this.NativeObject, m_removeLayer_CallBack_ev_bool_ITerrainLayer);
							m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64);
							m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64(this.NativeObject, m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_real64);
							m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(this.NativeObject, m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64);
							m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64);
							m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(this.NativeObject, m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64);
							m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(this.NativeObject, m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64);
							m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64(this.NativeObject, m_getHeightAt_CallBack_AltitudeStatus_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64);
							m_getBestHeightAt_CallBack_ev_bool_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getBestHeightAt_CallBack_ev_bool_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getBestHeightAt_CallBack_ev_bool_ev_real64_ev_real64_ev_real64);
							m_getBestHeightAt_CallBack_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getBestHeightAt_CallBack_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getBestHeightAt_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getBestHeightAt_CallBack_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							m_getTerrain_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getTerrain_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_getTerrain_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrain_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(this.NativeObject, m_getTerrain_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32);
							m_getTerrainFromMemoryCache_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getTerrainFromMemoryCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_getTerrainFromMemoryCache_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromMemoryCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(this.NativeObject, m_getTerrainFromMemoryCache_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32);
							m_getTerrainFromDBCache_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getTerrainFromDBCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_getTerrainFromDBCache_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromDBCache_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(this.NativeObject, m_getTerrainFromDBCache_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32);
							m_getTerrainFromServer_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getTerrainFromServer_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_getTerrainFromServer_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTerrainFromServer_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32(this.NativeObject, m_getTerrainFromServer_CallBack_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32);
							m_getMaxLevel_CallBack_ev_int32 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getMaxLevel_ev_int32_Function;
							GC.KeepAlive(m_getMaxLevel_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMaxLevel_ev_int32(this.NativeObject, m_getMaxLevel_CallBack_ev_int32);
							m_getMinLevel_CallBack_ev_int32 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getMinLevel_ev_int32_Function;
							GC.KeepAlive(m_getMinLevel_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMinLevel_ev_int32(this.NativeObject, m_getMinLevel_CallBack_ev_int32);
							m_setMaxLevel_CallBack_void_ev_int32 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_setMaxLevel_void_ev_int32_Function;
							GC.KeepAlive(m_setMaxLevel_CallBack_void_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setMaxLevel_void_ev_int32(this.NativeObject, m_setMaxLevel_CallBack_void_ev_int32);
							m_setMinLevel_CallBack_void_ev_int32 = EarthView_World_Spatial3D_Atlas_ITerrainLayer_setMinLevel_void_ev_int32_Function;
							GC.KeepAlive(m_setMinLevel_CallBack_void_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setMinLevel_void_ev_int32(this.NativeObject, m_setMinLevel_CallBack_void_ev_int32);
							m_getSrs_CallBack_LAYERSRS = EarthView_World_Spatial3D_Atlas_ITerrainLayer_getSrs_LAYERSRS_Function;
							GC.KeepAlive(m_getSrs_CallBack_LAYERSRS);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getSrs_LAYERSRS(this.NativeObject, m_getSrs_CallBack_LAYERSRS);
							m_getSceneName_CallBack_EVString = EarthView_World_Spatial3D_Atlas_IGlobeLayer_getSceneName_EVString_Function;
							GC.KeepAlive(m_getSceneName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getSceneName_EVString(this.NativeObject, m_getSceneName_CallBack_EVString);
							m_getMinX_CallBack_ev_real64 = EarthView_World_Spatial3D_Atlas_IGlobeLayer_getMinX_ev_real64_Function;
							GC.KeepAlive(m_getMinX_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMinX_ev_real64(this.NativeObject, m_getMinX_CallBack_ev_real64);
							m_getMaxX_CallBack_ev_real64 = EarthView_World_Spatial3D_Atlas_IGlobeLayer_getMaxX_ev_real64_Function;
							GC.KeepAlive(m_getMaxX_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMaxX_ev_real64(this.NativeObject, m_getMaxX_CallBack_ev_real64);
							m_getMinY_CallBack_ev_real64 = EarthView_World_Spatial3D_Atlas_IGlobeLayer_getMinY_ev_real64_Function;
							GC.KeepAlive(m_getMinY_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMinY_ev_real64(this.NativeObject, m_getMinY_CallBack_ev_real64);
							m_getMaxY_CallBack_ev_real64 = EarthView_World_Spatial3D_Atlas_IGlobeLayer_getMaxY_ev_real64_Function;
							GC.KeepAlive(m_getMaxY_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getMaxY_ev_real64(this.NativeObject, m_getMaxY_CallBack_ev_real64);
							m_getHeightAt_CallBack_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32 = EarthView_World_Spatial3D_Atlas_IGlobeLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Function;
							GC.KeepAlive(m_getHeightAt_CallBack_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(this.NativeObject, m_getHeightAt_CallBack_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32);
							m__notifyLayerAdd_CallBack_void_CSceneManager = EarthView_World_Spatial3D_Atlas_IGlobeLayer__notifyLayerAdd_void_CSceneManager_Function;
							GC.KeepAlive(m__notifyLayerAdd_CallBack_void_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerAdd_void_CSceneManager(this.NativeObject, m__notifyLayerAdd_CallBack_void_CSceneManager);
							m__notifyLayerRemoved_CallBack_void_CSceneManager = EarthView_World_Spatial3D_Atlas_IGlobeLayer__notifyLayerRemoved_void_CSceneManager_Function;
							GC.KeepAlive(m__notifyLayerRemoved_CallBack_void_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyLayerRemoved_void_CSceneManager(this.NativeObject, m__notifyLayerRemoved_CallBack_void_CSceneManager);
							m__notifyRefreshed_CallBack_void_CCamera_LayerRefreshFactor = EarthView_World_Spatial3D_Atlas_IGlobeLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Function;
							GC.KeepAlive(m__notifyRefreshed_CallBack_void_CCamera_LayerRefreshFactor);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(this.NativeObject, m__notifyRefreshed_CallBack_void_CCamera_LayerRefreshFactor);
							m__notifyRefreshed_CallBack_void_CCamera = EarthView_World_Spatial3D_Atlas_IGlobeLayer__notifyRefreshed_void_CCamera_Function;
							GC.KeepAlive(m__notifyRefreshed_CallBack_void_CCamera);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyRefreshed_void_CCamera(this.NativeObject, m__notifyRefreshed_CallBack_void_CCamera);
							m__notifyDataChanged_CallBack_void_EVString_EVString_CEvent = EarthView_World_Spatial3D_Atlas_IGlobeLayer__notifyDataChanged_void_EVString_EVString_CEvent_Function;
							GC.KeepAlive(m__notifyDataChanged_CallBack_void_EVString_EVString_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(this.NativeObject, m__notifyDataChanged_CallBack_void_EVString_EVString_CEvent);
							m_getSceneManager_CallBack_CSceneManager = EarthView_World_Spatial3D_Atlas_IGlobeLayer_getSceneManager_CSceneManager_Function;
							GC.KeepAlive(m_getSceneManager_CallBack_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getSceneManager_CSceneManager(this.NativeObject, m_getSceneManager_CallBack_CSceneManager);
							m_getType_CallBack_EVLayerType = EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Function;
							GC.KeepAlive(m_getType_CallBack_EVLayerType);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getType_EVLayerType(this.NativeObject, m_getType_CallBack_EVLayerType);
							m_getDataset_CallBack_IDataset = EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Function;
							GC.KeepAlive(m_getDataset_CallBack_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDataset_IDataset(this.NativeObject, m_getDataset_CallBack_IDataset);
							m_getDatasetName_CallBack_EVString = EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Function;
							GC.KeepAlive(m_getDatasetName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDatasetName_EVString(this.NativeObject, m_getDatasetName_CallBack_EVString);
							m_getDataSource_CallBack_IDataSource = EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Function;
							GC.KeepAlive(m_getDataSource_CallBack_IDataSource);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDataSource_IDataSource(this.NativeObject, m_getDataSource_CallBack_IDataSource);
							m_select_CallBack_void_IQueryFilter_EVSelectionResultType = EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Function;
							GC.KeepAlive(m_select_CallBack_void_IQueryFilter_EVSelectionResultType);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_select_void_IQueryFilter_EVSelectionResultType(this.NativeObject, m_select_CallBack_void_IQueryFilter_EVSelectionResultType);
							m_clearSelection_CallBack_void = EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Function;
							GC.KeepAlive(m_clearSelection_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_clearSelection_void(this.NativeObject, m_clearSelection_CallBack_void);
							m_setLayerSelection_CallBack_void_ILayerSelection = EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Function;
							GC.KeepAlive(m_setLayerSelection_CallBack_void_ILayerSelection);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setLayerSelection_void_ILayerSelection(this.NativeObject, m_setLayerSelection_CallBack_void_ILayerSelection);
							m_getLayerSelection_CallBack_ILayerSelection = EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Function;
							GC.KeepAlive(m_getLayerSelection_CallBack_ILayerSelection);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getLayerSelection_ILayerSelection(this.NativeObject, m_getLayerSelection_CallBack_ILayerSelection);
							m_getName_CallBack_EVString = EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_setName_CallBack_void_EVString = EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Function;
							GC.KeepAlive(m_setName_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
							m_getDescription_CallBack_EVString = EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Function;
							GC.KeepAlive(m_getDescription_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
							m_setDescription_CallBack_void_EVString = EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Function;
							GC.KeepAlive(m_setDescription_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setDescription_void_EVString(this.NativeObject, m_setDescription_CallBack_void_EVString);
							m_canEdit_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Function;
							GC.KeepAlive(m_canEdit_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_canEdit_ev_bool(this.NativeObject, m_canEdit_CallBack_ev_bool);
							m_setCanEdit_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Function;
							GC.KeepAlive(m_setCanEdit_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setCanEdit_void_ev_bool(this.NativeObject, m_setCanEdit_CallBack_void_ev_bool);
							m_isEditing_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Function;
							GC.KeepAlive(m_isEditing_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isEditing_ev_bool(this.NativeObject, m_isEditing_CallBack_ev_bool);
							m_setEditing_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Function;
							GC.KeepAlive(m_setEditing_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setEditing_void_ev_bool(this.NativeObject, m_setEditing_CallBack_void_ev_bool);
							m_isVisible_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Function;
							GC.KeepAlive(m_isVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isVisible_ev_bool(this.NativeObject, m_isVisible_CallBack_ev_bool);
							m_setVisible_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
							m_isValid_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Function;
							GC.KeepAlive(m_isValid_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
							m_isSelectable_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Function;
							GC.KeepAlive(m_isSelectable_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_isSelectable_ev_bool(this.NativeObject, m_isSelectable_CallBack_ev_bool);
							m_setSelectable_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Function;
							GC.KeepAlive(m_setSelectable_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setSelectable_void_ev_bool(this.NativeObject, m_setSelectable_CallBack_void_ev_bool);
							m_ignoreScale_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Function;
							GC.KeepAlive(m_ignoreScale_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_ignoreScale_ev_bool(this.NativeObject, m_ignoreScale_CallBack_ev_bool);
							m_setIgnoreScale_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Function;
							GC.KeepAlive(m_setIgnoreScale_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setIgnoreScale_void_ev_bool(this.NativeObject, m_setIgnoreScale_CallBack_void_ev_bool);
							m_getDisplayMaxScale_CallBack_ev_real64 = EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Function;
							GC.KeepAlive(m_getDisplayMaxScale_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDisplayMaxScale_ev_real64(this.NativeObject, m_getDisplayMaxScale_CallBack_ev_real64);
							m_setDisplayMaxScale_CallBack_void_ev_real64 = EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Function;
							GC.KeepAlive(m_setDisplayMaxScale_CallBack_void_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setDisplayMaxScale_void_ev_real64(this.NativeObject, m_setDisplayMaxScale_CallBack_void_ev_real64);
							m_getDisplayMinScale_CallBack_ev_real64 = EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Function;
							GC.KeepAlive(m_getDisplayMinScale_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getDisplayMinScale_ev_real64(this.NativeObject, m_getDisplayMinScale_CallBack_ev_real64);
							m_setDisplayMinScale_CallBack_void_ev_real64 = EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Function;
							GC.KeepAlive(m_setDisplayMinScale_CallBack_void_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setDisplayMinScale_void_ev_real64(this.NativeObject, m_setDisplayMinScale_CallBack_void_ev_real64);
							m_getSpatialReference_CallBack_ISpatialReference = EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Function;
							GC.KeepAlive(m_getSpatialReference_CallBack_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getSpatialReference_ISpatialReference(this.NativeObject, m_getSpatialReference_CallBack_ISpatialReference);
							m_setSpatialReference_CallBack_void_ISpatialReference = EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Function;
							GC.KeepAlive(m_setSpatialReference_CallBack_void_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setSpatialReference_void_ISpatialReference(this.NativeObject, m_setSpatialReference_CallBack_void_ISpatialReference);
							m_setTransparentValue_CallBack_void_ev_uint8 = EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Function;
							GC.KeepAlive(m_setTransparentValue_CallBack_void_ev_uint8);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_setTransparentValue_void_ev_uint8(this.NativeObject, m_setTransparentValue_CallBack_void_ev_uint8);
							m_getTransparentValue_CallBack_ev_uint8 = EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Function;
							GC.KeepAlive(m_getTransparentValue_CallBack_ev_uint8);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getTransparentValue_ev_uint8(this.NativeObject, m_getTransparentValue_CallBack_ev_uint8);
							m_getExtent_CallBack_IEnvelope = EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Function;
							GC.KeepAlive(m_getExtent_CallBack_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_getExtent_IEnvelope(this.NativeObject, m_getExtent_CallBack_IEnvelope);
							m_draw_CallBack_ev_bool_ISpatialDisplay_EVVectorLayerRendererType = EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Function;
							GC.KeepAlive(m_draw_CallBack_ev_bool_ISpatialDisplay_EVVectorLayerRendererType);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(this.NativeObject, m_draw_CallBack_ev_bool_ISpatialDisplay_EVVectorLayerRendererType);
							m_clone_CallBack_ILayer = EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Function;
							GC.KeepAlive(m_clone_CallBack_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_clone_ILayer(this.NativeObject, m_clone_CallBack_ILayer);
							m_toStream_CallBack_void_CDataStream = EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Function;
							GC.KeepAlive(m_toStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toStream_void_CDataStream(this.NativeObject, m_toStream_CallBack_void_CDataStream);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
							m_fromXmlElement_CallBack_void_CXmlElement = EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Function;
							GC.KeepAlive(m_fromXmlElement_CallBack_void_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_fromXmlElement_void_CXmlElement(this.NativeObject, m_fromXmlElement_CallBack_void_CXmlElement);
							m_toXmlElement_CallBack_CXmlElement = EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Function;
							GC.KeepAlive(m_toXmlElement_CallBack_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_toXmlElement_CXmlElement(this.NativeObject, m_toXmlElement_CallBack_CXmlElement);
							m_fromStream_CallBack_void_CDataStream = EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Function;
							GC.KeepAlive(m_fromStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayer_fromStream_void_CDataStream(this.NativeObject, m_fromStream_CallBack_void_CDataStream);
						}
					}
					public override int GetMaxLevel()
					{
						return base.GetMaxLevel_NoVirtual();
					}
					public override int GetMinLevel()
					{
						return base.GetMinLevel_NoVirtual();
					}
					public override void SetMaxLevel(int maxLevel)
					{
						base.SetMaxLevel_NoVirtual(maxLevel);
					}
					public override void SetMinLevel(int minLevel)
					{
						base.SetMinLevel_NoVirtual(minLevel);
					}
					public override EarthView.World.Spatial3D.Atlas.LAYERSRS GetSrs()
					{
						return base.GetSrs_NoVirtual();
					}
					public override string GetSceneName()
					{
						return base.GetSceneName_NoVirtual();
					}
					public override double GetMinX()
					{
						return base.GetMinX_NoVirtual();
					}
					public override double GetMaxX()
					{
						return base.GetMaxX_NoVirtual();
					}
					public override double GetMinY()
					{
						return base.GetMinY_NoVirtual();
					}
					public override double GetMaxY()
					{
						return base.GetMaxY_NoVirtual();
					}
					public override bool GetHeightAt(float lat, float lon, float targetSamplesPerDegrees, ref float height)
					{
						return base.GetHeightAt_NoVirtual(lat,lon,targetSamplesPerDegrees,ref height);
					}
					public override void _notifyRefreshed(EarthView.World.Graphic.Camera camera, EarthView.World.Spatial3D.Atlas.LAYERREFRESHFACTOR updateType)
					{
						base._notifyRefreshed_NoVirtual(camera,updateType);
					}
					public override void _notifyRefreshed(EarthView.World.Graphic.Camera camera)
					{
						base._notifyRefreshed_NoVirtual(camera);
					}
					public override EarthView.World.Graphic.SceneManager GetSceneManager()
					{
						return base.GetSceneManager_NoVirtual();
					}
					public override EarthView.World.Spatial.GeoDataset.Idataset GetDataset()
					{
						return base.GetDataset_NoVirtual();
					}
					public override string GetDatasetName()
					{
						return base.GetDatasetName_NoVirtual();
					}
					public override EarthView.World.Spatial.GeoDataset.Idatasource GetDataSource()
					{
						return base.GetDataSource_NoVirtual();
					}
					public override void Select(EarthView.World.Spatial.GeoDataset.Iqueryfilter filter, EarthView.World.Spatial.Atlas.EVSELECTIONRESULTTYPE type)
					{
						base.Select_NoVirtual(filter,type);
					}
					public override void ClearSelection()
					{
						base.ClearSelection_NoVirtual();
					}
					public override void SetLayerSelection(EarthView.World.Spatial.Atlas.Ilayerselection selection)
					{
						base.SetLayerSelection_NoVirtual(selection);
					}
					public override EarthView.World.Spatial.Atlas.Ilayerselection GetLayerSelection()
					{
						return base.GetLayerSelection_NoVirtual();
					}
					public override string GetName()
					{
						return base.GetName_NoVirtual();
					}
					public override void SetName(string name)
					{
						base.SetName_NoVirtual(name);
					}
					public override string GetDescription()
					{
						return base.GetDescription_NoVirtual();
					}
					public override void SetDescription(string value)
					{
						base.SetDescription_NoVirtual(value);
					}
					public override bool CanEdit()
					{
						return base.CanEdit_NoVirtual();
					}
					public override void SetCanEdit(bool can)
					{
						base.SetCanEdit_NoVirtual(can);
					}
					public override bool IsEditing()
					{
						return base.IsEditing_NoVirtual();
					}
					public override void SetEditing(bool editing)
					{
						base.SetEditing_NoVirtual(editing);
					}
					public override bool IsValid()
					{
						return base.IsValid_NoVirtual();
					}
					public override bool IsSelectable()
					{
						return base.IsSelectable_NoVirtual();
					}
					public override void SetSelectable(bool selectable)
					{
						base.SetSelectable_NoVirtual(selectable);
					}
					public override bool IgnoreScale()
					{
						return base.IgnoreScale_NoVirtual();
					}
					public override void SetIgnoreScale(bool bIgnore)
					{
						base.SetIgnoreScale_NoVirtual(bIgnore);
					}
					public override double GetDisplayMaxScale()
					{
						return base.GetDisplayMaxScale_NoVirtual();
					}
					public override void SetDisplayMaxScale(double scale)
					{
						base.SetDisplayMaxScale_NoVirtual(scale);
					}
					public override double GetDisplayMinScale()
					{
						return base.GetDisplayMinScale_NoVirtual();
					}
					public override void SetDisplayMinScale(double scale)
					{
						base.SetDisplayMinScale_NoVirtual(scale);
					}
					public override EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference()
					{
						return base.GetSpatialReference_NoVirtual();
					}
					public override void SetSpatialReference(EarthView.World.Spatial.Geometry.Ispatialreference ref_sr)
					{
						base.SetSpatialReference_NoVirtual(ref_sr);
					}
					public override void SetTransparentValue(byte transparent)
					{
						base.SetTransparentValue_NoVirtual(transparent);
					}
					public override byte GetTransparentValue()
					{
						return base.GetTransparentValue_NoVirtual();
					}
					public override EarthView.World.Spatial.Geometry.Ienvelope GetExtent()
					{
						return base.GetExtent_NoVirtual();
					}
					public override bool Draw(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Atlas.EVVECTORLAYERRENDERERTYPE type)
					{
						return base.Draw_NoVirtual(display,type);
					}
					public override EarthView.World.Spatial.Atlas.Ilayer Clone()
					{
						return base.Clone_NoVirtual();
					}
					public override void ToStream(ref  EarthView.World.Core.DataStream stream)
					{
						base.ToStream_NoVirtual(ref stream);
					}
					public override string ToXML()
					{
						return base.ToXML_NoVirtual();
					}
					protected override void FromStream(ref EarthView.World.Core.DataStream stream)
					{
						base.FromStream_NoVirtual(ref stream);
					}
					public static TerrainGroupLayer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TerrainGroupLayer obj = baseObj as  TerrainGroupLayer;
						if (object.Equals(obj, null))
						{
							obj = new TerrainGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTerrainGroupLayer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TerrainGroupLayerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TerrainGroupLayer emptyInstance = new TerrainGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// CTerrainGroupLayer的类工厂
				/// 管理CTerrainGroupLayer类
				/// </summary>
				public class TerrainGroupLayerFactory : EarthView.World.Spatial.Atlas.Ilayerfactory
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public TerrainGroupLayerFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTerrainGroupLayerFactoryProxy", null);
						if (!"EarthView.World.Spatial3D.Atlas.TerrainGroupLayerFactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_getType_EVLayerType_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					public new EarthView.World.Spatial.Atlas.EVLAYERTYPE GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_getType_EVLayerType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Atlas.EVLAYERTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_getType_EVLayerType(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					public override EarthView.World.Spatial.Atlas.EVLAYERTYPE GetType()
					{
						int ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_getType_EVLayerType(this.NativeObject);
						
						return (EarthView.World.Spatial.Atlas.EVLAYERTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 创建实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					public new EarthView.World.Spatial.Atlas.Ilayer CreateInstance_NoVirtual(ref EarthView.World.Core.XmlElement element)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 创建实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					public override EarthView.World.Spatial.Atlas.Ilayer CreateInstance(ref EarthView.World.Core.XmlElement element)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new EarthView.World.Spatial.Atlas.Ilayer CreateInstance_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer(IntPtr pNativeObject);

					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override EarthView.World.Spatial.Atlas.Ilayer CreateInstance()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(IntPtr pNativeObject, IntPtr layer);

					/// <summary>
					/// 销毁一个图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					public new bool DestroyInstance_NoVirtual(EarthView.World.Spatial.Atlas.Ilayer layer)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_destroyInstance_ev_bool_ILayer(IntPtr pNativeObject, IntPtr layer);

					/// <summary>
					/// 销毁一个图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					public override bool DestroyInstance(EarthView.World.Spatial.Atlas.Ilayer layer)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_destroyInstance_ev_bool_ILayer(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					private static string mTerrainGroupLayerFactoryNameField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_mTerrainGroupLayerFactoryName( );

					public 					static string MTerrainGroupLayerFactoryName
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_mTerrainGroupLayerFactoryName();
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_d.so");
							private static bool csbLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.so");

						#else 
							private static bool bLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#elif Linux 
							private static bool bLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer.so");
							private static bool csbLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_CSharp.so");

						#else 
							private static bool bLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadTerrainGroupLayerFactory = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayerFactory", new TerrainGroupLayerFactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayerFactoryProxy", new TerrainGroupLayerFactoryClassFactory());

					public TerrainGroupLayerFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_getType_EVLayerType(IntPtr pObject, getType_CallBack_EVLayerType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer(IntPtr pObject, createInstance_CallBack_ILayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_EVString(IntPtr pObject, createInstance_CallBack_ILayer_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_CXmlElement(IntPtr pObject, createInstance_CallBack_ILayer_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_destroyInstance_ev_bool_ILayer(IntPtr pObject, destroyInstance_CallBack_ev_bool_ILayer pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVLayerType = EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Function;
							GC.KeepAlive(m_getType_CallBack_EVLayerType);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_getType_EVLayerType(this.NativeObject, m_getType_CallBack_EVLayerType);
							m_createInstance_CallBack_ILayer = EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Function;
							GC.KeepAlive(m_createInstance_CallBack_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer(this.NativeObject, m_createInstance_CallBack_ILayer);
							m_createInstance_CallBack_ILayer_EVString = EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Function;
							GC.KeepAlive(m_createInstance_CallBack_ILayer_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_EVString(this.NativeObject, m_createInstance_CallBack_ILayer_EVString);
							m_createInstance_CallBack_ILayer_CXmlElement = EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Function;
							GC.KeepAlive(m_createInstance_CallBack_ILayer_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_createInstance_ILayer_CXmlElement(this.NativeObject, m_createInstance_CallBack_ILayer_CXmlElement);
							m_destroyInstance_CallBack_ev_bool_ILayer = EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Function;
							GC.KeepAlive(m_destroyInstance_CallBack_ev_bool_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTerrainGroupLayerFactory_destroyInstance_ev_bool_ILayer(this.NativeObject, m_destroyInstance_CallBack_ev_bool_ILayer);
						}
					}
					public override EarthView.World.Spatial.Atlas.Ilayer CreateInstance(string strXml)
					{
						return base.CreateInstance_NoVirtual(strXml);
					}
					public static TerrainGroupLayerFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TerrainGroupLayerFactory obj = baseObj as  TerrainGroupLayerFactory;
						if (object.Equals(obj, null))
						{
							obj = new TerrainGroupLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTerrainGroupLayerFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TerrainGroupLayerFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TerrainGroupLayerFactory emptyInstance = new TerrainGroupLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
