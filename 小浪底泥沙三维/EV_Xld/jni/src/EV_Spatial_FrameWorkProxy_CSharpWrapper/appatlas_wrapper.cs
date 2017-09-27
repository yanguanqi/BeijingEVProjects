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
		namespace Utilities
		{
			public class AppAtlas : EarthView.World.Core.BaseObject
			{
				public enum LAYERTYPE3D
				{
								KML,
								Feature,
								Image,
								Terrian
				
				}

				public enum TILETYPE
				{
								WebMercator,
								WGS84
				
				}

				/// <summary>
				/// 构造函数。
				/// </summary>
				/// <returns></returns>
				public AppAtlas() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("AppAtlas",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create3DLayer_ILayer_EVString_EVString_EVString_LayerType3D(IntPtr pNativeObject, string sceneName, string dataSourceAliasName, string datasetName, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type);

				/// <summary>
				/// 创建三维图层
				/// </summary>
				/// <param name="sceneName">指定在哪个场景之下创建图层。</param>
				/// <param name="dataSourceAliasName">使用的数据源名称（别名）。</param>
				/// <param name="datasetName">使用的数据集名称。</param>
				/// <param name="type">
				/// 在指定类型的顶层节点上创建图层。
				/// 如果想在已有图层组下创建图层，请使用create3DLayer的另外一个重载函数。
				/// </param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Create3DLayer(string sceneName, string dataSourceAliasName, string datasetName, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create3DLayer_ILayer_EVString_EVString_EVString_LayerType3D(this.NativeObject, sceneName, dataSourceAliasName, datasetName, type);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create3DLayer_ILayer_EVString_EVString_ILayer(IntPtr pNativeObject, string dataSourceAliasName, string datasetName, IntPtr parentLayer);

				/// <summary>
				/// 创建三维图层，重载函数。
				/// </summary>
				/// <param name="dataSourceAliasName">使用的数据源名称（别名）。</param>
				/// <param name="datasetName">使用的数据集名称。</param>
				/// <param name="parentLayer">
				/// 父图层组对象，如果为0，则会创建失败。
				/// 如果你不知道父图层组对象，可以使用create3DLayer的另外一个重载函数。
				/// </param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Create3DLayer(string dataSourceAliasName, string datasetName, EarthView.World.Spatial.Atlas.Ilayer parentLayer)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create3DLayer_ILayer_EVString_EVString_ILayer(this.NativeObject, dataSourceAliasName, datasetName, object.Equals(parentLayer, null) ? IntPtr.Zero : parentLayer.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create3DGroupLayer_ILayer_EVString_EVString_LayerType3D(IntPtr pNativeObject, string sceneName, string groupName, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type);

				/// <summary>
				/// 创建三维图层组
				/// </summary>
				/// <param name="sceneName">指定在哪个场景之下创建图层。</param>
				/// <param name="groupName">指定创建的图层组名称。</param>
				/// <param name="parentLayer">
				/// 在指定类型的顶层节点上创建图层组。
				/// 如果想在已有图层组下创建图层组，请使用create3DGroupLayer的另外一个重载函数。
				/// </param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Create3DGroupLayer(string sceneName, string groupName, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create3DGroupLayer_ILayer_EVString_EVString_LayerType3D(this.NativeObject, sceneName, groupName, type);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create3DGroupLayer_ILayer_EVString_ILayer(IntPtr pNativeObject, string groupName, IntPtr parentLayer);

				/// <summary>
				/// 创建三维图层组，重载函数。
				/// </summary>
				/// <param name="groupName">指定创建的图层组名称。</param>
				/// <param name="parentLayer">
				/// 父图层组对象，如果为0，则会创建失败。
				/// 如果你不知道父图层组对象，可以使用create3DGroupLayer的另外一个重载函数。
				/// </param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Create3DGroupLayer(string groupName, EarthView.World.Spatial.Atlas.Ilayer parentLayer)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create3DGroupLayer_ILayer_EVString_ILayer(this.NativeObject, groupName, object.Equals(parentLayer, null) ? IntPtr.Zero : parentLayer.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_get3DLayer_ILayer_EVString_EVString_LayerType3D(IntPtr pNativeObject, string sceneName, string layerName, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type);

				/// <summary>#
				/// 获取三维图层对象。
				/// </summary>
				/// <param name="sceneName">指定获取哪个场景下的图层。</param>
				/// <param name="layerName">指定要获取的图层名称。</param>
				/// <param name="parentLayer">父图层对象，如果为0，则在场景根顶层节点上获取图层。</param>
				/// <returns>获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Get3DLayer(string sceneName, string layerName, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_get3DLayer_ILayer_EVString_EVString_LayerType3D(this.NativeObject, sceneName, layerName, type);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_get3DLayer_ILayer_EVString_ILayer(IntPtr pNativeObject, string layerName, IntPtr parentLayer);

				/// <summary>#
				/// 获取三维图层对象。
				/// </summary>
				/// <param name="layerName">指定要获取的图层名称。</param>
				/// <param name="parentLayer">父图层对象，如果为0，则在场景根顶层节点上获取图层。</param>
				/// <returns>获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Get3DLayer(string layerName, EarthView.World.Spatial.Atlas.Ilayer parentLayer)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_get3DLayer_ILayer_EVString_ILayer(this.NativeObject, layerName, object.Equals(parentLayer, null) ? IntPtr.Zero : parentLayer.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Utilities_AppAtlas_delete3DLayer_bool_EVString_ILayer_LayerType3D(IntPtr pNativeObject, string sceneName, IntPtr layer, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type);

				/// <summary>#
				/// 删除三维图层（组）。
				/// </summary>
				/// <param name="sceneName">指定删除哪个场景下的图层（组）。</param>
				/// <param name="layerName">指定要删除的图层（组）名称。</param>
				/// <param name="type">在指定类型的顶层节点上删除图层（组）。</param>
				/// <returns>删除是否成功。</returns>
				public bool Delete3DLayer(string sceneName, EarthView.World.Spatial.Atlas.Ilayer layer, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type)
				{
					byte ret=EarthView_World_Utilities_AppAtlas_delete3DLayer_bool_EVString_ILayer_LayerType3D(this.NativeObject, sceneName, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, type);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Utilities_AppAtlas_delete3DLayer_bool_ILayer_ILayer(IntPtr pNativeObject, IntPtr layer, IntPtr parentLayer);

				/// <summary>
				/// 删除三维图层（组）。
				/// </summary>
				/// <param name="layerName">指定要删除的图层组名称。</param>
				/// <param name="parentLayer">父图层组对象。</param>
				/// <returns>删除是否成功。</returns>
				public bool Delete3DLayer(EarthView.World.Spatial.Atlas.Ilayer layer, EarthView.World.Spatial.Atlas.Ilayer parentLayer)
				{
					byte ret=EarthView_World_Utilities_AppAtlas_delete3DLayer_bool_ILayer_ILayer(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, object.Equals(parentLayer, null) ? IntPtr.Zero : parentLayer.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create2DLayer_ILayer_EVString_EVString_EVString(IntPtr pNativeObject, string mapName, string dataSourceAliasName, string datasetName);

				/// <summary>
				/// 创建二维图层。
				/// </summary>
				/// <param name="mapName">指定在哪个地图之下创建图层。</param>
				/// <param name="dataSourceAliasName">使用的数据源名称（别名）。</param>
				/// <param name="datasetName">使用的数据集名称。</param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Create2DLayer(string mapName, string dataSourceAliasName, string datasetName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create2DLayer_ILayer_EVString_EVString_EVString(this.NativeObject, mapName, dataSourceAliasName, datasetName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create2DLayer_ILayer_EVString_EVString_ILayer_EVString(IntPtr pNativeObject, string dataSourceAliasName, string datasetName, IntPtr parentLayer, string mapName);

				public EarthView.World.Spatial.Atlas.Ilayer Create2DLayer(string dataSourceAliasName, string datasetName, EarthView.World.Spatial.Atlas.Ilayer parentLayer, string mapName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create2DLayer_ILayer_EVString_EVString_ILayer_EVString(this.NativeObject, dataSourceAliasName, datasetName, object.Equals(parentLayer, null) ? IntPtr.Zero : parentLayer.NativeObject, mapName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create2DGroupLayer_ILayer_EVString_EVString(IntPtr pNativeObject, string mapName, string groupName);

				/// <summary>
				/// 创建二维图层组。
				/// </summary>
				/// <param name="sceneName">指定在哪个场景之下创建图层。</param>
				/// <param name="groupName">指定创建的图层组名称。</param>
				/// <param name="parentLayer">
				/// 在指定类型的顶层节点上创建图层组。
				/// 如果想在已有图层组下创建图层组，请使用create2DGroupLayer的另外一个重载函数。
				/// </param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Create2DGroupLayer(string mapName, string groupName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create2DGroupLayer_ILayer_EVString_EVString(this.NativeObject, mapName, groupName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create2DBaseGroupLayer_ILayer_EVString_EVString(IntPtr pNativeObject, string mapName, string groupName);

				/// <summary>
				/// 创建二维底图图层组。
				/// </summary>
				/// <param name="sceneName">指定在哪个地图之下创建底图图层。</param>
				/// <param name="groupName">指定创建的图层组名称。</param>
				/// <param name="parentLayer">
				/// 在指定类型的顶层节点上创建图层组。
				/// </param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Create2DBaseGroupLayer(string mapName, string groupName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create2DBaseGroupLayer_ILayer_EVString_EVString(this.NativeObject, mapName, groupName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_create2DGroupLayer_ILayer_EVString_EVString_ILayer(IntPtr pNativeObject, string mapName, string groupName, IntPtr parentLayer);

				/// <summary>
				/// 创建二维图层组，重载函数。
				/// </summary>
				/// <param name="groupName">指定创建的图层组名称。</param>
				/// <param name="parentLayer">
				/// 父图层组对象，如果为0，则会创建失败。
				/// 如果你要在顶层节点上创建图层组，可以使用create2DGroupLayer的另外一个重载函数。
				/// </param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Create2DGroupLayer(string mapName, string groupName, EarthView.World.Spatial.Atlas.Ilayer parentLayer)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_create2DGroupLayer_ILayer_EVString_EVString_ILayer(this.NativeObject, mapName, groupName, object.Equals(parentLayer, null) ? IntPtr.Zero : parentLayer.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_get2DLayer_ILayer_EVString_EVString(IntPtr pNativeObject, string mapName, string layerName);

				/// <summary>#
				/// 获取二维图层对象。
				/// </summary>
				/// <param name="mapName">指定获取哪个场景下的图层。</param>
				/// <param name="layerName">指定要获取的图层名称。</param>
				/// <returns>获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public EarthView.World.Spatial.Atlas.Ilayer Get2DLayer(string mapName, string layerName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_get2DLayer_ILayer_EVString_EVString(this.NativeObject, mapName, layerName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Utilities_AppAtlas_delete2DLayer_bool_EVString_ILayer_ILayer(IntPtr pNativeObject, string mapName, IntPtr layer, IntPtr parentLayer);

				/// <summary>
				/// 删除二维图层。
				/// </summary>
				/// <param name="mapName">指定删除哪个场景下的图层。</param>
				/// <param name="layerName">指定要删除的图层组名称。</param>
				/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
				public bool Delete2DLayer(string mapName, EarthView.World.Spatial.Atlas.Ilayer layer, EarthView.World.Spatial.Atlas.Ilayer parentLayer)
				{
					byte ret=EarthView_World_Utilities_AppAtlas_delete2DLayer_bool_EVString_ILayer_ILayer(this.NativeObject, mapName, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, object.Equals(parentLayer, null) ? IntPtr.Zero : parentLayer.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_createScene_IScene_EVString_TileType(IntPtr pNativeObject, string sceneName, EarthView.World.Utilities.AppAtlas.TILETYPE tileType);

				///bool delete2DLayer(
				///	const EVString& layerName,
				///	const EVString& mapName,
				///	const EarthView::World::Spatial::Atlas::ILayer* parentLayer = 0
				///	);
				//// <summary>
				//// 创建场景。
				//// </summary>
				//// <param name="sceneName">场景名称。</param>
				//// <returns>创建的场景EarthView::World::Spatial::Atlas::IScene对象。</returns>
				public EarthView.World.Spatial.Atlas.Iscene CreateScene(string sceneName, EarthView.World.Utilities.AppAtlas.TILETYPE tileType)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_createScene_IScene_EVString_TileType(this.NativeObject, sceneName, tileType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Atlas.Iscene csObj = new EarthView.World.Spatial.Atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IScene");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Iscene;
						csObj.BindNativeObject(__ptr, "IScene");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_getScene_IScene_EVString(IntPtr pNativeObject, string sceneName);

				/// <summary>
				/// 获取场景对象。
				/// </summary>
				/// <param name="sceneName">场景名称。</param>
				/// <returns>获取的场景EarthView::World::Spatial::Atlas::IScene对象。</returns>
				public EarthView.World.Spatial.Atlas.Iscene GetScene(string sceneName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_getScene_IScene_EVString(this.NativeObject, sceneName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Atlas.Iscene csObj = new EarthView.World.Spatial.Atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IScene");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Iscene;
						csObj.BindNativeObject(__ptr, "IScene");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Utilities_AppAtlas_deleteScene_bool_EVString(IntPtr pNativeObject, string sceneName);

				/// <summary>
				/// 创建场景。
				/// </summary>
				/// <param name="sceneName">场景名称。</param>
				/// <returns>删除是否成功。</returns>
				public bool DeleteScene(string sceneName)
				{
					byte ret=EarthView_World_Utilities_AppAtlas_deleteScene_bool_EVString(this.NativeObject, sceneName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_createMap_IMap_EVString(IntPtr pNativeObject, string mapName);

				/// <summary>
				/// 创建地图。
				/// </summary>
				/// <param name="sceneName">地图名称。</param>
				/// <returns>创建的地图EarthView::World::Spatial::Atlas::IMap对象。</returns>
				public EarthView.World.Spatial.Atlas.Imap CreateMap(string mapName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_createMap_IMap_EVString(this.NativeObject, mapName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Atlas.Imap csObj = new EarthView.World.Spatial.Atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IMap");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Imap;
						csObj.BindNativeObject(__ptr, "IMap");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_getMap_IMap_EVString(IntPtr pNativeObject, string mapName);

				/// <summary>
				/// 获取地图对象。
				/// </summary>
				/// <param name="sceneName">地图名称。</param>
				/// <returns>对象的地图EarthView::World::Spatial::Atlas::IMap对象。</returns>
				public EarthView.World.Spatial.Atlas.Imap GetMap(string mapName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_getMap_IMap_EVString(this.NativeObject, mapName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Atlas.Imap csObj = new EarthView.World.Spatial.Atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IMap");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Imap;
						csObj.BindNativeObject(__ptr, "IMap");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Utilities_AppAtlas_deleteMap_bool_EVString(IntPtr pNativeObject, string mapName);

				/// <summary>
				/// 删除地图。
				/// </summary>
				/// <param name="sceneName">地图名称。</param>
				/// <returns>删除是否成功。</returns>
				public bool DeleteMap(string mapName)
				{
					byte ret=EarthView_World_Utilities_AppAtlas_deleteMap_bool_EVString(this.NativeObject, mapName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_AppAtlas_createLayout_IPageLayout_EVString(IntPtr pNativeObject, string layoutName);

				/// <summary>
				/// 创建布局。
				/// </summary>
				/// <param name="sceneName">布局名称。</param>
				/// <returns>创建的布局IPageLayout对象。</returns>
				public EarthView.World.Spatial.Carto.Ipagelayout CreateLayout(string layoutName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppAtlas_createLayout_IPageLayout_EVString(this.NativeObject, layoutName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Carto.Ipagelayout csObj = new EarthView.World.Spatial.Carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IPageLayout");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Carto.Ipagelayout;
						csObj.BindNativeObject(__ptr, "IPageLayout");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Utilities_AppAtlas_deleteLayout_bool_EVString(IntPtr pNativeObject, string layoutName);

				/// <summary>
				/// 删除地图。
				/// </summary>
				/// <param name="sceneName">地图名称。</param>
				/// <returns>删除是否成功。</returns>
				public bool DeleteLayout(string layoutName)
				{
					byte ret=EarthView_World_Utilities_AppAtlas_deleteLayout_bool_EVString(this.NativeObject, layoutName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Utilities_AppAtlas_setLayerVisible_bool_ILayer_bool(IntPtr pNativeObject, IntPtr layer, byte visible);

				/// <summary>
				/// 设置图层是否可见。
				/// </summary>
				/// <param name="layer">图层对象。</param>
				/// <param name="visible">是否可见。</param>
				/// <returns>设置图层可见是否成功。</returns>
				public bool SetLayerVisible(EarthView.World.Spatial.Atlas.Ilayer layer, bool visible)
				{
					byte ret=EarthView_World_Utilities_AppAtlas_setLayerVisible_bool_ILayer_bool(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, Convert.ToByte(visible));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Utilities_AppAtlas_setLayerTheme_bool_ILayer_ITheme(IntPtr pNativeObject, IntPtr layer, IntPtr theme);

				/// <summary>
				/// 设置图层风格。
				/// </summary>
				/// <param name="layer">图层对象。</param>
				/// <param name="theme">风格EarthView::World::Spatial::Theme::ITheme对象。</param>
				/// <returns>设置图层风格是否成功。</returns>
				public bool SetLayerTheme(EarthView.World.Spatial.Atlas.Ilayer layer, EarthView.World.Spatial.Theme.Itheme theme)
				{
					byte ret=EarthView_World_Utilities_AppAtlas_setLayerTheme_bool_ILayer_ITheme(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, object.Equals(theme, null) ? IntPtr.Zero : theme.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Utilities_AppAtlas_move3DLayer_void_EVString_EVString_LayerType3D_int_int(IntPtr pNativeObject, string sceneName, string layerName, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type, int index, int newIndex);

				/// <summary>
				/// 移动三维图层位置，在图层处于顶层节点之下时使用本函数。
				/// </summary>
				/// <param name="sceneName">场景名称。</param>
				/// <param name="layerName">图层名称。</param>
				/// <param name="type">图层类型。</param>
				/// <param name="index">移动之前的图层位置。</param>
				/// <param name="newIndex">移动之前的图层位置。</param>
				/// <returns></returns>
				public void Move3DLayer(string sceneName, string layerName, EarthView.World.Utilities.AppAtlas.LAYERTYPE3D type, int index, int newIndex)
				{
					EarthView_World_Utilities_AppAtlas_move3DLayer_void_EVString_EVString_LayerType3D_int_int(this.NativeObject, sceneName, layerName, type, index, newIndex);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Utilities_AppAtlas_move3DLayer_void_ILayer_int_int(IntPtr pNativeObject, IntPtr parentLayer, int index, int newIndex);

				/// <summary>
				/// 移动三维图层位置。
				/// </summary>
				/// <param name="parentLayer">图层组名称。</param>
				/// <param name="index">移动之前的图层位置。</param>
				/// <param name="newIndex">移动之前的图层位置。</param>
				/// <returns></returns>
				public void Move3DLayer(EarthView.World.Spatial.Atlas.Ilayer parentLayer, int index, int newIndex)
				{
					EarthView_World_Utilities_AppAtlas_move3DLayer_void_ILayer_int_int(this.NativeObject, object.Equals(parentLayer, null) ? IntPtr.Zero : parentLayer.NativeObject, index, newIndex);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Utilities_AppAtlas_move2DLayer_void_EVString_int_int(IntPtr pNativeObject, string mapName, int index, int newIndex);

				/// <summary>
				/// 移动二维图层位置。
				/// </summary>
				/// <param name="mapName">地图名称。</param>
				/// <param name="index">移动之前的图层位置。</param>
				/// <param name="newIndex">移动之前的图层位置。</param>
				/// <returns></returns>
				public void Move2DLayer(string mapName, int index, int newIndex)
				{
					EarthView_World_Utilities_AppAtlas_move2DLayer_void_EVString_int_int(this.NativeObject, mapName, index, newIndex);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadAppAtlas = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::AppAtlas", new AppAtlasClassFactory());

				public AppAtlas(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static AppAtlas FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AppAtlas obj = baseObj as  AppAtlas;
					if (object.Equals(obj, null))
					{
						obj = new AppAtlas(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "AppAtlas");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AppAtlasClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AppAtlas emptyInstance = new AppAtlas(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
