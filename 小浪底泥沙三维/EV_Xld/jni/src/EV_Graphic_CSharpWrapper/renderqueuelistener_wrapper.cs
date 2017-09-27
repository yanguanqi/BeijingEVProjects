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
		namespace Graphic
		{
			/// <summary>
			/// 如果希望从渲染队列中获得事件就必须执行该抽象接口
			/// </summary>
			public class RenderQueueListener : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public RenderQueueListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CRenderQueueListenerProxy", null);
					if (!"EarthView.World.Graphic.RenderQueueListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void preRenderQueues_CallBack_void();

				protected preRenderQueues_CallBack_void m_preRenderQueues_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 在所有渲染队列被执行前事件通知
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void PreRenderQueues_NoVirtual()
				{
					EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Function()
				{
					PreRenderQueues();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void(IntPtr pNativeObject);

				/// <summary>
				/// 在所有渲染队列被执行前事件通知
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void PreRenderQueues()
				{
					EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postRenderQueues_CallBack_void();

				protected postRenderQueues_CallBack_void m_postRenderQueues_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 在所有渲染队列被执行后事件通知
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void PostRenderQueues_NoVirtual()
				{
					EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Function()
				{
					PostRenderQueues();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void(IntPtr pNativeObject);

				/// <summary>
				/// 在所有渲染队列被执行后事件通知
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void PostRenderQueues()
				{
					EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renderQueueStarted_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool(IntPtr pSceneMgr, byte queueGroupId, ref IntPtr invocation, ref byte skipThisInvocation);

				protected renderQueueStarted_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool m_renderQueueStarted_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr pSceneMgr, byte queueGroupId, string invocation, ref bool skipThisInvocation);

				/// <summary>
				/// 在渲染队列组被渲染之前事件通知
				/// </summary>
				/// <param name="queueGroupId">队列组的ID号</param>
				/// <param name="invocation"></param>
				/// <param name="skipThisInvocation"></param>
				/// <returns></returns>
				public virtual void RenderQueueStarted_NoVirtual(EarthView.World.Graphic.SceneManager pSceneMgr, byte queueGroupId, string invocation, ref bool skipThisInvocation)
				{
					EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(this.NativeObject, object.Equals(pSceneMgr, null) ? IntPtr.Zero : pSceneMgr.NativeObject, queueGroupId, invocation, ref skipThisInvocation);
					
				}

				protected  void EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Function(IntPtr pSceneMgr, byte queueGroupId, ref IntPtr invocation, ref byte skipThisInvocation)
				{
					EarthView.World.Graphic.SceneManager csobj_pSceneMgr = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pSceneMgr.BindNativeObject(pSceneMgr,"CSceneManager");
					csobj_pSceneMgr.Delegate = true;
					IClassFactory csobj_pSceneMgrClassFactory = GlobalClassFactoryMap.Get(csobj_pSceneMgr.GetCppInstanceTypeName());
					if (csobj_pSceneMgrClassFactory != null)
					{
						csobj_pSceneMgr.Delegate = true;
						csobj_pSceneMgr = csobj_pSceneMgrClassFactory.Create() as EarthView.World.Graphic.SceneManager;
						csobj_pSceneMgr.BindNativeObject(pSceneMgr, "CSceneManager");
						csobj_pSceneMgr.Delegate = true;
					}
					string strinvocation= Marshal.PtrToStringAnsi(invocation);
					ClassFactory.FreeString(ref invocation);
					bool skipThisInvocationBool = Convert.ToBoolean(skipThisInvocation);
					
					RenderQueueStarted(csobj_pSceneMgr, queueGroupId, strinvocation,ref skipThisInvocationBool);
					
					skipThisInvocation = Convert.ToByte(skipThisInvocationBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(IntPtr pNativeObject, IntPtr pSceneMgr, byte queueGroupId, string invocation, ref bool skipThisInvocation);

				/// <summary>
				/// 在渲染队列组被渲染之前事件通知
				/// </summary>
				/// <param name="queueGroupId">队列组的ID号</param>
				/// <param name="invocation"></param>
				/// <param name="skipThisInvocation"></param>
				/// <returns></returns>
				public virtual void RenderQueueStarted(EarthView.World.Graphic.SceneManager pSceneMgr, byte queueGroupId, string invocation, ref bool skipThisInvocation)
				{
					EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(this.NativeObject, object.Equals(pSceneMgr, null) ? IntPtr.Zero : pSceneMgr.NativeObject, queueGroupId, invocation, ref skipThisInvocation);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void renderQueueEnded_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool(IntPtr pSceneMgr, byte queueGroupId, ref IntPtr invocation, ref byte repeatThisInvocation);

				protected renderQueueEnded_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool m_renderQueueEnded_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr pSceneMgr, byte queueGroupId, string invocation, ref bool repeatThisInvocation);

				/// <summary>
				/// 在渲染队列组被渲染之后事件通知
				/// </summary>
				/// <param name="queueGroupId">队列组的ID号</param>
				/// <param name="invocation"></param>
				/// <param name="skipThisInvocation"></param>
				/// <returns></returns>
				public virtual void RenderQueueEnded_NoVirtual(EarthView.World.Graphic.SceneManager pSceneMgr, byte queueGroupId, string invocation, ref bool repeatThisInvocation)
				{
					EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(this.NativeObject, object.Equals(pSceneMgr, null) ? IntPtr.Zero : pSceneMgr.NativeObject, queueGroupId, invocation, ref repeatThisInvocation);
					
				}

				protected  void EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Function(IntPtr pSceneMgr, byte queueGroupId, ref IntPtr invocation, ref byte repeatThisInvocation)
				{
					EarthView.World.Graphic.SceneManager csobj_pSceneMgr = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pSceneMgr.BindNativeObject(pSceneMgr,"CSceneManager");
					csobj_pSceneMgr.Delegate = true;
					IClassFactory csobj_pSceneMgrClassFactory = GlobalClassFactoryMap.Get(csobj_pSceneMgr.GetCppInstanceTypeName());
					if (csobj_pSceneMgrClassFactory != null)
					{
						csobj_pSceneMgr.Delegate = true;
						csobj_pSceneMgr = csobj_pSceneMgrClassFactory.Create() as EarthView.World.Graphic.SceneManager;
						csobj_pSceneMgr.BindNativeObject(pSceneMgr, "CSceneManager");
						csobj_pSceneMgr.Delegate = true;
					}
					string strinvocation= Marshal.PtrToStringAnsi(invocation);
					ClassFactory.FreeString(ref invocation);
					bool repeatThisInvocationBool = Convert.ToBoolean(repeatThisInvocation);
					
					RenderQueueEnded(csobj_pSceneMgr, queueGroupId, strinvocation,ref repeatThisInvocationBool);
					
					repeatThisInvocation = Convert.ToByte(repeatThisInvocationBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(IntPtr pNativeObject, IntPtr pSceneMgr, byte queueGroupId, string invocation, ref bool repeatThisInvocation);

				/// <summary>
				/// 在渲染队列组被渲染之后事件通知
				/// </summary>
				/// <param name="queueGroupId">队列组的ID号</param>
				/// <param name="invocation"></param>
				/// <param name="skipThisInvocation"></param>
				/// <returns></returns>
				public virtual void RenderQueueEnded(EarthView.World.Graphic.SceneManager pSceneMgr, byte queueGroupId, string invocation, ref bool repeatThisInvocation)
				{
					EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(this.NativeObject, object.Equals(pSceneMgr, null) ? IntPtr.Zero : pSceneMgr.NativeObject, queueGroupId, invocation, ref repeatThisInvocation);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderQueueListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderQueueListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderQueueListener = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderQueueListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderQueueListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderQueueListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderQueueListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderQueueListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderQueueListener = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderQueueListener = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderQueueListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderQueueListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueueListener", new RenderQueueListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueueListenerProxy", new RenderQueueListenerClassFactory());

				public RenderQueueListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void(IntPtr pObject, preRenderQueues_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void(IntPtr pObject, postRenderQueues_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(IntPtr pObject, renderQueueStarted_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(IntPtr pObject, renderQueueEnded_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_preRenderQueues_CallBack_void = EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Function;
						GC.KeepAlive(m_preRenderQueues_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void(this.NativeObject, m_preRenderQueues_CallBack_void);
						m_postRenderQueues_CallBack_void = EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Function;
						GC.KeepAlive(m_postRenderQueues_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void(this.NativeObject, m_postRenderQueues_CallBack_void);
						m_renderQueueStarted_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool = EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Function;
						GC.KeepAlive(m_renderQueueStarted_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(this.NativeObject, m_renderQueueStarted_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool);
						m_renderQueueEnded_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool = EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Function;
						GC.KeepAlive(m_renderQueueEnded_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(this.NativeObject, m_renderQueueEnded_CallBack_void_CSceneManager_ev_uint8_EVString_ev_bool);
					}
				}
				public static RenderQueueListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderQueueListener obj = baseObj as  RenderQueueListener;
					if (object.Equals(obj, null))
					{
						obj = new RenderQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderQueueListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderQueueListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderQueueListener emptyInstance = new RenderQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
