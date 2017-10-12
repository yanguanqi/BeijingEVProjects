/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Graphic;
using EarthView.World.Core;
using EarthView.World.Spatial.Atlas;

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			/// <summary>
			/// 派生自RaySceneQueryResult，只用于提供一个函数传给给外部objID和component值,无其他用处;
			/// </summary>
			public class RaySceneQueryResultSimple : EarthView.World.Graphic.RaySceneQueryResult
			{
				public RaySceneQueryResultSimple() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("RaySceneQueryResultSimple",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public RaySceneQueryResultSimple(EarthView.World.Graphic.RaySceneQueryResult pParentRaySceneQueryResult) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuepParentRaySceneQueryResult = new BasePtr(pParentRaySceneQueryResult);
					list.Add("pParentRaySceneQueryResult", valuepParentRaySceneQueryResult.PtrVal);
					Create("RaySceneQueryResultSimple", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_RaySceneQueryResultSimple_queryObjIDAndComponent_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 通过RaySceneQueryResult的指针去获取对应的objectID和component然后保存到vector中，供外部使用;
				/// </summary>
				/// <returns>返回false表示操作失败</returns>
				public bool QueryObjIDAndComponent()
				{
					byte ret=EarthView_World_Spatial3D_RaySceneQueryResultSimple_queryObjIDAndComponent_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_RaySceneQueryResultSimple_getComponent_ev_bool_ev_uint32_ev_uint32_CComponent(IntPtr pNativeObject, uint index, ref uint objID, IntPtr component);

				/// <summary>
				/// 根据index获取objID和component
				/// </summary>
				/// <returns>返回false表示不存在</returns>
				public bool GetComponent(uint index, ref uint objID, ref  EarthView.World.Spatial3D.Component component)
				{
					byte ret=EarthView_World_Spatial3D_RaySceneQueryResultSimple_getComponent_ev_bool_ev_uint32_ev_uint32_CComponent(this.NativeObject, index, ref objID, object.Equals(component, null) ? IntPtr.Zero : component.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial3D_RaySceneQueryResultSimple_getComponentsSize_ev_uint32(IntPtr pNativeObject);

				public uint GetComponentsSize()
				{
					uint ret=EarthView_World_Spatial3D_RaySceneQueryResultSimple_getComponentsSize_ev_uint32(this.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadRaySceneQueryResultSimple = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::RaySceneQueryResultSimple", new RaySceneQueryResultSimpleClassFactory());

				public RaySceneQueryResultSimple(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RaySceneQueryResultSimple FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RaySceneQueryResultSimple obj = baseObj as  RaySceneQueryResultSimple;
					if (object.Equals(obj, null))
					{
						obj = new RaySceneQueryResultSimple(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "RaySceneQueryResultSimple");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RaySceneQueryResultSimpleClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RaySceneQueryResultSimple emptyInstance = new RaySceneQueryResultSimple(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
