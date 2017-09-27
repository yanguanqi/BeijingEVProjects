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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Octree
			{
				public class WebOctreeManager : EarthView.World.Spatial.Octree.BaseOctreeManager
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <param name="maxDepth">最大深度</param>
					/// <returns></returns>
					public WebOctreeManager(string web, EarthView.World.Spatial.Evspatialserver pNetServer, EarthView.World.Spatial.Evbasemodeldataset pNetDataset, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueweb = new BasePtr(web);
						list.Add("web", valueweb.PtrVal);
						BasePtr valuepNetServer = new BasePtr(pNetServer);
						list.Add("pNetServer", valuepNetServer.PtrVal);
						BasePtr valuepNetDataset = new BasePtr(pNetDataset);
						list.Add("pNetDataset", valuepNetDataset.PtrVal);
						BasePtr valuebox = new BasePtr(box);
						list.Add("box", valuebox.PtrVal);
						BasePtr valuemaxDepth = new BasePtr(maxDepth);
						list.Add("maxDepth", valuemaxDepth.PtrVal);
						Create("CWebOctreeManager", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public WebOctreeManager(string web, EarthView.World.Spatial.Evspatialserver pNetServer, EarthView.World.Spatial.Evbasemodeldataset pNetDataset, EarthView.World.Spatial.Evbasemodellayerinfo pNetDatasetInfo, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueweb = new BasePtr(web);
						list.Add("web", valueweb.PtrVal);
						BasePtr valuepNetServer = new BasePtr(pNetServer);
						list.Add("pNetServer", valuepNetServer.PtrVal);
						BasePtr valuepNetDataset = new BasePtr(pNetDataset);
						list.Add("pNetDataset", valuepNetDataset.PtrVal);
						BasePtr valuepNetDatasetInfo = new BasePtr(pNetDatasetInfo);
						list.Add("pNetDatasetInfo", valuepNetDatasetInfo.PtrVal);
						BasePtr valuebox = new BasePtr(box);
						list.Add("box", valuebox.PtrVal);
						BasePtr valuemaxDepth = new BasePtr(maxDepth);
						list.Add("maxDepth", valuemaxDepth.PtrVal);
						Create("CWebOctreeManager", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadWebOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Octree::CWebOctreeManager", new WebOctreeManagerClassFactory());

					public WebOctreeManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static WebOctreeManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						WebOctreeManager obj = baseObj as  WebOctreeManager;
						if (object.Equals(obj, null))
						{
							obj = new WebOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CWebOctreeManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class WebOctreeManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						WebOctreeManager emptyInstance = new WebOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
