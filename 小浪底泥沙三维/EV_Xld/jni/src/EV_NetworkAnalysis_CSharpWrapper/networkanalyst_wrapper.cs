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
		namespace Spatial2D
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
		namespace Spatial2D
		{
			namespace Analyst
			{
				/// <summary>
				/// 网络分析类
				/// </summary>
				public class NetworkAnalyst : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pND">网络数据集</param>
					/// <returns></returns>
					public NetworkAnalyst(EarthView.World.Spatial2D.GeoDataset.NetworkDataset ref_pND) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_pND = new BasePtr(ref_pND);
						list.Add("ref_pND", valueref_pND.PtrVal);
						Create("CNetworkAnalyst", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_d.so");
							private static bool csbLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis.so");
							private static bool csbLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp.so");

						#else 
							private static bool bLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadNetworkAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CNetworkAnalyst", new NetworkAnalystClassFactory());

					public NetworkAnalyst(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static NetworkAnalyst FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						NetworkAnalyst obj = baseObj as  NetworkAnalyst;
						if (object.Equals(obj, null))
						{
							obj = new NetworkAnalyst(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CNetworkAnalyst");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class NetworkAnalystClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						NetworkAnalyst emptyInstance = new NetworkAnalyst(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
