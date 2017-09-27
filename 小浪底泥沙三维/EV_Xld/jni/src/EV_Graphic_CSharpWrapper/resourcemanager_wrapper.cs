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
			public class ResourceManager : EarthView.World.Graphic.ScriptLoader
			{
				public ResourceManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CResourceManagerProxy", null);
					if (!"EarthView.World.Graphic.ResourceManager".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getSingleton_CResourceManager();

				public static EarthView.World.Graphic.ResourceManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getSingleton_CResourceManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager csObj = new EarthView.World.Graphic.ResourceManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourceManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager;
						csObj.BindNativeObject(__ptr, "CResourceManager");
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getSingletonPtr_CResourceManager();

				public static EarthView.World.Graphic.ResourceManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getSingletonPtr_CResourceManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager csObj = new EarthView.World.Graphic.ResourceManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourceManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager;
						csObj.BindNativeObject(__ptr, "CResourceManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams);

				protected create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams);

				/// <summary>
				/// 创建(但不加载)资源，若存在则直接返回
				/// </summary>				
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr Create_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_createParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_createParams.BindNativeObject(createParams,"CommonStringPairList");
					csobj_createParams.Delegate = true;
					IClassFactory csobj_createParamsClassFactory = GlobalClassFactoryMap.Get(csobj_createParams.GetCppInstanceTypeName());
					if (csobj_createParamsClassFactory != null)
					{
						csobj_createParams.Delegate = true;
						csobj_createParams = csobj_createParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_createParams.BindNativeObject(createParams, "CommonStringPairList");
						csobj_createParams.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Create(strname,strgroup,isManual, csobj_ref_loader, csobj_createParams);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams);

				/// <summary>
				/// 创建(但不加载)资源，若存在则直接返回
				/// </summary>				
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader);

				protected create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr Create_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Create(strname,strgroup,isManual, csobj_ref_loader);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr create_CallBack_ResourcePtr_EVString_EVString_ev_bool(ref IntPtr name, ref IntPtr group, bool isManual);

				protected create_CallBack_ResourcePtr_EVString_EVString_ev_bool m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr Create_NoVirtual(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_Function(ref IntPtr name, ref IntPtr group, bool isManual)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Create(strname,strgroup,isManual);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr create_CallBack_ResourcePtr_EVString_EVString(ref IntPtr name, ref IntPtr group);

				protected create_CallBack_ResourcePtr_EVString_EVString m_create_CallBack_ResourcePtr_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.ResourcePtr Create_NoVirtual(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_NoVirtual(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_Function(ref IntPtr name, ref IntPtr group)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Create(strname,strgroup);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.ResourcePtr Create(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams);

				/// <summary>
				/// 只创建(不加载)资源，不考虑同名的资源是否已经存在，创建后也不再管理该资源
				/// </summary>				
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_createParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_createParams.BindNativeObject(createParams,"CommonStringPairList");
					csobj_createParams.Delegate = true;
					IClassFactory csobj_createParamsClassFactory = GlobalClassFactoryMap.Get(csobj_createParams.GetCppInstanceTypeName());
					if (csobj_createParamsClassFactory != null)
					{
						csobj_createParams.Delegate = true;
						csobj_createParams = csobj_createParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_createParams.BindNativeObject(createParams, "CommonStringPairList");
						csobj_createParams.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual, csobj_ref_loader, csobj_createParams);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams);

				/// <summary>
				/// 只创建(不加载)资源，不考虑同名的资源是否已经存在，创建后也不再管理该资源
				/// </summary>				
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader(ref IntPtr name, bool isManual, IntPtr ref_loader);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Function(ref IntPtr name, bool isManual, IntPtr ref_loader)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual, csobj_ref_loader);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool(ref IntPtr name, bool isManual);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Function(ref IntPtr name, bool isManual)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool(IntPtr pNativeObject, string name, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool(this.NativeObject, name, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString(ref IntPtr name);

				protected createUnmanaged_CallBack_ResourcePtr_EVString m_createUnmanaged_CallBack_ResourcePtr_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				public class ResourceCreateOrRetrieveResult : EarthView.World.Core.BaseObject
				{
					private EarthView.World.Graphic.ResourcePtr firstField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_first(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_first( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Graphic.ResourcePtr First
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_first(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(firstField, null)){
								firstField.NativeObject = __ptr;
								return firstField;
							}
							EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "ResourcePtr");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
								csObj.BindNativeObject(__ptr, "ResourcePtr");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							firstField = value;
							Set_EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_first( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
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
					private static extern byte Get_EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_second(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_second( IntPtr pObject, byte value );

					public 					bool Second
					{
						get
						{
							byte ret=Get_EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_second(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_second(this.NativeObject,Convert.ToByte(value));
						}
					}

					public ResourceCreateOrRetrieveResult() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ResourceCreateOrRetrieveResult",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public ResourceCreateOrRetrieveResult(EarthView.World.Graphic.ResourcePtr fir, bool sec) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuefir = new BasePtr(fir);
						list.Add("fir", valuefir.PtrVal);
						BasePtr valuesec = new BasePtr(sec);
						list.Add("sec", valuesec.PtrVal);
						Create("ResourceCreateOrRetrieveResult", list);
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_OperatorAssign_ResourceCreateOrRetrieveResult_ResourceCreateOrRetrieveResult(IntPtr pNativeObject, IntPtr other);

					public EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult OperatorAssign(EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult other)
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceCreateOrRetrieveResult_OperatorAssign_ResourceCreateOrRetrieveResult_ResourceCreateOrRetrieveResult(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
							csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceCreateOrRetrieveResult = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult", new ResourceCreateOrRetrieveResultClassFactory());

					public ResourceCreateOrRetrieveResult(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ResourceCreateOrRetrieveResult FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceCreateOrRetrieveResult obj = baseObj as  ResourceCreateOrRetrieveResult;
						if (object.Equals(obj, null))
						{
							obj = new ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ResourceCreateOrRetrieveResult");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceCreateOrRetrieveResultClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceCreateOrRetrieveResult emptyInstance = new ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams);

				/// <summary>
				/// 创建或获取资源
				/// </summary>				
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_createParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_createParams.BindNativeObject(createParams,"CommonStringPairList");
					csobj_createParams.Delegate = true;
					IClassFactory csobj_createParamsClassFactory = GlobalClassFactoryMap.Get(csobj_createParams.GetCppInstanceTypeName());
					if (csobj_createParamsClassFactory != null)
					{
						csobj_createParams.Delegate = true;
						csobj_createParams = csobj_createParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_createParams.BindNativeObject(createParams, "CommonStringPairList");
						csobj_createParams.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual, csobj_ref_loader, csobj_createParams);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams);

				/// <summary>
				/// 创建或获取资源
				/// </summary>				
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual, csobj_ref_loader);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(ref IntPtr name, ref IntPtr group, bool isManual);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Function(ref IntPtr name, ref IntPtr group, bool isManual)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString(ref IntPtr name, ref IntPtr group);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Function(ref IntPtr name, ref IntPtr group)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setMemoryBudget_CallBack_void_ev_size_t(ulong bytes);

				protected setMemoryBudget_CallBack_void_ev_size_t m_setMemoryBudget_CallBack_void_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong bytes);

				/// <summary>
				/// 设置内存总容量
				/// </summary>				
				/// <returns></returns>
				public virtual void SetMemoryBudget_NoVirtual(ulong bytes)
				{
					EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_NoVirtual(this.NativeObject, bytes);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_Function(ulong bytes)
				{
					SetMemoryBudget(bytes);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t(IntPtr pNativeObject, ulong bytes);

				/// <summary>
				/// 设置内存总容量
				/// </summary>				
				/// <returns></returns>
				public virtual void SetMemoryBudget(ulong bytes)
				{
					EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t(this.NativeObject, bytes);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong getMemoryBudget_CallBack_ev_size_t();

				protected getMemoryBudget_CallBack_ev_size_t m_getMemoryBudget_CallBack_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取内存总容量
				/// </summary>				
				/// <returns></returns>
				public virtual ulong GetMemoryBudget_NoVirtual()
				{
					ulong ret=EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_Function()
				{
					ulong csret=GetMemoryBudget();
					
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
				private static extern ulong EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 获取内存总容量
				/// </summary>				
				/// <returns></returns>
				public virtual ulong GetMemoryBudget()
				{
					ulong ret=EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong getMemoryUsage_CallBack_ev_size_t();

				protected getMemoryUsage_CallBack_ev_size_t m_getMemoryUsage_CallBack_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取已经占用的内存容量
				/// </summary>				
				/// <returns></returns>
				public virtual ulong GetMemoryUsage_NoVirtual()
				{
					ulong ret=EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_Function()
				{
					ulong csret=GetMemoryUsage();
					
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
				private static extern ulong EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 获取已经占用的内存容量
				/// </summary>				
				/// <returns></returns>
				public virtual ulong GetMemoryUsage()
				{
					ulong ret=EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unload_CallBack_void_EVString(ref IntPtr name);

				protected unload_CallBack_void_EVString m_unload_CallBack_void_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_unload_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 卸载资源
				/// </summary>				
				/// <returns></returns>
				public virtual void Unload_NoVirtual(string name)
				{
					EarthView_World_Graphic_CResourceManager_unload_void_EVString_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_unload_void_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					Unload(strname);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_unload_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 卸载资源
				/// </summary>				
				/// <returns></returns>
				public virtual void Unload(string name)
				{
					EarthView_World_Graphic_CResourceManager_unload_void_EVString(this.NativeObject, name);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unload_CallBack_void_ev_uint64(ulong handle);

				protected unload_CallBack_void_ev_uint64 m_unload_CallBack_void_ev_uint64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_NoVirtual(IntPtr pNativeObject, ulong handle);

				public virtual void Unload_NoVirtual(ulong handle)
				{
					EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_NoVirtual(this.NativeObject, handle);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_Function(ulong handle)
				{
					Unload(handle);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64(IntPtr pNativeObject, ulong handle);

				public virtual void Unload(ulong handle)
				{
					EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64(this.NativeObject, handle);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unloadAll_CallBack_void_ev_bool(bool reloadableOnly);

				protected unloadAll_CallBack_void_ev_bool m_unloadAll_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 卸载所有资源
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
				public virtual void UnloadAll_NoVirtual(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_Function(bool reloadableOnly)
				{
					UnloadAll(reloadableOnly);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 卸载所有资源
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
				public virtual void UnloadAll(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unloadAll_CallBack_void();

				protected unloadAll_CallBack_void m_unloadAll_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_unloadAll_void_NoVirtual(IntPtr pNativeObject);

				public virtual void UnloadAll_NoVirtual()
				{
					EarthView_World_Graphic_CResourceManager_unloadAll_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_unloadAll_void_Function()
				{
					UnloadAll();
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_unloadAll_void(IntPtr pNativeObject);

				public virtual void UnloadAll()
				{
					EarthView_World_Graphic_CResourceManager_unloadAll_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void reloadAll_CallBack_void_ev_bool(bool reloadableOnly);

				protected reloadAll_CallBack_void_ev_bool m_reloadAll_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 重新加载所有资源
				/// </summary>				
				/// <returns></returns>
				public virtual void ReloadAll_NoVirtual(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_Function(bool reloadableOnly)
				{
					ReloadAll(reloadableOnly);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 重新加载所有资源
				/// </summary>				
				/// <returns></returns>
				public virtual void ReloadAll(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void reloadAll_CallBack_void();

				protected reloadAll_CallBack_void m_reloadAll_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_reloadAll_void_NoVirtual(IntPtr pNativeObject);

				public virtual void ReloadAll_NoVirtual()
				{
					EarthView_World_Graphic_CResourceManager_reloadAll_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_reloadAll_void_Function()
				{
					ReloadAll();
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_reloadAll_void(IntPtr pNativeObject);

				public virtual void ReloadAll()
				{
					EarthView_World_Graphic_CResourceManager_reloadAll_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unloadUnreferencedResources_CallBack_void_ev_bool(bool reloadableOnly);

				protected unloadUnreferencedResources_CallBack_void_ev_bool m_unloadUnreferencedResources_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 卸载所有未被引用的资源
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
				public virtual void UnloadUnreferencedResources_NoVirtual(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_Function(bool reloadableOnly)
				{
					UnloadUnreferencedResources(reloadableOnly);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 卸载所有未被引用的资源
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
				public virtual void UnloadUnreferencedResources(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unloadUnreferencedResources_CallBack_void();

				protected unloadUnreferencedResources_CallBack_void m_unloadUnreferencedResources_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_NoVirtual(IntPtr pNativeObject);

				public virtual void UnloadUnreferencedResources_NoVirtual()
				{
					EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_Function()
				{
					UnloadUnreferencedResources();
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void(IntPtr pNativeObject);

				public virtual void UnloadUnreferencedResources()
				{
					EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void reloadUnreferencedResources_CallBack_void_ev_bool(bool reloadableOnly);

				protected reloadUnreferencedResources_CallBack_void_ev_bool m_reloadUnreferencedResources_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 重新加载所有未被引用的资源
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
				public virtual void ReloadUnreferencedResources_NoVirtual(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_Function(bool reloadableOnly)
				{
					ReloadUnreferencedResources(reloadableOnly);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 重新加载所有未被引用的资源
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
				public virtual void ReloadUnreferencedResources(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void reloadUnreferencedResources_CallBack_void();

				protected reloadUnreferencedResources_CallBack_void m_reloadUnreferencedResources_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_NoVirtual(IntPtr pNativeObject);

				public virtual void ReloadUnreferencedResources_NoVirtual()
				{
					EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_Function()
				{
					ReloadUnreferencedResources();
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void(IntPtr pNativeObject);

				public virtual void ReloadUnreferencedResources()
				{
					EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void remove_CallBack_void_ResourcePtr(IntPtr r);

				protected remove_CallBack_void_ResourcePtr m_remove_CallBack_void_ResourcePtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_NoVirtual(IntPtr pNativeObject, IntPtr r);

				/// <summary>
				/// 移除资源
				/// 如果资源没有其它引用，则会引起资源的析构;
				/// 如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
				public virtual void Remove_NoVirtual(ref EarthView.World.Graphic.ResourcePtr r)
				{
					EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_NoVirtual(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_Function(IntPtr r)
				{
					EarthView.World.Graphic.ResourcePtr csobj_r = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_r.BindNativeObject(r,"ResourcePtr");
					csobj_r.Delegate = true;
					IClassFactory csobj_rClassFactory = GlobalClassFactoryMap.Get(csobj_r.GetCppInstanceTypeName());
					if (csobj_rClassFactory != null)
					{
						csobj_r.Delegate = true;
						csobj_r = csobj_rClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csobj_r.BindNativeObject(r, "ResourcePtr");
						csobj_r.Delegate = true;
					}
					
					Remove(ref csobj_r);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr(IntPtr pNativeObject, IntPtr r);

				/// <summary>
				/// 移除资源
				/// 如果资源没有其它引用，则会引起资源的析构;
				/// 如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
				public virtual void Remove(ref EarthView.World.Graphic.ResourcePtr r)
				{
					EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void remove_CallBack_void_EVString(ref IntPtr name);

				protected remove_CallBack_void_EVString m_remove_CallBack_void_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_remove_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual void Remove_NoVirtual(string name)
				{
					EarthView_World_Graphic_CResourceManager_remove_void_EVString_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_remove_void_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					Remove(strname);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_remove_void_EVString(IntPtr pNativeObject, string name);

				public virtual void Remove(string name)
				{
					EarthView_World_Graphic_CResourceManager_remove_void_EVString(this.NativeObject, name);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void remove_CallBack_void_ev_uint64(ulong handle);

				protected remove_CallBack_void_ev_uint64 m_remove_CallBack_void_ev_uint64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_NoVirtual(IntPtr pNativeObject, ulong handle);

				public virtual void Remove_NoVirtual(ulong handle)
				{
					EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_NoVirtual(this.NativeObject, handle);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_Function(ulong handle)
				{
					Remove(handle);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64(IntPtr pNativeObject, ulong handle);

				public virtual void Remove(ulong handle)
				{
					EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64(this.NativeObject, handle);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void remove_CallBack_void_EVString_EVString(ref IntPtr name, ref IntPtr groupname);

				protected remove_CallBack_void_EVString_EVString m_remove_CallBack_void_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupname);

				public virtual void Remove_NoVirtual(string name, string groupname)
				{
					EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_NoVirtual(this.NativeObject, name, groupname);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_Function(ref IntPtr name, ref IntPtr groupname)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupname= Marshal.PtrToStringAnsi(groupname);
					ClassFactory.FreeString(ref groupname);
					
					Remove(strname,strgroupname);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString(IntPtr pNativeObject, string name, string groupname);

				public virtual void Remove(string name, string groupname)
				{
					EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString(this.NativeObject, name, groupname);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeAll_CallBack_void();

				protected removeAll_CallBack_void m_removeAll_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_removeAll_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 移除所有资源
				/// 如果资源没有其它引用，则会引起资源的析构;
				/// 如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
				public virtual void RemoveAll_NoVirtual()
				{
					EarthView_World_Graphic_CResourceManager_removeAll_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_removeAll_void_Function()
				{
					RemoveAll();
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_removeAll_void(IntPtr pNativeObject);

				/// <summary>
				/// 移除所有资源
				/// 如果资源没有其它引用，则会引起资源的析构;
				/// 如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
				public virtual void RemoveAll()
				{
					EarthView_World_Graphic_CResourceManager_removeAll_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeUnreferencedResources_CallBack_void_ev_bool(bool reloadableOnly);

				protected removeUnreferencedResources_CallBack_void_ev_bool m_removeUnreferencedResources_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 移除所有未被引用的资源				
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
				public virtual void RemoveUnreferencedResources_NoVirtual(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_Function(bool reloadableOnly)
				{
					RemoveUnreferencedResources(reloadableOnly);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool(IntPtr pNativeObject, byte reloadableOnly);

				/// <summary>
				/// 移除所有未被引用的资源				
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
				public virtual void RemoveUnreferencedResources(bool reloadableOnly)
				{
					EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool(this.NativeObject, Convert.ToByte(reloadableOnly));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeUnreferencedResources_CallBack_void();

				protected removeUnreferencedResources_CallBack_void m_removeUnreferencedResources_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_NoVirtual(IntPtr pNativeObject);

				public virtual void RemoveUnreferencedResources_NoVirtual()
				{
					EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_Function()
				{
					RemoveUnreferencedResources();
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void(IntPtr pNativeObject);

				public virtual void RemoveUnreferencedResources()
				{
					EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeUnreferencedResource_CallBack_void_EVString(ref IntPtr name);

				protected removeUnreferencedResource_CallBack_void_EVString m_removeUnreferencedResource_CallBack_void_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual void RemoveUnreferencedResource_NoVirtual(string name)
				{
					EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					RemoveUnreferencedResource(strname);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString(IntPtr pNativeObject, string name);

				public virtual void RemoveUnreferencedResource(string name)
				{
					EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString(this.NativeObject, name);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeUnreferencedResource_CallBack_void_EVString_EVString(ref IntPtr name, ref IntPtr groupName);

				protected removeUnreferencedResource_CallBack_void_EVString_EVString m_removeUnreferencedResource_CallBack_void_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupName);

				public virtual void RemoveUnreferencedResource_NoVirtual(string name, string groupName)
				{
					EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_NoVirtual(this.NativeObject, name, groupName);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_Function(ref IntPtr name, ref IntPtr groupName)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					RemoveUnreferencedResource(strname,strgroupName);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString(IntPtr pNativeObject, string name, string groupName);

				public virtual void RemoveUnreferencedResource(string name, string groupName)
				{
					EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString(this.NativeObject, name, groupName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unloadUnreferencedResource_CallBack_void_EVString_EVString(ref IntPtr name, ref IntPtr groupName);

				protected unloadUnreferencedResource_CallBack_void_EVString_EVString m_unloadUnreferencedResource_CallBack_void_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupName);

				/// <summary>
				/// 卸载所有未被引用的资源				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void UnloadUnreferencedResource_NoVirtual(string name, string groupName)
				{
					EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_NoVirtual(this.NativeObject, name, groupName);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_Function(ref IntPtr name, ref IntPtr groupName)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					UnloadUnreferencedResource(strname,strgroupName);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString(IntPtr pNativeObject, string name, string groupName);

				/// <summary>
				/// 卸载所有未被引用的资源				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void UnloadUnreferencedResource(string name, string groupName)
				{
					EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString(this.NativeObject, name, groupName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16(ref IntPtr name, ref IntPtr groupName, ushort useCount);

				protected unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_NoVirtual(IntPtr pNativeObject, string name, string groupName, ushort useCount);

				public virtual void UnloadUnreferencedResource_NoVirtual(string name, string groupName, ushort useCount)
				{
					EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_NoVirtual(this.NativeObject, name, groupName, useCount);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Function(ref IntPtr name, ref IntPtr groupName, ushort useCount)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					UnloadUnreferencedResource(strname,strgroupName,useCount);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(IntPtr pNativeObject, string name, string groupName, ushort useCount);

				public virtual void UnloadUnreferencedResource(string name, string groupName, ushort useCount)
				{
					EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(this.NativeObject, name, groupName, useCount);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getByName_CallBack_ResourcePtr_EVString_EVString(ref IntPtr name, ref IntPtr groupName);

				protected getByName_CallBack_ResourcePtr_EVString_EVString m_getByName_CallBack_ResourcePtr_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupName);

				/// <summary>
				/// 获取资源				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr GetByName_NoVirtual(string name, string groupName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_NoVirtual(this.NativeObject, name, groupName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_Function(ref IntPtr name, ref IntPtr groupName)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.ResourcePtr csret=GetByName(strname,strgroupName);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString(IntPtr pNativeObject, string name, string groupName);

				/// <summary>
				/// 获取资源				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr GetByName(string name, string groupName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString(this.NativeObject, name, groupName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getByName_CallBack_ResourcePtr_EVString(ref IntPtr name);

				protected getByName_CallBack_ResourcePtr_EVString m_getByName_CallBack_ResourcePtr_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.ResourcePtr GetByName_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					EarthView.World.Graphic.ResourcePtr csret=GetByName(strname);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.ResourcePtr GetByName(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getByHandle_CallBack_ResourcePtr_ev_uint64(ulong handle);

				protected getByHandle_CallBack_ResourcePtr_ev_uint64 m_getByHandle_CallBack_ResourcePtr_ev_uint64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_NoVirtual(IntPtr pNativeObject, ulong handle);

				public virtual EarthView.World.Graphic.ResourcePtr GetByHandle_NoVirtual(ulong handle)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_NoVirtual(this.NativeObject, handle);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_Function(ulong handle)
				{
					EarthView.World.Graphic.ResourcePtr csret=GetByHandle(handle);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64(IntPtr pNativeObject, ulong handle);

				public virtual EarthView.World.Graphic.ResourcePtr GetByHandle(ulong handle)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64(this.NativeObject, handle);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte resourceExists_CallBack_ev_bool_EVString(ref IntPtr name);

				protected resourceExists_CallBack_ev_bool_EVString m_resourceExists_CallBack_ev_bool_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 判断资源是否存在于资源管理器中				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool ResourceExists_NoVirtual(string name)
				{
					byte ret=EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_NoVirtual(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					bool csret=ResourceExists(strname);
					
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
				private static extern byte EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 判断资源是否存在于资源管理器中				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool ResourceExists(string name)
				{
					byte ret=EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte resourceExists_CallBack_ev_bool_ev_uint64(ulong handle);

				protected resourceExists_CallBack_ev_bool_ev_uint64 m_resourceExists_CallBack_ev_bool_ev_uint64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_NoVirtual(IntPtr pNativeObject, ulong handle);

				public virtual bool ResourceExists_NoVirtual(ulong handle)
				{
					byte ret=EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_NoVirtual(this.NativeObject, handle);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_Function(ulong handle)
				{
					bool csret=ResourceExists(handle);
					
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
				private static extern byte EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64(IntPtr pNativeObject, ulong handle);

				public virtual bool ResourceExists(ulong handle)
				{
					byte ret=EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64(this.NativeObject, handle);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyResourceTouched_CallBack_void_CResource(IntPtr res);

				protected _notifyResourceTouched_CallBack_void_CResource m__notifyResourceTouched_CallBack_void_CResource;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_NoVirtual(IntPtr pNativeObject, IntPtr res);

				/// <summary>
				/// 通知资源被开始使用				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyResourceTouched_NoVirtual(EarthView.World.Graphic.Resource res)
				{
					EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_Function(IntPtr res)
				{
					EarthView.World.Graphic.Resource csobj_res = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_res.BindNativeObject(res,"CResource");
					csobj_res.Delegate = true;
					IClassFactory csobj_resClassFactory = GlobalClassFactoryMap.Get(csobj_res.GetCppInstanceTypeName());
					if (csobj_resClassFactory != null)
					{
						csobj_res.Delegate = true;
						csobj_res = csobj_resClassFactory.Create() as EarthView.World.Graphic.Resource;
						csobj_res.BindNativeObject(res, "CResource");
						csobj_res.Delegate = true;
					}
					
					_notifyResourceTouched(csobj_res);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource(IntPtr pNativeObject, IntPtr res);

				/// <summary>
				/// 通知资源被开始使用				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyResourceTouched(EarthView.World.Graphic.Resource res)
				{
					EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyResourceLoaded_CallBack_void_CResource(IntPtr res);

				protected _notifyResourceLoaded_CallBack_void_CResource m__notifyResourceLoaded_CallBack_void_CResource;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_NoVirtual(IntPtr pNativeObject, IntPtr res);

				/// <summary>
				/// 通知资源被加载完成			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyResourceLoaded_NoVirtual(EarthView.World.Graphic.Resource res)
				{
					EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_Function(IntPtr res)
				{
					EarthView.World.Graphic.Resource csobj_res = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_res.BindNativeObject(res,"CResource");
					csobj_res.Delegate = true;
					IClassFactory csobj_resClassFactory = GlobalClassFactoryMap.Get(csobj_res.GetCppInstanceTypeName());
					if (csobj_resClassFactory != null)
					{
						csobj_res.Delegate = true;
						csobj_res = csobj_resClassFactory.Create() as EarthView.World.Graphic.Resource;
						csobj_res.BindNativeObject(res, "CResource");
						csobj_res.Delegate = true;
					}
					
					_notifyResourceLoaded(csobj_res);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource(IntPtr pNativeObject, IntPtr res);

				/// <summary>
				/// 通知资源被加载完成			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyResourceLoaded(EarthView.World.Graphic.Resource res)
				{
					EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyResourceUnloaded_CallBack_void_CResource(IntPtr res);

				protected _notifyResourceUnloaded_CallBack_void_CResource m__notifyResourceUnloaded_CallBack_void_CResource;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_NoVirtual(IntPtr pNativeObject, IntPtr res);

				/// <summary>
				/// 通知资源被卸载完成			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyResourceUnloaded_NoVirtual(EarthView.World.Graphic.Resource res)
				{
					EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_Function(IntPtr res)
				{
					EarthView.World.Graphic.Resource csobj_res = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_res.BindNativeObject(res,"CResource");
					csobj_res.Delegate = true;
					IClassFactory csobj_resClassFactory = GlobalClassFactoryMap.Get(csobj_res.GetCppInstanceTypeName());
					if (csobj_resClassFactory != null)
					{
						csobj_res.Delegate = true;
						csobj_res = csobj_resClassFactory.Create() as EarthView.World.Graphic.Resource;
						csobj_res.BindNativeObject(res, "CResource");
						csobj_res.Delegate = true;
					}
					
					_notifyResourceUnloaded(csobj_res);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource(IntPtr pNativeObject, IntPtr res);

				/// <summary>
				/// 通知资源被卸载完成			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyResourceUnloaded(EarthView.World.Graphic.Resource res)
				{
					EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams, bool backgroundThread);

				protected prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams, byte backgroundThread);

				/// <summary>
				/// 准备资源			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr Prepare_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject, Convert.ToByte(backgroundThread));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams, bool backgroundThread)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_loadParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loadParams.BindNativeObject(loadParams,"CommonStringPairList");
					csobj_loadParams.Delegate = true;
					IClassFactory csobj_loadParamsClassFactory = GlobalClassFactoryMap.Get(csobj_loadParams.GetCppInstanceTypeName());
					if (csobj_loadParamsClassFactory != null)
					{
						csobj_loadParams.Delegate = true;
						csobj_loadParams = csobj_loadParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_loadParams.BindNativeObject(loadParams, "CommonStringPairList");
						csobj_loadParams.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Prepare(strname,strgroup,isManual, csobj_ref_loader, csobj_loadParams, backgroundThread);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams, byte backgroundThread);

				/// <summary>
				/// 准备资源			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject, Convert.ToByte(backgroundThread));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams);

				protected prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams);

				public virtual EarthView.World.Graphic.ResourcePtr Prepare_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_loadParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loadParams.BindNativeObject(loadParams,"CommonStringPairList");
					csobj_loadParams.Delegate = true;
					IClassFactory csobj_loadParamsClassFactory = GlobalClassFactoryMap.Get(csobj_loadParams.GetCppInstanceTypeName());
					if (csobj_loadParamsClassFactory != null)
					{
						csobj_loadParams.Delegate = true;
						csobj_loadParams = csobj_loadParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_loadParams.BindNativeObject(loadParams, "CommonStringPairList");
						csobj_loadParams.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Prepare(strname,strgroup,isManual, csobj_ref_loader, csobj_loadParams);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams);

				public virtual EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader);

				protected prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr Prepare_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Prepare(strname,strgroup,isManual, csobj_ref_loader);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool(ref IntPtr name, ref IntPtr group, bool isManual);

				protected prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr Prepare_NoVirtual(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Function(ref IntPtr name, ref IntPtr group, bool isManual)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Prepare(strname,strgroup,isManual);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams, bool backgroundThread);

				protected load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams, byte backgroundThread);

				/// <summary>
				/// 加载资源			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject, Convert.ToByte(backgroundThread));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams, bool backgroundThread)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_loadParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loadParams.BindNativeObject(loadParams,"CommonStringPairList");
					csobj_loadParams.Delegate = true;
					IClassFactory csobj_loadParamsClassFactory = GlobalClassFactoryMap.Get(csobj_loadParams.GetCppInstanceTypeName());
					if (csobj_loadParamsClassFactory != null)
					{
						csobj_loadParams.Delegate = true;
						csobj_loadParams = csobj_loadParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_loadParams.BindNativeObject(loadParams, "CommonStringPairList");
						csobj_loadParams.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,isManual, csobj_ref_loader, csobj_loadParams, backgroundThread);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams, byte backgroundThread);

				/// <summary>
				/// 加载资源			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject, Convert.ToByte(backgroundThread));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams);

				protected load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_loadParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loadParams.BindNativeObject(loadParams,"CommonStringPairList");
					csobj_loadParams.Delegate = true;
					IClassFactory csobj_loadParamsClassFactory = GlobalClassFactoryMap.Get(csobj_loadParams.GetCppInstanceTypeName());
					if (csobj_loadParamsClassFactory != null)
					{
						csobj_loadParams.Delegate = true;
						csobj_loadParams = csobj_loadParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_loadParams.BindNativeObject(loadParams, "CommonStringPairList");
						csobj_loadParams.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,isManual, csobj_ref_loader, csobj_loadParams);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader);

				protected load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,isManual, csobj_ref_loader);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_ev_bool(ref IntPtr name, ref IntPtr group, bool isManual);

				protected load_CallBack_ResourcePtr_EVString_EVString_ev_bool m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_Function(ref IntPtr name, ref IntPtr group, bool isManual)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,isManual);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString(ref IntPtr name, ref IntPtr group);

				protected load_CallBack_ResourcePtr_EVString_EVString m_load_CallBack_ResourcePtr_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_NoVirtual(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_Function(ref IntPtr name, ref IntPtr group)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getScriptPatterns_StringVector_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Core.StringVector GetScriptPatterns_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getScriptPatterns_StringVector_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "StringVector");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
						csObj.BindNativeObject(__ptr, "StringVector");
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getScriptPatterns_StringVector(IntPtr pNativeObject);

				public override EarthView.World.Core.StringVector GetScriptPatterns()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getScriptPatterns_StringVector(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "StringVector");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
						csObj.BindNativeObject(__ptr, "StringVector");
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
				private static extern void EarthView_World_Graphic_CResourceManager_parseScript_void_DataStreamPtr_EVString_NoVirtual(IntPtr pNativeObject, IntPtr stream, string groupName);

				/// <summary>
				/// 解析脚本			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public new void ParseScript_NoVirtual(ref EarthView.World.Core.DataStreamPtr stream, string groupName)
				{
					EarthView_World_Graphic_CResourceManager_parseScript_void_DataStreamPtr_EVString_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, groupName);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_parseScript_void_DataStreamPtr_EVString(IntPtr pNativeObject, IntPtr stream, string groupName);

				/// <summary>
				/// 解析脚本			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public override void ParseScript(ref EarthView.World.Core.DataStreamPtr stream, string groupName)
				{
					EarthView_World_Graphic_CResourceManager_parseScript_void_DataStreamPtr_EVString(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, groupName);
					
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
				private static extern double EarthView_World_Graphic_CResourceManager_getLoadingOrder_Real_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得此类型资源的加载顺序			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public new double GetLoadingOrder_NoVirtual()
				{
					double ret=EarthView_World_Graphic_CResourceManager_getLoadingOrder_Real_NoVirtual(this.NativeObject);
					
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
				private static extern double EarthView_World_Graphic_CResourceManager_getLoadingOrder_Real(IntPtr pNativeObject);

				/// <summary>
				/// 获得此类型资源的加载顺序			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public override double GetLoadingOrder()
				{
					double ret=EarthView_World_Graphic_CResourceManager_getLoadingOrder_Real(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getResourceType_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获得资源的类型	
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				public string GetResourceType()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getResourceType_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setVerbose_CallBack_void_ev_bool(bool v);

				protected setVerbose_CallBack_void_ev_bool m_setVerbose_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte v);

				public virtual void SetVerbose_NoVirtual(bool v)
				{
					EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(v));
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_Function(bool v)
				{
					SetVerbose(v);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool(IntPtr pNativeObject, byte v);

				public virtual void SetVerbose(bool v)
				{
					EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool(this.NativeObject, Convert.ToByte(v));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getVerbose_CallBack_ev_bool();

				protected getVerbose_CallBack_ev_bool m_getVerbose_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool GetVerbose_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_Function()
				{
					bool csret=GetVerbose();
					
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
				private static extern byte EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool(IntPtr pNativeObject);

				public virtual bool GetVerbose()
				{
					byte ret=EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				public class ResourcePool : EarthView.World.Core.AllocatedObject
				{
					public ResourcePool(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						Create("CResourcePoolProxy", list);
						if (!"EarthView.World.Graphic.ResourceManager+ResourcePool".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_CResourcePool_getName_EVString(IntPtr pNativeObject);

					public string GetName()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_CResourcePool_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr removeItem_CallBack_ResourcePtr();

					protected removeItem_CallBack_ResourcePtr m_removeItem_CallBack_ResourcePtr;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_CResourcePool_removeItem_ResourcePtr_NoVirtual(IntPtr pNativeObject);

					public virtual EarthView.World.Graphic.ResourcePtr RemoveItem_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_CResourcePool_removeItem_ResourcePtr_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourcePtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
							csObj.BindNativeObject(__ptr, "ResourcePtr");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Graphic_CResourceManager_CResourcePool_removeItem_ResourcePtr_Function()
					{
						EarthView.World.Graphic.ResourcePtr csret=RemoveItem();
						
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_CResourcePool_removeItem_ResourcePtr(IntPtr pNativeObject);

					public virtual EarthView.World.Graphic.ResourcePtr RemoveItem()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_CResourcePool_removeItem_ResourcePtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourcePtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
							csObj.BindNativeObject(__ptr, "ResourcePtr");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void addItem_CallBack_void_ResourcePtr(IntPtr i);

					protected addItem_CallBack_void_ResourcePtr m_addItem_CallBack_void_ResourcePtr;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_CResourceManager_CResourcePool_addItem_void_ResourcePtr_NoVirtual(IntPtr pNativeObject, IntPtr i);

					public virtual void AddItem_NoVirtual(EarthView.World.Graphic.ResourcePtr i)
					{
						EarthView_World_Graphic_CResourceManager_CResourcePool_addItem_void_ResourcePtr_NoVirtual(this.NativeObject, object.Equals(i, null) ? IntPtr.Zero : i.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_CResourceManager_CResourcePool_addItem_void_ResourcePtr_Function(IntPtr i)
					{
						EarthView.World.Graphic.ResourcePtr csobj_i = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_i.BindNativeObject(i,"ResourcePtr");
						csobj_i.Delegate = true;
						IClassFactory csobj_iClassFactory = GlobalClassFactoryMap.Get(csobj_i.GetCppInstanceTypeName());
						if (csobj_iClassFactory != null)
						{
							csobj_i.Delegate = true;
							csobj_i = csobj_iClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
							csobj_i.BindNativeObject(i, "ResourcePtr");
							csobj_i.Delegate = true;
						}
						
						AddItem(csobj_i);
						
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
					private static extern void EarthView_World_Graphic_CResourceManager_CResourcePool_addItem_void_ResourcePtr(IntPtr pNativeObject, IntPtr i);

					public virtual void AddItem(EarthView.World.Graphic.ResourcePtr i)
					{
						EarthView_World_Graphic_CResourceManager_CResourcePool_addItem_void_ResourcePtr(this.NativeObject, object.Equals(i, null) ? IntPtr.Zero : i.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void clear_CallBack_void();

					protected clear_CallBack_void m_clear_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_CResourceManager_CResourcePool_clear_void_NoVirtual(IntPtr pNativeObject);

					public virtual void Clear_NoVirtual()
					{
						EarthView_World_Graphic_CResourceManager_CResourcePool_clear_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_CResourceManager_CResourcePool_clear_void_Function()
					{
						Clear();
						
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
					private static extern void EarthView_World_Graphic_CResourceManager_CResourcePool_clear_void(IntPtr pNativeObject);

					public virtual void Clear()
					{
						EarthView_World_Graphic_CResourceManager_CResourcePool_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourcePool = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourcePool = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourcePool = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourcePool = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourcePool = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourcePool = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourcePool = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourcePool = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourcePool = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourcePool = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourcePool = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourcePool = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager::CResourcePool", new ResourcePoolClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager::CResourcePoolProxy", new ResourcePoolClassFactory());

					public ResourcePool(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_CResourcePool_removeItem_ResourcePtr(IntPtr pObject, removeItem_CallBack_ResourcePtr pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_CResourcePool_addItem_void_ResourcePtr(IntPtr pObject, addItem_CallBack_void_ResourcePtr pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_CResourcePool_clear_void(IntPtr pObject, clear_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_removeItem_CallBack_ResourcePtr = EarthView_World_Graphic_CResourceManager_CResourcePool_removeItem_ResourcePtr_Function;
							GC.KeepAlive(m_removeItem_CallBack_ResourcePtr);
							EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_CResourcePool_removeItem_ResourcePtr(this.NativeObject, m_removeItem_CallBack_ResourcePtr);
							m_addItem_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_CResourcePool_addItem_void_ResourcePtr_Function;
							GC.KeepAlive(m_addItem_CallBack_void_ResourcePtr);
							EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_CResourcePool_addItem_void_ResourcePtr(this.NativeObject, m_addItem_CallBack_void_ResourcePtr);
							m_clear_CallBack_void = EarthView_World_Graphic_CResourceManager_CResourcePool_clear_void_Function;
							GC.KeepAlive(m_clear_CallBack_void);
							EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_CResourcePool_clear_void(this.NativeObject, m_clear_CallBack_void);
						}
					}
					public static ResourcePool FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourcePool obj = baseObj as  ResourcePool;
						if (object.Equals(obj, null))
						{
							obj = new ResourcePool(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CResourcePool");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourcePoolClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourcePool emptyInstance = new ResourcePool(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getResourcePool_CResourcePool_EVString(IntPtr pNativeObject, string name);

				public EarthView.World.Graphic.ResourceManager.ResourcePool GetResourcePool(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getResourcePool_CResourcePool_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourcePool csObj = new EarthView.World.Graphic.ResourceManager.ResourcePool(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourcePool");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourcePool;
						csObj.BindNativeObject(__ptr, "CResourcePool");
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
				private static extern void EarthView_World_Graphic_CResourceManager_destroyResourcePool_void_CResourcePool(IntPtr pNativeObject, IntPtr pool);

				public void DestroyResourcePool(EarthView.World.Graphic.ResourceManager.ResourcePool pool)
				{
					EarthView_World_Graphic_CResourceManager_destroyResourcePool_void_CResourcePool(this.NativeObject, object.Equals(pool, null) ? IntPtr.Zero : pool.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_destroyResourcePool_void_EVString(IntPtr pNativeObject, string name);

				public void DestroyResourcePool(string name)
				{
					EarthView_World_Graphic_CResourceManager_destroyResourcePool_void_EVString(this.NativeObject, name);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_destroyAllResourcePools_void(IntPtr pNativeObject);

				public void DestroyAllResourcePools()
				{
					EarthView_World_Graphic_CResourceManager_destroyAllResourcePools_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(ref IntPtr name, ulong handle, ref IntPtr group, bool isManual, IntPtr loader, IntPtr createParams);

				protected createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr loader, IntPtr createParams);

				protected virtual EarthView.World.Graphic.Resource CreateImpl_NoVirtual(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Resource csObj = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResource");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Resource;
						csObj.BindNativeObject(__ptr, "CResource");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function(ref IntPtr name, ulong handle, ref IntPtr group, bool isManual, IntPtr loader, IntPtr createParams)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loader.BindNativeObject(loader,"CManualResourceLoader");
					csobj_loader.Delegate = true;
					IClassFactory csobj_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_loader.GetCppInstanceTypeName());
					if (csobj_loaderClassFactory != null)
					{
						csobj_loader.Delegate = true;
						csobj_loader = csobj_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_loader.BindNativeObject(loader, "CManualResourceLoader");
						csobj_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_createParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_createParams.BindNativeObject(createParams,"CommonStringPairList");
					csobj_createParams.Delegate = true;
					IClassFactory csobj_createParamsClassFactory = GlobalClassFactoryMap.Get(csobj_createParams.GetCppInstanceTypeName());
					if (csobj_createParamsClassFactory != null)
					{
						csobj_createParams.Delegate = true;
						csobj_createParams = csobj_createParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_createParams.BindNativeObject(createParams, "CommonStringPairList");
						csobj_createParams.Delegate = true;
					}
					
					EarthView.World.Graphic.Resource csret=CreateImpl(strname,handle, strgroup,isManual, csobj_loader, csobj_createParams);
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr loader, IntPtr createParams);

				protected virtual EarthView.World.Graphic.Resource CreateImpl(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Resource csObj = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResource");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Resource;
						csObj.BindNativeObject(__ptr, "CResource");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addImpl_CallBack_void_ResourcePtr(IntPtr res);

				protected addImpl_CallBack_void_ResourcePtr m_addImpl_CallBack_void_ResourcePtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_NoVirtual(IntPtr pNativeObject, IntPtr res);

				protected virtual void AddImpl_NoVirtual(ref EarthView.World.Graphic.ResourcePtr res)
				{
					EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_Function(IntPtr res)
				{
					EarthView.World.Graphic.ResourcePtr csobj_res = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_res.BindNativeObject(res,"ResourcePtr");
					csobj_res.Delegate = true;
					IClassFactory csobj_resClassFactory = GlobalClassFactoryMap.Get(csobj_res.GetCppInstanceTypeName());
					if (csobj_resClassFactory != null)
					{
						csobj_res.Delegate = true;
						csobj_res = csobj_resClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csobj_res.BindNativeObject(res, "ResourcePtr");
						csobj_res.Delegate = true;
					}
					
					AddImpl(ref csobj_res);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr(IntPtr pNativeObject, IntPtr res);

				protected virtual void AddImpl(ref EarthView.World.Graphic.ResourcePtr res)
				{
					EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeImpl_CallBack_void_ResourcePtr(IntPtr res);

				protected removeImpl_CallBack_void_ResourcePtr m_removeImpl_CallBack_void_ResourcePtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_NoVirtual(IntPtr pNativeObject, IntPtr res);

				protected virtual void RemoveImpl_NoVirtual(ref EarthView.World.Graphic.ResourcePtr res)
				{
					EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_Function(IntPtr res)
				{
					EarthView.World.Graphic.ResourcePtr csobj_res = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_res.BindNativeObject(res,"ResourcePtr");
					csobj_res.Delegate = true;
					IClassFactory csobj_resClassFactory = GlobalClassFactoryMap.Get(csobj_res.GetCppInstanceTypeName());
					if (csobj_resClassFactory != null)
					{
						csobj_res.Delegate = true;
						csobj_res = csobj_resClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csobj_res.BindNativeObject(res, "ResourcePtr");
						csobj_res.Delegate = true;
					}
					
					RemoveImpl(ref csobj_res);
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr(IntPtr pNativeObject, IntPtr res);

				protected virtual void RemoveImpl(ref EarthView.World.Graphic.ResourcePtr res)
				{
					EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void checkUsage_CallBack_void();

				protected checkUsage_CallBack_void m_checkUsage_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CResourceManager_checkUsage_void_NoVirtual(IntPtr pNativeObject);

				protected virtual void CheckUsage_NoVirtual()
				{
					EarthView_World_Graphic_CResourceManager_checkUsage_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceManager_checkUsage_void_Function()
				{
					CheckUsage();
					
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
				private static extern void EarthView_World_Graphic_CResourceManager_checkUsage_void(IntPtr pNativeObject);

				protected virtual void CheckUsage()
				{
					EarthView_World_Graphic_CResourceManager_checkUsage_void(this.NativeObject);
					
				}

				public class ResourceMap : EarthView.World.Core.BaseObject
				{
					public ResourceMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ResourceMap",  null);
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
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceMap_push_ev_bool_EVString_ResourcePtr(IntPtr pNativeObject, string key, IntPtr val);

					public bool Push(string key, EarthView.World.Graphic.ResourcePtr val)
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceMap_push_ev_bool_EVString_ResourcePtr(this.NativeObject, key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceMap_exist_ev_bool_EVString(IntPtr pNativeObject, string key);

					public bool Exist(string key)
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceMap_exist_ev_bool_EVString(this.NativeObject, key);
						
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceMap_get_ResourcePtr_EVString(IntPtr pNativeObject, string key);

					public EarthView.World.Graphic.ResourcePtr Get(string key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceMap_get_ResourcePtr_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourcePtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
							csObj.BindNativeObject(__ptr, "ResourcePtr");
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
					private static extern void EarthView_World_Graphic_CResourceManager_ResourceMap_erase_void_EVString(IntPtr pNativeObject, string key);

					public void Erase(string key)
					{
						EarthView_World_Graphic_CResourceManager_ResourceMap_erase_void_EVString(this.NativeObject, key);
						
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
					private static extern ulong EarthView_World_Graphic_CResourceManager_ResourceMap_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CResourceManager_ResourceMap_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CResourceManager_ResourceMap_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_CResourceManager_ResourceMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceMap_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourceMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager::ResourceMap", new ResourceMapClassFactory());

					public ResourceMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ResourceMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceMap obj = baseObj as  ResourceMap;
						if (object.Equals(obj, null))
						{
							obj = new ResourceMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ResourceMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceMap emptyInstance = new ResourceMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ResourceWithGroupMap : EarthView.World.Core.BaseObject
				{
					public ResourceWithGroupMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ResourceWithGroupMap",  null);
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
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_push_ev_bool_EVString_ResourceMap(IntPtr pNativeObject, string key, IntPtr val);

					public bool Push(string key, EarthView.World.Graphic.ResourceManager.ResourceMap val)
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_push_ev_bool_EVString_ResourceMap(this.NativeObject, key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_exist_ev_bool_EVString(IntPtr pNativeObject, string key);

					public bool Exist(string key)
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_exist_ev_bool_EVString(this.NativeObject, key);
						
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_get_ResourceMap_EVString(IntPtr pNativeObject, string key);

					public EarthView.World.Graphic.ResourceManager.ResourceMap Get(string key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_get_ResourceMap_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourceManager.ResourceMap csObj = new EarthView.World.Graphic.ResourceManager.ResourceMap(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourceMap");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceMap;
							csObj.BindNativeObject(__ptr, "ResourceMap");
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
					private static extern void EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_erase_void_EVString(IntPtr pNativeObject, string key);

					public void Erase(string key)
					{
						EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_erase_void_EVString(this.NativeObject, key);
						
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
					private static extern ulong EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceWithGroupMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceWithGroupMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager::ResourceWithGroupMap", new ResourceWithGroupMapClassFactory());

					public ResourceWithGroupMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ResourceWithGroupMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceWithGroupMap obj = baseObj as  ResourceWithGroupMap;
						if (object.Equals(obj, null))
						{
							obj = new ResourceWithGroupMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ResourceWithGroupMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceWithGroupMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceWithGroupMap emptyInstance = new ResourceWithGroupMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ResourceHandleMap : EarthView.World.Core.BaseObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceHandleMap_push_ev_bool_ev_uint64_ResourcePtr(IntPtr pNativeObject, ref ulong key, IntPtr val);

					public bool Push(ulong key, EarthView.World.Graphic.ResourcePtr val)
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceHandleMap_push_ev_bool_ev_uint64_ResourcePtr(this.NativeObject, ref key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceHandleMap_exist_ev_bool_ev_uint64(IntPtr pNativeObject, ref ulong key);

					public bool Exist(ulong key)
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceHandleMap_exist_ev_bool_ev_uint64(this.NativeObject, ref key);
						
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceHandleMap_get_ResourcePtr_ev_uint64(IntPtr pNativeObject, ref ulong key);

					public EarthView.World.Graphic.ResourcePtr Get(ulong key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceHandleMap_get_ResourcePtr_ev_uint64(this.NativeObject, ref key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourcePtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
							csObj.BindNativeObject(__ptr, "ResourcePtr");
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
					private static extern void EarthView_World_Graphic_CResourceManager_ResourceHandleMap_erase_void_ev_uint64(IntPtr pNativeObject, ref ulong key);

					public void Erase(ulong key)
					{
						EarthView_World_Graphic_CResourceManager_ResourceHandleMap_erase_void_ev_uint64(this.NativeObject, ref key);
						
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
					private static extern ulong EarthView_World_Graphic_CResourceManager_ResourceHandleMap_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CResourceManager_ResourceHandleMap_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CResourceManager_ResourceHandleMap_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_CResourceManager_ResourceHandleMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceHandleMap_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceHandleMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourceHandleMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceHandleMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceHandleMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceHandleMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceHandleMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceHandleMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceHandleMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceHandleMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceHandleMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceHandleMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceHandleMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceHandleMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager::ResourceHandleMap", new ResourceHandleMapClassFactory());

					public ResourceHandleMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ResourceHandleMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceHandleMap obj = baseObj as  ResourceHandleMap;
						if (object.Equals(obj, null))
						{
							obj = new ResourceHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ResourceHandleMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceHandleMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceHandleMap emptyInstance = new ResourceHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ResourceHandlePair : EarthView.World.Core.BaseObject
				{
					public ResourceHandlePair() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ResourceHandlePair",  null);
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
					private static extern ulong Get_EarthView_World_Graphic_CResourceManager_ResourceHandlePair_first(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Graphic_CResourceManager_ResourceHandlePair_first( IntPtr pObject, ulong value );

					public 					ulong First
					{
						get
						{
							ulong ret=Get_EarthView_World_Graphic_CResourceManager_ResourceHandlePair_first(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Graphic_CResourceManager_ResourceHandlePair_first(this.NativeObject,value);
						}
					}

					private EarthView.World.Graphic.ResourcePtr secondField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Graphic_CResourceManager_ResourceHandlePair_second(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Graphic_CResourceManager_ResourceHandlePair_second( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Graphic.ResourcePtr Second
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_CResourceManager_ResourceHandlePair_second(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(secondField, null)){
								secondField.NativeObject = __ptr;
								return secondField;
							}
							EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "ResourcePtr");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
								csObj.BindNativeObject(__ptr, "ResourcePtr");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							secondField = value;
							Set_EarthView_World_Graphic_CResourceManager_ResourceHandlePair_second( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourceHandlePair = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceHandlePair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceHandlePair = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceHandlePair = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceHandlePair = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceHandlePair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceHandlePair = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceHandlePair = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceHandlePair = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceHandlePair = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceHandlePair = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceHandlePair = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager::ResourceHandlePair", new ResourceHandlePairClassFactory());

					public ResourceHandlePair(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ResourceHandlePair FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceHandlePair obj = baseObj as  ResourceHandlePair;
						if (object.Equals(obj, null))
						{
							obj = new ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ResourceHandlePair");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceHandlePairClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceHandlePair emptyInstance = new ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ResourceHandleIterator : EarthView.World.Core.BaseObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_hasMoreElements_ev_bool(IntPtr pNativeObject);

					public bool HasMoreElements()
					{
						byte ret=EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_hasMoreElements_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_moveNext_void(IntPtr pNativeObject);

					public void MoveNext()
					{
						EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_moveNext_void(this.NativeObject);
						
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
					private static extern ulong EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_nextKey_ev_uint64(IntPtr pNativeObject);

					public ulong NextKey()
					{
						ulong ret=EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_nextKey_ev_uint64(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_nextValue_ResourcePtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.ResourcePtr NextValue()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_nextValue_ResourcePtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourcePtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
							csObj.BindNativeObject(__ptr, "ResourcePtr");
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_nextValuePtr_ResourcePtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.ResourcePtr NextValuePtr()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_nextValuePtr_ResourcePtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourcePtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
							csObj.BindNativeObject(__ptr, "ResourcePtr");
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_next_ResourcePtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.ResourcePtr Next()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_next_ResourcePtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourcePtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
							csObj.BindNativeObject(__ptr, "ResourcePtr");
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_getBegin_ResourceHandlePair(IntPtr pNativeObject);

					public EarthView.World.Graphic.ResourceManager.ResourceHandlePair GetBegin()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_getBegin_ResourceHandlePair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourceManager.ResourceHandlePair csObj = new EarthView.World.Graphic.ResourceManager.ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourceHandlePair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceHandlePair;
							csObj.BindNativeObject(__ptr, "ResourceHandlePair");
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_getEnd_ResourceHandlePair(IntPtr pNativeObject);

					public EarthView.World.Graphic.ResourceManager.ResourceHandlePair GetEnd()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_getEnd_ResourceHandlePair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourceManager.ResourceHandlePair csObj = new EarthView.World.Graphic.ResourceManager.ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourceHandlePair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceHandlePair;
							csObj.BindNativeObject(__ptr, "ResourceHandlePair");
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
					private static extern IntPtr EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_getCurrent_ResourceHandlePair(IntPtr pNativeObject);

					public EarthView.World.Graphic.ResourceManager.ResourceHandlePair GetCurrent()
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceManager_ResourceHandleIterator_getCurrent_ResourceHandlePair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ResourceManager.ResourceHandlePair csObj = new EarthView.World.Graphic.ResourceManager.ResourceHandlePair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResourceHandlePair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceHandlePair;
							csObj.BindNativeObject(__ptr, "ResourceHandlePair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceHandleIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceHandleIterator = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceHandleIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceHandleIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager::ResourceHandleIterator", new ResourceHandleIteratorClassFactory());

					public ResourceHandleIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ResourceHandleIterator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceHandleIterator obj = baseObj as  ResourceHandleIterator;
						if (object.Equals(obj, null))
						{
							obj = new ResourceHandleIterator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ResourceHandleIterator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceHandleIteratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceHandleIterator emptyInstance = new ResourceHandleIterator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
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
				private static extern IntPtr EarthView_World_Graphic_CResourceManager_getResourceIterator_ResourceHandleIterator(IntPtr pNativeObject);

				public EarthView.World.Graphic.ResourceManager.ResourceHandleIterator GetResourceIterator()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceManager_getResourceIterator_ResourceHandleIterator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceHandleIterator csObj = new EarthView.World.Graphic.ResourceManager.ResourceHandleIterator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceHandleIterator");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceHandleIterator;
						csObj.BindNativeObject(__ptr, "ResourceHandleIterator");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadResourceManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadResourceManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadResourceManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadResourceManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadResourceManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadResourceManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadResourceManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadResourceManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadResourceManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadResourceManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadResourceManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadResourceManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManager", new ResourceManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceManagerProxy", new ResourceManagerClassFactory());

				public ResourceManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t(IntPtr pObject, setMemoryBudget_CallBack_void_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t(IntPtr pObject, getMemoryBudget_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t(IntPtr pObject, getMemoryUsage_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unload_void_EVString(IntPtr pObject, unload_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64(IntPtr pObject, unload_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool(IntPtr pObject, unloadAll_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadAll_void(IntPtr pObject, unloadAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool(IntPtr pObject, reloadAll_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_reloadAll_void(IntPtr pObject, reloadAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool(IntPtr pObject, unloadUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void(IntPtr pObject, unloadUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool(IntPtr pObject, reloadUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void(IntPtr pObject, reloadUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr(IntPtr pObject, remove_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_remove_void_EVString(IntPtr pObject, remove_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64(IntPtr pObject, remove_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString(IntPtr pObject, remove_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeAll_void(IntPtr pObject, removeAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool(IntPtr pObject, removeUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void(IntPtr pObject, removeUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64(IntPtr pObject, getByHandle_CallBack_ResourcePtr_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString(IntPtr pObject, resourceExists_CallBack_ev_bool_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64(IntPtr pObject, resourceExists_CallBack_ev_bool_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource(IntPtr pObject, _notifyResourceTouched_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource(IntPtr pObject, _notifyResourceLoaded_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource(IntPtr pObject, _notifyResourceUnloaded_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool(IntPtr pObject, setVerbose_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool(IntPtr pObject, getVerbose_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr(IntPtr pObject, addImpl_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr(IntPtr pObject, removeImpl_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_checkUsage_void(IntPtr pObject, checkUsage_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getScriptPatterns_StringVector(IntPtr pObject, getScriptPatterns_CallBack_StringVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_parseScript_void_DataStreamPtr_EVString(IntPtr pObject, parseScript_CallBack_void_DataStreamPtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getLoadingOrder_Real(IntPtr pObject, getLoadingOrder_CallBack_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_create_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						m_createUnmanaged_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						m_setMemoryBudget_CallBack_void_ev_size_t = EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_Function;
						GC.KeepAlive(m_setMemoryBudget_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t(this.NativeObject, m_setMemoryBudget_CallBack_void_ev_size_t);
						m_getMemoryBudget_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryBudget_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t(this.NativeObject, m_getMemoryBudget_CallBack_ev_size_t);
						m_getMemoryUsage_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryUsage_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t(this.NativeObject, m_getMemoryUsage_CallBack_ev_size_t);
						m_unload_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_unload_void_EVString_Function;
						GC.KeepAlive(m_unload_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unload_void_EVString(this.NativeObject, m_unload_CallBack_void_EVString);
						m_unload_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_Function;
						GC.KeepAlive(m_unload_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64(this.NativeObject, m_unload_CallBack_void_ev_uint64);
						m_unloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool(this.NativeObject, m_unloadAll_CallBack_void_ev_bool);
						m_unloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadAll_void_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadAll_void(this.NativeObject, m_unloadAll_CallBack_void);
						m_reloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool(this.NativeObject, m_reloadAll_CallBack_void_ev_bool);
						m_reloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadAll_void_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_reloadAll_void(this.NativeObject, m_reloadAll_CallBack_void);
						m_unloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool(this.NativeObject, m_unloadUnreferencedResources_CallBack_void_ev_bool);
						m_unloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void(this.NativeObject, m_unloadUnreferencedResources_CallBack_void);
						m_reloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool(this.NativeObject, m_reloadUnreferencedResources_CallBack_void_ev_bool);
						m_reloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void(this.NativeObject, m_reloadUnreferencedResources_CallBack_void);
						m_remove_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_Function;
						GC.KeepAlive(m_remove_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr(this.NativeObject, m_remove_CallBack_void_ResourcePtr);
						m_remove_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_remove_void_EVString(this.NativeObject, m_remove_CallBack_void_EVString);
						m_remove_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_Function;
						GC.KeepAlive(m_remove_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64(this.NativeObject, m_remove_CallBack_void_ev_uint64);
						m_remove_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString(this.NativeObject, m_remove_CallBack_void_EVString_EVString);
						m_removeAll_CallBack_void = EarthView_World_Graphic_CResourceManager_removeAll_void_Function;
						GC.KeepAlive(m_removeAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeAll_void(this.NativeObject, m_removeAll_CallBack_void);
						m_removeUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool(this.NativeObject, m_removeUnreferencedResources_CallBack_void_ev_bool);
						m_removeUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void(this.NativeObject, m_removeUnreferencedResources_CallBack_void);
						m_removeUnreferencedResource_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString);
						m_removeUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						m_getByName_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString_EVString);
						m_getByName_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString);
						m_getByHandle_CallBack_ResourcePtr_ev_uint64 = EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_Function;
						GC.KeepAlive(m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64(this.NativeObject, m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						m_resourceExists_CallBack_ev_bool_EVString = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString(this.NativeObject, m_resourceExists_CallBack_ev_bool_EVString);
						m_resourceExists_CallBack_ev_bool_ev_uint64 = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64(this.NativeObject, m_resourceExists_CallBack_ev_bool_ev_uint64);
						m__notifyResourceTouched_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceTouched_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource(this.NativeObject, m__notifyResourceTouched_CallBack_void_CResource);
						m__notifyResourceLoaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceLoaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource(this.NativeObject, m__notifyResourceLoaded_CallBack_void_CResource);
						m__notifyResourceUnloaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceUnloaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource(this.NativeObject, m__notifyResourceUnloaded_CallBack_void_CResource);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString);
						m_setVerbose_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_Function;
						GC.KeepAlive(m_setVerbose_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool(this.NativeObject, m_setVerbose_CallBack_void_ev_bool);
						m_getVerbose_CallBack_ev_bool = EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_Function;
						GC.KeepAlive(m_getVerbose_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool(this.NativeObject, m_getVerbose_CallBack_ev_bool);
						m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_addImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_addImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr(this.NativeObject, m_addImpl_CallBack_void_ResourcePtr);
						m_removeImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_removeImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr(this.NativeObject, m_removeImpl_CallBack_void_ResourcePtr);
						m_checkUsage_CallBack_void = EarthView_World_Graphic_CResourceManager_checkUsage_void_Function;
						GC.KeepAlive(m_checkUsage_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_checkUsage_void(this.NativeObject, m_checkUsage_CallBack_void);
						m_getScriptPatterns_CallBack_StringVector = EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Function;
						GC.KeepAlive(m_getScriptPatterns_CallBack_StringVector);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getScriptPatterns_StringVector(this.NativeObject, m_getScriptPatterns_CallBack_StringVector);
						m_parseScript_CallBack_void_DataStreamPtr_EVString = EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Function;
						GC.KeepAlive(m_parseScript_CallBack_void_DataStreamPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_parseScript_void_DataStreamPtr_EVString(this.NativeObject, m_parseScript_CallBack_void_DataStreamPtr_EVString);
						m_getLoadingOrder_CallBack_Real = EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Function;
						GC.KeepAlive(m_getLoadingOrder_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceManager_getLoadingOrder_Real(this.NativeObject, m_getLoadingOrder_CallBack_Real);
					}
				}
				public static ResourceManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ResourceManager obj = baseObj as  ResourceManager;
					if (object.Equals(obj, null))
					{
						obj = new ResourceManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CResourceManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ResourceManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ResourceManager emptyInstance = new ResourceManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
