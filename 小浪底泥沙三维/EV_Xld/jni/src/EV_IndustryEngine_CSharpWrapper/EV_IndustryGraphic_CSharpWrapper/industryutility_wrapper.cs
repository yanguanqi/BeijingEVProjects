/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			/// <summary>
			/// 工具类，提供创建基础对象的功能
			/// </summary>
			public class IndustryUtility : EarthView.World.Core.BaseObject
			{
				public IndustryUtility() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CIndustryUtility",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CIndustryUtility_createDefaultMaterial_CMaterialPtr_EVString_EVString(string name, string groupName);

				/// <summary>
				/// 创建材质对象
				/// </summary>
				/// <param name="name">构造函数参数键值对表</param>
				public static EarthView.World.Graphic.MaterialPtr CreateDefaultMaterial(string name, string groupName)
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CIndustryUtility_createDefaultMaterial_CMaterialPtr_EVString_EVString(name, groupName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MaterialPtr csObj = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMaterialPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
						csObj.BindNativeObject(__ptr, "CMaterialPtr");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadIndustryUtility = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CIndustryUtility", new IndustryUtilityClassFactory());

				public IndustryUtility(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static IndustryUtility FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					IndustryUtility obj = baseObj as  IndustryUtility;
					if (object.Equals(obj, null))
					{
						obj = new IndustryUtility(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CIndustryUtility");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class IndustryUtilityClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					IndustryUtility emptyInstance = new IndustryUtility(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
