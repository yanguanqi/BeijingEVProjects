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
			namespace Display
			{
				/// <summary>
				/// 用户扩展符号的序列化类
				/// 纯虚类                
				/// </summary>
				public class Isymbollistener : EarthView.World.Core.AllocatedObject
				{
					public Isymbollistener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ISymbolListenerProxy", null);
						if (!"EarthView.World.Spatial.Display.Isymbollistener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr customSymbolFromXml_CallBack_ISymbol_EVString(ref IntPtr strXml);

					protected customSymbolFromXml_CallBack_ISymbol_EVString m_customSymbolFromXml_CallBack_ISymbol_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_NoVirtual(IntPtr pNativeObject, string strXml);

					/// <summary>
					/// 从XML中恢复用户自定义类型的符号			  
					/// </summary>
					/// <param name="strXml">符号的XML文本</param>
					public virtual EarthView.World.Spatial.Display.Isymbol CustomSymbolFromXml_NoVirtual(string strXml)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_NoVirtual(this.NativeObject, strXml);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISymbol");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csObj.BindNativeObject(__ptr, "ISymbol");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Function(ref IntPtr strXml)
					{
						string strstrXml= Marshal.PtrToStringAnsi(strXml);
						ClassFactory.FreeString(ref strXml);
						
						EarthView.World.Spatial.Display.Isymbol csret=CustomSymbolFromXml(strstrXml);
						
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
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString(IntPtr pNativeObject, string strXml);

					/// <summary>
					/// 从XML中恢复用户自定义类型的符号			  
					/// </summary>
					/// <param name="strXml">符号的XML文本</param>
					public virtual EarthView.World.Spatial.Display.Isymbol CustomSymbolFromXml(string strXml)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString(this.NativeObject, strXml);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISymbol");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csObj.BindNativeObject(__ptr, "ISymbol");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string customSymbolToXml_CallBack_EVString_ISymbol(IntPtr symbol);

					protected customSymbolToXml_CallBack_EVString_ISymbol m_customSymbolToXml_CallBack_EVString_ISymbol;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_NoVirtual(IntPtr pNativeObject, IntPtr symbol);

					/// <summary>
					/// 将用户自定义类型的符号序列化成XML文本			  
					/// </summary>
					/// <param name="symbol">符号对象</param>
					public virtual string CustomSymbolToXml_NoVirtual(EarthView.World.Spatial.Display.Isymbol symbol)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_NoVirtual(this.NativeObject, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Function(IntPtr symbol)
					{
						EarthView.World.Spatial.Display.Isymbol csobj_symbol = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_symbol.BindNativeObject(symbol,"ISymbol");
						csobj_symbol.Delegate = true;
						IClassFactory csobj_symbolClassFactory = GlobalClassFactoryMap.Get(csobj_symbol.GetCppInstanceTypeName());
						if (csobj_symbolClassFactory != null)
						{
							csobj_symbol.Delegate = true;
							csobj_symbol = csobj_symbolClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csobj_symbol.BindNativeObject(symbol, "ISymbol");
							csobj_symbol.Delegate = true;
						}
						
						string csret=CustomSymbolToXml(csobj_symbol);
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol(IntPtr pNativeObject, IntPtr symbol);

					/// <summary>
					/// 将用户自定义类型的符号序列化成XML文本			  
					/// </summary>
					/// <param name="symbol">符号对象</param>
					public virtual string CustomSymbolToXml(EarthView.World.Spatial.Display.Isymbol symbol)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol(this.NativeObject, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_d.dll");
							private static bool csbLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_d.so");
							private static bool csbLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_CSharp_d.so");

						#else 
							private static bool bLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_d.dll");
							private static bool csbLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIsymbollistener = LoadDll.Load("EV_ProjectManager.dll");
							private static bool csbLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_CSharp.dll");

						#elif Linux 
							private static bool bLoadIsymbollistener = LoadDll.Load("EV_ProjectManager.so");
							private static bool csbLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_CSharp.so");

						#else 
							private static bool bLoadIsymbollistener = LoadDll.Load("EV_ProjectManager.dll");
							private static bool csbLoadIsymbollistener = LoadDll.Load("EV_ProjectManager_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISymbolListener", new IsymbollistenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISymbolListenerProxy", new IsymbollistenerClassFactory());

					public Isymbollistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString(IntPtr pObject, customSymbolFromXml_CallBack_ISymbol_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_ProjectManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol(IntPtr pObject, customSymbolToXml_CallBack_EVString_ISymbol pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_customSymbolFromXml_CallBack_ISymbol_EVString = EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Function;
							GC.KeepAlive(m_customSymbolFromXml_CallBack_ISymbol_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString(this.NativeObject, m_customSymbolFromXml_CallBack_ISymbol_EVString);
							m_customSymbolToXml_CallBack_EVString_ISymbol = EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Function;
							GC.KeepAlive(m_customSymbolToXml_CallBack_EVString_ISymbol);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol(this.NativeObject, m_customSymbolToXml_CallBack_EVString_ISymbol);
						}
					}
					public static Isymbollistener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Isymbollistener obj = baseObj as  Isymbollistener;
						if (object.Equals(obj, null))
						{
							obj = new Isymbollistener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ISymbolListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IsymbollistenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Isymbollistener emptyInstance = new Isymbollistener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
