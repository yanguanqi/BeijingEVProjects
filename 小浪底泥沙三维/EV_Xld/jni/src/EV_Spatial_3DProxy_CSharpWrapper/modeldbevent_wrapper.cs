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
			namespace ModelDB
			{
				public class ModelDBEvent : EarthView.World.Core.Event
				{
					/// <summary>
					///  构造函数
					/// </summary>
					/// <param name="type">事件类别</param>
					/// <returns></returns>
					/// <memo></memo>
					public ModelDBEvent(ushort type) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						Create("CModelDBEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					///  构造函数
					/// </summary>
					/// <param name="type">事件类别</param>
					/// <param name="ref_sender">发送对象</param>
					/// <returns></returns>
					/// <memo></memo>
					public ModelDBEvent(ushort type, EarthView.World.Core.EventObject ref_sender) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						BasePtr valueref_sender = new BasePtr(ref_sender);
						list.Add("ref_sender", valueref_sender.PtrVal);
						Create("CModelDBEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_d.so");
							private static bool csbLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

						#else 
							private static bool bLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy.so");
							private static bool csbLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

						#else 
							private static bool bLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadModelDBEvent = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::ModelDB::CModelDBEvent", new ModelDBEventClassFactory());

					public ModelDBEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelDBEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelDBEvent obj = baseObj as  ModelDBEvent;
						if (object.Equals(obj, null))
						{
							obj = new ModelDBEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelDBEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelDBEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelDBEvent emptyInstance = new ModelDBEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
