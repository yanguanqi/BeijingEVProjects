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
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 数据交换进程监听类
				/// </summary>
				public class ModelDataExchangeListener : EarthView.World.Core.AllocatedObject
				{
					public ModelDataExchangeListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CModelDataExchangeListenerProxy", null);
						if (!"EarthView.World.Spatial3D.DataExchange.ModelDataExchangeListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void processLog_CallBack_void_EVString(ref IntPtr info);

					protected processLog_CallBack_void_EVString m_processLog_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_NoVirtual(IntPtr pNativeObject, string info);

					/// <summary>
					/// 数据导入时日志信息（回调）
					/// <param name="info">信息</param>
					/// </summary>
					/// <returns></returns>
					public virtual void ProcessLog_NoVirtual(string info)
					{
						EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_NoVirtual(this.NativeObject, info);
						
					}

					protected  void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Function(ref IntPtr info)
					{
						string strinfo= Marshal.PtrToStringAnsi(info);
						ClassFactory.FreeString(ref info);
						
						ProcessLog(strinfo);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString(IntPtr pNativeObject, string info);

					/// <summary>
					/// 数据导入时日志信息（回调）
					/// <param name="info">信息</param>
					/// </summary>
					/// <returns></returns>
					public virtual void ProcessLog(string info)
					{
						EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString(this.NativeObject, info);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getCurrentCount_CallBack_void_ev_int32_ev_int32(int num, int count);

					protected getCurrentCount_CallBack_void_ev_int32_ev_int32 m_getCurrentCount_CallBack_void_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int num, int count);

					/// <summary>
					/// 数据导入时当前进度（回调）
					/// <param name="num">总个数</param>
					/// <param name="count">当前第几个</param>
					/// </summary>
					/// <returns></returns>
					public virtual void GetCurrentCount_NoVirtual(int num, int count)
					{
						EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_NoVirtual(this.NativeObject, num, count);
						
					}

					protected  void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Function(int num, int count)
					{
						GetCurrentCount(num, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32(IntPtr pNativeObject, int num, int count);

					/// <summary>
					/// 数据导入时当前进度（回调）
					/// <param name="num">总个数</param>
					/// <param name="count">当前第几个</param>
					/// </summary>
					/// <returns></returns>
					public virtual void GetCurrentCount(int num, int count)
					{
						EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32(this.NativeObject, num, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void pauseOrStop_CallBack_void_EVString(ref IntPtr info);

					protected pauseOrStop_CallBack_void_EVString m_pauseOrStop_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_NoVirtual(IntPtr pNativeObject, string info);

					/// <summary>
					/// 结束、暂停信息（回调）
					/// <param name="info">信息</param>
					/// </summary>
					/// <returns></returns>
					public virtual void PauseOrStop_NoVirtual(string info)
					{
						EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_NoVirtual(this.NativeObject, info);
						
					}

					protected  void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Function(ref IntPtr info)
					{
						string strinfo= Marshal.PtrToStringAnsi(info);
						ClassFactory.FreeString(ref info);
						
						PauseOrStop(strinfo);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString(IntPtr pNativeObject, string info);

					/// <summary>
					/// 结束、暂停信息（回调）
					/// <param name="info">信息</param>
					/// </summary>
					/// <returns></returns>
					public virtual void PauseOrStop(string info)
					{
						EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString(this.NativeObject, info);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_d.so");
							private static bool csbLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange.so");
							private static bool csbLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.so");

						#else 
							private static bool bLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadModelDataExchangeListener = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener", new ModelDataExchangeListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListenerProxy", new ModelDataExchangeListenerClassFactory());

					public ModelDataExchangeListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString(IntPtr pObject, processLog_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32(IntPtr pObject, getCurrentCount_CallBack_void_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString(IntPtr pObject, pauseOrStop_CallBack_void_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_processLog_CallBack_void_EVString = EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Function;
							GC.KeepAlive(m_processLog_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString(this.NativeObject, m_processLog_CallBack_void_EVString);
							m_getCurrentCount_CallBack_void_ev_int32_ev_int32 = EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_getCurrentCount_CallBack_void_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32(this.NativeObject, m_getCurrentCount_CallBack_void_ev_int32_ev_int32);
							m_pauseOrStop_CallBack_void_EVString = EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Function;
							GC.KeepAlive(m_pauseOrStop_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString(this.NativeObject, m_pauseOrStop_CallBack_void_EVString);
						}
					}
					public static ModelDataExchangeListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelDataExchangeListener obj = baseObj as  ModelDataExchangeListener;
						if (object.Equals(obj, null))
						{
							obj = new ModelDataExchangeListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelDataExchangeListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelDataExchangeListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelDataExchangeListener emptyInstance = new ModelDataExchangeListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
