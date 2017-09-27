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
		namespace Core
		{
			namespace Database
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				///<summary>
				///由于不同数据库上sql语句中关键字有所不同，
				///通过此类创建统一的方法
				///</summary>
				public class Sqlstandardization : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					/// </summary>
					/// <param name="driverType">驱动名</param>
					///<returns></returns>
					public Sqlstandardization(string driverType) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedriverType = new BasePtr(driverType);
						list.Add("driverType", valuedriverType.PtrVal);
						Create("CSqlstandardization", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_d.dll");
							private static bool csbLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_d.so");
							private static bool csbLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_CSharp_d.so");

						#else 
							private static bool bLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_d.dll");
							private static bool csbLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase.dll");
							private static bool csbLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase.so");
							private static bool csbLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_CSharp.so");

						#else 
							private static bool bLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase.dll");
							private static bool csbLoadSqlstandardization = LoadDll.Load("EV_SpatialDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CSqlstandardization", new SqlstandardizationClassFactory());

					public Sqlstandardization(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Sqlstandardization FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Sqlstandardization obj = baseObj as  Sqlstandardization;
						if (object.Equals(obj, null))
						{
							obj = new Sqlstandardization(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSqlstandardization");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SqlstandardizationClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Sqlstandardization emptyInstance = new Sqlstandardization(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
