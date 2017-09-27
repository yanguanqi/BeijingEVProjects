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
			/// 当单个渲染对象将被渲染时，如果希望从场景管理中获得事件，就必须执行该抽象接口
			/// </summary>
			public class RenderObjectListener : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public RenderObjectListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CRenderObjectListenerProxy", null);
					if (!"EarthView.World.Graphic.RenderObjectListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, bool suppressRenderStateChanges);

				protected notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool m_notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool;

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
				private static extern void EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, byte suppressRenderStateChanges);

				/// <summary>
				/// 开始渲染单个对象时调用该事件
				/// </summary>
				/// <param name="rend">渲染接口</param>
				/// <param name="pass">渲染通路</param>
				/// <param name="source">动态参数源</param>
				/// <param name="pLightList">光照列表</param>
				/// <param name="suppressRenderStateChanges">抑制渲染状态改变的参数</param>
				/// <returns></returns>
				public virtual void NotifyRenderSingleObjectStarted_NoVirtual(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
				{
					EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject, Convert.ToByte(suppressRenderStateChanges));
					
				}

				protected  void EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Function(IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, bool suppressRenderStateChanges)
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
					EarthView.World.Graphic.Pass csobj_pass = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pass.BindNativeObject(pass,"CPass");
					csobj_pass.Delegate = true;
					IClassFactory csobj_passClassFactory = GlobalClassFactoryMap.Get(csobj_pass.GetCppInstanceTypeName());
					if (csobj_passClassFactory != null)
					{
						csobj_pass.Delegate = true;
						csobj_pass = csobj_passClassFactory.Create() as EarthView.World.Graphic.Pass;
						csobj_pass.BindNativeObject(pass, "CPass");
						csobj_pass.Delegate = true;
					}
					EarthView.World.Graphic.AutoParamDataSource csobj_source = new EarthView.World.Graphic.AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_source.BindNativeObject(source,"CAutoParamDataSource");
					csobj_source.Delegate = true;
					IClassFactory csobj_sourceClassFactory = GlobalClassFactoryMap.Get(csobj_source.GetCppInstanceTypeName());
					if (csobj_sourceClassFactory != null)
					{
						csobj_source.Delegate = true;
						csobj_source = csobj_sourceClassFactory.Create() as EarthView.World.Graphic.AutoParamDataSource;
						csobj_source.BindNativeObject(source, "CAutoParamDataSource");
						csobj_source.Delegate = true;
					}
					EarthView.World.Graphic.LightList csobj_pLightList = new EarthView.World.Graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pLightList.BindNativeObject(pLightList,"LightList");
					csobj_pLightList.Delegate = true;
					IClassFactory csobj_pLightListClassFactory = GlobalClassFactoryMap.Get(csobj_pLightList.GetCppInstanceTypeName());
					if (csobj_pLightListClassFactory != null)
					{
						csobj_pLightList.Delegate = true;
						csobj_pLightList = csobj_pLightListClassFactory.Create() as EarthView.World.Graphic.LightList;
						csobj_pLightList.BindNativeObject(pLightList, "LightList");
						csobj_pLightList.Delegate = true;
					}
					
					NotifyRenderSingleObjectStarted(csobj_rend, csobj_pass, csobj_source, csobj_pLightList, suppressRenderStateChanges);
					
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
				private static extern void EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, byte suppressRenderStateChanges);

				/// <summary>
				/// 开始渲染单个对象时调用该事件
				/// </summary>
				/// <param name="rend">渲染接口</param>
				/// <param name="pass">渲染通路</param>
				/// <param name="source">动态参数源</param>
				/// <param name="pLightList">光照列表</param>
				/// <param name="suppressRenderStateChanges">抑制渲染状态改变的参数</param>
				/// <returns></returns>
				public virtual void NotifyRenderSingleObjectStarted(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
				{
					EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject, Convert.ToByte(suppressRenderStateChanges));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, bool suppressRenderStateChanges);

				protected notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool m_notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool;

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
				private static extern void EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, byte suppressRenderStateChanges);

				public virtual void NotifyRenderSingleObjectEnd_NoVirtual(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
				{
					EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject, Convert.ToByte(suppressRenderStateChanges));
					
				}

				protected  void EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Function(IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, bool suppressRenderStateChanges)
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
					EarthView.World.Graphic.Pass csobj_pass = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pass.BindNativeObject(pass,"CPass");
					csobj_pass.Delegate = true;
					IClassFactory csobj_passClassFactory = GlobalClassFactoryMap.Get(csobj_pass.GetCppInstanceTypeName());
					if (csobj_passClassFactory != null)
					{
						csobj_pass.Delegate = true;
						csobj_pass = csobj_passClassFactory.Create() as EarthView.World.Graphic.Pass;
						csobj_pass.BindNativeObject(pass, "CPass");
						csobj_pass.Delegate = true;
					}
					EarthView.World.Graphic.AutoParamDataSource csobj_source = new EarthView.World.Graphic.AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_source.BindNativeObject(source,"CAutoParamDataSource");
					csobj_source.Delegate = true;
					IClassFactory csobj_sourceClassFactory = GlobalClassFactoryMap.Get(csobj_source.GetCppInstanceTypeName());
					if (csobj_sourceClassFactory != null)
					{
						csobj_source.Delegate = true;
						csobj_source = csobj_sourceClassFactory.Create() as EarthView.World.Graphic.AutoParamDataSource;
						csobj_source.BindNativeObject(source, "CAutoParamDataSource");
						csobj_source.Delegate = true;
					}
					EarthView.World.Graphic.LightList csobj_pLightList = new EarthView.World.Graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pLightList.BindNativeObject(pLightList,"LightList");
					csobj_pLightList.Delegate = true;
					IClassFactory csobj_pLightListClassFactory = GlobalClassFactoryMap.Get(csobj_pLightList.GetCppInstanceTypeName());
					if (csobj_pLightListClassFactory != null)
					{
						csobj_pLightList.Delegate = true;
						csobj_pLightList = csobj_pLightListClassFactory.Create() as EarthView.World.Graphic.LightList;
						csobj_pLightList.BindNativeObject(pLightList, "LightList");
						csobj_pLightList.Delegate = true;
					}
					
					NotifyRenderSingleObjectEnd(csobj_rend, csobj_pass, csobj_source, csobj_pLightList, suppressRenderStateChanges);
					
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
				private static extern void EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, byte suppressRenderStateChanges);

				public virtual void NotifyRenderSingleObjectEnd(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
				{
					EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject, Convert.ToByte(suppressRenderStateChanges));
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderObjectListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderObjectListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderObjectListener = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderObjectListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderObjectListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderObjectListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderObjectListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderObjectListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderObjectListener = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderObjectListener = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderObjectListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderObjectListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderObjectListener", new RenderObjectListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderObjectListenerProxy", new RenderObjectListenerClassFactory());

				public RenderObjectListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr pObject, notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr pObject, notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool = EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Function;
						GC.KeepAlive(m_notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, m_notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
						m_notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool = EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Function;
						GC.KeepAlive(m_notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, m_notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
					}
				}
				public static RenderObjectListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderObjectListener obj = baseObj as  RenderObjectListener;
					if (object.Equals(obj, null))
					{
						obj = new RenderObjectListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderObjectListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderObjectListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderObjectListener emptyInstance = new RenderObjectListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
