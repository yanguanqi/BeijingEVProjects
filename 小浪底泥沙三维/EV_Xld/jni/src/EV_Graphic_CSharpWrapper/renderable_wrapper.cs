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
			/// 抽象类
			///定义所有渲染实体必须应用的接口
			/// </summary>
			public class Renderable : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 内部类，只能在渲染系统内部使用
				/// </summary>
				public class RenderSystemData : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RenderSystemData() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRenderSystemData",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadRenderSystemData = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadRenderSystemData = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRenderSystemData = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadRenderSystemData = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadRenderSystemData = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadRenderSystemData = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRenderSystemData = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadRenderSystemData = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadRenderSystemData = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadRenderSystemData = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadRenderSystemData = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadRenderSystemData = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderable::CRenderSystemData", new RenderSystemDataClassFactory());

					public RenderSystemData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RenderSystemData FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RenderSystemData obj = baseObj as  RenderSystemData;
						if (object.Equals(obj, null))
						{
							obj = new RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRenderSystemData");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RenderSystemDataClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RenderSystemData emptyInstance = new RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// renderable对象监听类
				/// 此类是对renderable对象事件的响应，
				/// </summary>
				public class RenderableListener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RenderableListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRenderableListenerProxy", null);
						if (!"EarthView.World.Graphic.Renderable+RenderableListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte preRender_CallBack_ev_bool_CSceneManager_CRenderSystem_CRenderable(IntPtr sm, IntPtr rsys, IntPtr renderable);

					protected preRender_CallBack_ev_bool_CSceneManager_CRenderSystem_CRenderable m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem_CRenderable;

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
					private static extern byte EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_NoVirtual(IntPtr pNativeObject, IntPtr sm, IntPtr rsys, IntPtr renderable);

					/// <summary>
					/// 渲染开始时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
					public virtual bool PreRender_NoVirtual(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys, EarthView.World.Graphic.Renderable renderable)
					{
						byte ret=EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_NoVirtual(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(rsys, null) ? IntPtr.Zero : rsys.NativeObject, object.Equals(renderable, null) ? IntPtr.Zero : renderable.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Function(IntPtr sm, IntPtr rsys, IntPtr renderable)
					{
						EarthView.World.Graphic.SceneManager csobj_sm = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_sm.BindNativeObject(sm,"CSceneManager");
						csobj_sm.Delegate = true;
						IClassFactory csobj_smClassFactory = GlobalClassFactoryMap.Get(csobj_sm.GetCppInstanceTypeName());
						if (csobj_smClassFactory != null)
						{
							csobj_sm.Delegate = true;
							csobj_sm = csobj_smClassFactory.Create() as EarthView.World.Graphic.SceneManager;
							csobj_sm.BindNativeObject(sm, "CSceneManager");
							csobj_sm.Delegate = true;
						}
						EarthView.World.Graphic.RenderSystem csobj_rsys = new EarthView.World.Graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rsys.BindNativeObject(rsys,"CRenderSystem");
						csobj_rsys.Delegate = true;
						IClassFactory csobj_rsysClassFactory = GlobalClassFactoryMap.Get(csobj_rsys.GetCppInstanceTypeName());
						if (csobj_rsysClassFactory != null)
						{
							csobj_rsys.Delegate = true;
							csobj_rsys = csobj_rsysClassFactory.Create() as EarthView.World.Graphic.RenderSystem;
							csobj_rsys.BindNativeObject(rsys, "CRenderSystem");
							csobj_rsys.Delegate = true;
						}
						EarthView.World.Graphic.Renderable csobj_renderable = new EarthView.World.Graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_renderable.BindNativeObject(renderable,"CRenderable");
						csobj_renderable.Delegate = true;
						IClassFactory csobj_renderableClassFactory = GlobalClassFactoryMap.Get(csobj_renderable.GetCppInstanceTypeName());
						if (csobj_renderableClassFactory != null)
						{
							csobj_renderable.Delegate = true;
							csobj_renderable = csobj_renderableClassFactory.Create() as EarthView.World.Graphic.Renderable;
							csobj_renderable.BindNativeObject(renderable, "CRenderable");
							csobj_renderable.Delegate = true;
						}
						
						bool csret=PreRender(csobj_sm, csobj_rsys, csobj_renderable);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(IntPtr pNativeObject, IntPtr sm, IntPtr rsys, IntPtr renderable);

					/// <summary>
					/// 渲染开始时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
					public virtual bool PreRender(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys, EarthView.World.Graphic.Renderable renderable)
					{
						byte ret=EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(rsys, null) ? IntPtr.Zero : rsys.NativeObject, object.Equals(renderable, null) ? IntPtr.Zero : renderable.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void postRender_CallBack_void_CSceneManager_CRenderSystem_CRenderable(IntPtr sm, IntPtr rsys, IntPtr renderable);

					protected postRender_CallBack_void_CSceneManager_CRenderSystem_CRenderable m_postRender_CallBack_void_CSceneManager_CRenderSystem_CRenderable;

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
					private static extern void EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_NoVirtual(IntPtr pNativeObject, IntPtr sm, IntPtr rsys, IntPtr renderable);

					/// <summary>
					/// 渲染完成时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns></returns>
					public virtual void PostRender_NoVirtual(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys, EarthView.World.Graphic.Renderable renderable)
					{
						EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_NoVirtual(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(rsys, null) ? IntPtr.Zero : rsys.NativeObject, object.Equals(renderable, null) ? IntPtr.Zero : renderable.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Function(IntPtr sm, IntPtr rsys, IntPtr renderable)
					{
						EarthView.World.Graphic.SceneManager csobj_sm = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_sm.BindNativeObject(sm,"CSceneManager");
						csobj_sm.Delegate = true;
						IClassFactory csobj_smClassFactory = GlobalClassFactoryMap.Get(csobj_sm.GetCppInstanceTypeName());
						if (csobj_smClassFactory != null)
						{
							csobj_sm.Delegate = true;
							csobj_sm = csobj_smClassFactory.Create() as EarthView.World.Graphic.SceneManager;
							csobj_sm.BindNativeObject(sm, "CSceneManager");
							csobj_sm.Delegate = true;
						}
						EarthView.World.Graphic.RenderSystem csobj_rsys = new EarthView.World.Graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rsys.BindNativeObject(rsys,"CRenderSystem");
						csobj_rsys.Delegate = true;
						IClassFactory csobj_rsysClassFactory = GlobalClassFactoryMap.Get(csobj_rsys.GetCppInstanceTypeName());
						if (csobj_rsysClassFactory != null)
						{
							csobj_rsys.Delegate = true;
							csobj_rsys = csobj_rsysClassFactory.Create() as EarthView.World.Graphic.RenderSystem;
							csobj_rsys.BindNativeObject(rsys, "CRenderSystem");
							csobj_rsys.Delegate = true;
						}
						EarthView.World.Graphic.Renderable csobj_renderable = new EarthView.World.Graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_renderable.BindNativeObject(renderable,"CRenderable");
						csobj_renderable.Delegate = true;
						IClassFactory csobj_renderableClassFactory = GlobalClassFactoryMap.Get(csobj_renderable.GetCppInstanceTypeName());
						if (csobj_renderableClassFactory != null)
						{
							csobj_renderable.Delegate = true;
							csobj_renderable = csobj_renderableClassFactory.Create() as EarthView.World.Graphic.Renderable;
							csobj_renderable.BindNativeObject(renderable, "CRenderable");
							csobj_renderable.Delegate = true;
						}
						
						PostRender(csobj_sm, csobj_rsys, csobj_renderable);
						
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
					private static extern void EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(IntPtr pNativeObject, IntPtr sm, IntPtr rsys, IntPtr renderable);

					/// <summary>
					/// 渲染完成时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns></returns>
					public virtual void PostRender(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys, EarthView.World.Graphic.Renderable renderable)
					{
						EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(rsys, null) ? IntPtr.Zero : rsys.NativeObject, object.Equals(renderable, null) ? IntPtr.Zero : renderable.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void destroyed_CallBack_void_CRenderable(IntPtr renderable);

					protected destroyed_CallBack_void_CRenderable m_destroyed_CallBack_void_CRenderable;

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
					private static extern void EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_NoVirtual(IntPtr pNativeObject, IntPtr renderable);

					/// <summary>
					/// 销毁向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns></returns>
					public virtual void Destroyed_NoVirtual(EarthView.World.Graphic.Renderable renderable)
					{
						EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_NoVirtual(this.NativeObject, object.Equals(renderable, null) ? IntPtr.Zero : renderable.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Function(IntPtr renderable)
					{
						EarthView.World.Graphic.Renderable csobj_renderable = new EarthView.World.Graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_renderable.BindNativeObject(renderable,"CRenderable");
						csobj_renderable.Delegate = true;
						IClassFactory csobj_renderableClassFactory = GlobalClassFactoryMap.Get(csobj_renderable.GetCppInstanceTypeName());
						if (csobj_renderableClassFactory != null)
						{
							csobj_renderable.Delegate = true;
							csobj_renderable = csobj_renderableClassFactory.Create() as EarthView.World.Graphic.Renderable;
							csobj_renderable.BindNativeObject(renderable, "CRenderable");
							csobj_renderable.Delegate = true;
						}
						
						Destroyed(csobj_renderable);
						
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
					private static extern void EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable(IntPtr pNativeObject, IntPtr renderable);

					/// <summary>
					/// 销毁向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns></returns>
					public virtual void Destroyed(EarthView.World.Graphic.Renderable renderable)
					{
						EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable(this.NativeObject, object.Equals(renderable, null) ? IntPtr.Zero : renderable.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderable::CRenderableListener", new RenderableListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderable::CRenderableListenerProxy", new RenderableListenerClassFactory());

					public RenderableListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(IntPtr pObject, preRender_CallBack_ev_bool_CSceneManager_CRenderSystem_CRenderable pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(IntPtr pObject, postRender_CallBack_void_CSceneManager_CRenderSystem_CRenderable pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable(IntPtr pObject, destroyed_CallBack_void_CRenderable pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem_CRenderable = EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Function;
							GC.KeepAlive(m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem_CRenderable);
							EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(this.NativeObject, m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem_CRenderable);
							m_postRender_CallBack_void_CSceneManager_CRenderSystem_CRenderable = EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Function;
							GC.KeepAlive(m_postRender_CallBack_void_CSceneManager_CRenderSystem_CRenderable);
							EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(this.NativeObject, m_postRender_CallBack_void_CSceneManager_CRenderSystem_CRenderable);
							m_destroyed_CallBack_void_CRenderable = EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Function;
							GC.KeepAlive(m_destroyed_CallBack_void_CRenderable);
							EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable(this.NativeObject, m_destroyed_CallBack_void_CRenderable);
						}
					}
					public static RenderableListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RenderableListener obj = baseObj as  RenderableListener;
						if (object.Equals(obj, null))
						{
							obj = new RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRenderableListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RenderableListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RenderableListener emptyInstance = new RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public Renderable() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CRenderableProxy", null);
					if (!"EarthView.World.Graphic.Renderable".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getMaterial_CallBack_CMaterialPtr();

				protected getMaterial_CallBack_CMaterialPtr m_getMaterial_CallBack_CMaterialPtr;

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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得材质
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MaterialPtr GetMaterial_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MaterialPtr csObj = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMaterialPtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
						csObj.BindNativeObject(__ptr, "CMaterialPtr");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Function()
				{
					EarthView.World.Graphic.MaterialPtr csret=GetMaterial();
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr(IntPtr pNativeObject);

				/// <summary>
				/// 获得材质
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MaterialPtr GetMaterial()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MaterialPtr csObj = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMaterialPtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
						csObj.BindNativeObject(__ptr, "CMaterialPtr");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getTechnique_CallBack_CTechnique();

				protected getTechnique_CallBack_CTechnique m_getTechnique_CallBack_CTechnique;

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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得技术
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.Technique GetTechnique_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Technique csObj = new EarthView.World.Graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTechnique");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Technique;
						csObj.BindNativeObject(__ptr, "CTechnique");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Function()
				{
					EarthView.World.Graphic.Technique csret=GetTechnique();
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getTechnique_CTechnique(IntPtr pNativeObject);

				/// <summary>
				/// 获得技术
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.Technique GetTechnique()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getTechnique_CTechnique(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Technique csObj = new EarthView.World.Graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTechnique");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Technique;
						csObj.BindNativeObject(__ptr, "CTechnique");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getRenderOperation_CallBack_void_CRenderOperation(IntPtr op);

				protected getRenderOperation_CallBack_void_CRenderOperation m_getRenderOperation_CallBack_void_CRenderOperation;

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
				private static extern void EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_NoVirtual(IntPtr pNativeObject, IntPtr op);

				/// <summary>
				/// 获得渲染操作
				/// </summary>
				/// <param name="op"></param>
				/// <returns></returns>
				public virtual void GetRenderOperation_NoVirtual(ref EarthView.World.Graphic.RenderOperation op)
				{
					EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_NoVirtual(this.NativeObject, object.Equals(op, null) ? IntPtr.Zero : op.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Function(IntPtr op)
				{
					EarthView.World.Graphic.RenderOperation csobj_op = new EarthView.World.Graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_op.BindNativeObject(op,"CRenderOperation");
					csobj_op.Delegate = true;
					IClassFactory csobj_opClassFactory = GlobalClassFactoryMap.Get(csobj_op.GetCppInstanceTypeName());
					if (csobj_opClassFactory != null)
					{
						csobj_op.Delegate = true;
						csobj_op = csobj_opClassFactory.Create() as EarthView.World.Graphic.RenderOperation;
						csobj_op.BindNativeObject(op, "CRenderOperation");
						csobj_op.Delegate = true;
					}
					
					GetRenderOperation(ref csobj_op);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation(IntPtr pNativeObject, IntPtr op);

				/// <summary>
				/// 获得渲染操作
				/// </summary>
				/// <param name="op"></param>
				/// <returns></returns>
				public virtual void GetRenderOperation(ref EarthView.World.Graphic.RenderOperation op)
				{
					EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation(this.NativeObject, object.Equals(op, null) ? IntPtr.Zero : op.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte preRender_CallBack_ev_bool_CSceneManager_CRenderSystem(IntPtr sm, IntPtr rsys);

				protected preRender_CallBack_ev_bool_CSceneManager_CRenderSystem m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem;

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
				private static extern byte EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_NoVirtual(IntPtr pNativeObject, IntPtr sm, IntPtr rsys);

				/// <summary>
				/// 渲染开始时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
				public virtual bool PreRender_NoVirtual(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys)
				{
					byte ret=EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_NoVirtual(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(rsys, null) ? IntPtr.Zero : rsys.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Function(IntPtr sm, IntPtr rsys)
				{
					EarthView.World.Graphic.SceneManager csobj_sm = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_sm.BindNativeObject(sm,"CSceneManager");
					csobj_sm.Delegate = true;
					IClassFactory csobj_smClassFactory = GlobalClassFactoryMap.Get(csobj_sm.GetCppInstanceTypeName());
					if (csobj_smClassFactory != null)
					{
						csobj_sm.Delegate = true;
						csobj_sm = csobj_smClassFactory.Create() as EarthView.World.Graphic.SceneManager;
						csobj_sm.BindNativeObject(sm, "CSceneManager");
						csobj_sm.Delegate = true;
					}
					EarthView.World.Graphic.RenderSystem csobj_rsys = new EarthView.World.Graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rsys.BindNativeObject(rsys,"CRenderSystem");
					csobj_rsys.Delegate = true;
					IClassFactory csobj_rsysClassFactory = GlobalClassFactoryMap.Get(csobj_rsys.GetCppInstanceTypeName());
					if (csobj_rsysClassFactory != null)
					{
						csobj_rsys.Delegate = true;
						csobj_rsys = csobj_rsysClassFactory.Create() as EarthView.World.Graphic.RenderSystem;
						csobj_rsys.BindNativeObject(rsys, "CRenderSystem");
						csobj_rsys.Delegate = true;
					}
					
					bool csret=PreRender(csobj_sm, csobj_rsys);
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(IntPtr pNativeObject, IntPtr sm, IntPtr rsys);

				/// <summary>
				/// 渲染开始时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
				public virtual bool PreRender(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys)
				{
					byte ret=EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(rsys, null) ? IntPtr.Zero : rsys.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postRender_CallBack_void_CSceneManager_CRenderSystem(IntPtr sm, IntPtr rsys);

				protected postRender_CallBack_void_CSceneManager_CRenderSystem m_postRender_CallBack_void_CSceneManager_CRenderSystem;

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
				private static extern void EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_NoVirtual(IntPtr pNativeObject, IntPtr sm, IntPtr rsys);

				/// <summary>
				/// 渲染完成时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns></returns>
				public virtual void PostRender_NoVirtual(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys)
				{
					EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_NoVirtual(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(rsys, null) ? IntPtr.Zero : rsys.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Function(IntPtr sm, IntPtr rsys)
				{
					EarthView.World.Graphic.SceneManager csobj_sm = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_sm.BindNativeObject(sm,"CSceneManager");
					csobj_sm.Delegate = true;
					IClassFactory csobj_smClassFactory = GlobalClassFactoryMap.Get(csobj_sm.GetCppInstanceTypeName());
					if (csobj_smClassFactory != null)
					{
						csobj_sm.Delegate = true;
						csobj_sm = csobj_smClassFactory.Create() as EarthView.World.Graphic.SceneManager;
						csobj_sm.BindNativeObject(sm, "CSceneManager");
						csobj_sm.Delegate = true;
					}
					EarthView.World.Graphic.RenderSystem csobj_rsys = new EarthView.World.Graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rsys.BindNativeObject(rsys,"CRenderSystem");
					csobj_rsys.Delegate = true;
					IClassFactory csobj_rsysClassFactory = GlobalClassFactoryMap.Get(csobj_rsys.GetCppInstanceTypeName());
					if (csobj_rsysClassFactory != null)
					{
						csobj_rsys.Delegate = true;
						csobj_rsys = csobj_rsysClassFactory.Create() as EarthView.World.Graphic.RenderSystem;
						csobj_rsys.BindNativeObject(rsys, "CRenderSystem");
						csobj_rsys.Delegate = true;
					}
					
					PostRender(csobj_sm, csobj_rsys);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem(IntPtr pNativeObject, IntPtr sm, IntPtr rsys);

				/// <summary>
				/// 渲染完成时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns></returns>
				public virtual void PostRender(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys)
				{
					EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(rsys, null) ? IntPtr.Zero : rsys.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getWorldTransforms_CallBack_void_CMatrix4(IntPtr xform);

				protected getWorldTransforms_CallBack_void_CMatrix4 m_getWorldTransforms_CallBack_void_CMatrix4;

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
				private static extern void EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(IntPtr pNativeObject, IntPtr xform);

				/// <summary>
				/// 获得渲染对象的世界变换矩阵
				/// </summary>
				/// <param name="xform"></param>
				/// <returns></returns>
				public virtual void GetWorldTransforms_NoVirtual(EarthView.World.Spatial.Math.Matrix4 xform)
				{
					EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(this.NativeObject, object.Equals(xform, null) ? IntPtr.Zero : xform.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Function(IntPtr xform)
				{
					EarthView.World.Spatial.Math.Matrix4 csobj_xform = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_xform.BindNativeObject(xform,"CMatrix4");
					csobj_xform.Delegate = true;
					IClassFactory csobj_xformClassFactory = GlobalClassFactoryMap.Get(csobj_xform.GetCppInstanceTypeName());
					if (csobj_xformClassFactory != null)
					{
						csobj_xform.Delegate = true;
						csobj_xform = csobj_xformClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csobj_xform.BindNativeObject(xform, "CMatrix4");
						csobj_xform.Delegate = true;
					}
					
					GetWorldTransforms(csobj_xform);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4(IntPtr pNativeObject, IntPtr xform);

				/// <summary>
				/// 获得渲染对象的世界变换矩阵
				/// </summary>
				/// <param name="xform"></param>
				/// <returns></returns>
				public virtual void GetWorldTransforms(EarthView.World.Spatial.Math.Matrix4 xform)
				{
					EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4(this.NativeObject, object.Equals(xform, null) ? IntPtr.Zero : xform.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort getNumWorldTransforms_CallBack_ev_uint16();

				protected getNumWorldTransforms_CallBack_ev_uint16 m_getNumWorldTransforms_CallBack_ev_uint16;

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
				private static extern ushort EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得渲染对象的世界变换矩阵的数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual ushort GetNumWorldTransforms_NoVirtual()
				{
					ushort ret=EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Function()
				{
					ushort csret=GetNumWorldTransforms();
					
					return csret;
					
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
				private static extern ushort EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 获得渲染对象的世界变换矩阵的数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual ushort GetNumWorldTransforms()
				{
					ushort ret=EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16(this.NativeObject);
					
					return ret;
					
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
				private static extern void EarthView_World_Graphic_CRenderable_setUseIdentityProjection_void_ev_bool(IntPtr pNativeObject, byte useIdentityProjection);

				/// <summary>
				/// 设置是否使用单位投影矩阵
				/// </summary>
				/// <param name="useIdentityProjection"></param>
				/// <returns></returns>
				public void SetUseIdentityProjection(bool useIdentityProjection)
				{
					EarthView_World_Graphic_CRenderable_setUseIdentityProjection_void_ev_bool(this.NativeObject, Convert.ToByte(useIdentityProjection));
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_getUseIdentityProjection_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 返回是否使用单位投影矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns>需要统一投影返回true否则返回false</returns>
				public bool GetUseIdentityProjection()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getUseIdentityProjection_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_setCustomProjection_void_ev_bool(IntPtr pNativeObject, byte customProjection);

				/// <summary>
				/// 设置是否使用用自定义投影
				/// </summary>
				/// <param name="useIdentityProjection">设置的状态参数</param>
				/// <returns>需要统一投影设置为true否则返回false</returns>
				public void SetCustomProjection(bool customProjection)
				{
					EarthView_World_Graphic_CRenderable_setCustomProjection_void_ev_bool(this.NativeObject, Convert.ToByte(customProjection));
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_getCustomProjection_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 返回是否使用用自定义投影
				/// </summary>
				/// <param name=""></param>
				/// <returns>需要统一投影返回true否则返回false</returns>
				public bool GetCustomProjection()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getCustomProjection_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_setUseIdentityView_void_ev_bool(IntPtr pNativeObject, byte useIdentityView);

				/// <summary>
				/// 设置是否使用单位观察矩阵
				/// </summary>
				/// <param name="useIdentityView"></param>
				/// <returns></returns>
				public void SetUseIdentityView(bool useIdentityView)
				{
					EarthView_World_Graphic_CRenderable_setUseIdentityView_void_ev_bool(this.NativeObject, Convert.ToByte(useIdentityView));
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_getUseIdentityView_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 返回是否使用单位观察矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public bool GetUseIdentityView()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getUseIdentityView_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getSquaredViewDepth_CallBack_Real_CCamera(IntPtr cam);

				protected getSquaredViewDepth_CallBack_Real_CCamera m_getSquaredViewDepth_CallBack_Real_CCamera;

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
				private static extern double EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_NoVirtual(IntPtr pNativeObject, IntPtr cam);

				/// <summary>
				/// 返回渲染实体相对虚拟相机的观察深度的平方
				/// </summary>
				/// <param name="cam"></param>
				/// <returns</returns>
				public virtual double GetSquaredViewDepth_NoVirtual(EarthView.World.Graphic.Camera cam)
				{
					double ret=EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_NoVirtual(this.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Function(IntPtr cam)
				{
					EarthView.World.Graphic.Camera csobj_cam = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_cam.BindNativeObject(cam,"CCamera");
					csobj_cam.Delegate = true;
					IClassFactory csobj_camClassFactory = GlobalClassFactoryMap.Get(csobj_cam.GetCppInstanceTypeName());
					if (csobj_camClassFactory != null)
					{
						csobj_cam.Delegate = true;
						csobj_cam = csobj_camClassFactory.Create() as EarthView.World.Graphic.Camera;
						csobj_cam.BindNativeObject(cam, "CCamera");
						csobj_cam.Delegate = true;
					}
					
					double csret=GetSquaredViewDepth(csobj_cam);
					
					return csret;
					
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
				private static extern double EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera(IntPtr pNativeObject, IntPtr cam);

				/// <summary>
				/// 返回渲染实体相对虚拟相机的观察深度的平方
				/// </summary>
				/// <param name="cam"></param>
				/// <returns</returns>
				public virtual double GetSquaredViewDepth(EarthView.World.Graphic.Camera cam)
				{
					double ret=EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera(this.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getLights_CallBack_LightList();

				protected getLights_CallBack_LightList m_getLights_CallBack_LightList;

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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getLights_LightList_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得光照的列表，按照相对于渲染实体的远近排列
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.LightList GetLights_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getLights_LightList_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.LightList csObj = new EarthView.World.Graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "LightList");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.LightList;
						csObj.BindNativeObject(__ptr, "LightList");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CRenderable_getLights_LightList_Function()
				{
					EarthView.World.Graphic.LightList csret=GetLights();
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getLights_LightList(IntPtr pNativeObject);

				/// <summary>
				/// 获得光照的列表，按照相对于渲染实体的远近排列
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.LightList GetLights()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getLights_LightList(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.LightList csObj = new EarthView.World.Graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "LightList");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.LightList;
						csObj.BindNativeObject(__ptr, "LightList");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getCastsShadows_CallBack_ev_bool();

				protected getCastsShadows_CallBack_ev_bool m_getCastsShadows_CallBack_ev_bool;

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
				private static extern byte EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 是否投射投影
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool GetCastsShadows_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Function()
				{
					bool csret=GetCastsShadows();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否投射投影
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool GetCastsShadows()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_setCustomParameter_void_ev_size_t_CVector4(IntPtr pNativeObject, ulong index, IntPtr value);

				/// <summary>
				/// 设置渲染接口的自定义参数，它可以用来获得特殊渲染的计算，如GPU参数
				/// </summary>
				/// <param name="index">值的索引</param>
				/// <param name="value">四维向量值</param>
				/// <returns></returns>
				public void SetCustomParameter(ulong index, EarthView.World.Spatial.Math.Vector4 value)
				{
					EarthView_World_Graphic_CRenderable_setCustomParameter_void_ev_size_t_CVector4(this.NativeObject, index, object.Equals(value, null) ? IntPtr.Zero : value.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_removeCustomParameter_void_size_t(IntPtr pNativeObject, ulong index);

				public void RemoveCustomParameter(ulong index)
				{
					EarthView_World_Graphic_CRenderable_removeCustomParameter_void_size_t(this.NativeObject, index);
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_hasCustomParameter_bool_size_t(IntPtr pNativeObject, ulong index);

				public bool HasCustomParameter(ulong index)
				{
					byte ret=EarthView_World_Graphic_CRenderable_hasCustomParameter_bool_size_t(this.NativeObject, index);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getCustomParameter_CVector4_ev_size_t(IntPtr pNativeObject, ulong index);

				/// <summary>
				/// 获得和已给索引相关联的定制值
				/// </summary>
				/// <param name="index">值的索引</param>
				/// <returns></returns>
				public EarthView.World.Spatial.Math.Vector4 GetCustomParameter(ulong index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getCustomParameter_CVector4_ev_size_t(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Vector4 csObj = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVector4");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csObj.BindNativeObject(__ptr, "CVector4");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters(IntPtr constantEntry, IntPtr EVparams);

				protected _updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters;

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
				private static extern void EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(IntPtr pNativeObject, IntPtr constantEntry, IntPtr EVparams);

				/// <summary>
				/// 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
				/// </summary>
				/// <param name="constantEntry">CAutoConstantEntry的别名</param>
				/// <param name="params">EarthView::World::Graphic::CGpuProgramParameters的指针</param>
				/// <returns></returns>
				public virtual void _updateCustomGpuParameter_NoVirtual(EarthView.World.Graphic.GpuProgramParameters.AutoConstantEntry constantEntry, EarthView.World.Graphic.GpuProgramParameters EVparams)
				{
					EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(this.NativeObject, object.Equals(constantEntry, null) ? IntPtr.Zero : constantEntry.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Function(IntPtr constantEntry, IntPtr EVparams)
				{
					EarthView.World.Graphic.GpuProgramParameters.AutoConstantEntry csobj_constantEntry = new EarthView.World.Graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_constantEntry.BindNativeObject(constantEntry,"CAutoConstantEntry");
					csobj_constantEntry.Delegate = true;
					IClassFactory csobj_constantEntryClassFactory = GlobalClassFactoryMap.Get(csobj_constantEntry.GetCppInstanceTypeName());
					if (csobj_constantEntryClassFactory != null)
					{
						csobj_constantEntry.Delegate = true;
						csobj_constantEntry = csobj_constantEntryClassFactory.Create() as EarthView.World.Graphic.GpuProgramParameters.AutoConstantEntry;
						csobj_constantEntry.BindNativeObject(constantEntry, "CAutoConstantEntry");
						csobj_constantEntry.Delegate = true;
					}
					EarthView.World.Graphic.GpuProgramParameters csobj_params = new EarthView.World.Graphic.GpuProgramParameters(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_params.BindNativeObject(EVparams,"CGpuProgramParameters");
					csobj_params.Delegate = true;
					IClassFactory csobj_paramsClassFactory = GlobalClassFactoryMap.Get(csobj_params.GetCppInstanceTypeName());
					if (csobj_paramsClassFactory != null)
					{
						csobj_params.Delegate = true;
						csobj_params = csobj_paramsClassFactory.Create() as EarthView.World.Graphic.GpuProgramParameters;
						csobj_params.BindNativeObject(EVparams, "CGpuProgramParameters");
						csobj_params.Delegate = true;
					}
					
					_updateCustomGpuParameter(csobj_constantEntry, csobj_params);
					
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
				private static extern void EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(IntPtr pNativeObject, IntPtr constantEntry, IntPtr EVparams);

				/// <summary>
				/// 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
				/// </summary>
				/// <param name="constantEntry">CAutoConstantEntry的别名</param>
				/// <param name="params">EarthView::World::Graphic::CGpuProgramParameters的指针</param>
				/// <returns></returns>
				public virtual void _updateCustomGpuParameter(EarthView.World.Graphic.GpuProgramParameters.AutoConstantEntry constantEntry, EarthView.World.Graphic.GpuProgramParameters EVparams)
				{
					EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(this.NativeObject, object.Equals(constantEntry, null) ? IntPtr.Zero : constantEntry.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPolygonModeOverrideable_CallBack_void_ev_bool(bool EVoverride);

				protected setPolygonModeOverrideable_CallBack_void_ev_bool m_setPolygonModeOverrideable_CallBack_void_ev_bool;

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
				private static extern void EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte EVoverride);

				/// <summary>
				/// 设置多边形渲染方式是否可重写
				/// </summary>
				/// <param name="override">设置参数</param>
				/// <returns>true可以超越，false不可以</returns>
				public virtual void SetPolygonModeOverrideable_NoVirtual(bool EVoverride)
				{
					EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(EVoverride));
					
				}

				protected  void EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Function(bool EVoverride)
				{
					SetPolygonModeOverrideable(EVoverride);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool(IntPtr pNativeObject, byte EVoverride);

				/// <summary>
				/// 设置多边形渲染方式是否可重写
				/// </summary>
				/// <param name="override">设置参数</param>
				/// <returns>true可以超越，false不可以</returns>
				public virtual void SetPolygonModeOverrideable(bool EVoverride)
				{
					EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool(this.NativeObject, Convert.ToByte(EVoverride));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getPolygonModeOverrideable_CallBack_ev_bool();

				protected getPolygonModeOverrideable_CallBack_ev_bool m_getPolygonModeOverrideable_CallBack_ev_bool;

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
				private static extern byte EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得多边形渲染方式是否可重写
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool GetPolygonModeOverrideable_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Function()
				{
					bool csret=GetPolygonModeOverrideable();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获得多边形渲染方式是否可重写
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool GetPolygonModeOverrideable()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setCustomAmbient_CallBack_void_CColourValue(IntPtr ambient);

				protected setCustomAmbient_CallBack_void_CColourValue m_setCustomAmbient_CallBack_void_CColourValue;

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
				private static extern void EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_NoVirtual(IntPtr pNativeObject, IntPtr ambient);

				/// <summary>
				/// 设置自定义环境光系数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetCustomAmbient_NoVirtual(EarthView.World.Graphic.ColourValue ambient)
				{
					EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_NoVirtual(this.NativeObject, object.Equals(ambient, null) ? IntPtr.Zero : ambient.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Function(IntPtr ambient)
				{
					EarthView.World.Graphic.ColourValue csobj_ambient = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ambient.BindNativeObject(ambient,"CColourValue");
					csobj_ambient.Delegate = true;
					IClassFactory csobj_ambientClassFactory = GlobalClassFactoryMap.Get(csobj_ambient.GetCppInstanceTypeName());
					if (csobj_ambientClassFactory != null)
					{
						csobj_ambient.Delegate = true;
						csobj_ambient = csobj_ambientClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csobj_ambient.BindNativeObject(ambient, "CColourValue");
						csobj_ambient.Delegate = true;
					}
					
					SetCustomAmbient(csobj_ambient);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue(IntPtr pNativeObject, IntPtr ambient);

				/// <summary>
				/// 设置自定义环境光系数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetCustomAmbient(EarthView.World.Graphic.ColourValue ambient)
				{
					EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue(this.NativeObject, object.Equals(ambient, null) ? IntPtr.Zero : ambient.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getCustomAmbient_CallBack_CColourValue();

				protected getCustomAmbient_CallBack_CColourValue m_getCustomAmbient_CallBack_CColourValue;

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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取自定义环境光系数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ColourValue GetCustomAmbient_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Function()
				{
					EarthView.World.Graphic.ColourValue csret=GetCustomAmbient();
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue(IntPtr pNativeObject);

				/// <summary>
				/// 获取自定义环境光系数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ColourValue GetCustomAmbient()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getCustomAmbientEnabled_CallBack_bool();

				protected getCustomAmbientEnabled_CallBack_bool m_getCustomAmbientEnabled_CallBack_bool;

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
				private static extern byte EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取自定义环境光系数是否启用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool GetCustomAmbientEnabled_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Function()
				{
					bool csret=GetCustomAmbientEnabled();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取自定义环境光系数是否启用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool GetCustomAmbientEnabled()
				{
					byte ret=EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setCustomAmbientEnabled_CallBack_void_ev_bool(bool enabled);

				protected setCustomAmbientEnabled_CallBack_void_ev_bool m_setCustomAmbientEnabled_CallBack_void_ev_bool;

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
				private static extern void EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte enabled);

				/// <summary>
				/// 设置自定义环境光系数是否启用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetCustomAmbientEnabled_NoVirtual(bool enabled)
				{
					EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(enabled));
					
				}

				protected  void EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Function(bool enabled)
				{
					SetCustomAmbientEnabled(enabled);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool(IntPtr pNativeObject, byte enabled);

				/// <summary>
				/// 设置自定义环境光系数是否启用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetCustomAmbientEnabled(bool enabled)
				{
					EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool(this.NativeObject, Convert.ToByte(enabled));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getMovableObject_CallBack_CMovableObject();

				protected getMovableObject_CallBack_CMovableObject m_getMovableObject_CallBack_CMovableObject;

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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.MovableObject GetMovableObject_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MovableObject csObj = new EarthView.World.Graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMovableObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject;
						csObj.BindNativeObject(__ptr, "CMovableObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Function()
				{
					EarthView.World.Graphic.MovableObject csret=GetMovableObject();
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.MovableObject GetMovableObject()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MovableObject csObj = new EarthView.World.Graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMovableObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject;
						csObj.BindNativeObject(__ptr, "CMovableObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addListener_CallBack_void_CRenderableListener(IntPtr ref_listener);

				protected addListener_CallBack_void_CRenderableListener m_addListener_CallBack_void_CRenderableListener;

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
				private static extern void EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_listener);

				/// <summary>
				/// 添加监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				public virtual void AddListener_NoVirtual(EarthView.World.Graphic.Renderable.RenderableListener ref_listener)
				{
					EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_NoVirtual(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Function(IntPtr ref_listener)
				{
					EarthView.World.Graphic.Renderable.RenderableListener csobj_ref_listener = new EarthView.World.Graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_listener.BindNativeObject(ref_listener,"CRenderableListener");
					csobj_ref_listener.Delegate = true;
					IClassFactory csobj_ref_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_ref_listener.GetCppInstanceTypeName());
					if (csobj_ref_listenerClassFactory != null)
					{
						csobj_ref_listener.Delegate = true;
						csobj_ref_listener = csobj_ref_listenerClassFactory.Create() as EarthView.World.Graphic.Renderable.RenderableListener;
						csobj_ref_listener.BindNativeObject(ref_listener, "CRenderableListener");
						csobj_ref_listener.Delegate = true;
					}
					
					AddListener(csobj_ref_listener);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener(IntPtr pNativeObject, IntPtr ref_listener);

				/// <summary>
				/// 添加监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				public virtual void AddListener(EarthView.World.Graphic.Renderable.RenderableListener ref_listener)
				{
					EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeListener_CallBack_void_CRenderableListener(IntPtr listener);

				protected removeListener_CallBack_void_CRenderableListener m_removeListener_CallBack_void_CRenderableListener;

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
				private static extern void EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

				/// <summary>
				/// 移除监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				public virtual void RemoveListener_NoVirtual(EarthView.World.Graphic.Renderable.RenderableListener listener)
				{
					EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Function(IntPtr listener)
				{
					EarthView.World.Graphic.Renderable.RenderableListener csobj_listener = new EarthView.World.Graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CRenderableListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.Renderable.RenderableListener;
						csobj_listener.BindNativeObject(listener, "CRenderableListener");
						csobj_listener.Delegate = true;
					}
					
					RemoveListener(csobj_listener);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener(IntPtr pNativeObject, IntPtr listener);

				/// <summary>
				/// 移除监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				public virtual void RemoveListener(EarthView.World.Graphic.Renderable.RenderableListener listener)
				{
					EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte existListener_CallBack_ev_bool_CRenderableListener(IntPtr listener);

				protected existListener_CallBack_ev_bool_CRenderableListener m_existListener_CallBack_ev_bool_CRenderableListener;

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
				private static extern byte EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

				/// <summary>
				/// 添加监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				public virtual bool ExistListener_NoVirtual(EarthView.World.Graphic.Renderable.RenderableListener listener)
				{
					byte ret=EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Function(IntPtr listener)
				{
					EarthView.World.Graphic.Renderable.RenderableListener csobj_listener = new EarthView.World.Graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CRenderableListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.Renderable.RenderableListener;
						csobj_listener.BindNativeObject(listener, "CRenderableListener");
						csobj_listener.Delegate = true;
					}
					
					bool csret=ExistListener(csobj_listener);
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener(IntPtr pNativeObject, IntPtr listener);

				/// <summary>
				/// 添加监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				public virtual bool ExistListener(EarthView.World.Graphic.Renderable.RenderableListener listener)
				{
					byte ret=EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate uint getListenerCount_CallBack_ev_uint32();

				protected getListenerCount_CallBack_ev_uint32 m_getListenerCount_CallBack_ev_uint32;

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
				private static extern uint EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取监听器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual uint GetListenerCount_NoVirtual()
				{
					uint ret=EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  uint EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Function()
				{
					uint csret=GetListenerCount();
					
					return csret;
					
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
				private static extern uint EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取监听器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual uint GetListenerCount()
				{
					uint ret=EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getListener_CallBack_CRenderableListener_ev_uint32(uint index);

				protected getListener_CallBack_CRenderableListener_ev_uint32 m_getListener_CallBack_CRenderableListener_ev_uint32;

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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取监听器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.Renderable.RenderableListener GetListener_NoVirtual(uint index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_NoVirtual(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Renderable.RenderableListener csObj = new EarthView.World.Graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderableListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Renderable.RenderableListener;
						csObj.BindNativeObject(__ptr, "CRenderableListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Function(uint index)
				{
					EarthView.World.Graphic.Renderable.RenderableListener csret=GetListener(index);
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取监听器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.Renderable.RenderableListener GetListener(uint index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Renderable.RenderableListener csObj = new EarthView.World.Graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderableListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Renderable.RenderableListener;
						csObj.BindNativeObject(__ptr, "CRenderableListener");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getUserObjectBindings_CUserObjectBindings(IntPtr pNativeObject);

				/// <summary>
				/// 返回一个绑定对象和类相关的实例，可以用这个类的实例联系一个或多个自定义的对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.UserObjectBindings GetUserObjectBindings()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getUserObjectBindings_CUserObjectBindings(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.UserObjectBindings csObj = new EarthView.World.Graphic.UserObjectBindings(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserObjectBindings");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.UserObjectBindings;
						csObj.BindNativeObject(__ptr, "CUserObjectBindings");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				/// <summary>
				/// CVistor对象被用来迭代抽象渲染接口实例的集合
				/// </summary>
				public class Visitor : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public Visitor() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CVisitorProxy", null);
						if (!"EarthView.World.Graphic.Renderable+Visitor".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void visit_CallBack_void_CRenderable_ev_uint16_ev_bool(IntPtr rend, ushort lodIndex, bool isDebug);

					protected visit_CallBack_void_CRenderable_ev_uint16_ev_bool m_visit_CallBack_void_CRenderable_ev_uint16_ev_bool;

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
					private static extern void EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr rend, ushort lodIndex, byte isDebug);

					/// <summary>
					/// 使渲染接口实例可见
					/// </summary>
					/// <param name="rend">渲染接口</param>
					/// <param name="lodindex">LOD索引</param>
					/// <param name="isDebug">debug状态</param>
					/// <returns></returns>
					public virtual void Visit_NoVirtual(EarthView.World.Graphic.Renderable rend, ushort lodIndex, bool isDebug)
					{
						EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_NoVirtual(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, lodIndex, Convert.ToByte(isDebug));
						
					}

					protected  void EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Function(IntPtr rend, ushort lodIndex, bool isDebug)
					{
						EarthView.World.Graphic.Renderable csobj_rend = new EarthView.World.Graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rend.BindNativeObject(rend,"CRenderable");
						csobj_rend.Delegate = true;
						IClassFactory csobj_rendClassFactory = GlobalClassFactoryMap.Get(csobj_rend.GetCppInstanceTypeName());
						if (csobj_rendClassFactory != null)
						{
							csobj_rend.Delegate = true;
							csobj_rend = csobj_rendClassFactory.Create() as EarthView.World.Graphic.Renderable;
							csobj_rend.BindNativeObject(rend, "CRenderable");
							csobj_rend.Delegate = true;
						}
						
						Visit(csobj_rend, lodIndex, isDebug);
						
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
					private static extern void EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool(IntPtr pNativeObject, IntPtr rend, ushort lodIndex, byte isDebug);

					/// <summary>
					/// 使渲染接口实例可见
					/// </summary>
					/// <param name="rend">渲染接口</param>
					/// <param name="lodindex">LOD索引</param>
					/// <param name="isDebug">debug状态</param>
					/// <returns></returns>
					public virtual void Visit(EarthView.World.Graphic.Renderable rend, ushort lodIndex, bool isDebug)
					{
						EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, lodIndex, Convert.ToByte(isDebug));
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadVisitor = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadVisitor = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadVisitor = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadVisitor = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadVisitor = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadVisitor = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadVisitor = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadVisitor = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadVisitor = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadVisitor = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadVisitor = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadVisitor = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderable::CVisitor", new VisitorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderable::CVisitorProxy", new VisitorClassFactory());

					public Visitor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool(IntPtr pObject, visit_CallBack_void_CRenderable_ev_uint16_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_visit_CallBack_void_CRenderable_ev_uint16_ev_bool = EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Function;
							GC.KeepAlive(m_visit_CallBack_void_CRenderable_ev_uint16_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool(this.NativeObject, m_visit_CallBack_void_CRenderable_ev_uint16_ev_bool);
						}
					}
					public static Visitor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Visitor obj = baseObj as  Visitor;
						if (object.Equals(obj, null))
						{
							obj = new Visitor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CVisitor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class VisitorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Visitor emptyInstance = new Visitor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getRenderSystemData_CallBack_CRenderSystemData();

				protected getRenderSystemData_CallBack_CRenderSystemData m_getRenderSystemData_CallBack_CRenderSystemData;

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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 设置渲染系统的私有数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.Renderable.RenderSystemData GetRenderSystemData_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Renderable.RenderSystemData csObj = new EarthView.World.Graphic.Renderable.RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderSystemData");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Renderable.RenderSystemData;
						csObj.BindNativeObject(__ptr, "CRenderSystemData");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Function()
				{
					EarthView.World.Graphic.Renderable.RenderSystemData csret=GetRenderSystemData();
					
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
				private static extern IntPtr EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData(IntPtr pNativeObject);

				/// <summary>
				/// 设置渲染系统的私有数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.Renderable.RenderSystemData GetRenderSystemData()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Renderable.RenderSystemData csObj = new EarthView.World.Graphic.Renderable.RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderSystemData");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Renderable.RenderSystemData;
						csObj.BindNativeObject(__ptr, "CRenderSystemData");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setRenderSystemData_CallBack_void_CRenderSystemData(IntPtr ref_val);

				protected setRenderSystemData_CallBack_void_CRenderSystemData m_setRenderSystemData_CallBack_void_CRenderSystemData;

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
				private static extern void EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_NoVirtual(IntPtr pNativeObject, IntPtr ref_val);

				/// <summary>
				/// 获得渲染系统的私有数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetRenderSystemData_NoVirtual(EarthView.World.Graphic.Renderable.RenderSystemData ref_val)
				{
					EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_NoVirtual(this.NativeObject, object.Equals(ref_val, null) ? IntPtr.Zero : ref_val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Function(IntPtr ref_val)
				{
					EarthView.World.Graphic.Renderable.RenderSystemData csobj_ref_val = new EarthView.World.Graphic.Renderable.RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_val.BindNativeObject(ref_val,"CRenderSystemData");
					csobj_ref_val.Delegate = true;
					IClassFactory csobj_ref_valClassFactory = GlobalClassFactoryMap.Get(csobj_ref_val.GetCppInstanceTypeName());
					if (csobj_ref_valClassFactory != null)
					{
						csobj_ref_val.Delegate = true;
						csobj_ref_val = csobj_ref_valClassFactory.Create() as EarthView.World.Graphic.Renderable.RenderSystemData;
						csobj_ref_val.BindNativeObject(ref_val, "CRenderSystemData");
						csobj_ref_val.Delegate = true;
					}
					
					SetRenderSystemData(csobj_ref_val);
					
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
				private static extern void EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData(IntPtr pNativeObject, IntPtr ref_val);

				/// <summary>
				/// 获得渲染系统的私有数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetRenderSystemData(EarthView.World.Graphic.Renderable.RenderSystemData ref_val)
				{
					EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData(this.NativeObject, object.Equals(ref_val, null) ? IntPtr.Zero : ref_val.NativeObject);
					
				}

				public class CustomParameterMap : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CustomParameterMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CustomParameterMap",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
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
					private static extern byte EarthView_World_Graphic_CRenderable_CustomParameterMap_push_ev_bool_ev_size_t_CVector4(IntPtr pNativeObject, ref ulong key, IntPtr val);

					/// <summary>
					/// 在map容器中添加元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					public bool Push(ulong key, EarthView.World.Spatial.Math.Vector4 val)
					{
						byte ret=EarthView_World_Graphic_CRenderable_CustomParameterMap_push_ev_bool_ev_size_t_CVector4(this.NativeObject, ref key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Graphic_CRenderable_CustomParameterMap_exist_ev_bool_ev_size_t(IntPtr pNativeObject, ref ulong key);

					/// <summary>
					/// 判断元素是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>存在true，否则false</returns>
					public bool Exist(ulong key)
					{
						byte ret=EarthView_World_Graphic_CRenderable_CustomParameterMap_exist_ev_bool_ev_size_t(this.NativeObject, ref key);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Graphic_CRenderable_CustomParameterMap_get_CVector4_ev_size_t(IntPtr pNativeObject, ref ulong key);

					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					public EarthView.World.Spatial.Math.Vector4 Get(ulong key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderable_CustomParameterMap_get_CVector4_ev_size_t(this.NativeObject, ref key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector4 csObj = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector4");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
							csObj.BindNativeObject(__ptr, "CVector4");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_World_Graphic_CRenderable_CustomParameterMap_erase_void_ev_size_t(IntPtr pNativeObject, ref ulong key);

					/// <summary>
					/// 删除键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					public void Erase(ulong key)
					{
						EarthView_World_Graphic_CRenderable_CustomParameterMap_erase_void_ev_size_t(this.NativeObject, ref key);
						
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
					private static extern ulong EarthView_World_Graphic_CRenderable_CustomParameterMap_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器的大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器的大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CRenderable_CustomParameterMap_size_ev_size_t(this.NativeObject);
						
						return ret;
						
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
					private static extern void EarthView_World_Graphic_CRenderable_CustomParameterMap_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Graphic_CRenderable_CustomParameterMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CRenderable_CustomParameterMap_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CRenderable_CustomParameterMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCustomParameterMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCustomParameterMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCustomParameterMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCustomParameterMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCustomParameterMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCustomParameterMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCustomParameterMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCustomParameterMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCustomParameterMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCustomParameterMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCustomParameterMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCustomParameterMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderable::CustomParameterMap", new CustomParameterMapClassFactory());

					public CustomParameterMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static CustomParameterMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CustomParameterMap obj = baseObj as  CustomParameterMap;
						if (object.Equals(obj, null))
						{
							obj = new CustomParameterMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CustomParameterMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CustomParameterMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CustomParameterMap emptyInstance = new CustomParameterMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderable = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderable = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderable = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderable = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderable = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderable = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderable = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderable = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderable = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderable = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderable = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderable = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderable", new RenderableClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderableProxy", new RenderableClassFactory());

				public Renderable(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr(IntPtr pObject, getMaterial_CallBack_CMaterialPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique(IntPtr pObject, getTechnique_CallBack_CTechnique pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation(IntPtr pObject, getRenderOperation_CallBack_void_CRenderOperation pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(IntPtr pObject, preRender_CallBack_ev_bool_CSceneManager_CRenderSystem pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem(IntPtr pObject, postRender_CallBack_void_CSceneManager_CRenderSystem pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4(IntPtr pObject, getWorldTransforms_CallBack_void_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16(IntPtr pObject, getNumWorldTransforms_CallBack_ev_uint16 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera(IntPtr pObject, getSquaredViewDepth_CallBack_Real_CCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getLights_LightList(IntPtr pObject, getLights_CallBack_LightList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool(IntPtr pObject, getCastsShadows_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(IntPtr pObject, _updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool(IntPtr pObject, setPolygonModeOverrideable_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool(IntPtr pObject, getPolygonModeOverrideable_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue(IntPtr pObject, setCustomAmbient_CallBack_void_CColourValue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue(IntPtr pObject, getCustomAmbient_CallBack_CColourValue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool(IntPtr pObject, getCustomAmbientEnabled_CallBack_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool(IntPtr pObject, setCustomAmbientEnabled_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject(IntPtr pObject, getMovableObject_CallBack_CMovableObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener(IntPtr pObject, addListener_CallBack_void_CRenderableListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener(IntPtr pObject, removeListener_CallBack_void_CRenderableListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener(IntPtr pObject, existListener_CallBack_ev_bool_CRenderableListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32(IntPtr pObject, getListenerCount_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32(IntPtr pObject, getListener_CallBack_CRenderableListener_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData(IntPtr pObject, getRenderSystemData_CallBack_CRenderSystemData pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData(IntPtr pObject, setRenderSystemData_CallBack_void_CRenderSystemData pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getMaterial_CallBack_CMaterialPtr = EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Function;
						GC.KeepAlive(m_getMaterial_CallBack_CMaterialPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr(this.NativeObject, m_getMaterial_CallBack_CMaterialPtr);
						m_getTechnique_CallBack_CTechnique = EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Function;
						GC.KeepAlive(m_getTechnique_CallBack_CTechnique);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique(this.NativeObject, m_getTechnique_CallBack_CTechnique);
						m_getRenderOperation_CallBack_void_CRenderOperation = EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Function;
						GC.KeepAlive(m_getRenderOperation_CallBack_void_CRenderOperation);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation(this.NativeObject, m_getRenderOperation_CallBack_void_CRenderOperation);
						m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem = EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Function;
						GC.KeepAlive(m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(this.NativeObject, m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem);
						m_postRender_CallBack_void_CSceneManager_CRenderSystem = EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Function;
						GC.KeepAlive(m_postRender_CallBack_void_CSceneManager_CRenderSystem);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem(this.NativeObject, m_postRender_CallBack_void_CSceneManager_CRenderSystem);
						m_getWorldTransforms_CallBack_void_CMatrix4 = EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Function;
						GC.KeepAlive(m_getWorldTransforms_CallBack_void_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4(this.NativeObject, m_getWorldTransforms_CallBack_void_CMatrix4);
						m_getNumWorldTransforms_CallBack_ev_uint16 = EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Function;
						GC.KeepAlive(m_getNumWorldTransforms_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16(this.NativeObject, m_getNumWorldTransforms_CallBack_ev_uint16);
						m_getSquaredViewDepth_CallBack_Real_CCamera = EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Function;
						GC.KeepAlive(m_getSquaredViewDepth_CallBack_Real_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera(this.NativeObject, m_getSquaredViewDepth_CallBack_Real_CCamera);
						m_getLights_CallBack_LightList = EarthView_World_Graphic_CRenderable_getLights_LightList_Function;
						GC.KeepAlive(m_getLights_CallBack_LightList);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getLights_LightList(this.NativeObject, m_getLights_CallBack_LightList);
						m_getCastsShadows_CallBack_ev_bool = EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Function;
						GC.KeepAlive(m_getCastsShadows_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool(this.NativeObject, m_getCastsShadows_CallBack_ev_bool);
						m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters = EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Function;
						GC.KeepAlive(m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(this.NativeObject, m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters);
						m_setPolygonModeOverrideable_CallBack_void_ev_bool = EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Function;
						GC.KeepAlive(m_setPolygonModeOverrideable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool(this.NativeObject, m_setPolygonModeOverrideable_CallBack_void_ev_bool);
						m_getPolygonModeOverrideable_CallBack_ev_bool = EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Function;
						GC.KeepAlive(m_getPolygonModeOverrideable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool(this.NativeObject, m_getPolygonModeOverrideable_CallBack_ev_bool);
						m_setCustomAmbient_CallBack_void_CColourValue = EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Function;
						GC.KeepAlive(m_setCustomAmbient_CallBack_void_CColourValue);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue(this.NativeObject, m_setCustomAmbient_CallBack_void_CColourValue);
						m_getCustomAmbient_CallBack_CColourValue = EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Function;
						GC.KeepAlive(m_getCustomAmbient_CallBack_CColourValue);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue(this.NativeObject, m_getCustomAmbient_CallBack_CColourValue);
						m_getCustomAmbientEnabled_CallBack_bool = EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Function;
						GC.KeepAlive(m_getCustomAmbientEnabled_CallBack_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool(this.NativeObject, m_getCustomAmbientEnabled_CallBack_bool);
						m_setCustomAmbientEnabled_CallBack_void_ev_bool = EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Function;
						GC.KeepAlive(m_setCustomAmbientEnabled_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool(this.NativeObject, m_setCustomAmbientEnabled_CallBack_void_ev_bool);
						m_getMovableObject_CallBack_CMovableObject = EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Function;
						GC.KeepAlive(m_getMovableObject_CallBack_CMovableObject);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject(this.NativeObject, m_getMovableObject_CallBack_CMovableObject);
						m_addListener_CallBack_void_CRenderableListener = EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CRenderableListener);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener(this.NativeObject, m_addListener_CallBack_void_CRenderableListener);
						m_removeListener_CallBack_void_CRenderableListener = EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CRenderableListener);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener(this.NativeObject, m_removeListener_CallBack_void_CRenderableListener);
						m_existListener_CallBack_ev_bool_CRenderableListener = EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Function;
						GC.KeepAlive(m_existListener_CallBack_ev_bool_CRenderableListener);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener(this.NativeObject, m_existListener_CallBack_ev_bool_CRenderableListener);
						m_getListenerCount_CallBack_ev_uint32 = EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Function;
						GC.KeepAlive(m_getListenerCount_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32(this.NativeObject, m_getListenerCount_CallBack_ev_uint32);
						m_getListener_CallBack_CRenderableListener_ev_uint32 = EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Function;
						GC.KeepAlive(m_getListener_CallBack_CRenderableListener_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32(this.NativeObject, m_getListener_CallBack_CRenderableListener_ev_uint32);
						m_getRenderSystemData_CallBack_CRenderSystemData = EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Function;
						GC.KeepAlive(m_getRenderSystemData_CallBack_CRenderSystemData);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData(this.NativeObject, m_getRenderSystemData_CallBack_CRenderSystemData);
						m_setRenderSystemData_CallBack_void_CRenderSystemData = EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Function;
						GC.KeepAlive(m_setRenderSystemData_CallBack_void_CRenderSystemData);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData(this.NativeObject, m_setRenderSystemData_CallBack_void_CRenderSystemData);
					}
				}
				public static Renderable FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Renderable obj = baseObj as  Renderable;
					if (object.Equals(obj, null))
					{
						obj = new Renderable(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderable");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderableClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Renderable emptyInstance = new Renderable(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
