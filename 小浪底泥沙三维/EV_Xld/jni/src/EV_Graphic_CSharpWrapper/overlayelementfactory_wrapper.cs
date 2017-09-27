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
			public class OverlayElementFactory : EarthView.World.Core.AllocatedObject
			{
				public OverlayElementFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("COverlayElementFactoryProxy", null);
					if (!"EarthView.World.Graphic.OverlayElementFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createOverlayElement_CallBack_COverlayElement_EVString(ref IntPtr instanceName);

				protected createOverlayElement_CallBack_COverlayElement_EVString m_createOverlayElement_CallBack_COverlayElement_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(IntPtr pNativeObject, string instanceName);

				public virtual EarthView.World.Graphic.OverlayElement CreateOverlayElement_NoVirtual(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Function(ref IntPtr instanceName)
				{
					string strinstanceName= Marshal.PtrToStringAnsi(instanceName);
					ClassFactory.FreeString(ref instanceName);
					
					EarthView.World.Graphic.OverlayElement csret=CreateOverlayElement(strinstanceName);
					
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
				private static extern IntPtr EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pNativeObject, string instanceName);

				public virtual EarthView.World.Graphic.OverlayElement CreateOverlayElement(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyOverlayElement_CallBack_void_COverlayElement(IntPtr pElement);

				protected destroyOverlayElement_CallBack_void_COverlayElement m_destroyOverlayElement_CallBack_void_COverlayElement;

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
				private static extern void EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_NoVirtual(IntPtr pNativeObject, IntPtr pElement);

				public virtual void DestroyOverlayElement_NoVirtual(EarthView.World.Graphic.OverlayElement pElement)
				{
					EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_NoVirtual(this.NativeObject, object.Equals(pElement, null) ? IntPtr.Zero : pElement.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Function(IntPtr pElement)
				{
					EarthView.World.Graphic.OverlayElement csobj_pElement = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pElement.BindNativeObject(pElement,"COverlayElement");
					csobj_pElement.Delegate = true;
					IClassFactory csobj_pElementClassFactory = GlobalClassFactoryMap.Get(csobj_pElement.GetCppInstanceTypeName());
					if (csobj_pElementClassFactory != null)
					{
						csobj_pElement.Delegate = true;
						csobj_pElement = csobj_pElementClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csobj_pElement.BindNativeObject(pElement, "COverlayElement");
						csobj_pElement.Delegate = true;
					}
					
					DestroyOverlayElement(csobj_pElement);
					
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
				private static extern void EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement(IntPtr pNativeObject, IntPtr pElement);

				public virtual void DestroyOverlayElement(EarthView.World.Graphic.OverlayElement pElement)
				{
					EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement(this.NativeObject, object.Equals(pElement, null) ? IntPtr.Zero : pElement.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getTypeName_CallBack_EVString();

				protected getTypeName_CallBack_EVString m_getTypeName_CallBack_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_NoVirtual(IntPtr pNativeObject);

				public virtual string GetTypeName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Function()
				{
					string csret=GetTypeName();
					
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
				private static extern IntPtr EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString(IntPtr pNativeObject);

				public virtual string GetTypeName()
				{
					IntPtr __ptr = EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadOverlayElementFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::COverlayElementFactory", new OverlayElementFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::COverlayElementFactoryProxy", new OverlayElementFactoryClassFactory());

				public OverlayElementFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pObject, createOverlayElement_CallBack_COverlayElement_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement(IntPtr pObject, destroyOverlayElement_CallBack_void_COverlayElement pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString(IntPtr pObject, getTypeName_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createOverlayElement_CallBack_COverlayElement_EVString = EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Function;
						GC.KeepAlive(m_createOverlayElement_CallBack_COverlayElement_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, m_createOverlayElement_CallBack_COverlayElement_EVString);
						m_destroyOverlayElement_CallBack_void_COverlayElement = EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Function;
						GC.KeepAlive(m_destroyOverlayElement_CallBack_void_COverlayElement);
						EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement(this.NativeObject, m_destroyOverlayElement_CallBack_void_COverlayElement);
						m_getTypeName_CallBack_EVString = EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Function;
						GC.KeepAlive(m_getTypeName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString(this.NativeObject, m_getTypeName_CallBack_EVString);
					}
				}
				public static OverlayElementFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					OverlayElementFactory obj = baseObj as  OverlayElementFactory;
					if (object.Equals(obj, null))
					{
						obj = new OverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COverlayElementFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OverlayElementFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					OverlayElementFactory emptyInstance = new OverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class PanelOverlayElementFactory : EarthView.World.Graphic.OverlayElementFactory
			{
				public PanelOverlayElementFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CPanelOverlayElementFactoryProxy", null);
					if (!"EarthView.World.Graphic.PanelOverlayElementFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
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
				private static extern IntPtr EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(IntPtr pNativeObject, string instanceName);

				public new EarthView.World.Graphic.OverlayElement CreateOverlayElement_NoVirtual(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
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
				private static extern IntPtr EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pNativeObject, string instanceName);

				public override EarthView.World.Graphic.OverlayElement CreateOverlayElement(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
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
				private static extern IntPtr EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_NoVirtual(IntPtr pNativeObject);

				public new string GetTypeName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString(IntPtr pNativeObject);

				public override string GetTypeName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPanelOverlayElementFactory", new PanelOverlayElementFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPanelOverlayElementFactoryProxy", new PanelOverlayElementFactoryClassFactory());

				public PanelOverlayElementFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pObject, createOverlayElement_CallBack_COverlayElement_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement(IntPtr pObject, destroyOverlayElement_CallBack_void_COverlayElement pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString(IntPtr pObject, getTypeName_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createOverlayElement_CallBack_COverlayElement_EVString = EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Function;
						GC.KeepAlive(m_createOverlayElement_CallBack_COverlayElement_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, m_createOverlayElement_CallBack_COverlayElement_EVString);
						m_destroyOverlayElement_CallBack_void_COverlayElement = EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Function;
						GC.KeepAlive(m_destroyOverlayElement_CallBack_void_COverlayElement);
						EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement(this.NativeObject, m_destroyOverlayElement_CallBack_void_COverlayElement);
						m_getTypeName_CallBack_EVString = EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Function;
						GC.KeepAlive(m_getTypeName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CPanelOverlayElementFactory_getTypeName_EVString(this.NativeObject, m_getTypeName_CallBack_EVString);
					}
				}
				public override void DestroyOverlayElement(EarthView.World.Graphic.OverlayElement pElement)
				{
					base.DestroyOverlayElement_NoVirtual(pElement);
				}
				public static PanelOverlayElementFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PanelOverlayElementFactory obj = baseObj as  PanelOverlayElementFactory;
					if (object.Equals(obj, null))
					{
						obj = new PanelOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPanelOverlayElementFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PanelOverlayElementFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PanelOverlayElementFactory emptyInstance = new PanelOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class BorderPanelOverlayElementFactory : EarthView.World.Graphic.OverlayElementFactory
			{
				public BorderPanelOverlayElementFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CBorderPanelOverlayElementFactoryProxy", null);
					if (!"EarthView.World.Graphic.BorderPanelOverlayElementFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
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
				private static extern IntPtr EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(IntPtr pNativeObject, string instanceName);

				public new EarthView.World.Graphic.OverlayElement CreateOverlayElement_NoVirtual(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
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
				private static extern IntPtr EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pNativeObject, string instanceName);

				public override EarthView.World.Graphic.OverlayElement CreateOverlayElement(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
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
				private static extern IntPtr EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_NoVirtual(IntPtr pNativeObject);

				public new string GetTypeName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString(IntPtr pNativeObject);

				public override string GetTypeName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadBorderPanelOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CBorderPanelOverlayElementFactory", new BorderPanelOverlayElementFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CBorderPanelOverlayElementFactoryProxy", new BorderPanelOverlayElementFactoryClassFactory());

				public BorderPanelOverlayElementFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pObject, createOverlayElement_CallBack_COverlayElement_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement(IntPtr pObject, destroyOverlayElement_CallBack_void_COverlayElement pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString(IntPtr pObject, getTypeName_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createOverlayElement_CallBack_COverlayElement_EVString = EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Function;
						GC.KeepAlive(m_createOverlayElement_CallBack_COverlayElement_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, m_createOverlayElement_CallBack_COverlayElement_EVString);
						m_destroyOverlayElement_CallBack_void_COverlayElement = EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Function;
						GC.KeepAlive(m_destroyOverlayElement_CallBack_void_COverlayElement);
						EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_destroyOverlayElement_void_COverlayElement(this.NativeObject, m_destroyOverlayElement_CallBack_void_COverlayElement);
						m_getTypeName_CallBack_EVString = EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Function;
						GC.KeepAlive(m_getTypeName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CBorderPanelOverlayElementFactory_getTypeName_EVString(this.NativeObject, m_getTypeName_CallBack_EVString);
					}
				}
				public override void DestroyOverlayElement(EarthView.World.Graphic.OverlayElement pElement)
				{
					base.DestroyOverlayElement_NoVirtual(pElement);
				}
				public static BorderPanelOverlayElementFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					BorderPanelOverlayElementFactory obj = baseObj as  BorderPanelOverlayElementFactory;
					if (object.Equals(obj, null))
					{
						obj = new BorderPanelOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CBorderPanelOverlayElementFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class BorderPanelOverlayElementFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					BorderPanelOverlayElementFactory emptyInstance = new BorderPanelOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class TextAreaOverlayElementFactory : EarthView.World.Graphic.OverlayElementFactory
			{
				public TextAreaOverlayElementFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTextAreaOverlayElementFactoryProxy", null);
					if (!"EarthView.World.Graphic.TextAreaOverlayElementFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
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
				private static extern IntPtr EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(IntPtr pNativeObject, string instanceName);

				public new EarthView.World.Graphic.OverlayElement CreateOverlayElement_NoVirtual(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
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
				private static extern IntPtr EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pNativeObject, string instanceName);

				public override EarthView.World.Graphic.OverlayElement CreateOverlayElement(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
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
				private static extern IntPtr EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_NoVirtual(IntPtr pNativeObject);

				public new string GetTypeName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString(IntPtr pNativeObject);

				public override string GetTypeName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextAreaOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextAreaOverlayElementFactory", new TextAreaOverlayElementFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextAreaOverlayElementFactoryProxy", new TextAreaOverlayElementFactoryClassFactory());

				public TextAreaOverlayElementFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pObject, createOverlayElement_CallBack_COverlayElement_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement(IntPtr pObject, destroyOverlayElement_CallBack_void_COverlayElement pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString(IntPtr pObject, getTypeName_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createOverlayElement_CallBack_COverlayElement_EVString = EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Function;
						GC.KeepAlive(m_createOverlayElement_CallBack_COverlayElement_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, m_createOverlayElement_CallBack_COverlayElement_EVString);
						m_destroyOverlayElement_CallBack_void_COverlayElement = EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Function;
						GC.KeepAlive(m_destroyOverlayElement_CallBack_void_COverlayElement);
						EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_destroyOverlayElement_void_COverlayElement(this.NativeObject, m_destroyOverlayElement_CallBack_void_COverlayElement);
						m_getTypeName_CallBack_EVString = EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Function;
						GC.KeepAlive(m_getTypeName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextAreaOverlayElementFactory_getTypeName_EVString(this.NativeObject, m_getTypeName_CallBack_EVString);
					}
				}
				public override void DestroyOverlayElement(EarthView.World.Graphic.OverlayElement pElement)
				{
					base.DestroyOverlayElement_NoVirtual(pElement);
				}
				public static TextAreaOverlayElementFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TextAreaOverlayElementFactory obj = baseObj as  TextAreaOverlayElementFactory;
					if (object.Equals(obj, null))
					{
						obj = new TextAreaOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTextAreaOverlayElementFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TextAreaOverlayElementFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TextAreaOverlayElementFactory emptyInstance = new TextAreaOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class CharOverlayElementFactory : EarthView.World.Graphic.OverlayElementFactory
			{
				public CharOverlayElementFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCharOverlayElementFactoryProxy", null);
					if (!"EarthView.World.Graphic.CharOverlayElementFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
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
				private static extern IntPtr EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(IntPtr pNativeObject, string instanceName);

				public new EarthView.World.Graphic.OverlayElement CreateOverlayElement_NoVirtual(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString_NoVirtual(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
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
				private static extern IntPtr EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pNativeObject, string instanceName);

				public override EarthView.World.Graphic.OverlayElement CreateOverlayElement(string instanceName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, instanceName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OverlayElement csObj = new EarthView.World.Graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COverlayElement");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OverlayElement;
						csObj.BindNativeObject(__ptr, "COverlayElement");
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
				private static extern IntPtr EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_NoVirtual(IntPtr pNativeObject);

				public new string GetTypeName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString(IntPtr pNativeObject);

				public override string GetTypeName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCharOverlayElementFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCharOverlayElementFactory", new CharOverlayElementFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCharOverlayElementFactoryProxy", new CharOverlayElementFactoryClassFactory());

				public CharOverlayElementFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString(IntPtr pObject, createOverlayElement_CallBack_COverlayElement_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement(IntPtr pObject, destroyOverlayElement_CallBack_void_COverlayElement pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString(IntPtr pObject, getTypeName_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createOverlayElement_CallBack_COverlayElement_EVString = EarthView_World_Graphic_COverlayElementFactory_createOverlayElement_COverlayElement_EVString_Function;
						GC.KeepAlive(m_createOverlayElement_CallBack_COverlayElement_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_createOverlayElement_COverlayElement_EVString(this.NativeObject, m_createOverlayElement_CallBack_COverlayElement_EVString);
						m_destroyOverlayElement_CallBack_void_COverlayElement = EarthView_World_Graphic_COverlayElementFactory_destroyOverlayElement_void_COverlayElement_Function;
						GC.KeepAlive(m_destroyOverlayElement_CallBack_void_COverlayElement);
						EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_destroyOverlayElement_void_COverlayElement(this.NativeObject, m_destroyOverlayElement_CallBack_void_COverlayElement);
						m_getTypeName_CallBack_EVString = EarthView_World_Graphic_COverlayElementFactory_getTypeName_EVString_Function;
						GC.KeepAlive(m_getTypeName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CCharOverlayElementFactory_getTypeName_EVString(this.NativeObject, m_getTypeName_CallBack_EVString);
					}
				}
				public override void DestroyOverlayElement(EarthView.World.Graphic.OverlayElement pElement)
				{
					base.DestroyOverlayElement_NoVirtual(pElement);
				}
				public static CharOverlayElementFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CharOverlayElementFactory obj = baseObj as  CharOverlayElementFactory;
					if (object.Equals(obj, null))
					{
						obj = new CharOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCharOverlayElementFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CharOverlayElementFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CharOverlayElementFactory emptyInstance = new CharOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
