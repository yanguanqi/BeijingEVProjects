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
		namespace Spatial2D
		{
			namespace Renderer
			{
				public class DrawThemeFactory : EarthView.World.Core.AllocatedObject
				{
					public DrawThemeFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDrawThemeFactoryProxy", null);
						if (!"EarthView.World.Spatial2D.Renderer.DrawThemeFactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_getKeys_CStringArray(IntPtr pNativeObject);

					/// <summary>
					/// 获取支持的专题图关键字
					/// </summary>
					/// <returns>关键字列表</returns>
					public EarthView.World.Core.StringArray GetKeys()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_getKeys_CStringArray(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.StringArray csObj = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CStringArray");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.StringArray;
							csObj.BindNativeObject(__ptr, "CStringArray");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_isSupported_ev_bool_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 判断是否支持该关键字的专题图创建
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>支持返回true，不支持返回false</returns>
					public bool IsSupported(string key)
					{
						byte ret=EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_isSupported_ev_bool_EVString(this.NativeObject, key);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr create_CallBack_CDrawTheme_EVString(ref IntPtr key);

					protected create_CallBack_CDrawTheme_EVString m_create_CallBack_CDrawTheme_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_NoVirtual(IntPtr pNativeObject, string key);

					public virtual EarthView.World.Spatial2D.Renderer.DrawTheme Create_NoVirtual(string key)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_NoVirtual(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Renderer.DrawTheme csObj = new EarthView.World.Spatial2D.Renderer.DrawTheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawTheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Renderer.DrawTheme;
							csObj.BindNativeObject(__ptr, "CDrawTheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Function(ref IntPtr key)
					{
						string strkey= Marshal.PtrToStringAnsi(key);
						ClassFactory.FreeString(ref key);
						
						EarthView.World.Spatial2D.Renderer.DrawTheme csret=Create(strkey);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString(IntPtr pNativeObject, string key);

					public virtual EarthView.World.Spatial2D.Renderer.DrawTheme Create(string key)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Renderer.DrawTheme csObj = new EarthView.World.Spatial2D.Renderer.DrawTheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawTheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Renderer.DrawTheme;
							csObj.BindNativeObject(__ptr, "CDrawTheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_destroy_void_CDrawTheme(IntPtr pNativeObject, IntPtr obj);

					public void Destroy(EarthView.World.Spatial2D.Renderer.DrawTheme obj)
					{
						EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_destroy_void_CDrawTheme(this.NativeObject, object.Equals(obj, null) ? IntPtr.Zero : obj.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_initialize_void(IntPtr pNativeObject);

					public void Initialize()
					{
						EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_initialize_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_d.so");
							private static bool csbLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.so");

						#else 
							private static bool bLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay.so");
							private static bool csbLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_CSharp.so");

						#else 
							private static bool bLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadDrawThemeFactory = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactory", new DrawThemeFactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryProxy", new DrawThemeFactoryClassFactory());

					public DrawThemeFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString(IntPtr pObject, create_CallBack_CDrawTheme_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_create_CallBack_CDrawTheme_EVString = EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Function;
							GC.KeepAlive(m_create_CallBack_CDrawTheme_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString(this.NativeObject, m_create_CallBack_CDrawTheme_EVString);
						}
					}
					public static DrawThemeFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DrawThemeFactory obj = baseObj as  DrawThemeFactory;
						if (object.Equals(obj, null))
						{
							obj = new DrawThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDrawThemeFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DrawThemeFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DrawThemeFactory emptyInstance = new DrawThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class DrawThemeFactoryRegistry : BaseObject
				{
					public DrawThemeFactoryRegistry() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDrawThemeFactoryRegistry",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Renderer_CDrawThemeFactoryRegistry_registryFactory_int_CDrawThemeFactory(IntPtr pNativeObject, IntPtr factory);

					public int RegistryFactory(EarthView.World.Spatial2D.Renderer.DrawThemeFactory factory)
					{
						int ret=EarthView_World_Spatial2D_Renderer_CDrawThemeFactoryRegistry_registryFactory_int_CDrawThemeFactory(this.NativeObject, object.Equals(factory, null) ? IntPtr.Zero : factory.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Renderer_CDrawThemeFactoryRegistry_getFactory_CDrawThemeFactory_EVString(IntPtr pNativeObject, string key);

					public EarthView.World.Spatial2D.Renderer.DrawThemeFactory GetFactory(string key)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Renderer_CDrawThemeFactoryRegistry_getFactory_CDrawThemeFactory_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Renderer.DrawThemeFactory csObj = new EarthView.World.Spatial2D.Renderer.DrawThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawThemeFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Renderer.DrawThemeFactory;
							csObj.BindNativeObject(__ptr, "CDrawThemeFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_d.so");
							private static bool csbLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.so");

						#else 
							private static bool bLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay.so");
							private static bool csbLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_CSharp.so");

						#else 
							private static bool bLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadDrawThemeFactoryRegistry = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry", new DrawThemeFactoryRegistryClassFactory());

					public DrawThemeFactoryRegistry(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DrawThemeFactoryRegistry FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DrawThemeFactoryRegistry obj = baseObj as  DrawThemeFactoryRegistry;
						if (object.Equals(obj, null))
						{
							obj = new DrawThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDrawThemeFactoryRegistry");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DrawThemeFactoryRegistryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DrawThemeFactoryRegistry emptyInstance = new DrawThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
