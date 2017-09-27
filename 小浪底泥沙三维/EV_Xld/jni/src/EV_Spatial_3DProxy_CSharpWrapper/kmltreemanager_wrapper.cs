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
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				/// <summary>
				/// 3d图层s
				/// </summary>
				public class AllGlobeControlLayers : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>	
					public AllGlobeControlLayers() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("AllGlobeControlLayers",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_push_back_void_ILayer(IntPtr pNativeObject, ref IntPtr t);

					/// <summary>
					/// 在容器最后添加对象
					/// </summary>
					/// <param name="t">待增加的对象</param>
					/// <returns></returns>
					public void Push_back(EarthView.World.Spatial.Atlas.Ilayer t)
					{
						EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_push_back_void_ILayer(this.NativeObject, ref t.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					/// <summary>
					/// 移除容器指定位置的对象
					/// </summary>
					/// <param name="pos">对象的位置</param>
					/// <returns></returns>
					public void Remove(ulong pos)
					{
						EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_remove_void_ev_size_t(this.NativeObject, pos);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///返回容器是否为null
					/// </summary>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_at_ILayer_ev_size_t(IntPtr pNativeObject, ulong n);

					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					public EarthView.World.Spatial.Atlas.Ilayer At(ulong n)
					{
						IntPtr __ptr = EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_at_ILayer_ev_size_t(this.NativeObject, n);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					public void Resize(ulong newSize)
					{
						EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_resize_void_ev_size_t(this.NativeObject, newSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					public void Reserve(ulong count)
					{
						EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_reserve_void_ev_size_t(this.NativeObject, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial3DProxy_KmlManager_AllGlobeControlLayers_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_d.so");
							private static bool csbLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

						#else 
							private static bool bLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy.so");
							private static bool csbLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

						#else 
							private static bool bLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadAllGlobeControlLayers = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers", new AllGlobeControlLayersClassFactory());

					public AllGlobeControlLayers(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static AllGlobeControlLayers FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AllGlobeControlLayers obj = baseObj as  AllGlobeControlLayers;
						if (object.Equals(obj, null))
						{
							obj = new AllGlobeControlLayers(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "AllGlobeControlLayers");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AllGlobeControlLayersClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AllGlobeControlLayers emptyInstance = new AllGlobeControlLayers(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// kml树管理对象
				/// </summary>
				public class KmlTreeManager : EarthView.World.Core.EventObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 事件处理函数，可重载
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns>已处理返回true，否则返回false</returns>
					protected new bool OnEvent_NoVirtual(EarthView.World.Core.Event e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 事件处理函数，可重载
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns>已处理返回true，否则返回false</returns>
					protected override bool OnEvent(EarthView.World.Core.Event e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onRemoveSceneLayer_CallBack_ev_bool_CSceneLayerActiveEvent(IntPtr e);

					protected onRemoveSceneLayer_CallBack_ev_bool_CSceneLayerActiveEvent m_onRemoveSceneLayer_CallBack_ev_bool_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除图层事件响应
					/// </summary>
					/// <param name="e">3d图层事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveSceneLayer_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnRemoveSceneLayer(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除图层事件响应
					/// </summary>
					/// <param name="e">3d图层事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveSceneLayer(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onChangeSceneLayerName_CallBack_ev_bool_CSceneLayerActiveEvent(IntPtr e);

					protected onChangeSceneLayerName_CallBack_ev_bool_CSceneLayerActiveEvent m_onChangeSceneLayerName_CallBack_ev_bool_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 重命名图层事件响应
					/// </summary>
					/// <param name="e">3d图层事件</param>
					/// <returns></returns>
					public virtual bool OnChangeSceneLayerName_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnChangeSceneLayerName(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 重命名图层事件响应
					/// </summary>
					/// <param name="e">3d图层事件</param>
					/// <returns></returns>
					public virtual bool OnChangeSceneLayerName(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onAddKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onAddKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent m_onAddKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlObjectEvent_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnAddKmlObjectEvent(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlObjectEvent(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onUpdateKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onUpdateKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent m_onUpdateKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 修改kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnUpdateKmlObjectEvent_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnUpdateKmlObjectEvent(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 修改kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnUpdateKmlObjectEvent(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onRemoveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onRemoveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent m_onRemoveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 删除kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlObjectEvent_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnRemoveKmlObjectEvent(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 删除kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlObjectEvent(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onSaveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onSaveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent m_onSaveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 保存kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnSaveKmlObjectEvent_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnSaveKmlObjectEvent(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 保存kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnSaveKmlObjectEvent(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onAddKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onAddKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent m_onAddKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml文件夹事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlFolderEvent_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnAddKmlFolderEvent(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml文件夹事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlFolderEvent(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onRemoveKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onRemoveKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent m_onRemoveKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 删除kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlFolderEvent_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnRemoveKmlFolderEvent(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 删除kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlFolderEvent(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onAddKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onAddKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent m_onAddKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml文件事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlFileEvent_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnAddKmlFileEvent(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml文件事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlFileEvent(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onSaveKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onSaveKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent m_onSaveKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 保存kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnSaveKmlFileEvent_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnSaveKmlFileEvent(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 保存kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnSaveKmlFileEvent(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onAddNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onAddNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent m_onAddNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml网络事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddNetworkLink_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnAddNetworkLink(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml网络事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddNetworkLink(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onRemoveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onRemoveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent m_onRemoveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除kml网络事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveNetworkLink_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnRemoveNetworkLink(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除kml网络事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveNetworkLink(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onSaveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onSaveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent m_onSaveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 保存kml网络对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnSaveNetworkLink_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnSaveNetworkLink(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 保存kml网络对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnSaveNetworkLink(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onAddKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onAddKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent m_onAddKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加文件夹之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlFolderAfter_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnAddKmlFolderAfter(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加文件夹之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlFolderAfter(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onRemoveKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onRemoveKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent m_onRemoveKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除文件夹之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlFolderAfter_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnRemoveKmlFolderAfter(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除文件夹之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlFolderAfter(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onAddKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onAddKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent m_onAddKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml对象之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlObjectAfter_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnAddKmlObjectAfter(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml对象之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlObjectAfter(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onRemoveKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onRemoveKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent m_onRemoveKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除kml对象后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlObjectAfter_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnRemoveKmlObjectAfter(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除kml对象后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlObjectAfter(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onAddKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onAddKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent m_onAddKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml网络链接对象事件之后响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlNetworkLinkAfter_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnAddKmlNetworkLinkAfter(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 添加kml网络链接对象事件之后响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnAddKmlNetworkLinkAfter(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onRemoveKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent(IntPtr e);

					protected onRemoveKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent m_onRemoveKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除kml网络对象之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlNetworkLinkAfter_NoVirtual(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent csobj_e = new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CKmlTreeNodeEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent;
							csobj_e.BindNativeObject(e, "CKmlTreeNodeEvent");
							csobj_e.Delegate = true;
						}
						
						bool csret=OnRemoveKmlNetworkLinkAfter(csobj_e);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 移除kml网络对象之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					public virtual bool OnRemoveKmlNetworkLinkAfter(EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEvent e)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSceneChange_CallBack_void_CEvent(IntPtr e);

					protected onSceneChange_CallBack_void_CEvent m_onSceneChange_CallBack_void_CEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 场景改变事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSceneChange_NoVirtual(EarthView.World.Core.Event e)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Function(IntPtr e)
					{
						EarthView.World.Core.Event csobj_e = new EarthView.World.Core.Event(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Core.Event;
							csobj_e.BindNativeObject(e, "CEvent");
							csobj_e.Delegate = true;
						}
						
						OnSceneChange(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 场景改变事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSceneChange(EarthView.World.Core.Event e)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCurrentToolChanged_CallBack_void_CEvent(IntPtr e);

					protected onCurrentToolChanged_CallBack_void_CEvent m_onCurrentToolChanged_CallBack_void_CEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					public virtual void OnCurrentToolChanged_NoVirtual(EarthView.World.Core.Event e)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Function(IntPtr e)
					{
						EarthView.World.Core.Event csobj_e = new EarthView.World.Core.Event(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Core.Event;
							csobj_e.BindNativeObject(e, "CEvent");
							csobj_e.Delegate = true;
						}
						
						OnCurrentToolChanged(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent(IntPtr pNativeObject, IntPtr e);

					public virtual void OnCurrentToolChanged(EarthView.World.Core.Event e)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSceneClose_CallBack_void_CEvent(IntPtr e);

					protected onSceneClose_CallBack_void_CEvent m_onSceneClose_CallBack_void_CEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 场景关闭事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSceneClose_NoVirtual(EarthView.World.Core.Event e)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Function(IntPtr e)
					{
						EarthView.World.Core.Event csobj_e = new EarthView.World.Core.Event(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Core.Event;
							csobj_e.BindNativeObject(e, "CEvent");
							csobj_e.Delegate = true;
						}
						
						OnSceneClose(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 场景关闭事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSceneClose(EarthView.World.Core.Event e)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onTourEnd_CallBack_void_CEvent(IntPtr e);

					protected onTourEnd_CallBack_void_CEvent m_onTourEnd_CallBack_void_CEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 游览结束事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnTourEnd_NoVirtual(EarthView.World.Core.Event e)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Function(IntPtr e)
					{
						EarthView.World.Core.Event csobj_e = new EarthView.World.Core.Event(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Core.Event;
							csobj_e.BindNativeObject(e, "CEvent");
							csobj_e.Delegate = true;
						}
						
						OnTourEnd(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 游览结束事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnTourEnd(EarthView.World.Core.Event e)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeCGeoObjectCenterPos_CVector3_CVector3_EVAltitudeMode_ev_real64(IntPtr pNativeObject, IntPtr centerLatLon, EarthView.World.Spatial.Utility.EVALTITUDEMODE am, double alt);

					/// <summary>
					/// 计算地理对象的中心位置
					/// </summary>
					/// <param name="centerLatLon">中心经纬度</param>
					/// <param name="am">高程模式</param>
					/// <param name="alt">高程值</param>
					/// <returns>中心位置坐标</returns>
					public EarthView.World.Spatial.Math.Vector3 ComputeCGeoObjectCenterPos(EarthView.World.Spatial.Math.Vector3 centerLatLon, EarthView.World.Spatial.Utility.EVALTITUDEMODE am, double alt)
					{
						IntPtr __ptr = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeCGeoObjectCenterPos_CVector3_CVector3_EVAltitudeMode_ev_real64(this.NativeObject, object.Equals(centerLatLon, null) ? IntPtr.Zero : centerLatLon.NativeObject, am, alt);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeRange_void_CVector3_CVector3_ev_real64(IntPtr pNativeObject, IntPtr modelPos, IntPtr cameraPos, ref double range);

					/// <summary>
					/// 计算范围
					/// </summary>
					/// <param name="modelPos">模型的位置</param>
					/// <param name="cameraPos">相机位置</param>
					/// <param name="range">范围</param>
					/// <returns></returns>			
					public void ComputeRange(EarthView.World.Spatial.Math.Vector3 modelPos, EarthView.World.Spatial.Math.Vector3 cameraPos, ref double range)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeRange_void_CVector3_CVector3_ev_real64(this.NativeObject, object.Equals(modelPos, null) ? IntPtr.Zero : modelPos.NativeObject, object.Equals(cameraPos, null) ? IntPtr.Zero : cameraPos.NativeObject, ref range);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeCameraAlt_ev_real64_CGeoObjectExtension(IntPtr pNativeObject, IntPtr geoobj);

					/// <summary>
					/// 计算高程
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <returns>返回高程值</returns>
					public double ComputeCameraAlt(EarthView.World.Spatial.Kml.GeoObjectExtension geoobj)
					{
						double ret=EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computeCameraAlt_ev_real64_CGeoObjectExtension(this.NativeObject, object.Equals(geoobj, null) ? IntPtr.Zero : geoobj.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setGlobeControlsLayers_void_AllGlobeControlLayers(IntPtr pNativeObject, IntPtr allLayers);

					/// <summary>
					/// 设置3d图层
					/// </summary>
					/// <param name="allLayers">图层s</param>
					/// <returns></returns>
					public void SetGlobeControlsLayers(EarthView.World.Spatial3DProxy.KmlManager.AllGlobeControlLayers allLayers)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setGlobeControlsLayers_void_AllGlobeControlLayers(this.NativeObject, object.Equals(allLayers, null) ? IntPtr.Zero : allLayers.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computePlacemarkView_void_CGlobeCamera_CVector3_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr camera, IntPtr pos, ref double heading, ref double tilt, ref double range);

					public void ComputePlacemarkView(EarthView.World.Spatial3D.GlobeCamera camera, ref EarthView.World.Spatial.Math.Vector3 pos, ref double heading, ref double tilt, ref double range)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_computePlacemarkView_void_CGlobeCamera_CVector3_ev_real64_ev_real64_ev_real64(this.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject, ref heading, ref tilt, ref range);
						
					}

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name="ref_layer">图层对象</param>
					/// <returns></returns>
					//CKmlTreeManager(EarthView::World::Spatial::Atlas::ILayer* ref_layer);
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name="ref_layer">图层对象</param>
					/// <returns></returns>
					public KmlTreeManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlTreeManagerProxy", null);
						if (!"EarthView.World.Spatial3DProxy.KmlManager.KmlTreeManager".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setCurrentLayer_CallBack_void_CKmlLayer(IntPtr ref_layer);

					protected setCurrentLayer_CallBack_void_CKmlLayer m_setCurrentLayer_CallBack_void_CKmlLayer;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_NoVirtual(IntPtr pNativeObject, IntPtr ref_layer);

					public virtual void SetCurrentLayer_NoVirtual(EarthView.World.Spatial3D.Atlas.KmlLayer ref_layer)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_NoVirtual(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Function(IntPtr ref_layer)
					{
						EarthView.World.Spatial3D.Atlas.KmlLayer csobj_ref_layer = new EarthView.World.Spatial3D.Atlas.KmlLayer(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_layer.BindNativeObject(ref_layer,"CKmlLayer");
						csobj_ref_layer.Delegate = true;
						IClassFactory csobj_ref_layerClassFactory = GlobalClassFactoryMap.Get(csobj_ref_layer.GetCppInstanceTypeName());
						if (csobj_ref_layerClassFactory != null)
						{
							csobj_ref_layer.Delegate = true;
							csobj_ref_layer = csobj_ref_layerClassFactory.Create() as EarthView.World.Spatial3D.Atlas.KmlLayer;
							csobj_ref_layer.BindNativeObject(ref_layer, "CKmlLayer");
							csobj_ref_layer.Delegate = true;
						}
						
						SetCurrentLayer(csobj_ref_layer);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer(IntPtr pNativeObject, IntPtr ref_layer);

					public virtual void SetCurrentLayer(EarthView.World.Spatial3D.Atlas.KmlLayer ref_layer)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer(this.NativeObject, object.Equals(ref_layer, null) ? IntPtr.Zero : ref_layer.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getCurrentLayer_CallBack_CKmlLayer();

					protected getCurrentLayer_CallBack_CKmlLayer m_getCurrentLayer_CallBack_CKmlLayer;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_NoVirtual(IntPtr pNativeObject);

					public virtual EarthView.World.Spatial3D.Atlas.KmlLayer GetCurrentLayer_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Atlas.KmlLayer csObj = new EarthView.World.Spatial3D.Atlas.KmlLayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlLayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.KmlLayer;
							csObj.BindNativeObject(__ptr, "CKmlLayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Function()
					{
						EarthView.World.Spatial3D.Atlas.KmlLayer csret=GetCurrentLayer();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer(IntPtr pNativeObject);

					public virtual EarthView.World.Spatial3D.Atlas.KmlLayer GetCurrentLayer()
					{
						IntPtr __ptr = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Atlas.KmlLayer csObj = new EarthView.World.Spatial3D.Atlas.KmlLayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlLayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.KmlLayer;
							csObj.BindNativeObject(__ptr, "CKmlLayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_loadTree_void(IntPtr pNativeObject);

					/// <summary>
					/// 加载kml树
					/// </summary>
					/// <returns></returns>
					public void LoadTree()
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_loadTree_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlFile_CKmlDocument_EVString_CKmlDocument(IntPtr pNativeObject, string filePath, IntPtr parent);

					/// <summary>
					/// 添加kml文件
					/// </summary>
					/// <param name="filePath">文件路径</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Kml.KmlDocument AddKmlFile(string filePath, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						IntPtr __ptr = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlFile_CKmlDocument_EVString_CKmlDocument(this.NativeObject, filePath, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Kml.KmlDocument csObj = new EarthView.World.Spatial.Kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlDocument");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Kml.KmlDocument;
							csObj.BindNativeObject(__ptr, "CKmlDocument");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlFile_void_EVString(IntPtr pNativeObject, string savePath);

					/// <summary>
					/// 保存kml文件
					/// </summary>
					/// <param name="savePath">文件路径</param>
					/// <returns></returns>
					public void SaveKmlFile(string savePath)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlFile_void_EVString(this.NativeObject, savePath);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveFolder_void_EVString_CKmlDocument(IntPtr pNativeObject, string savePath, IntPtr node);

					/// <summary>
					/// 保存kml文件夹
					/// </summary>
					/// <param name="savePath">文件路径</param>
					/// <param name="node">kmldoc</param>
					/// <returns></returns>
					public void SaveFolder(string savePath, EarthView.World.Spatial.Kml.KmlDocument node)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveFolder_void_EVString_CKmlDocument(this.NativeObject, savePath, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlObject_void_CGeoObjectExtension_CKmlDocument(IntPtr pNativeObject, IntPtr geoObj, IntPtr parent);

					/// <summary>
					/// 添加kml对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					public void AddKmlObject(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						if(!object.Equals(geoObj, null))
						{
						geoObj.NoFree = true;
						}
						
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlObject_void_CGeoObjectExtension_CKmlDocument(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlObject_void_CGeoObjectExtension_CKmlDocument(IntPtr pNativeObject, IntPtr geoObj, IntPtr parent);

					/// <summary>
					/// 添加kml对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					public void UpdateKmlObject(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlObject_void_CGeoObjectExtension_CKmlDocument(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlObject_void_CGeoObjectExtension_CKmlDocument(IntPtr pNativeObject, IntPtr geoObj, IntPtr parent);

					/// <summary>
					/// 移除kml对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					public void RemoveKmlObject(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlObject_void_CGeoObjectExtension_CKmlDocument(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlObject_void_EVString_CGeoObjectExtension(IntPtr pNativeObject, string savePath, IntPtr geoObj);

					/// <summary>
					/// 保存kml对象
					/// </summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="geoObj">地理对象</param>
					/// <returns></returns>				
					public void SaveKmlObject(string savePath, EarthView.World.Spatial.Kml.GeoObjectExtension geoObj)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlObject_void_EVString_CGeoObjectExtension(this.NativeObject, savePath, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlFolder_void_CKmlDocument_CKmlDocument(IntPtr pNativeObject, IntPtr folder, IntPtr parent);

					/// <summary>
					/// 添加kml文件夹
					/// </summary>
					/// <param name="folder">kml文件夹</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					public void AddKmlFolder(EarthView.World.Spatial.Kml.KmlDocument folder, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						if(!object.Equals(folder, null))
						{
						folder.NoFree = true;
						}
						
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addKmlFolder_void_CKmlDocument_CKmlDocument(this.NativeObject, object.Equals(folder, null) ? IntPtr.Zero : folder.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlFolder_void_CKmlDocument_CKmlDocument(IntPtr pNativeObject, IntPtr pKmlFolder, IntPtr pParentKmlFolder);

					/// <summary>
					/// 更新kml文件夹属性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void UpdateKmlFolder(EarthView.World.Spatial.Kml.KmlDocument pKmlFolder, EarthView.World.Spatial.Kml.KmlDocument pParentKmlFolder)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlFolder_void_CKmlDocument_CKmlDocument(this.NativeObject, object.Equals(pKmlFolder, null) ? IntPtr.Zero : pKmlFolder.NativeObject, object.Equals(pParentKmlFolder, null) ? IntPtr.Zero : pParentKmlFolder.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlFolder_void_CKmlDocument_CKmlDocument(IntPtr pNativeObject, IntPtr node, IntPtr parent);

					/// <summary>
					/// 移除kml文件夹
					/// </summary>
					/// <param name="node">kmldoc</param>
					/// <returns></returns>
					public void RemoveKmlFolder(EarthView.World.Spatial.Kml.KmlDocument node, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlFolder_void_CKmlDocument_CKmlDocument(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addTour_void_CTour_CKmlDocument(IntPtr pNativeObject, IntPtr tour, IntPtr parent);

					///zk 
					//// <summary>
					//// 添加kml游览
					//// </summary>
					//// <param name="folder">kml游览</param>
					//// <param name="parent">kmldoc</param>
					//// <returns></returns>
					public void AddTour(EarthView.World.Spatial.Kml.Tour tour, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						if(!object.Equals(tour, null))
						{
						tour.NoFree = true;
						}
						
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addTour_void_CTour_CKmlDocument(this.NativeObject, object.Equals(tour, null) ? IntPtr.Zero : tour.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeTour_void_CTour_CKmlDocument(IntPtr pNativeObject, IntPtr tour, IntPtr parent);

					/// <summary>
					/// 移除kml游览
					/// </summary>
					/// <param name="tour">游览</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>				
					public void RemoveTour(EarthView.World.Spatial.Kml.Tour tour, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeTour_void_CTour_CKmlDocument(this.NativeObject, object.Equals(tour, null) ? IntPtr.Zero : tour.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveTour_void_EVString_CTour(IntPtr pNativeObject, string savePath, IntPtr tour);

					/// <summary>
					/// 保存kml游览
					/// </summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="tour">游览对象</param>
					/// <returns></returns>
					public void SaveTour(string savePath, EarthView.World.Spatial.Kml.Tour tour)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveTour_void_EVString_CTour(this.NativeObject, savePath, object.Equals(tour, null) ? IntPtr.Zero : tour.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addNetworkLink_void_CKmlNetworkLink_CKmlDocument(IntPtr pNativeObject, IntPtr kmlNet, IntPtr parent);

					///网络链接
					//// <summary>
					//// 添加kml网络连接
					//// </summary>
					//// <param name="kmlNet">kml网络连接</param>
					//// <param name="parent">kmldoc</param>
					//// <returns></returns>
					public void AddNetworkLink(EarthView.World.Spatial.Kml.KmlNetworkLink kmlNet, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						if(!object.Equals(kmlNet, null))
						{
						kmlNet.NoFree = true;
						}
						
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_addNetworkLink_void_CKmlNetworkLink_CKmlDocument(this.NativeObject, object.Equals(kmlNet, null) ? IntPtr.Zero : kmlNet.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlNetworkLink_void_CKmlNetworkLink_CKmlDocument(IntPtr pNativeObject, IntPtr pKmlNetworkLink, IntPtr parent);

					/// <summary>
					/// 更新kml网络连接属性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void UpdateKmlNetworkLink(EarthView.World.Spatial.Kml.KmlNetworkLink pKmlNetworkLink, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_updateKmlNetworkLink_void_CKmlNetworkLink_CKmlDocument(this.NativeObject, object.Equals(pKmlNetworkLink, null) ? IntPtr.Zero : pKmlNetworkLink.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlNetworkLink_void_CKmlNetworkLink_CKmlDocument(IntPtr pNativeObject, IntPtr netLink, IntPtr parent);

					/// <summary>
					/// 移除kml网络连接
					/// </summary>
					/// <param name="kmlNet">kml网络连接</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>				
					public void RemoveKmlNetworkLink(EarthView.World.Spatial.Kml.KmlNetworkLink netLink, EarthView.World.Spatial.Kml.KmlDocument parent)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_removeKmlNetworkLink_void_CKmlNetworkLink_CKmlDocument(this.NativeObject, object.Equals(netLink, null) ? IntPtr.Zero : netLink.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlNetworkLink_void_EVString_CKmlNetworkLink(IntPtr pNativeObject, string savePath, IntPtr netLink);

					/// <summary>
					/// 保存kml网络连接
					/// </summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="netLink">kml网络连接</param>
					/// <returns></returns>
					public void SaveKmlNetworkLink(string savePath, EarthView.World.Spatial.Kml.KmlNetworkLink netLink)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_saveKmlNetworkLink_void_EVString_CKmlNetworkLink(this.NativeObject, savePath, object.Equals(netLink, null) ? IntPtr.Zero : netLink.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_d.so");
							private static bool csbLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

						#else 
							private static bool bLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy.so");
							private static bool csbLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

						#else 
							private static bool bLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadKmlTreeManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager", new KmlTreeManagerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManagerProxy", new KmlTreeManagerClassFactory());

					public KmlTreeManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent(IntPtr pObject, onRemoveSceneLayer_CallBack_ev_bool_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent(IntPtr pObject, onChangeSceneLayerName_CallBack_ev_bool_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onAddKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onUpdateKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onRemoveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onSaveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onAddKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onRemoveKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onAddKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onSaveKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onAddNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onRemoveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onSaveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onAddKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onRemoveKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onAddKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onRemoveKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onAddKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(IntPtr pObject, onRemoveKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent(IntPtr pObject, onSceneChange_CallBack_void_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent(IntPtr pObject, onCurrentToolChanged_CallBack_void_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent(IntPtr pObject, onSceneClose_CallBack_void_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent(IntPtr pObject, onTourEnd_CallBack_void_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer(IntPtr pObject, setCurrentLayer_CallBack_void_CKmlLayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer(IntPtr pObject, getCurrentLayer_CallBack_CKmlLayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onRemoveSceneLayer_CallBack_ev_bool_CSceneLayerActiveEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onRemoveSceneLayer_CallBack_ev_bool_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveSceneLayer_ev_bool_CSceneLayerActiveEvent(this.NativeObject, m_onRemoveSceneLayer_CallBack_ev_bool_CSceneLayerActiveEvent);
							m_onChangeSceneLayerName_CallBack_ev_bool_CSceneLayerActiveEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onChangeSceneLayerName_CallBack_ev_bool_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onChangeSceneLayerName_ev_bool_CSceneLayerActiveEvent(this.NativeObject, m_onChangeSceneLayerName_CallBack_ev_bool_CSceneLayerActiveEvent);
							m_onAddKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onAddKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onAddKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onUpdateKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onUpdateKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onUpdateKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onUpdateKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onRemoveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onRemoveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onRemoveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onSaveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onSaveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlObjectEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onSaveKmlObjectEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onAddKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onAddKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onAddKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onRemoveKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onRemoveKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onRemoveKmlFolderEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onAddKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onAddKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFileEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onAddKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onSaveKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onSaveKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveKmlFileEvent_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onSaveKmlFileEvent_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onAddNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onAddNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddNetworkLink_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onAddNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onRemoveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onRemoveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveNetworkLink_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onRemoveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onSaveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onSaveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSaveNetworkLink_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onSaveNetworkLink_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onAddKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onAddKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onAddKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onRemoveKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onRemoveKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlFolderAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onRemoveKmlFolderAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onAddKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onAddKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onAddKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onRemoveKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onRemoveKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlObjectAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onRemoveKmlObjectAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onAddKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onAddKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onAddKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onAddKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onRemoveKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent_Function;
							GC.KeepAlive(m_onRemoveKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onRemoveKmlNetworkLinkAfter_ev_bool_CKmlTreeNodeEvent(this.NativeObject, m_onRemoveKmlNetworkLinkAfter_CallBack_ev_bool_CKmlTreeNodeEvent);
							m_onSceneChange_CallBack_void_CEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent_Function;
							GC.KeepAlive(m_onSceneChange_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneChange_void_CEvent(this.NativeObject, m_onSceneChange_CallBack_void_CEvent);
							m_onCurrentToolChanged_CallBack_void_CEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent_Function;
							GC.KeepAlive(m_onCurrentToolChanged_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCurrentToolChanged_void_CEvent(this.NativeObject, m_onCurrentToolChanged_CallBack_void_CEvent);
							m_onSceneClose_CallBack_void_CEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent_Function;
							GC.KeepAlive(m_onSceneClose_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onSceneClose_void_CEvent(this.NativeObject, m_onSceneClose_CallBack_void_CEvent);
							m_onTourEnd_CallBack_void_CEvent = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent_Function;
							GC.KeepAlive(m_onTourEnd_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTourEnd_void_CEvent(this.NativeObject, m_onTourEnd_CallBack_void_CEvent);
							m_setCurrentLayer_CallBack_void_CKmlLayer = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer_Function;
							GC.KeepAlive(m_setCurrentLayer_CallBack_void_CKmlLayer);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_setCurrentLayer_void_CKmlLayer(this.NativeObject, m_setCurrentLayer_CallBack_void_CKmlLayer);
							m_getCurrentLayer_CallBack_CKmlLayer = EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer_Function;
							GC.KeepAlive(m_getCurrentLayer_CallBack_CKmlLayer);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_getCurrentLayer_CKmlLayer(this.NativeObject, m_getCurrentLayer_CallBack_CKmlLayer);
							m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
							GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
							m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
							GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
							m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
							GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeManager_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
						}
					}
					protected override void OnTimerEvent(EarthView.World.Core.TimerEvent e)
					{
						base.OnTimerEvent_NoVirtual(e);
					}
					protected override void OnCustomEvent(EarthView.World.Core.Event e)
					{
						base.OnCustomEvent_NoVirtual(e);
					}
					public static KmlTreeManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlTreeManager obj = baseObj as  KmlTreeManager;
						if (object.Equals(obj, null))
						{
							obj = new KmlTreeManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlTreeManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlTreeManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlTreeManager emptyInstance = new KmlTreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
