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
			/// 包含渲染目标事件的信息
			/// </summary>
			public class RenderTargetEvent : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public RenderTargetEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("RenderTargetEvent",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				private EarthView.World.Graphic.RenderTarget sourceField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_RenderTargetEvent_source(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_RenderTargetEvent_source( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.RenderTarget Source
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_RenderTargetEvent_source(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(sourceField, null)){
							sourceField.NativeObject = __ptr;
							return sourceField;
						}
						EarthView.World.Graphic.RenderTarget csObj = new EarthView.World.Graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderTarget");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderTarget;
							csObj.BindNativeObject(__ptr, "CRenderTarget");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						sourceField = value;
						Set_EarthView_World_Graphic_RenderTargetEvent_source( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderTargetEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderTargetEvent = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderTargetEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderTargetEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RenderTargetEvent", new RenderTargetEventClassFactory());

				public RenderTargetEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RenderTargetEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderTargetEvent obj = baseObj as  RenderTargetEvent;
					if (object.Equals(obj, null))
					{
						obj = new RenderTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "RenderTargetEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderTargetEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderTargetEvent emptyInstance = new RenderTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 包含渲染目标特殊视口事件的信息
			/// </summary>
			public class RenderTargetViewportEvent : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public RenderTargetViewportEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("RenderTargetViewportEvent",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				private EarthView.World.Graphic.Viewport sourceField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_RenderTargetViewportEvent_source(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_RenderTargetViewportEvent_source( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.Viewport Source
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_RenderTargetViewportEvent_source(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(sourceField, null)){
							sourceField.NativeObject = __ptr;
							return sourceField;
						}
						EarthView.World.Graphic.Viewport csObj = new EarthView.World.Graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CViewport");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Viewport;
							csObj.BindNativeObject(__ptr, "CViewport");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						sourceField = value;
						Set_EarthView_World_Graphic_RenderTargetViewportEvent_source( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderTargetViewportEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RenderTargetViewportEvent", new RenderTargetViewportEventClassFactory());

				public RenderTargetViewportEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RenderTargetViewportEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderTargetViewportEvent obj = baseObj as  RenderTargetViewportEvent;
					if (object.Equals(obj, null))
					{
						obj = new RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "RenderTargetViewportEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderTargetViewportEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderTargetViewportEvent emptyInstance = new RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 接口类，定义了一个监听器可以被用来获得渲染目标事件的通知
			/// </summary>
			public class RenderTargetListener : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public RenderTargetListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CRenderTargetListenerProxy", null);
					if (!"EarthView.World.Graphic.RenderTargetListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void preRenderTargetUpdate_CallBack_void_RenderTargetEvent(IntPtr evt);

				protected preRenderTargetUpdate_CallBack_void_RenderTargetEvent m_preRenderTargetUpdate_CallBack_void_RenderTargetEvent;

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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 在渲染目标被渲染之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void PreRenderTargetUpdate_NoVirtual(EarthView.World.Graphic.RenderTargetEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.RenderTargetEvent csobj_evt = new EarthView.World.Graphic.RenderTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"RenderTargetEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.RenderTargetEvent;
						csobj_evt.BindNativeObject(evt, "RenderTargetEvent");
						csobj_evt.Delegate = true;
					}
					
					PreRenderTargetUpdate(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 在渲染目标被渲染之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void PreRenderTargetUpdate(EarthView.World.Graphic.RenderTargetEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postRenderTargetUpdate_CallBack_void_RenderTargetEvent(IntPtr evt);

				protected postRenderTargetUpdate_CallBack_void_RenderTargetEvent m_postRenderTargetUpdate_CallBack_void_RenderTargetEvent;

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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 在渲染目标被渲染之后调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void PostRenderTargetUpdate_NoVirtual(EarthView.World.Graphic.RenderTargetEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.RenderTargetEvent csobj_evt = new EarthView.World.Graphic.RenderTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"RenderTargetEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.RenderTargetEvent;
						csobj_evt.BindNativeObject(evt, "RenderTargetEvent");
						csobj_evt.Delegate = true;
					}
					
					PostRenderTargetUpdate(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 在渲染目标被渲染之后调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void PostRenderTargetUpdate(EarthView.World.Graphic.RenderTargetEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void preViewportUpdate_CallBack_void_RenderTargetViewportEvent(IntPtr evt);

				protected preViewportUpdate_CallBack_void_RenderTargetViewportEvent m_preViewportUpdate_CallBack_void_RenderTargetViewportEvent;

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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 在视口被更新前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void PreViewportUpdate_NoVirtual(EarthView.World.Graphic.RenderTargetViewportEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.RenderTargetViewportEvent csobj_evt = new EarthView.World.Graphic.RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"RenderTargetViewportEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.RenderTargetViewportEvent;
						csobj_evt.BindNativeObject(evt, "RenderTargetViewportEvent");
						csobj_evt.Delegate = true;
					}
					
					PreViewportUpdate(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 在视口被更新前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void PreViewportUpdate(EarthView.World.Graphic.RenderTargetViewportEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postViewportUpdate_CallBack_void_RenderTargetViewportEvent(IntPtr evt);

				protected postViewportUpdate_CallBack_void_RenderTargetViewportEvent m_postViewportUpdate_CallBack_void_RenderTargetViewportEvent;

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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 在视口被更新后调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void PostViewportUpdate_NoVirtual(EarthView.World.Graphic.RenderTargetViewportEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.RenderTargetViewportEvent csobj_evt = new EarthView.World.Graphic.RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"RenderTargetViewportEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.RenderTargetViewportEvent;
						csobj_evt.BindNativeObject(evt, "RenderTargetViewportEvent");
						csobj_evt.Delegate = true;
					}
					
					PostViewportUpdate(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 在视口被更新后调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void PostViewportUpdate(EarthView.World.Graphic.RenderTargetViewportEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void viewportAdded_CallBack_void_RenderTargetViewportEvent(IntPtr evt);

				protected viewportAdded_CallBack_void_RenderTargetViewportEvent m_viewportAdded_CallBack_void_RenderTargetViewportEvent;

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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 通知监听器视口已经被加到正在讨论渲染目标中
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void ViewportAdded_NoVirtual(EarthView.World.Graphic.RenderTargetViewportEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.RenderTargetViewportEvent csobj_evt = new EarthView.World.Graphic.RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"RenderTargetViewportEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.RenderTargetViewportEvent;
						csobj_evt.BindNativeObject(evt, "RenderTargetViewportEvent");
						csobj_evt.Delegate = true;
					}
					
					ViewportAdded(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 通知监听器视口已经被加到正在讨论渲染目标中
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void ViewportAdded(EarthView.World.Graphic.RenderTargetViewportEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void viewportRemoved_CallBack_void_RenderTargetViewportEvent(IntPtr evt);

				protected viewportRemoved_CallBack_void_RenderTargetViewportEvent m_viewportRemoved_CallBack_void_RenderTargetViewportEvent;

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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 通知监听器视口已经从正在讨论的渲染目标中去除掉
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void ViewportRemoved_NoVirtual(EarthView.World.Graphic.RenderTargetViewportEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.RenderTargetViewportEvent csobj_evt = new EarthView.World.Graphic.RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"RenderTargetViewportEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.RenderTargetViewportEvent;
						csobj_evt.BindNativeObject(evt, "RenderTargetViewportEvent");
						csobj_evt.Delegate = true;
					}
					
					ViewportRemoved(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent(IntPtr pNativeObject, IntPtr evt);

				/// <summary>
				/// 通知监听器视口已经从正在讨论的渲染目标中去除掉
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual void ViewportRemoved(EarthView.World.Graphic.RenderTargetViewportEvent evt)
				{
					EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderTargetListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderTargetListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderTargetListener = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderTargetListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderTargetListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderTargetListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderTargetListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderTargetListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderTargetListener = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderTargetListener = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderTargetListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderTargetListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderTargetListener", new RenderTargetListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderTargetListenerProxy", new RenderTargetListenerClassFactory());

				public RenderTargetListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent(IntPtr pObject, preRenderTargetUpdate_CallBack_void_RenderTargetEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent(IntPtr pObject, postRenderTargetUpdate_CallBack_void_RenderTargetEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent(IntPtr pObject, preViewportUpdate_CallBack_void_RenderTargetViewportEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent(IntPtr pObject, postViewportUpdate_CallBack_void_RenderTargetViewportEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent(IntPtr pObject, viewportAdded_CallBack_void_RenderTargetViewportEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent(IntPtr pObject, viewportRemoved_CallBack_void_RenderTargetViewportEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_preRenderTargetUpdate_CallBack_void_RenderTargetEvent = EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Function;
						GC.KeepAlive(m_preRenderTargetUpdate_CallBack_void_RenderTargetEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent(this.NativeObject, m_preRenderTargetUpdate_CallBack_void_RenderTargetEvent);
						m_postRenderTargetUpdate_CallBack_void_RenderTargetEvent = EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Function;
						GC.KeepAlive(m_postRenderTargetUpdate_CallBack_void_RenderTargetEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent(this.NativeObject, m_postRenderTargetUpdate_CallBack_void_RenderTargetEvent);
						m_preViewportUpdate_CallBack_void_RenderTargetViewportEvent = EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Function;
						GC.KeepAlive(m_preViewportUpdate_CallBack_void_RenderTargetViewportEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent(this.NativeObject, m_preViewportUpdate_CallBack_void_RenderTargetViewportEvent);
						m_postViewportUpdate_CallBack_void_RenderTargetViewportEvent = EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Function;
						GC.KeepAlive(m_postViewportUpdate_CallBack_void_RenderTargetViewportEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent(this.NativeObject, m_postViewportUpdate_CallBack_void_RenderTargetViewportEvent);
						m_viewportAdded_CallBack_void_RenderTargetViewportEvent = EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Function;
						GC.KeepAlive(m_viewportAdded_CallBack_void_RenderTargetViewportEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent(this.NativeObject, m_viewportAdded_CallBack_void_RenderTargetViewportEvent);
						m_viewportRemoved_CallBack_void_RenderTargetViewportEvent = EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Function;
						GC.KeepAlive(m_viewportRemoved_CallBack_void_RenderTargetViewportEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent(this.NativeObject, m_viewportRemoved_CallBack_void_RenderTargetViewportEvent);
					}
				}
				public static RenderTargetListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderTargetListener obj = baseObj as  RenderTargetListener;
					if (object.Equals(obj, null))
					{
						obj = new RenderTargetListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderTargetListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderTargetListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderTargetListener emptyInstance = new RenderTargetListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
