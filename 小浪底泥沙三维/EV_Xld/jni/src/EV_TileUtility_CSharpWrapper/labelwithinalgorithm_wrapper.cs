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
			/// <summary>
			/// 内部注记的算法类
			/// </summary>
			public class LabelWithInAlgorithm : EarthView.World.Spatial.LabelDrawAlgorithm
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				public LabelWithInAlgorithm() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLabelWithInAlgorithm",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadLabelWithInAlgorithm = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CLabelWithInAlgorithm", new LabelWithInAlgorithmClassFactory());

				public LabelWithInAlgorithm(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static LabelWithInAlgorithm FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LabelWithInAlgorithm obj = baseObj as  LabelWithInAlgorithm;
					if (object.Equals(obj, null))
					{
						obj = new LabelWithInAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLabelWithInAlgorithm");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LabelWithInAlgorithmClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LabelWithInAlgorithm emptyInstance = new LabelWithInAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
