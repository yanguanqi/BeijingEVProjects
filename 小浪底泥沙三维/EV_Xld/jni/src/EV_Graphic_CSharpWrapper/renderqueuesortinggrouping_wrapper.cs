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
			/// 联系单个通路和单个渲染接口的类
			///通过深度对实体分类而不是通过通路分类
			/// </summary>
			public class RenderablePass : EarthView.World.Core.BaseObject
			{
				private EarthView.World.Graphic.Renderable renderableField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_RenderablePass_renderable(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_RenderablePass_renderable( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.Renderable Renderable
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_RenderablePass_renderable(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(renderableField, null)){
							renderableField.NativeObject = __ptr;
							return renderableField;
						}
						EarthView.World.Graphic.Renderable csObj = new EarthView.World.Graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderable");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Renderable;
							csObj.BindNativeObject(__ptr, "CRenderable");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						renderableField = value;
						Set_EarthView_World_Graphic_RenderablePass_renderable( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Graphic.Pass passField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_RenderablePass_pass(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_RenderablePass_pass( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.Pass Pass
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_RenderablePass_pass(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(passField, null)){
							passField.NativeObject = __ptr;
							return passField;
						}
						EarthView.World.Graphic.Pass csObj = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPass");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Pass;
							csObj.BindNativeObject(__ptr, "CPass");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						passField = value;
						Set_EarthView_World_Graphic_RenderablePass_pass( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public RenderablePass() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("RenderablePass",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="rend">渲染接口</param>
				/// <param name="p">通路</param>
				/// <returns></returns>
				public RenderablePass(EarthView.World.Graphic.Renderable ref_rend, EarthView.World.Graphic.Pass ref_p) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_rend = new BasePtr(ref_rend);
					list.Add("ref_rend", valueref_rend.PtrVal);
					BasePtr valueref_p = new BasePtr(ref_p);
					list.Add("ref_p", valueref_p.PtrVal);
					Create("RenderablePass", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderablePass = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderablePass = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderablePass = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderablePass = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderablePass = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderablePass = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderablePass = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderablePass = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderablePass = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderablePass = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderablePass = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderablePass = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RenderablePass", new RenderablePassClassFactory());

				public RenderablePass(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RenderablePass FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderablePass obj = baseObj as  RenderablePass;
					if (object.Equals(obj, null))
					{
						obj = new RenderablePass(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "RenderablePass");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderablePassClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderablePass emptyInstance = new RenderablePass(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// CVisitor接口服务于EarthView::World::Graphic::CQueuedRenderableCollection中的消息
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			public class QueuedRenderableVisitor : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public QueuedRenderableVisitor() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CQueuedRenderableVisitorProxy", null);
					if (!"EarthView.World.Graphic.QueuedRenderableVisitor".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void visit_CallBack_void_RenderablePass(IntPtr rp);

				protected visit_CallBack_void_RenderablePass m_visit_CallBack_void_RenderablePass;

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
				private static extern void EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_NoVirtual(IntPtr pNativeObject, IntPtr rp);

				/// <summary>
				/// 当访问渲染通路时被调用，消息在一个分类的集合里，但不是通过通路分类的
				/// </summary>
				/// <param name="rp">渲染通路</param>
				/// <returns></returns>
				public virtual void Visit_NoVirtual(EarthView.World.Graphic.RenderablePass rp)
				{
					EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_NoVirtual(this.NativeObject, object.Equals(rp, null) ? IntPtr.Zero : rp.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Function(IntPtr rp)
				{
					EarthView.World.Graphic.RenderablePass csobj_rp = new EarthView.World.Graphic.RenderablePass(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rp.BindNativeObject(rp,"RenderablePass");
					csobj_rp.Delegate = true;
					IClassFactory csobj_rpClassFactory = GlobalClassFactoryMap.Get(csobj_rp.GetCppInstanceTypeName());
					if (csobj_rpClassFactory != null)
					{
						csobj_rp.Delegate = true;
						csobj_rp = csobj_rpClassFactory.Create() as EarthView.World.Graphic.RenderablePass;
						csobj_rp.BindNativeObject(rp, "RenderablePass");
						csobj_rp.Delegate = true;
					}
					
					Visit(csobj_rp);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass(IntPtr pNativeObject, IntPtr rp);

				/// <summary>
				/// 当访问渲染通路时被调用，消息在一个分类的集合里，但不是通过通路分类的
				/// </summary>
				/// <param name="rp">渲染通路</param>
				/// <returns></returns>
				public virtual void Visit(EarthView.World.Graphic.RenderablePass rp)
				{
					EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass(this.NativeObject, object.Equals(rp, null) ? IntPtr.Zero : rp.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte visit_CallBack_ev_bool_CPass(IntPtr p);

				protected visit_CallBack_ev_bool_CPass m_visit_CallBack_ev_bool_CPass;

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
				private static extern byte EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_NoVirtual(IntPtr pNativeObject, IntPtr p);

				/// <summary>
				///当访问一个通过通路分类的集合，当通路改变时，这个函数被调用
				/// </summary>
				/// <param name="p">通路</param>
				/// <returns></returns>
				public virtual bool Visit_NoVirtual(EarthView.World.Graphic.Pass p)
				{
					byte ret=EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_NoVirtual(this.NativeObject, object.Equals(p, null) ? IntPtr.Zero : p.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Function(IntPtr p)
				{
					EarthView.World.Graphic.Pass csobj_p = new EarthView.World.Graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_p.BindNativeObject(p,"CPass");
					csobj_p.Delegate = true;
					IClassFactory csobj_pClassFactory = GlobalClassFactoryMap.Get(csobj_p.GetCppInstanceTypeName());
					if (csobj_pClassFactory != null)
					{
						csobj_p.Delegate = true;
						csobj_p = csobj_pClassFactory.Create() as EarthView.World.Graphic.Pass;
						csobj_p.BindNativeObject(p, "CPass");
						csobj_p.Delegate = true;
					}
					
					bool csret=Visit(csobj_p);
					
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
				private static extern byte EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass(IntPtr pNativeObject, IntPtr p);

				/// <summary>
				///当访问一个通过通路分类的集合，当通路改变时，这个函数被调用
				/// </summary>
				/// <param name="p">通路</param>
				/// <returns></returns>
				public virtual bool Visit(EarthView.World.Graphic.Pass p)
				{
					byte ret=EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass(this.NativeObject, object.Equals(p, null) ? IntPtr.Zero : p.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void visit_CallBack_void_CRenderable(IntPtr r);

				protected visit_CallBack_void_CRenderable m_visit_CallBack_void_CRenderable;

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
				private static extern void EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_NoVirtual(IntPtr pNativeObject, IntPtr r);

				/// <summary>
				/// 在集合里面的每个渲染接口调用一次访问方法
				/// </summary>
				/// <param name="r">渲染接口</param>
				/// <returns></returns>
				public virtual void Visit_NoVirtual(EarthView.World.Graphic.Renderable r)
				{
					EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_NoVirtual(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Function(IntPtr r)
				{
					EarthView.World.Graphic.Renderable csobj_r = new EarthView.World.Graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_r.BindNativeObject(r,"CRenderable");
					csobj_r.Delegate = true;
					IClassFactory csobj_rClassFactory = GlobalClassFactoryMap.Get(csobj_r.GetCppInstanceTypeName());
					if (csobj_rClassFactory != null)
					{
						csobj_r.Delegate = true;
						csobj_r = csobj_rClassFactory.Create() as EarthView.World.Graphic.Renderable;
						csobj_r.BindNativeObject(r, "CRenderable");
						csobj_r.Delegate = true;
					}
					
					Visit(csobj_r);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable(IntPtr pNativeObject, IntPtr r);

				/// <summary>
				/// 在集合里面的每个渲染接口调用一次访问方法
				/// </summary>
				/// <param name="r">渲染接口</param>
				/// <returns></returns>
				public virtual void Visit(EarthView.World.Graphic.Renderable r)
				{
					EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadQueuedRenderableVisitor = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CQueuedRenderableVisitor", new QueuedRenderableVisitorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CQueuedRenderableVisitorProxy", new QueuedRenderableVisitorClassFactory());

				public QueuedRenderableVisitor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass(IntPtr pObject, visit_CallBack_void_RenderablePass pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass(IntPtr pObject, visit_CallBack_ev_bool_CPass pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable(IntPtr pObject, visit_CallBack_void_CRenderable pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_visit_CallBack_void_RenderablePass = EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Function;
						GC.KeepAlive(m_visit_CallBack_void_RenderablePass);
						EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass(this.NativeObject, m_visit_CallBack_void_RenderablePass);
						m_visit_CallBack_ev_bool_CPass = EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Function;
						GC.KeepAlive(m_visit_CallBack_ev_bool_CPass);
						EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass(this.NativeObject, m_visit_CallBack_ev_bool_CPass);
						m_visit_CallBack_void_CRenderable = EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Function;
						GC.KeepAlive(m_visit_CallBack_void_CRenderable);
						EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable(this.NativeObject, m_visit_CallBack_void_CRenderable);
					}
				}
				public static QueuedRenderableVisitor FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					QueuedRenderableVisitor obj = baseObj as  QueuedRenderableVisitor;
					if (object.Equals(obj, null))
					{
						obj = new QueuedRenderableVisitor(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CQueuedRenderableVisitor");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class QueuedRenderableVisitorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					QueuedRenderableVisitor emptyInstance = new QueuedRenderableVisitor(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 最低级水平的渲染接口集合
			/// </summary>
			public class QueuedRenderableCollection : EarthView.World.Core.AllocatedObject
			{
				public enum ORGANISATIONMODE
				{
								OM_PASS_GROUP = 1,
								OM_SORT_DESCENDING = 2,
								OM_SORT_ASCENDING = 6
				
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public QueuedRenderableCollection() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CQueuedRenderableCollection",  null);
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableCollection_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空集合
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Clear()
				{
					EarthView_World_Graphic_CQueuedRenderableCollection_clear_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableCollection_removePassGroup_void_CPass(IntPtr pNativeObject, IntPtr p);

				/// <summary>
				/// 去除掉已给通路组的入口
				/// </summary>
				/// <param name="p">通路指针</param>
				/// <returns></returns>
				public void RemovePassGroup(EarthView.World.Graphic.Pass p)
				{
					EarthView_World_Graphic_CQueuedRenderableCollection_removePassGroup_void_CPass(this.NativeObject, object.Equals(p, null) ? IntPtr.Zero : p.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableCollection_resetOrganisationModes_void(IntPtr pNativeObject);

				/// <summary>
				/// 重新设置集合需要的organisation模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void ResetOrganisationModes()
				{
					EarthView_World_Graphic_CQueuedRenderableCollection_resetOrganisationModes_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableCollection_addOrganisationMode_void_OrganisationMode(IntPtr pNativeObject, EarthView.World.Graphic.QueuedRenderableCollection.ORGANISATIONMODE om);

				/// <summary>
				///当下一次用到时，添加一个必须的分类模型
				/// </summary>
				/// <param name="om"></param>
				/// <returns></returns>
				public void AddOrganisationMode(EarthView.World.Graphic.QueuedRenderableCollection.ORGANISATIONMODE om)
				{
					EarthView_World_Graphic_CQueuedRenderableCollection_addOrganisationMode_void_OrganisationMode(this.NativeObject, om);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableCollection_addRenderable_void_CPass_CRenderable(IntPtr pNativeObject, IntPtr ref_pass, IntPtr ref_rend);

				/// <summary>
				///使用给的通路添加一个渲染接口到集合中
				/// </summary>
				/// <param name="pass">通路</param>
				/// <param name="rend">渲染</param>
				/// <returns></returns>
				public void AddRenderable(EarthView.World.Graphic.Pass ref_pass, EarthView.World.Graphic.Renderable ref_rend)
				{
					EarthView_World_Graphic_CQueuedRenderableCollection_addRenderable_void_CPass_CRenderable(this.NativeObject, object.Equals(ref_pass, null) ? IntPtr.Zero : ref_pass.NativeObject, object.Equals(ref_rend, null) ? IntPtr.Zero : ref_rend.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableCollection_sort_void_CCamera(IntPtr pNativeObject, IntPtr cam);

				/// <summary>
				///执行这个集合需要的各种分类
				/// </summary>
				/// <param name="cam"></param>
				/// <returns></returns>
				public void Sort(EarthView.World.Graphic.Camera cam)
				{
					EarthView_World_Graphic_CQueuedRenderableCollection_sort_void_CCamera(this.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableCollection_acceptVisitor_void_CQueuedRenderableVisitor_OrganisationMode(IntPtr pNativeObject, IntPtr visitor, EarthView.World.Graphic.QueuedRenderableCollection.ORGANISATIONMODE om);

				/// <summary>
				///接受对结合内容的访问者
				/// </summary>
				/// <param name="visitor"></param>
				/// <param name="om"></param>
				/// <returns></returns>
				public void AcceptVisitor(EarthView.World.Graphic.QueuedRenderableVisitor visitor, EarthView.World.Graphic.QueuedRenderableCollection.ORGANISATIONMODE om)
				{
					EarthView_World_Graphic_CQueuedRenderableCollection_acceptVisitor_void_CQueuedRenderableVisitor_OrganisationMode(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject, om);
					
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
				private static extern void EarthView_World_Graphic_CQueuedRenderableCollection_merge_void_CQueuedRenderableCollection(IntPtr pNativeObject, IntPtr rhs);

				/// <summary>
				///渲染结合的融合
				/// </summary>
				/// <param name="rhs"></param>
				/// <returns></returns>
				public void Merge(EarthView.World.Graphic.QueuedRenderableCollection rhs)
				{
					EarthView_World_Graphic_CQueuedRenderableCollection_merge_void_CQueuedRenderableCollection(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadQueuedRenderableCollection = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CQueuedRenderableCollection", new QueuedRenderableCollectionClassFactory());

				public QueuedRenderableCollection(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static QueuedRenderableCollection FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					QueuedRenderableCollection obj = baseObj as  QueuedRenderableCollection;
					if (object.Equals(obj, null))
					{
						obj = new QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CQueuedRenderableCollection");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class QueuedRenderableCollectionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					QueuedRenderableCollection emptyInstance = new QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			///这个类简化了渲染接口，所有的接口包含同一个EarthView::World::Graphic::CRenderQueueGroup和一样的属性
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			public class RenderPriorityGroup : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent"></param>
				/// <param name="splitPassesByLightingType"></param>
				/// <param name="splitNoShadowPasses"></param>
				/// <param name="shadowCastersNotReceivers"></param>
				/// <returns></returns>
				public RenderPriorityGroup(EarthView.World.Graphic.RenderQueueGroup ref_parent, bool splitPassesByLightingType, bool splitNoShadowPasses, bool shadowCastersNotReceivers) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuesplitPassesByLightingType = new BasePtr(splitPassesByLightingType);
					list.Add("splitPassesByLightingType", valuesplitPassesByLightingType.PtrVal);
					BasePtr valuesplitNoShadowPasses = new BasePtr(splitNoShadowPasses);
					list.Add("splitNoShadowPasses", valuesplitNoShadowPasses.PtrVal);
					BasePtr valueshadowCastersNotReceivers = new BasePtr(shadowCastersNotReceivers);
					list.Add("shadowCastersNotReceivers", valueshadowCastersNotReceivers.PtrVal);
					Create("CRenderPriorityGroup", list);
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
				private static extern IntPtr EarthView_World_Graphic_CRenderPriorityGroup_getSolidsBasic_CQueuedRenderableCollection(IntPtr pNativeObject);

				/// <summary>
				/// 获取没有阴影的通路,或者调制阴影模式下开启阴影接收功能的通路，或者在
				/// 加成阴影下的环境光照(ambient)渲染通路及其关联的可渲染对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.QueuedRenderableCollection GetSolidsBasic()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderPriorityGroup_getSolidsBasic_CQueuedRenderableCollection(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.QueuedRenderableCollection csObj = new EarthView.World.Graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.QueuedRenderableCollection;
						csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
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
				private static extern IntPtr EarthView_World_Graphic_CRenderPriorityGroup_getSolidsDiffuseSpecular_CQueuedRenderableCollection(IntPtr pNativeObject);

				/// <summary>
				/// 获取加成阴影模式下的漫反射和镜面反射通路中的渲染通路及其关联的可渲染对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.QueuedRenderableCollection GetSolidsDiffuseSpecular()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderPriorityGroup_getSolidsDiffuseSpecular_CQueuedRenderableCollection(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.QueuedRenderableCollection csObj = new EarthView.World.Graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.QueuedRenderableCollection;
						csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
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
				private static extern IntPtr EarthView_World_Graphic_CRenderPriorityGroup_getSolidsDecal_CQueuedRenderableCollection(IntPtr pNativeObject);

				/// <summary>
				/// 获得加成阴影模式下贴花渲染通路及其关联的可渲染对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.QueuedRenderableCollection GetSolidsDecal()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderPriorityGroup_getSolidsDecal_CQueuedRenderableCollection(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.QueuedRenderableCollection csObj = new EarthView.World.Graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.QueuedRenderableCollection;
						csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
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
				private static extern IntPtr EarthView_World_Graphic_CRenderPriorityGroup_getSolidsNoShadowReceive_CQueuedRenderableCollection(IntPtr pNativeObject);

				/// <summary>
				/// 获得阴影功能开启但是阴影接受功能关闭的渲染通路及其关联的可渲染对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.QueuedRenderableCollection GetSolidsNoShadowReceive()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderPriorityGroup_getSolidsNoShadowReceive_CQueuedRenderableCollection(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.QueuedRenderableCollection csObj = new EarthView.World.Graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.QueuedRenderableCollection;
						csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
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
				private static extern IntPtr EarthView_World_Graphic_CRenderPriorityGroup_getTransparentsUnsorted_CQueuedRenderableCollection(IntPtr pNativeObject);

				/// <summary>
				/// 获得未排序的透明物体渲染通路及其关联的可渲染对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.QueuedRenderableCollection GetTransparentsUnsorted()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderPriorityGroup_getTransparentsUnsorted_CQueuedRenderableCollection(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.QueuedRenderableCollection csObj = new EarthView.World.Graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.QueuedRenderableCollection;
						csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
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
				private static extern IntPtr EarthView_World_Graphic_CRenderPriorityGroup_getTransparents_CQueuedRenderableCollection(IntPtr pNativeObject);

				/// <summary>
				/// 获得排序的透明物体渲染通路及其关联的可渲染对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.QueuedRenderableCollection GetTransparents()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderPriorityGroup_getTransparents_CQueuedRenderableCollection(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.QueuedRenderableCollection csObj = new EarthView.World.Graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.QueuedRenderableCollection;
						csObj.BindNativeObject(__ptr, "CQueuedRenderableCollection");
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_resetOrganisationModes_void(IntPtr pNativeObject);

				/// <summary>
				/// 在组中重新设置实体需要的组织模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void ResetOrganisationModes()
				{
					EarthView_World_Graphic_CRenderPriorityGroup_resetOrganisationModes_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_addOrganisationMode_void_OrganisationMode(IntPtr pNativeObject, EarthView.World.Graphic.QueuedRenderableCollection.ORGANISATIONMODE om);

				/// <summary>
				/// 在组中添加一个必须得实体分组模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void AddOrganisationMode(EarthView.World.Graphic.QueuedRenderableCollection.ORGANISATIONMODE om)
				{
					EarthView_World_Graphic_CRenderPriorityGroup_addOrganisationMode_void_OrganisationMode(this.NativeObject, om);
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_defaultOrganisationMode_void(IntPtr pNativeObject);

				/// <summary>
				/// 在组中设置对实体设置默认的分组模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void DefaultOrganisationMode()
				{
					EarthView_World_Graphic_CRenderPriorityGroup_defaultOrganisationMode_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_addRenderable_void_CRenderable_CTechnique(IntPtr pNativeObject, IntPtr ref_pRend, IntPtr ref_pTech);

				/// <summary>
				/// 在组中添加一个渲染接口
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void AddRenderable(EarthView.World.Graphic.Renderable ref_pRend, EarthView.World.Graphic.Technique ref_pTech)
				{
					EarthView_World_Graphic_CRenderPriorityGroup_addRenderable_void_CRenderable_CTechnique(this.NativeObject, object.Equals(ref_pRend, null) ? IntPtr.Zero : ref_pRend.NativeObject, object.Equals(ref_pTech, null) ? IntPtr.Zero : ref_pTech.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_sort_void_CCamera(IntPtr pNativeObject, IntPtr cam);

				/// <summary>
				/// 对添加到队列中的实体进行分类
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Sort(EarthView.World.Graphic.Camera cam)
				{
					EarthView_World_Graphic_CRenderPriorityGroup_sort_void_CCamera(this.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空组中的渲染接口
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Clear()
				{
					EarthView_World_Graphic_CRenderPriorityGroup_clear_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_setSplitPassesByLightingType_void_ev_bool(IntPtr pNativeObject, byte split);

				/// <summary>
				/// 设置队列是否需要通过它们的光照类型划分通路
				/// </summary>
				/// <param name="split"></param>
				/// <returns></returns>
				public void SetSplitPassesByLightingType(bool split)
				{
					EarthView_World_Graphic_CRenderPriorityGroup_setSplitPassesByLightingType_void_ev_bool(this.NativeObject, Convert.ToByte(split));
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_setSplitNoShadowPasses_void_ev_bool(IntPtr pNativeObject, byte split);

				/// <summary>
				/// 设置是否接收阴影不成功的通路应该被分离
				/// </summary>
				/// <param name="split"></param>
				/// <returns></returns>
				public void SetSplitNoShadowPasses(bool split)
				{
					EarthView_World_Graphic_CRenderPriorityGroup_setSplitNoShadowPasses_void_ev_bool(this.NativeObject, Convert.ToByte(split));
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_setShadowCastersCannotBeReceivers_void_ev_bool(IntPtr pNativeObject, byte ind);

				/// <summary>
				/// 设置是否投掷阴影的实体应该被看作没有接收阴影
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void SetShadowCastersCannotBeReceivers(bool ind)
				{
					EarthView_World_Graphic_CRenderPriorityGroup_setShadowCastersCannotBeReceivers_void_ev_bool(this.NativeObject, Convert.ToByte(ind));
					
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
				private static extern void EarthView_World_Graphic_CRenderPriorityGroup_merge_void_CRenderPriorityGroup(IntPtr pNativeObject, IntPtr rhs);

				/// <summary>
				/// 融合组中的渲染接口
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Merge(EarthView.World.Graphic.RenderPriorityGroup rhs)
				{
					EarthView_World_Graphic_CRenderPriorityGroup_merge_void_CRenderPriorityGroup(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderPriorityGroup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderPriorityGroup", new RenderPriorityGroupClassFactory());

				public RenderPriorityGroup(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RenderPriorityGroup FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderPriorityGroup obj = baseObj as  RenderPriorityGroup;
					if (object.Equals(obj, null))
					{
						obj = new RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderPriorityGroup");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderPriorityGroupClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderPriorityGroup emptyInstance = new RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// EarthView::World::Graphic::CRenderQueue下的分组标准，EarthView::World::Graphic::CRenderQueue聚集了渲染接口大概同一时间发布到renderer
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			public class RenderQueueGroup : EarthView.World.Core.AllocatedObject
			{
				public class PriorityMap : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public PriorityMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("PriorityMap",  null);
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
					private static extern byte EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_push_ev_bool_ev_uint16_CRenderPriorityGroup(IntPtr pNativeObject, ref ushort key, ref IntPtr ref_val);

					/// <summary>
					/// 在map容器中添加元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					public bool Push(ushort key, EarthView.World.Graphic.RenderPriorityGroup ref_val)
					{
						byte ret=EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_push_ev_bool_ev_uint16_CRenderPriorityGroup(this.NativeObject, ref key, ref ref_val.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_exist_ev_bool_ev_uint16(IntPtr pNativeObject, ref ushort key);

					/// <summary>
					/// 判断元素是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>存在true，否则false</returns>
					public bool Exist(ushort key)
					{
						byte ret=EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_exist_ev_bool_ev_uint16(this.NativeObject, ref key);
						
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_get_CRenderPriorityGroup_ev_uint16(IntPtr pNativeObject, ref ushort key);

					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					public EarthView.World.Graphic.RenderPriorityGroup Get(ushort key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_get_CRenderPriorityGroup_ev_uint16(this.NativeObject, ref key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderPriorityGroup csObj = new EarthView.World.Graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderPriorityGroup;
							csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
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
					private static extern void EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_erase_void_ev_uint16(IntPtr pNativeObject, ref ushort key);

					/// <summary>
					/// 删除键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					public void Erase(ushort key)
					{
						EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_erase_void_ev_uint16(this.NativeObject, ref key);
						
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
					private static extern ulong EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器的大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器的大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadPriorityMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadPriorityMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadPriorityMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadPriorityMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadPriorityMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadPriorityMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadPriorityMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadPriorityMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadPriorityMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadPriorityMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadPriorityMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadPriorityMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueueGroup::PriorityMap", new PriorityMapClassFactory());

					public PriorityMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static PriorityMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						PriorityMap obj = baseObj as  PriorityMap;
						if (object.Equals(obj, null))
						{
							obj = new PriorityMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "PriorityMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class PriorityMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						PriorityMap emptyInstance = new PriorityMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class PriorityMapPair : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public PriorityMapPair() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("PriorityMapPair",  null);
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
					private static extern ushort Get_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_first(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_first( IntPtr pObject, ushort value );

					public 					ushort First
					{
						get
						{
							ushort ret=Get_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_first(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_first(this.NativeObject,value);
						}
					}

					private EarthView.World.Graphic.RenderPriorityGroup secondField;
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
					private static extern IntPtr Get_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_second(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_second( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Graphic.RenderPriorityGroup Second
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_second(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(secondField, null)){
								secondField.NativeObject = __ptr;
								return secondField;
							}
							EarthView.World.Graphic.RenderPriorityGroup csObj = new EarthView.World.Graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderPriorityGroup;
								csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							secondField = value;
							Set_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_second( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadPriorityMapPair = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadPriorityMapPair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadPriorityMapPair = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadPriorityMapPair = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadPriorityMapPair = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadPriorityMapPair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadPriorityMapPair = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadPriorityMapPair = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadPriorityMapPair = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadPriorityMapPair = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadPriorityMapPair = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadPriorityMapPair = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair", new PriorityMapPairClassFactory());

					public PriorityMapPair(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static PriorityMapPair FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						PriorityMapPair obj = baseObj as  PriorityMapPair;
						if (object.Equals(obj, null))
						{
							obj = new PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "PriorityMapPair");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class PriorityMapPairClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						PriorityMapPair emptyInstance = new PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class PriorityMapIterator : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="lst">迭代器对应集合</param>
					/// <returns></returns>
					public PriorityMapIterator(ref EarthView.World.Graphic.RenderQueueGroup.PriorityMap lst) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelst = new BasePtr(lst);
						list.Add("lst", valuelst.PtrVal);
						Create("PriorityMapIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="other">其它迭代器</param>
					/// <returns></returns>
					public PriorityMapIterator(EarthView.World.Graphic.RenderQueueGroup.PriorityMapIterator other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("PriorityMapIterator", list);
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
					private static extern byte EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_hasMoreElements_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断迭代器是否到达容器末尾
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					public bool HasMoreElements()
					{
						byte ret=EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_hasMoreElements_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_moveNext_void(IntPtr pNativeObject);

					/// <summary>
					/// 迭代器位置后移
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void MoveNext()
					{
						EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_moveNext_void(this.NativeObject);
						
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
					private static extern ushort EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextKey_ev_uint16(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的键
					/// </summary>
					/// <param name=""></param>
					/// <returns>键</returns>
					public ushort NextKey()
					{
						ushort ret=EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextKey_ev_uint16(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextValue_CRenderPriorityGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					public EarthView.World.Graphic.RenderPriorityGroup NextValue()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextValue_CRenderPriorityGroup(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderPriorityGroup csObj = new EarthView.World.Graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderPriorityGroup;
							csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
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
					private static extern IntPtr[] EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextValuePtr_CRenderPriorityGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>值地址</returns>
					public EarthView.World.Graphic.RenderPriorityGroup[] NextValuePtr()
					{
						IntPtr[] ret=EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextValuePtr_CRenderPriorityGroup(this.NativeObject);
						
						EarthView.World.Graphic.RenderPriorityGroup[] csObjs=new EarthView.World.Graphic.RenderPriorityGroup[ret.Length];
						for (int i = 0; i < ret.Length; i++)
						{
						EarthView.World.Graphic.RenderPriorityGroup csObj = new EarthView.World.Graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(ret[i], "CRenderPriorityGroup");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderPriorityGroup;
							csObj.BindNativeObject(ret[i], "CRenderPriorityGroup");
						}
						csObjs[i]=csObj;
						}
						return csObjs;
						
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_next_CRenderPriorityGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					public EarthView.World.Graphic.RenderPriorityGroup Next()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_next_CRenderPriorityGroup(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderPriorityGroup csObj = new EarthView.World.Graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderPriorityGroup;
							csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getBegin_PriorityMapPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器首键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>首键值对</returns>
					public EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair GetBegin()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getBegin_PriorityMapPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair csObj = new EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "PriorityMapPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair;
							csObj.BindNativeObject(__ptr, "PriorityMapPair");
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getEnd_PriorityMapPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器尾键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>尾键值对</returns>
					public EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair GetEnd()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getEnd_PriorityMapPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair csObj = new EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "PriorityMapPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair;
							csObj.BindNativeObject(__ptr, "PriorityMapPair");
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getCurrent_PriorityMapPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>当前键值对</returns>
					public EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair GetCurrent()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getCurrent_PriorityMapPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair csObj = new EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "PriorityMapPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair;
							csObj.BindNativeObject(__ptr, "PriorityMapPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadPriorityMapIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadPriorityMapIterator = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadPriorityMapIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator", new PriorityMapIteratorClassFactory());

					public PriorityMapIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static PriorityMapIterator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						PriorityMapIterator obj = baseObj as  PriorityMapIterator;
						if (object.Equals(obj, null))
						{
							obj = new PriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "PriorityMapIterator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class PriorityMapIteratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						PriorityMapIterator emptyInstance = new PriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ConstPriorityMapIterator : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="lst">迭代器对应集合</param>
					/// <returns></returns>
					public ConstPriorityMapIterator(ref EarthView.World.Graphic.RenderQueueGroup.PriorityMap lst) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelst = new BasePtr(lst);
						list.Add("lst", valuelst.PtrVal);
						Create("ConstPriorityMapIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="other">其它迭代器</param>
					/// <returns></returns>
					public ConstPriorityMapIterator(EarthView.World.Graphic.RenderQueueGroup.ConstPriorityMapIterator other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("ConstPriorityMapIterator", list);
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
					private static extern byte EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_hasMoreElements_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断迭代器是否到达容器末尾
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					public bool HasMoreElements()
					{
						byte ret=EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_hasMoreElements_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_moveNext_void(IntPtr pNativeObject);

					/// <summary>
					/// 迭代器位置后移
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void MoveNext()
					{
						EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_moveNext_void(this.NativeObject);
						
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
					private static extern ushort EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextKey_ev_uint16(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的键
					/// </summary>
					/// <param name=""></param>
					/// <returns>键</returns>
					public ushort NextKey()
					{
						ushort ret=EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextKey_ev_uint16(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextValue_CRenderPriorityGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					public EarthView.World.Graphic.RenderPriorityGroup NextValue()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextValue_CRenderPriorityGroup(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderPriorityGroup csObj = new EarthView.World.Graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderPriorityGroup;
							csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
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
					private static extern IntPtr[] EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextValuePtr_CRenderPriorityGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>值地址</returns>
					public EarthView.World.Graphic.RenderPriorityGroup[] NextValuePtr()
					{
						IntPtr[] ret=EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextValuePtr_CRenderPriorityGroup(this.NativeObject);
						
						EarthView.World.Graphic.RenderPriorityGroup[] csObjs=new EarthView.World.Graphic.RenderPriorityGroup[ret.Length];
						for (int i = 0; i < ret.Length; i++)
						{
						EarthView.World.Graphic.RenderPriorityGroup csObj = new EarthView.World.Graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(ret[i], "CRenderPriorityGroup");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderPriorityGroup;
							csObj.BindNativeObject(ret[i], "CRenderPriorityGroup");
						}
						csObjs[i]=csObj;
						}
						return csObjs;
						
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_next_CRenderPriorityGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					public EarthView.World.Graphic.RenderPriorityGroup Next()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_next_CRenderPriorityGroup(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderPriorityGroup csObj = new EarthView.World.Graphic.RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderPriorityGroup;
							csObj.BindNativeObject(__ptr, "CRenderPriorityGroup");
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getBegin_PriorityMapPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器首键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>首键值对</returns>
					public EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair GetBegin()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getBegin_PriorityMapPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair csObj = new EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "PriorityMapPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair;
							csObj.BindNativeObject(__ptr, "PriorityMapPair");
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getEnd_PriorityMapPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器尾键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>尾键值对</returns>
					public EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair GetEnd()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getEnd_PriorityMapPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair csObj = new EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "PriorityMapPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair;
							csObj.BindNativeObject(__ptr, "PriorityMapPair");
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
					private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getCurrent_PriorityMapPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>当前键值对</returns>
					public EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair GetCurrent()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getCurrent_PriorityMapPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair csObj = new EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "PriorityMapPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup.PriorityMapPair;
							csObj.BindNativeObject(__ptr, "PriorityMapPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadConstPriorityMapIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator", new ConstPriorityMapIteratorClassFactory());

					public ConstPriorityMapIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ConstPriorityMapIterator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ConstPriorityMapIterator obj = baseObj as  ConstPriorityMapIterator;
						if (object.Equals(obj, null))
						{
							obj = new ConstPriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ConstPriorityMapIterator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ConstPriorityMapIteratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ConstPriorityMapIterator emptyInstance = new ConstPriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent"></param>
				/// <param name="splitPassesByLightingType"></param>
				/// <param name="splitNoShadowPasses"></param>
				/// <param name="shadowCastersNotReceivers"></param>
				/// <returns></returns>
				public RenderQueueGroup(EarthView.World.Graphic.RenderQueue ref_parent, bool splitPassesByLightingType, bool splitNoShadowPasses, bool shadowCastersNotReceivers) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					BasePtr valuesplitPassesByLightingType = new BasePtr(splitPassesByLightingType);
					list.Add("splitPassesByLightingType", valuesplitPassesByLightingType.PtrVal);
					BasePtr valuesplitNoShadowPasses = new BasePtr(splitNoShadowPasses);
					list.Add("splitNoShadowPasses", valuesplitNoShadowPasses.PtrVal);
					BasePtr valueshadowCastersNotReceivers = new BasePtr(shadowCastersNotReceivers);
					list.Add("shadowCastersNotReceivers", valueshadowCastersNotReceivers.PtrVal);
					Create("CRenderQueueGroup", list);
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
				private static extern IntPtr EarthView_World_Graphic_CRenderQueueGroup_getIterator_PriorityMapIterator(IntPtr pNativeObject);

				/// <summary>
				/// 获得一个通过子内容浏览的迭代器
				/// </summary>
				/// <param name=""></param>
				/// <returns>迭代器</returns>
				public EarthView.World.Graphic.RenderQueueGroup.PriorityMapIterator GetIterator()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderQueueGroup_getIterator_PriorityMapIterator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderQueueGroup.PriorityMapIterator csObj = new EarthView.World.Graphic.RenderQueueGroup.PriorityMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "PriorityMapIterator");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup.PriorityMapIterator;
						csObj.BindNativeObject(__ptr, "PriorityMapIterator");
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_addRenderable_void_CRenderable_CTechnique_ev_uint16(IntPtr pNativeObject, IntPtr pRend, IntPtr pTech, ushort priority);

				/// <summary>
				/// 运用已给的属性在组中添加一个渲染接口
				/// </summary>
				/// <param name="pRend"></param>
				/// <param name="pTech"></param>
				/// <param name="priority"></param>
				/// <returns></returns>
				public void AddRenderable(EarthView.World.Graphic.Renderable pRend, EarthView.World.Graphic.Technique pTech, ushort priority)
				{
					EarthView_World_Graphic_CRenderQueueGroup_addRenderable_void_CRenderable_CTechnique_ev_uint16(this.NativeObject, object.Equals(pRend, null) ? IntPtr.Zero : pRend.NativeObject, object.Equals(pTech, null) ? IntPtr.Zero : pTech.NativeObject, priority);
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_clear_void_ev_bool(IntPtr pNativeObject, byte destroy);

				/// <summary>
				/// 清空组中的渲染接口
				/// </summary>
				/// <param name="destory"></param>
				/// <returns></returns>
				public void Clear(bool destroy)
				{
					EarthView_World_Graphic_CRenderQueueGroup_clear_void_ev_bool(this.NativeObject, Convert.ToByte(destroy));
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空组中的渲染接口
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Clear()
				{
					EarthView_World_Graphic_CRenderQueueGroup_clear_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_setShadowsEnabled_void_ev_bool(IntPtr pNativeObject, byte enabled);

				/// <summary>
				/// 指出是否对已给队列组做阴影设置
				/// </summary>
				/// <param name="destory"></param>
				/// <returns></returns>
				public void SetShadowsEnabled(bool enabled)
				{
					EarthView_World_Graphic_CRenderQueueGroup_setShadowsEnabled_void_ev_bool(this.NativeObject, Convert.ToByte(enabled));
					
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
				private static extern byte EarthView_World_Graphic_CRenderQueueGroup_getShadowsEnabled_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获得阴影对这个队列是否可用
				/// </summary>
				/// <param name=""></param>
				/// <returns>可用返回true，否则返回false</returns>
				public bool GetShadowsEnabled()
				{
					byte ret=EarthView_World_Graphic_CRenderQueueGroup_getShadowsEnabled_ev_bool(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_setSplitPassesByLightingType_void_ev_bool(IntPtr pNativeObject, byte split);

				/// <summary>
				/// 队列中是否对通过光照类型进行划分的通路进行设置
				/// </summary>
				/// <param name="split"></param>
				/// <returns></returns>
				public void SetSplitPassesByLightingType(bool split)
				{
					EarthView_World_Graphic_CRenderQueueGroup_setSplitPassesByLightingType_void_ev_bool(this.NativeObject, Convert.ToByte(split));
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_setSplitNoShadowPasses_void_ev_bool(IntPtr pNativeObject, byte split);

				/// <summary>
				/// 队列中是否对接收阴影已经关闭的通路进行划分设置
				/// </summary>
				/// <param name="split"></param>
				/// <returns></returns>
				public void SetSplitNoShadowPasses(bool split)
				{
					EarthView_World_Graphic_CRenderQueueGroup_setSplitNoShadowPasses_void_ev_bool(this.NativeObject, Convert.ToByte(split));
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_setShadowCastersCannotBeReceivers_void_ev_bool(IntPtr pNativeObject, byte ind);

				/// <summary>
				/// 对投射阴影的实体是否不再接收阴影进行设置
				/// </summary>
				/// <param name="ind"></param>
				/// <returns></returns>
				public void SetShadowCastersCannotBeReceivers(bool ind)
				{
					EarthView_World_Graphic_CRenderQueueGroup_setShadowCastersCannotBeReceivers_void_ev_bool(this.NativeObject, Convert.ToByte(ind));
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_resetOrganisationModes_void(IntPtr pNativeObject);

				/// <summary>
				/// 重新设置实体需要的组织模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void ResetOrganisationModes()
				{
					EarthView_World_Graphic_CRenderQueueGroup_resetOrganisationModes_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_addOrganisationMode_void_OrganisationMode(IntPtr pNativeObject, EarthView.World.Graphic.QueuedRenderableCollection.ORGANISATIONMODE om);

				/// <summary>
				/// 给实体添加一个分组模型
				/// </summary>
				/// <param name="om"></param>
				/// <returns></returns>
				public void AddOrganisationMode(EarthView.World.Graphic.QueuedRenderableCollection.ORGANISATIONMODE om)
				{
					EarthView_World_Graphic_CRenderQueueGroup_addOrganisationMode_void_OrganisationMode(this.NativeObject, om);
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_defaultOrganisationMode_void(IntPtr pNativeObject);

				/// <summary>
				/// 设置实体的分组模型为默认值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void DefaultOrganisationMode()
				{
					EarthView_World_Graphic_CRenderQueueGroup_defaultOrganisationMode_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CRenderQueueGroup_merge_void_CRenderQueueGroup(IntPtr pNativeObject, IntPtr rhs);

				/// <summary>
				/// 融合渲染接口
				/// </summary>
				/// <param name="rhs"></param>
				/// <returns></returns>
				public void Merge(EarthView.World.Graphic.RenderQueueGroup rhs)
				{
					EarthView_World_Graphic_CRenderQueueGroup_merge_void_CRenderQueueGroup(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderQueueGroup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderQueueGroup = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderQueueGroup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderQueueGroup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueueGroup", new RenderQueueGroupClassFactory());

				public RenderQueueGroup(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RenderQueueGroup FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderQueueGroup obj = baseObj as  RenderQueueGroup;
					if (object.Equals(obj, null))
					{
						obj = new RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderQueueGroup");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderQueueGroupClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderQueueGroup emptyInstance = new RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
