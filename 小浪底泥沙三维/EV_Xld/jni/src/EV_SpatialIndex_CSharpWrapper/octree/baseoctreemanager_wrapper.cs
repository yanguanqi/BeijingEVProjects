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
			namespace Octree
			{
				public enum OCTREEMANAGERTYPE
				{
								OMT_NULL,
								OMT_DB,
								OMT_Web
				
				}

				public class OctreeManager : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public OctreeManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("COctreeManager",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadOctreeManager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadOctreeManager = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadOctreeManager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Octree::COctreeManager", new OctreeManagerClassFactory());

					public OctreeManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static OctreeManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						OctreeManager obj = baseObj as  OctreeManager;
						if (object.Equals(obj, null))
						{
							obj = new OctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "COctreeManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class OctreeManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						OctreeManager emptyInstance = new OctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 八叉树基类，负责基本的对象管理
				/// </summary>
				public class BaseOctreeManager : EarthView.World.Spatial.Octree.OctreeManager
				{
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public BaseOctreeManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CBaseOctreeManager",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <param name="maxDepth">最大深度</param>
					/// <returns></returns>
					public BaseOctreeManager(EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuebox = new BasePtr(box);
						list.Add("box", valuebox.PtrVal);
						BasePtr valuemaxDepth = new BasePtr(maxDepth);
						list.Add("maxDepth", valuemaxDepth.PtrVal);
						Create("CBaseOctreeManager", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadBaseOctreeManager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Octree::CBaseOctreeManager", new BaseOctreeManagerClassFactory());

					public BaseOctreeManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static BaseOctreeManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						BaseOctreeManager obj = baseObj as  BaseOctreeManager;
						if (object.Equals(obj, null))
						{
							obj = new BaseOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CBaseOctreeManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class BaseOctreeManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						BaseOctreeManager emptyInstance = new BaseOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
