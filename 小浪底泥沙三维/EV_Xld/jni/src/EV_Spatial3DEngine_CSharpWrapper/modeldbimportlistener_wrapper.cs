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
			namespace ModelManager
			{
				public class ModelDBImportListener : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public ModelDBImportListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CModelDBImportListenerProxy", null);
						if (!"EarthView.World.Spatial3D.ModelManager.ModelDBImportListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void beginImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(ref IntPtr name, uint curNo, uint num, bool success, ref IntPtr msg);

					protected beginImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString m_beginImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString;

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
					private static extern void EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string name, uint curNo, uint num, byte success, string msg);

					/// <summary>
					/// 模型导入开始侦听函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="curNo">当前个数</param>
					/// <param name="num">总个数</param>
					/// <param success="name">是否成功</param>
					/// <param name="msg">输出信息</param>
					/// <returns></returns>
					public virtual void BeginImport_NoVirtual(string name, uint curNo, uint num, bool success, string msg)
					{
						EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(this.NativeObject, name, curNo, num, Convert.ToByte(success), msg);
						
					}

					protected  void EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Function(ref IntPtr name, uint curNo, uint num, bool success, ref IntPtr msg)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						string strmsg= Marshal.PtrToStringAnsi(msg);
						ClassFactory.FreeString(ref msg);
						
						BeginImport(strname,curNo, num, success, strmsg);
						
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(IntPtr pNativeObject, string name, uint curNo, uint num, byte success, string msg);

					/// <summary>
					/// 模型导入开始侦听函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="curNo">当前个数</param>
					/// <param name="num">总个数</param>
					/// <param success="name">是否成功</param>
					/// <param name="msg">输出信息</param>
					/// <returns></returns>
					public virtual void BeginImport(string name, uint curNo, uint num, bool success, string msg)
					{
						EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(this.NativeObject, name, curNo, num, Convert.ToByte(success), msg);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void endImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(ref IntPtr name, uint curNo, uint num, bool success, ref IntPtr msg);

					protected endImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString m_endImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString;

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
					private static extern void EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string name, uint curNo, uint num, byte success, string msg);

					/// <summary>
					/// 模型导入结束侦听函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="curNo">当前个数</param>
					/// <param name="num">总个数</param>
					/// <param success="name">是否成功</param>
					/// <param name="msg">输出信息</param>
					/// <returns></returns>
					public virtual void EndImport_NoVirtual(string name, uint curNo, uint num, bool success, string msg)
					{
						EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(this.NativeObject, name, curNo, num, Convert.ToByte(success), msg);
						
					}

					protected  void EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Function(ref IntPtr name, uint curNo, uint num, bool success, ref IntPtr msg)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						string strmsg= Marshal.PtrToStringAnsi(msg);
						ClassFactory.FreeString(ref msg);
						
						EndImport(strname,curNo, num, success, strmsg);
						
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(IntPtr pNativeObject, string name, uint curNo, uint num, byte success, string msg);

					/// <summary>
					/// 模型导入结束侦听函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="curNo">当前个数</param>
					/// <param name="num">总个数</param>
					/// <param success="name">是否成功</param>
					/// <param name="msg">输出信息</param>
					/// <returns></returns>
					public virtual void EndImport(string name, uint curNo, uint num, bool success, string msg)
					{
						EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(this.NativeObject, name, curNo, num, Convert.ToByte(success), msg);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadModelDBImportListener = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CModelDBImportListener", new ModelDBImportListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CModelDBImportListenerProxy", new ModelDBImportListenerClassFactory());

					public ModelDBImportListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(IntPtr pObject, beginImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(IntPtr pObject, endImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_beginImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString = EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Function;
							GC.KeepAlive(m_beginImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_beginImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(this.NativeObject, m_beginImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString);
							m_endImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString = EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString_Function;
							GC.KeepAlive(m_endImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelDBImportListener_endImport_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString(this.NativeObject, m_endImport_CallBack_void_EVString_ev_uint32_ev_uint32_ev_bool_EVString);
						}
					}
					public static ModelDBImportListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelDBImportListener obj = baseObj as  ModelDBImportListener;
						if (object.Equals(obj, null))
						{
							obj = new ModelDBImportListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelDBImportListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelDBImportListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelDBImportListener emptyInstance = new ModelDBImportListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
