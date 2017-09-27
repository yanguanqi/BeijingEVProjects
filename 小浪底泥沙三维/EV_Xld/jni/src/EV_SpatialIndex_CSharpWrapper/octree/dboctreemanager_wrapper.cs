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
				public class Dboctreemanager : EarthView.World.Spatial.Octree.BaseOctreeManager
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <param name="maxDepth">最大深度</param>
					/// <returns></returns>
					public Dboctreemanager(EarthView.World.Core.Database.SqlDatabase db, string octreeTable, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedb = new BasePtr(db);
						list.Add("db", valuedb.PtrVal);
						BasePtr valueoctreeTable = new BasePtr(octreeTable);
						list.Add("octreeTable", valueoctreeTable.PtrVal);
						BasePtr valuebox = new BasePtr(box);
						list.Add("box", valuebox.PtrVal);
						BasePtr valuemaxDepth = new BasePtr(maxDepth);
						list.Add("maxDepth", valuemaxDepth.PtrVal);
						Create("CDBOctreeManager", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadDboctreemanager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Octree::CDBOctreeManager", new DboctreemanagerClassFactory());

					public Dboctreemanager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Dboctreemanager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Dboctreemanager obj = baseObj as  Dboctreemanager;
						if (object.Equals(obj, null))
						{
							obj = new Dboctreemanager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDBOctreeManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DboctreemanagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Dboctreemanager emptyInstance = new Dboctreemanager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
