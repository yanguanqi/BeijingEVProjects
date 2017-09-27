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
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				public class DataSourceActiveEventArr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public DataSourceActiveEventArr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("DataSourceActiveEventArr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_push_back_void_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr t);

					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					public void Push_back(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent t)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_push_back_void_CDataSourceActiveEvent(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_pop_back_void(IntPtr pNativeObject);

					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Pop_back()
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_pop_back_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_front_CDataSourceActiveEvent(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent Front()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_front_CDataSourceActiveEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceActiveEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csObj.BindNativeObject(__ptr, "CDataSourceActiveEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_back_CDataSourceActiveEvent(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent Back()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_back_CDataSourceActiveEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceActiveEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csObj.BindNativeObject(__ptr, "CDataSourceActiveEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_insert_void_ev_uint32_CDataSourceActiveEvent(IntPtr pNativeObject, uint pos, IntPtr t);

					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					public void Insert(uint pos, EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent t)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_insert_void_ev_uint32_CDataSourceActiveEvent(this.NativeObject, pos, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					public void Remove(ulong pos)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_remove_void_ev_size_t(this.NativeObject, pos);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_at_CDataSourceActiveEvent_ev_size_t(IntPtr pNativeObject, ulong n);

					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent At(ulong n)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_at_CDataSourceActiveEvent_ev_size_t(this.NativeObject, n);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceActiveEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csObj.BindNativeObject(__ptr, "CDataSourceActiveEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					public void Resize(ulong newSize)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_resize_void_ev_size_t(this.NativeObject, newSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					public void Reserve(ulong count)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_reserve_void_ev_size_t(this.NativeObject, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceActiveEventArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr", new DataSourceActiveEventArrClassFactory());

					public DataSourceActiveEventArr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DataSourceActiveEventArr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DataSourceActiveEventArr obj = baseObj as  DataSourceActiveEventArr;
						if (object.Equals(obj, null))
						{
							obj = new DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "DataSourceActiveEventArr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DataSourceActiveEventArrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DataSourceActiveEventArr emptyInstance = new DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class DataSourceURLStructArr : EarthView.World.Core.BaseObject
				{
					public DataSourceURLStructArr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("DataSourceURLStructArr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_push_back_void_CDataSourceURLStruct(IntPtr pNativeObject, IntPtr t);

					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					public void Push_back(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct t)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_push_back_void_CDataSourceURLStruct(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_pop_back_void(IntPtr pNativeObject);

					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Pop_back()
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_pop_back_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_front_CDataSourceURLStruct(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct Front()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_front_CDataSourceURLStruct(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceURLStruct");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct;
							csObj.BindNativeObject(__ptr, "CDataSourceURLStruct");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_back_CDataSourceURLStruct(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct Back()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_back_CDataSourceURLStruct(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceURLStruct");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct;
							csObj.BindNativeObject(__ptr, "CDataSourceURLStruct");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_insert_void_ev_uint32_CDataSourceURLStruct(IntPtr pNativeObject, uint pos, IntPtr t);

					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					public void Insert(uint pos, EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct t)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_insert_void_ev_uint32_CDataSourceURLStruct(this.NativeObject, pos, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					public void Remove(ulong pos)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_remove_void_ev_size_t(this.NativeObject, pos);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_at_CDataSourceURLStruct_ev_size_t(IntPtr pNativeObject, ulong n);

					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct At(ulong n)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_at_CDataSourceURLStruct_ev_size_t(this.NativeObject, n);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceURLStruct");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStruct;
							csObj.BindNativeObject(__ptr, "CDataSourceURLStruct");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					public void Resize(ulong newSize)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_resize_void_ev_size_t(this.NativeObject, newSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					public void Reserve(ulong count)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_reserve_void_ev_size_t(this.NativeObject, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceURLStructArr = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr", new DataSourceURLStructArrClassFactory());

					public DataSourceURLStructArr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DataSourceURLStructArr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DataSourceURLStructArr obj = baseObj as  DataSourceURLStructArr;
						if (object.Equals(obj, null))
						{
							obj = new DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "DataSourceURLStructArr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DataSourceURLStructArrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DataSourceURLStructArr emptyInstance = new DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class DataSourceManager : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public DataSourceManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDataSourceManagerProxy", null);
						if (!"EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getSingleton_CDataSourceManager();

					/// <summary>
					/// 获取单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>单件对象</returns>					
					public static EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager GetSingleton()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getSingleton_CDataSourceManager();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager;
							csObj.BindNativeObject(__ptr, "CDataSourceManager");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getSingletonPtr_CDataSourceManager();

					/// <summary>
					/// 获取单件对象指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>单件对象指针</returns>					
					public static EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getSingletonPtr_CDataSourceManager();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager;
							csObj.BindNativeObject(__ptr, "CDataSourceManager");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte createDataSource_CallBack_ev_bool_CDataSourceURL(IntPtr datasourceURL);

					protected createDataSource_CallBack_ev_bool_CDataSourceURL m_createDataSource_CallBack_ev_bool_CDataSourceURL;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_NoVirtual(IntPtr pNativeObject, IntPtr datasourceURL);

					///--------------------------------------------------------------------------------------------------
					//// <summary>
					//// 创建数据源
					//// </summary>
					//// <param name="datasourceURL">数据源描述</param>
					//// <returns>成功返回true否则返回false</returns>
					public virtual bool CreateDataSource_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_NoVirtual(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Function(IntPtr datasourceURL)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL csobj_datasourceURL = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_datasourceURL.BindNativeObject(datasourceURL,"CDataSourceURL");
						csobj_datasourceURL.Delegate = true;
						IClassFactory csobj_datasourceURLClassFactory = GlobalClassFactoryMap.Get(csobj_datasourceURL.GetCppInstanceTypeName());
						if (csobj_datasourceURLClassFactory != null)
						{
							csobj_datasourceURL.Delegate = true;
							csobj_datasourceURL = csobj_datasourceURLClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL;
							csobj_datasourceURL.BindNativeObject(datasourceURL, "CDataSourceURL");
							csobj_datasourceURL.Delegate = true;
						}
						
						bool csret=CreateDataSource(csobj_datasourceURL);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					///--------------------------------------------------------------------------------------------------
					//// <summary>
					//// 创建数据源
					//// </summary>
					//// <param name="datasourceURL">数据源描述</param>
					//// <returns>成功返回true否则返回false</returns>
					public virtual bool CreateDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte deleteDataSource_CallBack_ev_bool_CDataSourceURL(IntPtr datasourceURL);

					protected deleteDataSource_CallBack_ev_bool_CDataSourceURL m_deleteDataSource_CallBack_ev_bool_CDataSourceURL;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_NoVirtual(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 删除数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public virtual bool DeleteDataSource_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_NoVirtual(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Function(IntPtr datasourceURL)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL csobj_datasourceURL = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_datasourceURL.BindNativeObject(datasourceURL,"CDataSourceURL");
						csobj_datasourceURL.Delegate = true;
						IClassFactory csobj_datasourceURLClassFactory = GlobalClassFactoryMap.Get(csobj_datasourceURL.GetCppInstanceTypeName());
						if (csobj_datasourceURLClassFactory != null)
						{
							csobj_datasourceURL.Delegate = true;
							csobj_datasourceURL = csobj_datasourceURLClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL;
							csobj_datasourceURL.BindNativeObject(datasourceURL, "CDataSourceURL");
							csobj_datasourceURL.Delegate = true;
						}
						
						bool csret=DeleteDataSource(csobj_datasourceURL);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 删除数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public virtual bool DeleteDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte openDataSource_CallBack_ev_bool_CDataSourceURL(IntPtr datasourceURL);

					protected openDataSource_CallBack_ev_bool_CDataSourceURL m_openDataSource_CallBack_ev_bool_CDataSourceURL;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_NoVirtual(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public virtual bool OpenDataSource_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_NoVirtual(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Function(IntPtr datasourceURL)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL csobj_datasourceURL = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_datasourceURL.BindNativeObject(datasourceURL,"CDataSourceURL");
						csobj_datasourceURL.Delegate = true;
						IClassFactory csobj_datasourceURLClassFactory = GlobalClassFactoryMap.Get(csobj_datasourceURL.GetCppInstanceTypeName());
						if (csobj_datasourceURLClassFactory != null)
						{
							csobj_datasourceURL.Delegate = true;
							csobj_datasourceURL = csobj_datasourceURLClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL;
							csobj_datasourceURL.BindNativeObject(datasourceURL, "CDataSourceURL");
							csobj_datasourceURL.Delegate = true;
						}
						
						bool csret=OpenDataSource(csobj_datasourceURL);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public virtual bool OpenDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 关闭数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CloseDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createModelDataset_ev_bool_CDataSourceURL_EVString_CFields_ev_bool_ev_int32_ev_int32(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, IntPtr fields, byte isTemplate, int coordSysType, int coordSys);

					/// <summary>
					/// 创建模型数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="fields">数据集属性字段</param>
					/// <param name="isTemplate">是否为模板数据集</param>
					/// <param name="coordSysType">坐标系统类型</param>
					/// <param name="coordSys">坐标系统值</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateModelDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, ref EarthView.World.Spatial.GeoDataset.Fields fields, bool isTemplate, int coordSysType, int coordSys)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createModelDataset_ev_bool_CDataSourceURL_EVString_CFields_ev_bool_ev_int32_ev_int32(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject, Convert.ToByte(isTemplate), coordSysType, coordSys);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createEffectDataset_ev_bool_CDataSourceURL_EVString_ev_int32(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, int coordsys);

					/// <summary>
					/// 创建特效数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="coordsys">坐标系统</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateEffectDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, int coordsys)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createEffectDataset_ev_bool_CDataSourceURL_EVString_ev_int32(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, coordsys);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, ref EarthView.World.Spatial.Geometry.EVGEOMETRYTYPE type, ref int coordSys, IntPtr attrFields);

					/// <summary>
					/// 创建矢量数据集
					/// </summary>
					/// <param name="datasourceURL">数据集描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="type">坐标系统类型</param>
					/// <param name="coordSys">坐标系统值</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateVectorDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, EarthView.World.Spatial.Geometry.EVGEOMETRYTYPE type, int coordSys, ref EarthView.World.Spatial.GeoDataset.Fields attrFields)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, ref type, ref coordSys, object.Equals(attrFields, null) ? IntPtr.Zero : attrFields.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_EVString_CFields(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, ref EarthView.World.Spatial.Geometry.EVGEOMETRYTYPE type, string wktCoordSys, IntPtr attrFields);

					/// <summary>
					/// 创建矢量数据集
					/// </summary>
					/// <param name="datasourceURL">数据集描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="type">坐标系统类型</param>
					/// <param name="wktCoordSys">wkt坐标系</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateVectorDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, EarthView.World.Spatial.Geometry.EVGEOMETRYTYPE type, string wktCoordSys, ref EarthView.World.Spatial.GeoDataset.Fields attrFields)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_EVString_CFields(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, ref type, wktCoordSys, object.Equals(attrFields, null) ? IntPtr.Zero : attrFields.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createKmlDataset_ev_bool_CDataSourceURL_EVString(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName);

					/// <summary>
					/// 创建kml数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateKmlDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createKmlDataset_ev_bool_CDataSourceURL_EVString(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_addKmlDataset_ev_bool_CDataSourceURL_EVString(IntPtr pNativeObject, IntPtr datasourceURL, string datasetPath);

					/// <summary>
					/// 添加kml数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool AddKmlDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetPath)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_addKmlDataset_ev_bool_CDataSourceURL_EVString(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetPath);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceURL_EVString_EVDataSourceType_EVDatasetType(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE sourcetype, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE datasettype);

					/// <summary>
					/// 关闭数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="sourcetype">数据源类型</param>
					/// <param name="datasettype">数据集类型</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CloseDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE sourcetype, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE datasettype)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceURL_EVString_EVDataSourceType_EVDatasetType(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, sourcetype, datasettype);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceURL_EVDataSourceType(IntPtr pNativeObject, IntPtr datasourceURL, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE datasourcetype);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasourcetype">数据源类型</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE datasourcetype)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceURL_EVDataSourceType(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasourcetype);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDBDataSourceArr_DataSourceURLStructArr(IntPtr pNativeObject);

					/// <summary>
					/// 获取打开的数据库数据源描述列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>打开的数据库数据源描述列表</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr GetDBDataSourceArr()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDBDataSourceArr_DataSourceURLStructArr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceURLStructArr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr;
							csObj.BindNativeObject(__ptr, "DataSourceURLStructArr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getFileDataSourceArr_DataSourceURLStructArr(IntPtr pNativeObject);

					/// <summary>
					/// 获取打开的文件数据源描述列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>打开的文件数据源描述列表</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr GetFileDataSourceArr()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getFileDataSourceArr_DataSourceURLStructArr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceURLStructArr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr;
							csObj.BindNativeObject(__ptr, "DataSourceURLStructArr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getWebDataSourceArr_DataSourceURLStructArr(IntPtr pNativeObject);

					/// <summary>
					/// 获取打开的网络数据源描述列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>打开的网络数据源描述列表</returns>
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr GetWebDataSourceArr()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getWebDataSourceArr_DataSourceURLStructArr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceURLStructArr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArr;
							csObj.BindNativeObject(__ptr, "DataSourceURLStructArr");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte closeDataSource_CallBack_ev_bool_CDataSourceActiveEvent(IntPtr dataSourceEvent);

					protected closeDataSource_CallBack_ev_bool_CDataSourceActiveEvent m_closeDataSource_CallBack_ev_bool_CDataSourceActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr dataSourceEvent);

					/// <summary>
					/// 关闭一个数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CloseDataSource_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_NoVirtual(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Function(IntPtr dataSourceEvent)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_dataSourceEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSourceEvent.BindNativeObject(dataSourceEvent,"CDataSourceActiveEvent");
						csobj_dataSourceEvent.Delegate = true;
						IClassFactory csobj_dataSourceEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSourceEvent.GetCppInstanceTypeName());
						if (csobj_dataSourceEventClassFactory != null)
						{
							csobj_dataSourceEvent.Delegate = true;
							csobj_dataSourceEvent = csobj_dataSourceEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_dataSourceEvent.BindNativeObject(dataSourceEvent, "CDataSourceActiveEvent");
							csobj_dataSourceEvent.Delegate = true;
						}
						
						bool csret=CloseDataSource(csobj_dataSourceEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent);

					/// <summary>
					/// 关闭一个数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CloseDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte openDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr dataSourceEvent, IntPtr dataSetEvent);

					protected openDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent m_openDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 打开一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool OpenDataset_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function(IntPtr dataSourceEvent, IntPtr dataSetEvent)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_dataSourceEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSourceEvent.BindNativeObject(dataSourceEvent,"CDataSourceActiveEvent");
						csobj_dataSourceEvent.Delegate = true;
						IClassFactory csobj_dataSourceEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSourceEvent.GetCppInstanceTypeName());
						if (csobj_dataSourceEventClassFactory != null)
						{
							csobj_dataSourceEvent.Delegate = true;
							csobj_dataSourceEvent = csobj_dataSourceEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_dataSourceEvent.BindNativeObject(dataSourceEvent, "CDataSourceActiveEvent");
							csobj_dataSourceEvent.Delegate = true;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent csobj_dataSetEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSetEvent.BindNativeObject(dataSetEvent,"CDatasetActiveEvent");
						csobj_dataSetEvent.Delegate = true;
						IClassFactory csobj_dataSetEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSetEvent.GetCppInstanceTypeName());
						if (csobj_dataSetEventClassFactory != null)
						{
							csobj_dataSetEvent.Delegate = true;
							csobj_dataSetEvent = csobj_dataSetEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent;
							csobj_dataSetEvent.BindNativeObject(dataSetEvent, "CDatasetActiveEvent");
							csobj_dataSetEvent.Delegate = true;
						}
						
						bool csret=OpenDataset(csobj_dataSourceEvent, csobj_dataSetEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 打开一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool OpenDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte createDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr dataSourceEvent, IntPtr dataSetEvent);

					protected createDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent m_createDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 创建一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CreateDataset_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function(IntPtr dataSourceEvent, IntPtr dataSetEvent)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_dataSourceEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSourceEvent.BindNativeObject(dataSourceEvent,"CDataSourceActiveEvent");
						csobj_dataSourceEvent.Delegate = true;
						IClassFactory csobj_dataSourceEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSourceEvent.GetCppInstanceTypeName());
						if (csobj_dataSourceEventClassFactory != null)
						{
							csobj_dataSourceEvent.Delegate = true;
							csobj_dataSourceEvent = csobj_dataSourceEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_dataSourceEvent.BindNativeObject(dataSourceEvent, "CDataSourceActiveEvent");
							csobj_dataSourceEvent.Delegate = true;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent csobj_dataSetEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSetEvent.BindNativeObject(dataSetEvent,"CDatasetActiveEvent");
						csobj_dataSetEvent.Delegate = true;
						IClassFactory csobj_dataSetEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSetEvent.GetCppInstanceTypeName());
						if (csobj_dataSetEventClassFactory != null)
						{
							csobj_dataSetEvent.Delegate = true;
							csobj_dataSetEvent = csobj_dataSetEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent;
							csobj_dataSetEvent.BindNativeObject(dataSetEvent, "CDatasetActiveEvent");
							csobj_dataSetEvent.Delegate = true;
						}
						
						bool csret=CreateDataset(csobj_dataSourceEvent, csobj_dataSetEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 创建一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CreateDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte closeDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr dataSourceEvent, IntPtr dataSetEvent);

					protected closeDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent m_closeDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 关闭一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CloseDataset_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function(IntPtr dataSourceEvent, IntPtr dataSetEvent)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_dataSourceEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSourceEvent.BindNativeObject(dataSourceEvent,"CDataSourceActiveEvent");
						csobj_dataSourceEvent.Delegate = true;
						IClassFactory csobj_dataSourceEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSourceEvent.GetCppInstanceTypeName());
						if (csobj_dataSourceEventClassFactory != null)
						{
							csobj_dataSourceEvent.Delegate = true;
							csobj_dataSourceEvent = csobj_dataSourceEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_dataSourceEvent.BindNativeObject(dataSourceEvent, "CDataSourceActiveEvent");
							csobj_dataSourceEvent.Delegate = true;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent csobj_dataSetEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSetEvent.BindNativeObject(dataSetEvent,"CDatasetActiveEvent");
						csobj_dataSetEvent.Delegate = true;
						IClassFactory csobj_dataSetEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSetEvent.GetCppInstanceTypeName());
						if (csobj_dataSetEventClassFactory != null)
						{
							csobj_dataSetEvent.Delegate = true;
							csobj_dataSetEvent = csobj_dataSetEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent;
							csobj_dataSetEvent.BindNativeObject(dataSetEvent, "CDatasetActiveEvent");
							csobj_dataSetEvent.Delegate = true;
						}
						
						bool csret=CloseDataset(csobj_dataSourceEvent, csobj_dataSetEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 关闭一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CloseDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent_EVDataSourceType(IntPtr dataSourceEvent, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE dataSourceType);

					protected closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent_EVDataSourceType m_closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent_EVDataSourceType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_NoVirtual(IntPtr pNativeObject, IntPtr dataSourceEvent, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE dataSourceType);

					/// <summary>
					/// 关闭指定类型的所有数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSourceType">需要关闭的数据源类型</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CloseAllDatasets_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE dataSourceType)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_NoVirtual(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, dataSourceType);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Function(IntPtr dataSourceEvent, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE dataSourceType)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_dataSourceEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSourceEvent.BindNativeObject(dataSourceEvent,"CDataSourceActiveEvent");
						csobj_dataSourceEvent.Delegate = true;
						IClassFactory csobj_dataSourceEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSourceEvent.GetCppInstanceTypeName());
						if (csobj_dataSourceEventClassFactory != null)
						{
							csobj_dataSourceEvent.Delegate = true;
							csobj_dataSourceEvent = csobj_dataSourceEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_dataSourceEvent.BindNativeObject(dataSourceEvent, "CDataSourceActiveEvent");
							csobj_dataSourceEvent.Delegate = true;
						}
						
						bool csret=CloseAllDatasets(csobj_dataSourceEvent, dataSourceType);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType(IntPtr pNativeObject, IntPtr dataSourceEvent, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE dataSourceType);

					/// <summary>
					/// 关闭指定类型的所有数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSourceType">需要关闭的数据源类型</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE dataSourceType)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, dataSourceType);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getDataSourceName_CallBack_EVString_EVString(ref IntPtr aliasName);

					protected getDataSourceName_CallBack_EVString_EVString m_getDataSourceName_CallBack_EVString_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_NoVirtual(IntPtr pNativeObject, string aliasName);

					/// <summary>
					/// 通过数据源别名获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual string GetDataSourceName_NoVirtual(string aliasName)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_NoVirtual(this.NativeObject, aliasName);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Function(ref IntPtr aliasName)
					{
						string straliasName= Marshal.PtrToStringAnsi(aliasName);
						ClassFactory.FreeString(ref aliasName);
						
						string csret=GetDataSourceName(straliasName);
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString(IntPtr pNativeObject, string aliasName);

					/// <summary>
					/// 通过数据源别名获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual string GetDataSourceName(string aliasName)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString(this.NativeObject, aliasName);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent(IntPtr dataSourceEvent);

					protected closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent m_closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr dataSourceEvent);

					/// <summary>
					/// 关闭所有数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CloseAllDatasets_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_NoVirtual(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Function(IntPtr dataSourceEvent)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_dataSourceEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSourceEvent.BindNativeObject(dataSourceEvent,"CDataSourceActiveEvent");
						csobj_dataSourceEvent.Delegate = true;
						IClassFactory csobj_dataSourceEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSourceEvent.GetCppInstanceTypeName());
						if (csobj_dataSourceEventClassFactory != null)
						{
							csobj_dataSourceEvent.Delegate = true;
							csobj_dataSourceEvent = csobj_dataSourceEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_dataSourceEvent.BindNativeObject(dataSourceEvent, "CDataSourceActiveEvent");
							csobj_dataSourceEvent.Delegate = true;
						}
						
						bool csret=CloseAllDatasets(csobj_dataSourceEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent);

					/// <summary>
					/// 关闭所有数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					public virtual bool CloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte importData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr dataSourceEvent, IntPtr dataSetEvent);

					protected importData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent m_importData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 导入数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual bool ImportData_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function(IntPtr dataSourceEvent, IntPtr dataSetEvent)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_dataSourceEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSourceEvent.BindNativeObject(dataSourceEvent,"CDataSourceActiveEvent");
						csobj_dataSourceEvent.Delegate = true;
						IClassFactory csobj_dataSourceEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSourceEvent.GetCppInstanceTypeName());
						if (csobj_dataSourceEventClassFactory != null)
						{
							csobj_dataSourceEvent.Delegate = true;
							csobj_dataSourceEvent = csobj_dataSourceEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_dataSourceEvent.BindNativeObject(dataSourceEvent, "CDataSourceActiveEvent");
							csobj_dataSourceEvent.Delegate = true;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent csobj_dataSetEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSetEvent.BindNativeObject(dataSetEvent,"CDatasetActiveEvent");
						csobj_dataSetEvent.Delegate = true;
						IClassFactory csobj_dataSetEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSetEvent.GetCppInstanceTypeName());
						if (csobj_dataSetEventClassFactory != null)
						{
							csobj_dataSetEvent.Delegate = true;
							csobj_dataSetEvent = csobj_dataSetEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent;
							csobj_dataSetEvent.BindNativeObject(dataSetEvent, "CDatasetActiveEvent");
							csobj_dataSetEvent.Delegate = true;
						}
						
						bool csret=ImportData(csobj_dataSourceEvent, csobj_dataSetEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 导入数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual bool ImportData(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte exportData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr dataSourceEvent, IntPtr dataSetEvent);

					protected exportData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent m_exportData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 导出数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual bool ExportData_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function(IntPtr dataSourceEvent, IntPtr dataSetEvent)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_dataSourceEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSourceEvent.BindNativeObject(dataSourceEvent,"CDataSourceActiveEvent");
						csobj_dataSourceEvent.Delegate = true;
						IClassFactory csobj_dataSourceEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSourceEvent.GetCppInstanceTypeName());
						if (csobj_dataSourceEventClassFactory != null)
						{
							csobj_dataSourceEvent.Delegate = true;
							csobj_dataSourceEvent = csobj_dataSourceEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_dataSourceEvent.BindNativeObject(dataSourceEvent, "CDataSourceActiveEvent");
							csobj_dataSourceEvent.Delegate = true;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent csobj_dataSetEvent = new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataSetEvent.BindNativeObject(dataSetEvent,"CDatasetActiveEvent");
						csobj_dataSetEvent.Delegate = true;
						IClassFactory csobj_dataSetEventClassFactory = GlobalClassFactoryMap.Get(csobj_dataSetEvent.GetCppInstanceTypeName());
						if (csobj_dataSetEventClassFactory != null)
						{
							csobj_dataSetEvent.Delegate = true;
							csobj_dataSetEvent = csobj_dataSetEventClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent;
							csobj_dataSetEvent.BindNativeObject(dataSetEvent, "CDatasetActiveEvent");
							csobj_dataSetEvent.Delegate = true;
						}
						
						bool csret=ExportData(csobj_dataSourceEvent, csobj_dataSetEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 导出数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual bool ExportData(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr();

					protected getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr m_getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取所有数据集列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集列表</returns>					
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr GetDataSourceActiveEventArr_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr;
							csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Function()
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csret=GetDataSourceActiveEventArr();
						
						if (!object.Equals(csret, null))
						{
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr(IntPtr pNativeObject);

					/// <summary>
					/// 获取所有数据集列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集列表</returns>					
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr GetDataSourceActiveEventArr()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr;
							csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getInternalDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr();

					protected getInternalDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr m_getInternalDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取所有内部数据集列表引用
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集列表</returns>					
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr GetInternalDataSourceActiveEventArr_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr;
							csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Function()
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csret=GetInternalDataSourceActiveEventArr();
						
						if (!object.Equals(csret, null))
						{
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr(IntPtr pNativeObject);

					/// <summary>
					/// 获取所有内部数据集列表引用
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集列表</returns>					
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr GetInternalDataSourceActiveEventArr()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr;
							csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr_CDataSourceURL(IntPtr datasourceURL);

					protected getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr_CDataSourceURL m_getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr_CDataSourceURL;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_NoVirtual(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 获取指定数据源的数据集列表
					/// </summary>
					/// <param name="datasourceURL">数据源URL</param>
					/// <returns>数据集列表</returns>					
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr GetDataSourceActiveEventArr_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_NoVirtual(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr;
							csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Function(IntPtr datasourceURL)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL csobj_datasourceURL = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_datasourceURL.BindNativeObject(datasourceURL,"CDataSourceURL");
						csobj_datasourceURL.Delegate = true;
						IClassFactory csobj_datasourceURLClassFactory = GlobalClassFactoryMap.Get(csobj_datasourceURL.GetCppInstanceTypeName());
						if (csobj_datasourceURLClassFactory != null)
						{
							csobj_datasourceURL.Delegate = true;
							csobj_datasourceURL = csobj_datasourceURLClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL;
							csobj_datasourceURL.BindNativeObject(datasourceURL, "CDataSourceURL");
							csobj_datasourceURL.Delegate = true;
						}
						
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csret=GetDataSourceActiveEventArr(csobj_datasourceURL);
						
						if (!object.Equals(csret, null))
						{
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 获取指定数据源的数据集列表
					/// </summary>
					/// <param name="datasourceURL">数据源URL</param>
					/// <returns>数据集列表</returns>					
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr GetDataSourceActiveEventArr(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArr;
							csObj.BindNativeObject(__ptr, "DataSourceActiveEventArr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_sendActiveEvent_void_CEvent(IntPtr pEvent);

					/// <summary>
					/// 发送事件
					/// </summary>
					/// <param name="pEvent">事件对象</param>
					/// <returns></returns>					
					public static void SendActiveEvent(EarthView.World.Core.Event pEvent)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_sendActiveEvent_void_CEvent(object.Equals(pEvent, null) ? IntPtr.Zero : pEvent.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showModelManager_void_EVString(IntPtr pNativeObject, string dataSourceName);

					/// <summary>
					/// （用户）触发显示模型库管理事件。
					/// </summary>
					/// <param name="dataSourceName">数据源名称。</param>
					/// <returns></returns>
					public void ShowModelManager(string dataSourceName)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showModelManager_void_EVString(this.NativeObject, dataSourceName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showEffectManager_void_EVString(IntPtr pNativeObject, string dataSourceName);

					/// <summary>
					/// （用户）触发显示特效库管理事件。
					/// </summary>
					/// <param name="dataSourceName">数据源名称。</param>
					/// <returns></returns>
					public void ShowEffectManager(string dataSourceName)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showEffectManager_void_EVString(this.NativeObject, dataSourceName);
						
					}

					public enum COPYRETCODE
					{
										CopySuccess,
										CopyFailed
					
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_copyDataSetTo_ev_int32_EVString_EVString_EVString(IntPtr pNativeObject, string sourceSourceName, string dsName, string targetSourceName);

					/// <summary>
					/// （用户）将一个数据集从一个数据源复制到另一个数据源。
					/// </summary>
					/// <param name="sourceSourceName">源数据源名称。</param>
					/// <param name="dsName">源数据源名称。</param>
					/// <param name="targetSourceName">目标数据源名称。</param>
					/// <returns>CopyRetCode。</returns>
					public int CopyDataSetTo(string sourceSourceName, string dsName, string targetSourceName)
					{
						int ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_copyDataSetTo_ev_int32_EVString_EVString_EVString(this.NativeObject, sourceSourceName, dsName, targetSourceName);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_setLastErrorString_void_EVString(IntPtr pNativeObject, string error);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void SetLastErrorString(string error)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_setLastErrorString_void_EVString(this.NativeObject, error);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getLastErrorString_EVString(IntPtr pNativeObject);

					/// <summary>
					///  获取错误描述
					/// </summary>
					/// <returns>错误描述</returns>
					public string GetLastErrorString()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getLastErrorString_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getModelDataSourcePath_EVString_EVString(IntPtr pNativeObject, string modelDataSourceName);

					///------------其它接口--------------------------------------------------------------------------------------
					//// <summary>
					//// 获取模型数据源路径
					//// </summary>
					//// <param name="modelDataSourceName">模型数据源名称</param>
					//// <returns></returns>					
					public string GetModelDataSourcePath(string modelDataSourceName)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getModelDataSourcePath_EVString_EVString(this.NativeObject, modelDataSourceName);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDBDataSourceURL_CDataSourceURL_EVString(IntPtr pNativeObject, string datasourcename);

					/// <summary>
					/// 获取数据库数据源URL
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL GetDBDataSourceURL(string datasourcename)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDBDataSourceURL_CDataSourceURL_EVString(this.NativeObject, datasourcename);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourceURL");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL;
							csObj.BindNativeObject(__ptr, "CDataSourceURL");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataset_ev_bool_EVString_EVString(IntPtr pNativeObject, string dataSourceAliasName, string datasetName);

					/// <summary>
					/// 删除数据集，只对数据库和文件型数据集有效
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					public bool DeleteDataset(string dataSourceAliasName, string datasetName)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataset_ev_bool_EVString_EVString(this.NativeObject, dataSourceAliasName, datasetName);
						
						return Convert.ToBoolean(ret);
						
					}

					/// <summary>
					/// string interface
					/// </summary>
					public class DataSourcePropertyStringInterface : EarthView.World.Core.StringInterface
					{
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="parent">指向外部类的指针</param>
						/// <returns></returns>
						public DataSourcePropertyStringInterface(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager ref_parent) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueref_parent = new BasePtr(ref_parent);
							list.Add("ref_parent", valueref_parent.PtrVal);
							Create("CDataSourcePropertyStringInterfaceProxy", list);
							if (!"EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager+DataSourcePropertyStringInterface".Equals(((Object)this).GetType().ToString()))
							{
								this.SetCustomExtend(true);
							}
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadDataSourcePropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface", new DataSourcePropertyStringInterfaceClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterfaceProxy", new DataSourcePropertyStringInterfaceClassFactory());

						public DataSourcePropertyStringInterface(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_EVString pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList(IntPtr pObject, setParameterList_CallBack_void_CommonStringPairList pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString(IntPtr pObject, getParameter_CallBack_EVString_EVString pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface(IntPtr pObject, copyParametersTo_CallBack_void_CStringInterface pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_setParameter_CallBack_ev_bool_EVString_EVString = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Function;
								GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_EVString);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_EVString);
								m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Function;
								GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
								m_setParameterList_CallBack_void_CommonStringPairList = EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Function;
								GC.KeepAlive(m_setParameterList_CallBack_void_CommonStringPairList);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList(this.NativeObject, m_setParameterList_CallBack_void_CommonStringPairList);
								m_getParameter_CallBack_EVString_EVString = EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Function;
								GC.KeepAlive(m_getParameter_CallBack_EVString_EVString);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString(this.NativeObject, m_getParameter_CallBack_EVString_EVString);
								m_copyParametersTo_CallBack_void_CStringInterface = EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Function;
								GC.KeepAlive(m_copyParametersTo_CallBack_void_CStringInterface);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface(this.NativeObject, m_copyParametersTo_CallBack_void_CStringInterface);
							}
						}
						public override bool SetParameter(string name, string value)
						{
							return base.SetParameter_NoVirtual(name,value);
						}
						public override bool SetParameter(string name, bool readOnly, bool enable)
						{
							return base.SetParameter_NoVirtual(name,readOnly,enable);
						}
						public override void SetParameterList(EarthView.World.Core.CommonStringPairList paramList)
						{
							base.SetParameterList_NoVirtual(paramList);
						}
						public override string GetParameter(string name)
						{
							return base.GetParameter_NoVirtual(name);
						}
						public override void CopyParametersTo(EarthView.World.Core.StringInterface dest)
						{
							base.CopyParametersTo_NoVirtual(dest);
						}
						public static DataSourcePropertyStringInterface FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							DataSourcePropertyStringInterface obj = baseObj as  DataSourcePropertyStringInterface;
							if (object.Equals(obj, null))
							{
								obj = new DataSourcePropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CDataSourcePropertyStringInterface");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class DataSourcePropertyStringInterfaceClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							DataSourcePropertyStringInterface emptyInstance = new DataSourcePropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					/// <summary>
					/// string interface
					/// </summary>
					public class DataSetPropertyStringInterface : EarthView.World.Core.StringInterface
					{
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="parent">指向外部类的指针</param>
						/// <returns></returns>
						public DataSetPropertyStringInterface(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager ref_parent) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueref_parent = new BasePtr(ref_parent);
							list.Add("ref_parent", valueref_parent.PtrVal);
							Create("CDataSetPropertyStringInterfaceProxy", list);
							if (!"EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager+DataSetPropertyStringInterface".Equals(((Object)this).GetType().ToString()))
							{
								this.SetCustomExtend(true);
							}
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadDataSetPropertyStringInterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface", new DataSetPropertyStringInterfaceClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterfaceProxy", new DataSetPropertyStringInterfaceClassFactory());

						public DataSetPropertyStringInterface(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_EVString pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList(IntPtr pObject, setParameterList_CallBack_void_CommonStringPairList pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString(IntPtr pObject, getParameter_CallBack_EVString_EVString pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface(IntPtr pObject, copyParametersTo_CallBack_void_CStringInterface pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_setParameter_CallBack_ev_bool_EVString_EVString = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Function;
								GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_EVString);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_EVString);
								m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Function;
								GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
								m_setParameterList_CallBack_void_CommonStringPairList = EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Function;
								GC.KeepAlive(m_setParameterList_CallBack_void_CommonStringPairList);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList(this.NativeObject, m_setParameterList_CallBack_void_CommonStringPairList);
								m_getParameter_CallBack_EVString_EVString = EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Function;
								GC.KeepAlive(m_getParameter_CallBack_EVString_EVString);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString(this.NativeObject, m_getParameter_CallBack_EVString_EVString);
								m_copyParametersTo_CallBack_void_CStringInterface = EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Function;
								GC.KeepAlive(m_copyParametersTo_CallBack_void_CStringInterface);
								EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface(this.NativeObject, m_copyParametersTo_CallBack_void_CStringInterface);
							}
						}
						public override bool SetParameter(string name, string value)
						{
							return base.SetParameter_NoVirtual(name,value);
						}
						public override bool SetParameter(string name, bool readOnly, bool enable)
						{
							return base.SetParameter_NoVirtual(name,readOnly,enable);
						}
						public override void SetParameterList(EarthView.World.Core.CommonStringPairList paramList)
						{
							base.SetParameterList_NoVirtual(paramList);
						}
						public override string GetParameter(string name)
						{
							return base.GetParameter_NoVirtual(name);
						}
						public override void CopyParametersTo(EarthView.World.Core.StringInterface dest)
						{
							base.CopyParametersTo_NoVirtual(dest);
						}
						public static DataSetPropertyStringInterface FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							DataSetPropertyStringInterface obj = baseObj as  DataSetPropertyStringInterface;
							if (object.Equals(obj, null))
							{
								obj = new DataSetPropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CDataSetPropertyStringInterface");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class DataSetPropertyStringInterfaceClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							DataSetPropertyStringInterface emptyInstance = new DataSetPropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDataSourcePropertyStringInterfacePtr_CallBack_CDataSourcePropertyStringInterface();

					protected getDataSourcePropertyStringInterfacePtr_CallBack_CDataSourcePropertyStringInterface m_getDataSourcePropertyStringInterfacePtr_CallBack_CDataSourcePropertyStringInterface;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获得数据源属性内部类的指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回内部类的指针</returns>
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface GetDataSourcePropertyStringInterfacePtr_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourcePropertyStringInterface");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface;
							csObj.BindNativeObject(__ptr, "CDataSourcePropertyStringInterface");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Function()
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface csret=GetDataSourcePropertyStringInterfacePtr();
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface(IntPtr pNativeObject);

					/// <summary>
					/// 获得数据源属性内部类的指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回内部类的指针</returns>
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface GetDataSourcePropertyStringInterfacePtr()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSourcePropertyStringInterface");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterface;
							csObj.BindNativeObject(__ptr, "CDataSourcePropertyStringInterface");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDataSetPropertyStringInterfacePtr_CallBack_CDataSetPropertyStringInterface();

					protected getDataSetPropertyStringInterfacePtr_CallBack_CDataSetPropertyStringInterface m_getDataSetPropertyStringInterfacePtr_CallBack_CDataSetPropertyStringInterface;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据集属性内部类指针
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface GetDataSetPropertyStringInterfacePtr_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSetPropertyStringInterface");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface;
							csObj.BindNativeObject(__ptr, "CDataSetPropertyStringInterface");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Function()
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface csret=GetDataSetPropertyStringInterfacePtr();
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据集属性内部类指针
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface GetDataSetPropertyStringInterfacePtr()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataSetPropertyStringInterface");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterface;
							csObj.BindNativeObject(__ptr, "CDataSetPropertyStringInterface");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					/// <summary>
					/// 数据源树节点的类型
					/// </summary>
					public enum SELECTEDDATASOURCETYPE
					{
										SDST_NoSelected,
										SDST_FileDataSourceRootItem,
										SDST_DBDataSourceRootItem,
										SDST_WebDataSourceRootItem
					
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showDataSourceProperty_void_EVString_SelectedDataSourceType(IntPtr pNativeObject, string datasourcename, EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.SELECTEDDATASOURCETYPE datasourcetype);

					/// <summary>
					/// 数据源树节点点击响应
					/// </summary>
					/// <param name="datasourcename">数据源名称</param>
					/// <param name="datasourcetype">数据源类别</param>
					/// <returns></returns>					
					public void ShowDataSourceProperty(string datasourcename, EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.SELECTEDDATASOURCETYPE datasourcetype)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showDataSourceProperty_void_EVString_SelectedDataSourceType(this.NativeObject, datasourcename, datasourcetype);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showDataSetProperty_void_EVString_SelectedDataSourceType_EVString(IntPtr pNativeObject, string datasourcename, EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.SELECTEDDATASOURCETYPE datasourcetype, string datasetname);

					/// <summary>
					///  数据集树节点点击响应
					/// </summary>
					/// <param name="datasourcename">数据源名称</param>
					/// <param name="datasourcetype">数据源类别</param>
					/// <param name="datasetname">数据集名</param>
					/// <returns></returns>
					public void ShowDataSetProperty(string datasourcename, EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.SELECTEDDATASOURCETYPE datasourcetype, string datasetname)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showDataSetProperty_void_EVString_SelectedDataSourceType_EVString(this.NativeObject, datasourcename, datasourcetype, datasetname);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_strDatasetType_EVString_EVDatasetType(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

					/// <summary>
					///  根据类别返回类别描述
					/// </summary>
					/// <param name="type">数据集类别</param>
					/// <returns></returns>						
					public static string StrDatasetType(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_strDatasetType_EVString_EVDatasetType(type);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_strCoordSys_EVString_ev_int32_ev_int32(int coordSys, int type);

					/// <summary>
					///  根据空间参考返回描述
					/// </summary>
					/// <param name="coordSys">投影坐标系统</param>
					/// <param name="type">0：EVWellKnownGeoCSType 系统， 1：EVWellKnownProjCSType 系统</param>
					/// <returns></returns>						
					public static string StrCoordSys(int coordSys, int type)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_strCoordSys_EVString_ev_int32_ev_int32(coordSys, type);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager", new DataSourceManagerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManagerProxy", new DataSourceManagerClassFactory());

					public DataSourceManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL(IntPtr pObject, createDataSource_CallBack_ev_bool_CDataSourceURL pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL(IntPtr pObject, deleteDataSource_CallBack_ev_bool_CDataSourceURL pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL(IntPtr pObject, openDataSource_CallBack_ev_bool_CDataSourceURL pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent(IntPtr pObject, closeDataSource_CallBack_ev_bool_CDataSourceActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pObject, openDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pObject, createDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pObject, closeDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType(IntPtr pObject, closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent_EVDataSourceType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString(IntPtr pObject, getDataSourceName_CallBack_EVString_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent(IntPtr pObject, closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pObject, importData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pObject, exportData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr(IntPtr pObject, getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr(IntPtr pObject, getInternalDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL(IntPtr pObject, getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr_CDataSourceURL pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface(IntPtr pObject, getDataSourcePropertyStringInterfacePtr_CallBack_CDataSourcePropertyStringInterface pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface(IntPtr pObject, getDataSetPropertyStringInterfacePtr_CallBack_CDataSetPropertyStringInterface pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_createDataSource_CallBack_ev_bool_CDataSourceURL = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Function;
							GC.KeepAlive(m_createDataSource_CallBack_ev_bool_CDataSourceURL);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL(this.NativeObject, m_createDataSource_CallBack_ev_bool_CDataSourceURL);
							m_deleteDataSource_CallBack_ev_bool_CDataSourceURL = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Function;
							GC.KeepAlive(m_deleteDataSource_CallBack_ev_bool_CDataSourceURL);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL(this.NativeObject, m_deleteDataSource_CallBack_ev_bool_CDataSourceURL);
							m_openDataSource_CallBack_ev_bool_CDataSourceURL = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Function;
							GC.KeepAlive(m_openDataSource_CallBack_ev_bool_CDataSourceURL);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL(this.NativeObject, m_openDataSource_CallBack_ev_bool_CDataSourceURL);
							m_closeDataSource_CallBack_ev_bool_CDataSourceActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Function;
							GC.KeepAlive(m_closeDataSource_CallBack_ev_bool_CDataSourceActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent(this.NativeObject, m_closeDataSource_CallBack_ev_bool_CDataSourceActiveEvent);
							m_openDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function;
							GC.KeepAlive(m_openDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, m_openDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							m_createDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function;
							GC.KeepAlive(m_createDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, m_createDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							m_closeDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function;
							GC.KeepAlive(m_closeDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, m_closeDataset_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							m_closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent_EVDataSourceType = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Function;
							GC.KeepAlive(m_closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent_EVDataSourceType);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType(this.NativeObject, m_closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent_EVDataSourceType);
							m_getDataSourceName_CallBack_EVString_EVString = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Function;
							GC.KeepAlive(m_getDataSourceName_CallBack_EVString_EVString);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString(this.NativeObject, m_getDataSourceName_CallBack_EVString_EVString);
							m_closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Function;
							GC.KeepAlive(m_closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent(this.NativeObject, m_closeAllDatasets_CallBack_ev_bool_CDataSourceActiveEvent);
							m_importData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function;
							GC.KeepAlive(m_importData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, m_importData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							m_exportData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Function;
							GC.KeepAlive(m_exportData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, m_exportData_CallBack_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent);
							m_getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Function;
							GC.KeepAlive(m_getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr(this.NativeObject, m_getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr);
							m_getInternalDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Function;
							GC.KeepAlive(m_getInternalDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr(this.NativeObject, m_getInternalDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr);
							m_getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr_CDataSourceURL = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Function;
							GC.KeepAlive(m_getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr_CDataSourceURL);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL(this.NativeObject, m_getDataSourceActiveEventArr_CallBack_DataSourceActiveEventArr_CDataSourceURL);
							m_getDataSourcePropertyStringInterfacePtr_CallBack_CDataSourcePropertyStringInterface = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Function;
							GC.KeepAlive(m_getDataSourcePropertyStringInterfacePtr_CallBack_CDataSourcePropertyStringInterface);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface(this.NativeObject, m_getDataSourcePropertyStringInterfacePtr_CallBack_CDataSourcePropertyStringInterface);
							m_getDataSetPropertyStringInterfacePtr_CallBack_CDataSetPropertyStringInterface = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Function;
							GC.KeepAlive(m_getDataSetPropertyStringInterfacePtr_CallBack_CDataSetPropertyStringInterface);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface(this.NativeObject, m_getDataSetPropertyStringInterfacePtr_CallBack_CDataSetPropertyStringInterface);
						}
					}
					public static DataSourceManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DataSourceManager obj = baseObj as  DataSourceManager;
						if (object.Equals(obj, null))
						{
							obj = new DataSourceManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDataSourceManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DataSourceManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DataSourceManager emptyInstance = new DataSourceManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
