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
		namespace Spatial3DProxy
		{
			public class ModelDataStreamSourcePublishTool : EarthView.World.Spatial3D.ModelPublishToolDbdessource
			{
				/// <summary>
				///  ¹¹Ôìº¯Êý
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				public ModelDataStreamSourcePublishTool() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CModelDataStreamSourcePublishTool",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_d.so");
						private static bool csbLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

					#else 
						private static bool bLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy.so");
						private static bool csbLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

					#else 
						private static bool bLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadModelDataStreamSourcePublishTool = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CModelDataStreamSourcePublishTool", new ModelDataStreamSourcePublishToolClassFactory());

				public ModelDataStreamSourcePublishTool(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ModelDataStreamSourcePublishTool FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ModelDataStreamSourcePublishTool obj = baseObj as  ModelDataStreamSourcePublishTool;
					if (object.Equals(obj, null))
					{
						obj = new ModelDataStreamSourcePublishTool(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CModelDataStreamSourcePublishTool");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ModelDataStreamSourcePublishToolClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ModelDataStreamSourcePublishTool emptyInstance = new ModelDataStreamSourcePublishTool(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
