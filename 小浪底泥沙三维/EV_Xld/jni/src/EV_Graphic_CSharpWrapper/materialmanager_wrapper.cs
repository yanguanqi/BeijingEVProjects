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
			/// 材质管理器
			/// </summary>
			public class MaterialManager : EarthView.World.Graphic.ResourceManager
			{
				/// <summary>
				/// 材质事件监听
				/// </summary>
				public class MaterialListener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public MaterialListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CMaterialListenerProxy", null);
						if (!"EarthView.World.Graphic.MaterialManager+MaterialListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr handleSchemeNotFound_CallBack_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(ushort schemeIndex, ref IntPtr schemeName, IntPtr originalMaterial, ushort lodIndex, IntPtr rend);

					protected handleSchemeNotFound_CallBack_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable m_handleSchemeNotFound_CallBack_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CMaterialManager_CMaterialListener_handleSchemeNotFound_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable_NoVirtual(IntPtr pNativeObject, ushort schemeIndex, string schemeName, IntPtr originalMaterial, ushort lodIndex, IntPtr rend);

					/// <summary>
					/// 如果已给方案的技术在材质中没有找到，允许手动指定一个技术实例
					/// </summary>
					/// <param name="schemeIndex">方案的索引</param>
					/// <param name="schemeName">方案的名称</param>
					/// <param name="originalMaterial">正在处理的材质，它没有专门的技术</param>
					/// <param name="lodIndex">细节等级索引</param>
					/// <param name="rend">指向可渲染对象的指针</param>
					/// <returns>返回一个指向技术的指针，如果希望使用默认技术则返回null</returns>
					public virtual EarthView.World.Graphic.Technique HandleSchemeNotFound_NoVirtual(ushort schemeIndex, string schemeName, EarthView.World.Graphic.Material originalMaterial, ushort lodIndex, EarthView.World.Graphic.Renderable rend)
					{
						IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_CMaterialListener_handleSchemeNotFound_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable_NoVirtual(this.NativeObject, schemeIndex, schemeName, object.Equals(originalMaterial, null) ? IntPtr.Zero : originalMaterial.NativeObject, lodIndex, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject);
						
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

					protected  IntPtr EarthView_World_Graphic_CMaterialManager_CMaterialListener_handleSchemeNotFound_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable_Function(ushort schemeIndex, ref IntPtr schemeName, IntPtr originalMaterial, ushort lodIndex, IntPtr rend)
					{
						string strschemeName= Marshal.PtrToStringAnsi(schemeName);
						ClassFactory.FreeString(ref schemeName);
						EarthView.World.Graphic.Material csobj_originalMaterial = new EarthView.World.Graphic.Material(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_originalMaterial.BindNativeObject(originalMaterial,"CMaterial");
						csobj_originalMaterial.Delegate = true;
						IClassFactory csobj_originalMaterialClassFactory = GlobalClassFactoryMap.Get(csobj_originalMaterial.GetCppInstanceTypeName());
						if (csobj_originalMaterialClassFactory != null)
						{
							csobj_originalMaterial.Delegate = true;
							csobj_originalMaterial = csobj_originalMaterialClassFactory.Create() as EarthView.World.Graphic.Material;
							csobj_originalMaterial.BindNativeObject(originalMaterial, "CMaterial");
							csobj_originalMaterial.Delegate = true;
						}
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
						
						EarthView.World.Graphic.Technique csret=HandleSchemeNotFound(schemeIndex, strschemeName,csobj_originalMaterial, lodIndex, csobj_rend);
						
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
					private static extern IntPtr EarthView_World_Graphic_CMaterialManager_CMaterialListener_handleSchemeNotFound_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(IntPtr pNativeObject, ushort schemeIndex, string schemeName, IntPtr originalMaterial, ushort lodIndex, IntPtr rend);

					/// <summary>
					/// 如果已给方案的技术在材质中没有找到，允许手动指定一个技术实例
					/// </summary>
					/// <param name="schemeIndex">方案的索引</param>
					/// <param name="schemeName">方案的名称</param>
					/// <param name="originalMaterial">正在处理的材质，它没有专门的技术</param>
					/// <param name="lodIndex">细节等级索引</param>
					/// <param name="rend">指向可渲染对象的指针</param>
					/// <returns>返回一个指向技术的指针，如果希望使用默认技术则返回null</returns>
					public virtual EarthView.World.Graphic.Technique HandleSchemeNotFound(ushort schemeIndex, string schemeName, EarthView.World.Graphic.Material originalMaterial, ushort lodIndex, EarthView.World.Graphic.Renderable rend)
					{
						IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_CMaterialListener_handleSchemeNotFound_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(this.NativeObject, schemeIndex, schemeName, object.Equals(originalMaterial, null) ? IntPtr.Zero : originalMaterial.NativeObject, lodIndex, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject);
						
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

					#if DEBUG 
						#if Windows 
							private static bool bLoadMaterialListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadMaterialListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMaterialListener = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadMaterialListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadMaterialListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadMaterialListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMaterialListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadMaterialListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadMaterialListener = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadMaterialListener = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadMaterialListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadMaterialListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMaterialManager::CMaterialListener", new MaterialListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMaterialManager::CMaterialListenerProxy", new MaterialListenerClassFactory());

					public MaterialListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_CMaterialListener_handleSchemeNotFound_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(IntPtr pObject, handleSchemeNotFound_CallBack_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleSchemeNotFound_CallBack_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable = EarthView_World_Graphic_CMaterialManager_CMaterialListener_handleSchemeNotFound_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable_Function;
							GC.KeepAlive(m_handleSchemeNotFound_CallBack_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable);
							EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_CMaterialListener_handleSchemeNotFound_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(this.NativeObject, m_handleSchemeNotFound_CallBack_CTechnique_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable);
						}
					}
					public static MaterialListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MaterialListener obj = baseObj as  MaterialListener;
						if (object.Equals(obj, null))
						{
							obj = new MaterialListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMaterialListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MaterialListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MaterialListener emptyInstance = new MaterialListener(CreatedWhenConstruct.CWC_NotToCreate);
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams);

				/// <summary>
				/// 从EarthView::World::Graphic::CResourceManager类重载
				/// 创建一个新的资源实例与管理保持一致
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="handle"></param>
				/// <param name="group">资源组名称</param>
				/// <param name="isManual">资源是否手动下载</param>
				/// <param name="loader">指向EarthView::World::Graphic::CManualResourceLoader的指针</param>
				/// <param name="params">名称/值对参数</param>
				/// <returns></returns>
				protected new EarthView.World.Graphic.Resource CreateImpl_NoVirtual(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams);

				/// <summary>
				/// 从EarthView::World::Graphic::CResourceManager类重载
				/// 创建一个新的资源实例与管理保持一致
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="handle"></param>
				/// <param name="group">资源组名称</param>
				/// <param name="isManual">资源是否手动下载</param>
				/// <param name="loader">指向EarthView::World::Graphic::CManualResourceLoader的指针</param>
				/// <param name="params">名称/值对参数</param>
				/// <returns></returns>
				protected override EarthView.World.Graphic.Resource CreateImpl(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
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

				private static string DEFAULT_SCHEME_NAMEField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_World_Graphic_CMaterialManager_DEFAULT_SCHEME_NAME( );

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Graphic_CMaterialManager_DEFAULT_SCHEME_NAME( string value );

				public 				static string DEFAULT_SCHEME_NAME
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_CMaterialManager_DEFAULT_SCHEME_NAME();
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					set
					{
						DEFAULT_SCHEME_NAMEField = value;
						Set_EarthView_World_Graphic_CMaterialManager_DEFAULT_SCHEME_NAME( value );
					}
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public MaterialManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CMaterialManagerProxy", null);
					if (!"EarthView.World.Graphic.MaterialManager".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CMaterialManager_initialise_void(IntPtr pNativeObject);

				/// <summary>
				/// 初始化材质管理，同时解析所有可用的程序和材质脚本
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Initialise()
				{
					EarthView_World_Graphic_CMaterialManager_initialise_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_parseScript_void_DataStreamPtr_EVString_NoVirtual(IntPtr pNativeObject, IntPtr stream, string groupName);

				/// <summary>
				/// 解析脚本文件
				/// </summary>
				/// <param name="stream">数据流</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				public new void ParseScript_NoVirtual(ref EarthView.World.Core.DataStreamPtr stream, string groupName)
				{
					EarthView_World_Graphic_CMaterialManager_parseScript_void_DataStreamPtr_EVString_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, groupName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_parseScript_void_DataStreamPtr_EVString(IntPtr pNativeObject, IntPtr stream, string groupName);

				/// <summary>
				/// 解析脚本文件
				/// </summary>
				/// <param name="stream">数据流</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				public override void ParseScript(ref EarthView.World.Core.DataStreamPtr stream, string groupName)
				{
					EarthView_World_Graphic_CMaterialManager_parseScript_void_DataStreamPtr_EVString(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, groupName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setDefaultTextureFiltering_CallBack_void_TextureFilterOptions(EarthView.World.Graphic.TEXTUREFILTEROPTIONS fo);

				protected setDefaultTextureFiltering_CallBack_void_TextureFilterOptions m_setDefaultTextureFiltering_CallBack_void_TextureFilterOptions;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_TextureFilterOptions_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.TEXTUREFILTEROPTIONS fo);

				/// <summary>
				/// 设置默认的纹理过滤方式
				/// </summary>
				/// <param name="fo">默认值选项</param>
				/// <returns></returns>
				public virtual void SetDefaultTextureFiltering_NoVirtual(EarthView.World.Graphic.TEXTUREFILTEROPTIONS fo)
				{
					EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_TextureFilterOptions_NoVirtual(this.NativeObject, fo);
					
				}

				protected  void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_TextureFilterOptions_Function(EarthView.World.Graphic.TEXTUREFILTEROPTIONS fo)
				{
					SetDefaultTextureFiltering(fo);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_TextureFilterOptions(IntPtr pNativeObject, EarthView.World.Graphic.TEXTUREFILTEROPTIONS fo);

				/// <summary>
				/// 设置默认的纹理过滤方式
				/// </summary>
				/// <param name="fo">默认值选项</param>
				/// <returns></returns>
				public virtual void SetDefaultTextureFiltering(EarthView.World.Graphic.TEXTUREFILTEROPTIONS fo)
				{
					EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_TextureFilterOptions(this.NativeObject, fo);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setDefaultTextureFiltering_CallBack_void_FilterType_FilterOptions(EarthView.World.Graphic.FILTERTYPE ftype, EarthView.World.Graphic.FILTEROPTIONS opts);

				protected setDefaultTextureFiltering_CallBack_void_FilterType_FilterOptions m_setDefaultTextureFiltering_CallBack_void_FilterType_FilterOptions;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterType_FilterOptions_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.FILTERTYPE ftype, EarthView.World.Graphic.FILTEROPTIONS opts);

				/// <summary>
				/// 设置默认的纹理过滤方式
				/// </summary>
				/// <param name="ftype">过滤类型</param>
				/// <param name="opts">默认值选项</param>
				/// <returns></returns>
				public virtual void SetDefaultTextureFiltering_NoVirtual(EarthView.World.Graphic.FILTERTYPE ftype, EarthView.World.Graphic.FILTEROPTIONS opts)
				{
					EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterType_FilterOptions_NoVirtual(this.NativeObject, ftype, opts);
					
				}

				protected  void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterType_FilterOptions_Function(EarthView.World.Graphic.FILTERTYPE ftype, EarthView.World.Graphic.FILTEROPTIONS opts)
				{
					SetDefaultTextureFiltering(ftype, opts);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterType_FilterOptions(IntPtr pNativeObject, EarthView.World.Graphic.FILTERTYPE ftype, EarthView.World.Graphic.FILTEROPTIONS opts);

				/// <summary>
				/// 设置默认的纹理过滤方式
				/// </summary>
				/// <param name="ftype">过滤类型</param>
				/// <param name="opts">默认值选项</param>
				/// <returns></returns>
				public virtual void SetDefaultTextureFiltering(EarthView.World.Graphic.FILTERTYPE ftype, EarthView.World.Graphic.FILTEROPTIONS opts)
				{
					EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterType_FilterOptions(this.NativeObject, ftype, opts);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setDefaultTextureFiltering_CallBack_void_FilterOptions_FilterOptions_FilterOptions(EarthView.World.Graphic.FILTEROPTIONS minFilter, EarthView.World.Graphic.FILTEROPTIONS magFilter, EarthView.World.Graphic.FILTEROPTIONS mipFilter);

				protected setDefaultTextureFiltering_CallBack_void_FilterOptions_FilterOptions_FilterOptions m_setDefaultTextureFiltering_CallBack_void_FilterOptions_FilterOptions_FilterOptions;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.FILTEROPTIONS minFilter, EarthView.World.Graphic.FILTEROPTIONS magFilter, EarthView.World.Graphic.FILTEROPTIONS mipFilter);

				/// <summary>
				/// 设置默认的纹理过滤方式
				/// </summary>
				/// <param name="minFilter"></param>
				/// <param name="magFilter"></param>
				/// <param name="mipFilter"></param>
				/// <returns></returns>
				public virtual void SetDefaultTextureFiltering_NoVirtual(EarthView.World.Graphic.FILTEROPTIONS minFilter, EarthView.World.Graphic.FILTEROPTIONS magFilter, EarthView.World.Graphic.FILTEROPTIONS mipFilter)
				{
					EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions_NoVirtual(this.NativeObject, minFilter, magFilter, mipFilter);
					
				}

				protected  void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions_Function(EarthView.World.Graphic.FILTEROPTIONS minFilter, EarthView.World.Graphic.FILTEROPTIONS magFilter, EarthView.World.Graphic.FILTEROPTIONS mipFilter)
				{
					SetDefaultTextureFiltering(minFilter, magFilter, mipFilter);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions(IntPtr pNativeObject, EarthView.World.Graphic.FILTEROPTIONS minFilter, EarthView.World.Graphic.FILTEROPTIONS magFilter, EarthView.World.Graphic.FILTEROPTIONS mipFilter);

				/// <summary>
				/// 设置默认的纹理过滤方式
				/// </summary>
				/// <param name="minFilter"></param>
				/// <param name="magFilter"></param>
				/// <param name="mipFilter"></param>
				/// <returns></returns>
				public virtual void SetDefaultTextureFiltering(EarthView.World.Graphic.FILTEROPTIONS minFilter, EarthView.World.Graphic.FILTEROPTIONS magFilter, EarthView.World.Graphic.FILTEROPTIONS mipFilter)
				{
					EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions(this.NativeObject, minFilter, magFilter, mipFilter);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getDefaultTextureFiltering_CallBack_FilterOptions_FilterType(EarthView.World.Graphic.FILTERTYPE ftype);

				protected getDefaultTextureFiltering_CallBack_FilterOptions_FilterType m_getDefaultTextureFiltering_CallBack_FilterOptions_FilterType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Graphic_CMaterialManager_getDefaultTextureFiltering_FilterOptions_FilterType_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.FILTERTYPE ftype);

				/// <summary>
				/// 获得默认的纹理过滤方式
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.FILTEROPTIONS GetDefaultTextureFiltering_NoVirtual(EarthView.World.Graphic.FILTERTYPE ftype)
				{
					int ret=EarthView_World_Graphic_CMaterialManager_getDefaultTextureFiltering_FilterOptions_FilterType_NoVirtual(this.NativeObject, ftype);
					
					return (EarthView.World.Graphic.FILTEROPTIONS)ret;
					
				}

				protected  int EarthView_World_Graphic_CMaterialManager_getDefaultTextureFiltering_FilterOptions_FilterType_Function(EarthView.World.Graphic.FILTERTYPE ftype)
				{
					EarthView.World.Graphic.FILTEROPTIONS csret=GetDefaultTextureFiltering(ftype);
					
					return (int)csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Graphic_CMaterialManager_getDefaultTextureFiltering_FilterOptions_FilterType(IntPtr pNativeObject, EarthView.World.Graphic.FILTERTYPE ftype);

				/// <summary>
				/// 获得默认的纹理过滤方式
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.FILTEROPTIONS GetDefaultTextureFiltering(EarthView.World.Graphic.FILTERTYPE ftype)
				{
					int ret=EarthView_World_Graphic_CMaterialManager_getDefaultTextureFiltering_FilterOptions_FilterType(this.NativeObject, ftype);
					
					return (EarthView.World.Graphic.FILTEROPTIONS)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setDefaultAnisotropy_void_ev_uint32(IntPtr pNativeObject, uint maxAniso);

				/// <summary>
				/// 设置默认的纹理各向异性等级，默认值为1
				/// </summary>
				/// <param name="maxAniso">各向异性等级</param>
				/// <returns></returns>
				public void SetDefaultAnisotropy(uint maxAniso)
				{
					EarthView_World_Graphic_CMaterialManager_setDefaultAnisotropy_void_ev_uint32(this.NativeObject, maxAniso);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Graphic_CMaterialManager_getDefaultAnisotropy_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获得默认的纹理各向异性等级
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public uint GetDefaultAnisotropy()
				{
					uint ret=EarthView_World_Graphic_CMaterialManager_getDefaultAnisotropy_ev_uint32(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getDefaultSettings_CallBack_CMaterialPtr();

				protected getDefaultSettings_CallBack_CMaterialPtr m_getDefaultSettings_CallBack_CMaterialPtr;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_getDefaultSettings_CMaterialPtr_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得指向默认材质的指针
				/// </summary>
				/// <param name=""></param>
				/// <returns>指针</returns>
				public virtual EarthView.World.Graphic.MaterialPtr GetDefaultSettings_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_getDefaultSettings_CMaterialPtr_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MaterialPtr csObj = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMaterialPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
						csObj.BindNativeObject(__ptr, "CMaterialPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CMaterialManager_getDefaultSettings_CMaterialPtr_Function()
				{
					EarthView.World.Graphic.MaterialPtr csret=GetDefaultSettings();
					
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_getDefaultSettings_CMaterialPtr(IntPtr pNativeObject);

				/// <summary>
				/// 获得指向默认材质的指针
				/// </summary>
				/// <param name=""></param>
				/// <returns>指针</returns>
				public virtual EarthView.World.Graphic.MaterialPtr GetDefaultSettings()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_getDefaultSettings_CMaterialPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MaterialPtr csObj = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMaterialPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
						csObj.BindNativeObject(__ptr, "CMaterialPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort _getSchemeIndex_CallBack_ev_uint16_EVString(ref IntPtr name);

				protected _getSchemeIndex_CallBack_ev_uint16_EVString m__getSchemeIndex_CallBack_ev_uint16_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CMaterialManager__getSchemeIndex_ev_uint16_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获得材质方案名称的索引
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns>索引值</returns>
				public virtual ushort _getSchemeIndex_NoVirtual(string name)
				{
					ushort ret=EarthView_World_Graphic_CMaterialManager__getSchemeIndex_ev_uint16_EVString_NoVirtual(this.NativeObject, name);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Graphic_CMaterialManager__getSchemeIndex_ev_uint16_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					ushort csret=_getSchemeIndex(strname);
					
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
				private static extern ushort EarthView_World_Graphic_CMaterialManager__getSchemeIndex_ev_uint16_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获得材质方案名称的索引
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns>索引值</returns>
				public virtual ushort _getSchemeIndex(string name)
				{
					ushort ret=EarthView_World_Graphic_CMaterialManager__getSchemeIndex_ev_uint16_EVString(this.NativeObject, name);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string _getSchemeName_CallBack_EVString_ev_uint16(ushort index);

				protected _getSchemeName_CallBack_EVString_ev_uint16 m__getSchemeName_CallBack_EVString_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager__getSchemeName_EVString_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 获得已给索引的材质方案的名称
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>名称</returns>
				public virtual string _getSchemeName_NoVirtual(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager__getSchemeName_EVString_ev_uint16_NoVirtual(this.NativeObject, index);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CMaterialManager__getSchemeName_EVString_ev_uint16_Function(ushort index)
				{
					string csret=_getSchemeName(index);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager__getSchemeName_EVString_ev_uint16(IntPtr pNativeObject, ushort index);

				/// <summary>
				/// 获得已给索引的材质方案的名称
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>名称</returns>
				public virtual string _getSchemeName(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager__getSchemeName_EVString_ev_uint16(this.NativeObject, index);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort _getActiveSchemeIndex_CallBack_ev_uint16();

				protected _getActiveSchemeIndex_CallBack_ev_uint16 m__getActiveSchemeIndex_CallBack_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CMaterialManager__getActiveSchemeIndex_ev_uint16_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得活动方案的索引值
				/// </summary>
				/// <param name=""></param>
				/// <returns>索引值</returns>
				public virtual ushort _getActiveSchemeIndex_NoVirtual()
				{
					ushort ret=EarthView_World_Graphic_CMaterialManager__getActiveSchemeIndex_ev_uint16_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Graphic_CMaterialManager__getActiveSchemeIndex_ev_uint16_Function()
				{
					ushort csret=_getActiveSchemeIndex();
					
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
				private static extern ushort EarthView_World_Graphic_CMaterialManager__getActiveSchemeIndex_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 获得活动方案的索引值
				/// </summary>
				/// <param name=""></param>
				/// <returns>索引值</returns>
				public virtual ushort _getActiveSchemeIndex()
				{
					ushort ret=EarthView_World_Graphic_CMaterialManager__getActiveSchemeIndex_ev_uint16(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getActiveScheme_CallBack_EVString();

				protected getActiveScheme_CallBack_EVString m_getActiveScheme_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_getActiveScheme_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得活动材质方案的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>名称</returns>
				public virtual string GetActiveScheme_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_getActiveScheme_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CMaterialManager_getActiveScheme_EVString_Function()
				{
					string csret=GetActiveScheme();
					
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_getActiveScheme_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获得活动材质方案的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>名称</returns>
				public virtual string GetActiveScheme()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_getActiveScheme_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setActiveScheme_CallBack_void_EVString(ref IntPtr schemeName);

				protected setActiveScheme_CallBack_void_EVString m_setActiveScheme_CallBack_void_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setActiveScheme_void_EVString_NoVirtual(IntPtr pNativeObject, string schemeName);

				/// <summary>
				/// 设置活动材质方案的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetActiveScheme_NoVirtual(string schemeName)
				{
					EarthView_World_Graphic_CMaterialManager_setActiveScheme_void_EVString_NoVirtual(this.NativeObject, schemeName);
					
				}

				protected  void EarthView_World_Graphic_CMaterialManager_setActiveScheme_void_EVString_Function(ref IntPtr schemeName)
				{
					string strschemeName= Marshal.PtrToStringAnsi(schemeName);
					ClassFactory.FreeString(ref schemeName);
					
					SetActiveScheme(strschemeName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_setActiveScheme_void_EVString(IntPtr pNativeObject, string schemeName);

				/// <summary>
				/// 设置活动材质方案的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetActiveScheme(string schemeName)
				{
					EarthView_World_Graphic_CMaterialManager_setActiveScheme_void_EVString(this.NativeObject, schemeName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addListener_CallBack_void_CMaterialListener_EVString(IntPtr ref_l, ref IntPtr schemeName);

				protected addListener_CallBack_void_CMaterialListener_EVString m_addListener_CallBack_void_CMaterialListener_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_EVString_NoVirtual(IntPtr pNativeObject, IntPtr ref_l, string schemeName);

				/// <summary>
				/// 给材质事件添加一个监听器
				/// 如果schemeName已给出,则监听器只接收指定的事件
				/// </summary>
				/// <param name="l">监听器</param>
				/// <param name="schemeName">方案名称</param>
				/// <returns></returns>
				public virtual void AddListener_NoVirtual(EarthView.World.Graphic.MaterialManager.MaterialListener ref_l, string schemeName)
				{
					EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_EVString_NoVirtual(this.NativeObject, object.Equals(ref_l, null) ? IntPtr.Zero : ref_l.NativeObject, schemeName);
					
				}

				protected  void EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_EVString_Function(IntPtr ref_l, ref IntPtr schemeName)
				{
					EarthView.World.Graphic.MaterialManager.MaterialListener csobj_ref_l = new EarthView.World.Graphic.MaterialManager.MaterialListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_l.BindNativeObject(ref_l,"CMaterialListener");
					csobj_ref_l.Delegate = true;
					IClassFactory csobj_ref_lClassFactory = GlobalClassFactoryMap.Get(csobj_ref_l.GetCppInstanceTypeName());
					if (csobj_ref_lClassFactory != null)
					{
						csobj_ref_l.Delegate = true;
						csobj_ref_l = csobj_ref_lClassFactory.Create() as EarthView.World.Graphic.MaterialManager.MaterialListener;
						csobj_ref_l.BindNativeObject(ref_l, "CMaterialListener");
						csobj_ref_l.Delegate = true;
					}
					string strschemeName= Marshal.PtrToStringAnsi(schemeName);
					ClassFactory.FreeString(ref schemeName);
					
					AddListener(csobj_ref_l, strschemeName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_EVString(IntPtr pNativeObject, IntPtr ref_l, string schemeName);

				/// <summary>
				/// 给材质事件添加一个监听器
				/// 如果schemeName已给出,则监听器只接收指定的事件
				/// </summary>
				/// <param name="l">监听器</param>
				/// <param name="schemeName">方案名称</param>
				/// <returns></returns>
				public virtual void AddListener(EarthView.World.Graphic.MaterialManager.MaterialListener ref_l, string schemeName)
				{
					EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_EVString(this.NativeObject, object.Equals(ref_l, null) ? IntPtr.Zero : ref_l.NativeObject, schemeName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addListener_CallBack_void_CMaterialListener(IntPtr ref_l);

				protected addListener_CallBack_void_CMaterialListener m_addListener_CallBack_void_CMaterialListener;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_l);

				/// <summary>
				/// 给材质事件添加一个监听器
				/// </summary>
				/// <param name="l">监听器</param>
				/// <returns></returns>
				public virtual void AddListener_NoVirtual(EarthView.World.Graphic.MaterialManager.MaterialListener ref_l)
				{
					EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_NoVirtual(this.NativeObject, object.Equals(ref_l, null) ? IntPtr.Zero : ref_l.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_Function(IntPtr ref_l)
				{
					EarthView.World.Graphic.MaterialManager.MaterialListener csobj_ref_l = new EarthView.World.Graphic.MaterialManager.MaterialListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_l.BindNativeObject(ref_l,"CMaterialListener");
					csobj_ref_l.Delegate = true;
					IClassFactory csobj_ref_lClassFactory = GlobalClassFactoryMap.Get(csobj_ref_l.GetCppInstanceTypeName());
					if (csobj_ref_lClassFactory != null)
					{
						csobj_ref_l.Delegate = true;
						csobj_ref_l = csobj_ref_lClassFactory.Create() as EarthView.World.Graphic.MaterialManager.MaterialListener;
						csobj_ref_l.BindNativeObject(ref_l, "CMaterialListener");
						csobj_ref_l.Delegate = true;
					}
					
					AddListener(csobj_ref_l);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener(IntPtr pNativeObject, IntPtr ref_l);

				/// <summary>
				/// 给材质事件添加一个监听器
				/// </summary>
				/// <param name="l">监听器</param>
				/// <returns></returns>
				public virtual void AddListener(EarthView.World.Graphic.MaterialManager.MaterialListener ref_l)
				{
					EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener(this.NativeObject, object.Equals(ref_l, null) ? IntPtr.Zero : ref_l.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeListener_CallBack_void_CMaterialListener_EVString(IntPtr l, ref IntPtr schemeName);

				protected removeListener_CallBack_void_CMaterialListener_EVString m_removeListener_CallBack_void_CMaterialListener_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_EVString_NoVirtual(IntPtr pNativeObject, IntPtr l, string schemeName);

				/// <summary>
				/// 去除材质事件的监听器
				/// </summary>
				/// <param name="l">监听器</param>
				/// <param name="schemeName">方案名称</param>
				/// <returns></returns>
				public virtual void RemoveListener_NoVirtual(EarthView.World.Graphic.MaterialManager.MaterialListener l, string schemeName)
				{
					EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_EVString_NoVirtual(this.NativeObject, object.Equals(l, null) ? IntPtr.Zero : l.NativeObject, schemeName);
					
				}

				protected  void EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_EVString_Function(IntPtr l, ref IntPtr schemeName)
				{
					EarthView.World.Graphic.MaterialManager.MaterialListener csobj_l = new EarthView.World.Graphic.MaterialManager.MaterialListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_l.BindNativeObject(l,"CMaterialListener");
					csobj_l.Delegate = true;
					IClassFactory csobj_lClassFactory = GlobalClassFactoryMap.Get(csobj_l.GetCppInstanceTypeName());
					if (csobj_lClassFactory != null)
					{
						csobj_l.Delegate = true;
						csobj_l = csobj_lClassFactory.Create() as EarthView.World.Graphic.MaterialManager.MaterialListener;
						csobj_l.BindNativeObject(l, "CMaterialListener");
						csobj_l.Delegate = true;
					}
					string strschemeName= Marshal.PtrToStringAnsi(schemeName);
					ClassFactory.FreeString(ref schemeName);
					
					RemoveListener(csobj_l, strschemeName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_EVString(IntPtr pNativeObject, IntPtr l, string schemeName);

				/// <summary>
				/// 去除材质事件的监听器
				/// </summary>
				/// <param name="l">监听器</param>
				/// <param name="schemeName">方案名称</param>
				/// <returns></returns>
				public virtual void RemoveListener(EarthView.World.Graphic.MaterialManager.MaterialListener l, string schemeName)
				{
					EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_EVString(this.NativeObject, object.Equals(l, null) ? IntPtr.Zero : l.NativeObject, schemeName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeListener_CallBack_void_CMaterialListener(IntPtr l);

				protected removeListener_CallBack_void_CMaterialListener m_removeListener_CallBack_void_CMaterialListener;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_NoVirtual(IntPtr pNativeObject, IntPtr l);

				/// <summary>
				/// 去除材质事件的监听器
				/// </summary>
				/// <param name="l">监听器</param>
				/// <param name="schemeName">方案名称</param>
				/// <returns></returns>
				public virtual void RemoveListener_NoVirtual(EarthView.World.Graphic.MaterialManager.MaterialListener l)
				{
					EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_NoVirtual(this.NativeObject, object.Equals(l, null) ? IntPtr.Zero : l.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_Function(IntPtr l)
				{
					EarthView.World.Graphic.MaterialManager.MaterialListener csobj_l = new EarthView.World.Graphic.MaterialManager.MaterialListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_l.BindNativeObject(l,"CMaterialListener");
					csobj_l.Delegate = true;
					IClassFactory csobj_lClassFactory = GlobalClassFactoryMap.Get(csobj_l.GetCppInstanceTypeName());
					if (csobj_lClassFactory != null)
					{
						csobj_l.Delegate = true;
						csobj_l = csobj_lClassFactory.Create() as EarthView.World.Graphic.MaterialManager.MaterialListener;
						csobj_l.BindNativeObject(l, "CMaterialListener");
						csobj_l.Delegate = true;
					}
					
					RemoveListener(csobj_l);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener(IntPtr pNativeObject, IntPtr l);

				/// <summary>
				/// 去除材质事件的监听器
				/// </summary>
				/// <param name="l">监听器</param>
				/// <param name="schemeName">方案名称</param>
				/// <returns></returns>
				public virtual void RemoveListener(EarthView.World.Graphic.MaterialManager.MaterialListener l)
				{
					EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener(this.NativeObject, object.Equals(l, null) ? IntPtr.Zero : l.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr _arbitrateMissingTechniqueForActiveScheme_CallBack_CTechnique_CMaterial_ev_uint16_CRenderable(IntPtr mat, ushort lodIndex, IntPtr rend);

				protected _arbitrateMissingTechniqueForActiveScheme_CallBack_CTechnique_CMaterial_ev_uint16_CRenderable m__arbitrateMissingTechniqueForActiveScheme_CallBack_CTechnique_CMaterial_ev_uint16_CRenderable;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager__arbitrateMissingTechniqueForActiveScheme_CTechnique_CMaterial_ev_uint16_CRenderable_NoVirtual(IntPtr pNativeObject, IntPtr mat, ushort lodIndex, IntPtr rend);

				public virtual EarthView.World.Graphic.Technique _arbitrateMissingTechniqueForActiveScheme_NoVirtual(EarthView.World.Graphic.Material mat, ushort lodIndex, EarthView.World.Graphic.Renderable rend)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager__arbitrateMissingTechniqueForActiveScheme_CTechnique_CMaterial_ev_uint16_CRenderable_NoVirtual(this.NativeObject, object.Equals(mat, null) ? IntPtr.Zero : mat.NativeObject, lodIndex, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject);
					
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

				protected  IntPtr EarthView_World_Graphic_CMaterialManager__arbitrateMissingTechniqueForActiveScheme_CTechnique_CMaterial_ev_uint16_CRenderable_Function(IntPtr mat, ushort lodIndex, IntPtr rend)
				{
					EarthView.World.Graphic.Material csobj_mat = new EarthView.World.Graphic.Material(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_mat.BindNativeObject(mat,"CMaterial");
					csobj_mat.Delegate = true;
					IClassFactory csobj_matClassFactory = GlobalClassFactoryMap.Get(csobj_mat.GetCppInstanceTypeName());
					if (csobj_matClassFactory != null)
					{
						csobj_mat.Delegate = true;
						csobj_mat = csobj_matClassFactory.Create() as EarthView.World.Graphic.Material;
						csobj_mat.BindNativeObject(mat, "CMaterial");
						csobj_mat.Delegate = true;
					}
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
					
					EarthView.World.Graphic.Technique csret=_arbitrateMissingTechniqueForActiveScheme(csobj_mat, lodIndex, csobj_rend);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager__arbitrateMissingTechniqueForActiveScheme_CTechnique_CMaterial_ev_uint16_CRenderable(IntPtr pNativeObject, IntPtr mat, ushort lodIndex, IntPtr rend);

				public virtual EarthView.World.Graphic.Technique _arbitrateMissingTechniqueForActiveScheme(EarthView.World.Graphic.Material mat, ushort lodIndex, EarthView.World.Graphic.Renderable rend)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager__arbitrateMissingTechniqueForActiveScheme_CTechnique_CMaterial_ev_uint16_CRenderable(this.NativeObject, object.Equals(mat, null) ? IntPtr.Zero : mat.NativeObject, lodIndex, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_getSingleton_CMaterialManager();

				public static EarthView.World.Graphic.MaterialManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_getSingleton_CMaterialManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MaterialManager csObj = new EarthView.World.Graphic.MaterialManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMaterialManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialManager;
						csObj.BindNativeObject(__ptr, "CMaterialManager");
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_getSingletonPtr_CMaterialManager();

				public static EarthView.World.Graphic.MaterialManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_getSingletonPtr_CMaterialManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MaterialManager csObj = new EarthView.World.Graphic.MaterialManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMaterialManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialManager;
						csObj.BindNativeObject(__ptr, "CMaterialManager");
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialManager_createSelectionMaterial_CMaterialPtr(IntPtr pNativeObject);

				public EarthView.World.Graphic.MaterialPtr CreateSelectionMaterial()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialManager_createSelectionMaterial_CMaterialPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MaterialPtr csObj = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMaterialPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
						csObj.BindNativeObject(__ptr, "CMaterialPtr");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMaterialManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadMaterialManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMaterialManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadMaterialManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadMaterialManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadMaterialManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMaterialManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadMaterialManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadMaterialManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadMaterialManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadMaterialManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadMaterialManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMaterialManager", new MaterialManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMaterialManagerProxy", new MaterialManagerClassFactory());

				public MaterialManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_TextureFilterOptions(IntPtr pObject, setDefaultTextureFiltering_CallBack_void_TextureFilterOptions pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterType_FilterOptions(IntPtr pObject, setDefaultTextureFiltering_CallBack_void_FilterType_FilterOptions pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions(IntPtr pObject, setDefaultTextureFiltering_CallBack_void_FilterOptions_FilterOptions_FilterOptions pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getDefaultTextureFiltering_FilterOptions_FilterType(IntPtr pObject, getDefaultTextureFiltering_CallBack_FilterOptions_FilterType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getDefaultSettings_CMaterialPtr(IntPtr pObject, getDefaultSettings_CallBack_CMaterialPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__getSchemeIndex_ev_uint16_EVString(IntPtr pObject, _getSchemeIndex_CallBack_ev_uint16_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__getSchemeName_EVString_ev_uint16(IntPtr pObject, _getSchemeName_CallBack_EVString_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__getActiveSchemeIndex_ev_uint16(IntPtr pObject, _getActiveSchemeIndex_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getActiveScheme_EVString(IntPtr pObject, getActiveScheme_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setActiveScheme_void_EVString(IntPtr pObject, setActiveScheme_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_EVString(IntPtr pObject, addListener_CallBack_void_CMaterialListener_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener(IntPtr pObject, addListener_CallBack_void_CMaterialListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_EVString(IntPtr pObject, removeListener_CallBack_void_CMaterialListener_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener(IntPtr pObject, removeListener_CallBack_void_CMaterialListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__arbitrateMissingTechniqueForActiveScheme_CTechnique_CMaterial_ev_uint16_CRenderable(IntPtr pObject, _arbitrateMissingTechniqueForActiveScheme_CallBack_CTechnique_CMaterial_ev_uint16_CRenderable pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_create_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_create_ResourcePtr_EVString_EVString(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createUnmanaged_ResourcePtr_EVString_ev_bool(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createUnmanaged_ResourcePtr_EVString(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setMemoryBudget_void_ev_size_t(IntPtr pObject, setMemoryBudget_CallBack_void_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getMemoryBudget_ev_size_t(IntPtr pObject, getMemoryBudget_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getMemoryUsage_ev_size_t(IntPtr pObject, getMemoryUsage_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unload_void_EVString(IntPtr pObject, unload_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unload_void_ev_uint64(IntPtr pObject, unload_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadAll_void_ev_bool(IntPtr pObject, unloadAll_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadAll_void(IntPtr pObject, unloadAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_reloadAll_void_ev_bool(IntPtr pObject, reloadAll_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_reloadAll_void(IntPtr pObject, reloadAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadUnreferencedResources_void_ev_bool(IntPtr pObject, unloadUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadUnreferencedResources_void(IntPtr pObject, unloadUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_reloadUnreferencedResources_void_ev_bool(IntPtr pObject, reloadUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_reloadUnreferencedResources_void(IntPtr pObject, reloadUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_remove_void_ResourcePtr(IntPtr pObject, remove_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_remove_void_EVString(IntPtr pObject, remove_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_remove_void_ev_uint64(IntPtr pObject, remove_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_remove_void_EVString_EVString(IntPtr pObject, remove_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeAll_void(IntPtr pObject, removeAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeUnreferencedResources_void_ev_bool(IntPtr pObject, removeUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeUnreferencedResources_void(IntPtr pObject, removeUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeUnreferencedResource_void_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeUnreferencedResource_void_EVString_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadUnreferencedResource_void_EVString_EVString(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getByName_ResourcePtr_EVString_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getByName_ResourcePtr_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getByHandle_ResourcePtr_ev_uint64(IntPtr pObject, getByHandle_CallBack_ResourcePtr_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_resourceExists_ev_bool_EVString(IntPtr pObject, resourceExists_CallBack_ev_bool_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_resourceExists_ev_bool_ev_uint64(IntPtr pObject, resourceExists_CallBack_ev_bool_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__notifyResourceTouched_void_CResource(IntPtr pObject, _notifyResourceTouched_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__notifyResourceLoaded_void_CResource(IntPtr pObject, _notifyResourceLoaded_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__notifyResourceUnloaded_void_CResource(IntPtr pObject, _notifyResourceUnloaded_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_prepare_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setVerbose_void_ev_bool(IntPtr pObject, setVerbose_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getVerbose_ev_bool(IntPtr pObject, getVerbose_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_addImpl_void_ResourcePtr(IntPtr pObject, addImpl_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeImpl_void_ResourcePtr(IntPtr pObject, removeImpl_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_checkUsage_void(IntPtr pObject, checkUsage_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getScriptPatterns_StringVector(IntPtr pObject, getScriptPatterns_CallBack_StringVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_parseScript_void_DataStreamPtr_EVString(IntPtr pObject, parseScript_CallBack_void_DataStreamPtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getLoadingOrder_Real(IntPtr pObject, getLoadingOrder_CallBack_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_setDefaultTextureFiltering_CallBack_void_TextureFilterOptions = EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_TextureFilterOptions_Function;
						GC.KeepAlive(m_setDefaultTextureFiltering_CallBack_void_TextureFilterOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_TextureFilterOptions(this.NativeObject, m_setDefaultTextureFiltering_CallBack_void_TextureFilterOptions);
						m_setDefaultTextureFiltering_CallBack_void_FilterType_FilterOptions = EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterType_FilterOptions_Function;
						GC.KeepAlive(m_setDefaultTextureFiltering_CallBack_void_FilterType_FilterOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterType_FilterOptions(this.NativeObject, m_setDefaultTextureFiltering_CallBack_void_FilterType_FilterOptions);
						m_setDefaultTextureFiltering_CallBack_void_FilterOptions_FilterOptions_FilterOptions = EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions_Function;
						GC.KeepAlive(m_setDefaultTextureFiltering_CallBack_void_FilterOptions_FilterOptions_FilterOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setDefaultTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions(this.NativeObject, m_setDefaultTextureFiltering_CallBack_void_FilterOptions_FilterOptions_FilterOptions);
						m_getDefaultTextureFiltering_CallBack_FilterOptions_FilterType = EarthView_World_Graphic_CMaterialManager_getDefaultTextureFiltering_FilterOptions_FilterType_Function;
						GC.KeepAlive(m_getDefaultTextureFiltering_CallBack_FilterOptions_FilterType);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getDefaultTextureFiltering_FilterOptions_FilterType(this.NativeObject, m_getDefaultTextureFiltering_CallBack_FilterOptions_FilterType);
						m_getDefaultSettings_CallBack_CMaterialPtr = EarthView_World_Graphic_CMaterialManager_getDefaultSettings_CMaterialPtr_Function;
						GC.KeepAlive(m_getDefaultSettings_CallBack_CMaterialPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getDefaultSettings_CMaterialPtr(this.NativeObject, m_getDefaultSettings_CallBack_CMaterialPtr);
						m__getSchemeIndex_CallBack_ev_uint16_EVString = EarthView_World_Graphic_CMaterialManager__getSchemeIndex_ev_uint16_EVString_Function;
						GC.KeepAlive(m__getSchemeIndex_CallBack_ev_uint16_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__getSchemeIndex_ev_uint16_EVString(this.NativeObject, m__getSchemeIndex_CallBack_ev_uint16_EVString);
						m__getSchemeName_CallBack_EVString_ev_uint16 = EarthView_World_Graphic_CMaterialManager__getSchemeName_EVString_ev_uint16_Function;
						GC.KeepAlive(m__getSchemeName_CallBack_EVString_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__getSchemeName_EVString_ev_uint16(this.NativeObject, m__getSchemeName_CallBack_EVString_ev_uint16);
						m__getActiveSchemeIndex_CallBack_ev_uint16 = EarthView_World_Graphic_CMaterialManager__getActiveSchemeIndex_ev_uint16_Function;
						GC.KeepAlive(m__getActiveSchemeIndex_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__getActiveSchemeIndex_ev_uint16(this.NativeObject, m__getActiveSchemeIndex_CallBack_ev_uint16);
						m_getActiveScheme_CallBack_EVString = EarthView_World_Graphic_CMaterialManager_getActiveScheme_EVString_Function;
						GC.KeepAlive(m_getActiveScheme_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getActiveScheme_EVString(this.NativeObject, m_getActiveScheme_CallBack_EVString);
						m_setActiveScheme_CallBack_void_EVString = EarthView_World_Graphic_CMaterialManager_setActiveScheme_void_EVString_Function;
						GC.KeepAlive(m_setActiveScheme_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setActiveScheme_void_EVString(this.NativeObject, m_setActiveScheme_CallBack_void_EVString);
						m_addListener_CallBack_void_CMaterialListener_EVString = EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_EVString_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CMaterialListener_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_EVString(this.NativeObject, m_addListener_CallBack_void_CMaterialListener_EVString);
						m_addListener_CallBack_void_CMaterialListener = EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CMaterialListener);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_addListener_void_CMaterialListener(this.NativeObject, m_addListener_CallBack_void_CMaterialListener);
						m_removeListener_CallBack_void_CMaterialListener_EVString = EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_EVString_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CMaterialListener_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_EVString(this.NativeObject, m_removeListener_CallBack_void_CMaterialListener_EVString);
						m_removeListener_CallBack_void_CMaterialListener = EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CMaterialListener);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeListener_void_CMaterialListener(this.NativeObject, m_removeListener_CallBack_void_CMaterialListener);
						m__arbitrateMissingTechniqueForActiveScheme_CallBack_CTechnique_CMaterial_ev_uint16_CRenderable = EarthView_World_Graphic_CMaterialManager__arbitrateMissingTechniqueForActiveScheme_CTechnique_CMaterial_ev_uint16_CRenderable_Function;
						GC.KeepAlive(m__arbitrateMissingTechniqueForActiveScheme_CallBack_CTechnique_CMaterial_ev_uint16_CRenderable);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__arbitrateMissingTechniqueForActiveScheme_CTechnique_CMaterial_ev_uint16_CRenderable(this.NativeObject, m__arbitrateMissingTechniqueForActiveScheme_CallBack_CTechnique_CMaterial_ev_uint16_CRenderable);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_create_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_create_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_create_ResourcePtr_EVString_EVString(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createUnmanaged_ResourcePtr_EVString_ev_bool(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						m_createUnmanaged_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createUnmanaged_ResourcePtr_EVString(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						m_setMemoryBudget_CallBack_void_ev_size_t = EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_Function;
						GC.KeepAlive(m_setMemoryBudget_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setMemoryBudget_void_ev_size_t(this.NativeObject, m_setMemoryBudget_CallBack_void_ev_size_t);
						m_getMemoryBudget_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryBudget_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getMemoryBudget_ev_size_t(this.NativeObject, m_getMemoryBudget_CallBack_ev_size_t);
						m_getMemoryUsage_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryUsage_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getMemoryUsage_ev_size_t(this.NativeObject, m_getMemoryUsage_CallBack_ev_size_t);
						m_unload_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_unload_void_EVString_Function;
						GC.KeepAlive(m_unload_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unload_void_EVString(this.NativeObject, m_unload_CallBack_void_EVString);
						m_unload_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_Function;
						GC.KeepAlive(m_unload_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unload_void_ev_uint64(this.NativeObject, m_unload_CallBack_void_ev_uint64);
						m_unloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadAll_void_ev_bool(this.NativeObject, m_unloadAll_CallBack_void_ev_bool);
						m_unloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadAll_void_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadAll_void(this.NativeObject, m_unloadAll_CallBack_void);
						m_reloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_reloadAll_void_ev_bool(this.NativeObject, m_reloadAll_CallBack_void_ev_bool);
						m_reloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadAll_void_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_reloadAll_void(this.NativeObject, m_reloadAll_CallBack_void);
						m_unloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadUnreferencedResources_void_ev_bool(this.NativeObject, m_unloadUnreferencedResources_CallBack_void_ev_bool);
						m_unloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadUnreferencedResources_void(this.NativeObject, m_unloadUnreferencedResources_CallBack_void);
						m_reloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_reloadUnreferencedResources_void_ev_bool(this.NativeObject, m_reloadUnreferencedResources_CallBack_void_ev_bool);
						m_reloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_reloadUnreferencedResources_void(this.NativeObject, m_reloadUnreferencedResources_CallBack_void);
						m_remove_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_Function;
						GC.KeepAlive(m_remove_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_remove_void_ResourcePtr(this.NativeObject, m_remove_CallBack_void_ResourcePtr);
						m_remove_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_remove_void_EVString(this.NativeObject, m_remove_CallBack_void_EVString);
						m_remove_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_Function;
						GC.KeepAlive(m_remove_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_remove_void_ev_uint64(this.NativeObject, m_remove_CallBack_void_ev_uint64);
						m_remove_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_remove_void_EVString_EVString(this.NativeObject, m_remove_CallBack_void_EVString_EVString);
						m_removeAll_CallBack_void = EarthView_World_Graphic_CResourceManager_removeAll_void_Function;
						GC.KeepAlive(m_removeAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeAll_void(this.NativeObject, m_removeAll_CallBack_void);
						m_removeUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeUnreferencedResources_void_ev_bool(this.NativeObject, m_removeUnreferencedResources_CallBack_void_ev_bool);
						m_removeUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeUnreferencedResources_void(this.NativeObject, m_removeUnreferencedResources_CallBack_void);
						m_removeUnreferencedResource_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeUnreferencedResource_void_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString);
						m_removeUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeUnreferencedResource_void_EVString_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadUnreferencedResource_void_EVString_EVString(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						m_getByName_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getByName_ResourcePtr_EVString_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString_EVString);
						m_getByName_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getByName_ResourcePtr_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString);
						m_getByHandle_CallBack_ResourcePtr_ev_uint64 = EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_Function;
						GC.KeepAlive(m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getByHandle_ResourcePtr_ev_uint64(this.NativeObject, m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						m_resourceExists_CallBack_ev_bool_EVString = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_resourceExists_ev_bool_EVString(this.NativeObject, m_resourceExists_CallBack_ev_bool_EVString);
						m_resourceExists_CallBack_ev_bool_ev_uint64 = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_resourceExists_ev_bool_ev_uint64(this.NativeObject, m_resourceExists_CallBack_ev_bool_ev_uint64);
						m__notifyResourceTouched_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceTouched_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__notifyResourceTouched_void_CResource(this.NativeObject, m__notifyResourceTouched_CallBack_void_CResource);
						m__notifyResourceLoaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceLoaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__notifyResourceLoaded_void_CResource(this.NativeObject, m__notifyResourceLoaded_CallBack_void_CResource);
						m__notifyResourceUnloaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceUnloaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager__notifyResourceUnloaded_void_CResource(this.NativeObject, m__notifyResourceUnloaded_CallBack_void_CResource);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_prepare_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_load_ResourcePtr_EVString_EVString(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString);
						m_setVerbose_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_Function;
						GC.KeepAlive(m_setVerbose_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_setVerbose_void_ev_bool(this.NativeObject, m_setVerbose_CallBack_void_ev_bool);
						m_getVerbose_CallBack_ev_bool = EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_Function;
						GC.KeepAlive(m_getVerbose_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getVerbose_ev_bool(this.NativeObject, m_getVerbose_CallBack_ev_bool);
						m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_addImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_addImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_addImpl_void_ResourcePtr(this.NativeObject, m_addImpl_CallBack_void_ResourcePtr);
						m_removeImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_removeImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_removeImpl_void_ResourcePtr(this.NativeObject, m_removeImpl_CallBack_void_ResourcePtr);
						m_checkUsage_CallBack_void = EarthView_World_Graphic_CResourceManager_checkUsage_void_Function;
						GC.KeepAlive(m_checkUsage_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_checkUsage_void(this.NativeObject, m_checkUsage_CallBack_void);
						m_getScriptPatterns_CallBack_StringVector = EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Function;
						GC.KeepAlive(m_getScriptPatterns_CallBack_StringVector);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getScriptPatterns_StringVector(this.NativeObject, m_getScriptPatterns_CallBack_StringVector);
						m_parseScript_CallBack_void_DataStreamPtr_EVString = EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Function;
						GC.KeepAlive(m_parseScript_CallBack_void_DataStreamPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_parseScript_void_DataStreamPtr_EVString(this.NativeObject, m_parseScript_CallBack_void_DataStreamPtr_EVString);
						m_getLoadingOrder_CallBack_Real = EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Function;
						GC.KeepAlive(m_getLoadingOrder_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialManager_getLoadingOrder_Real(this.NativeObject, m_getLoadingOrder_CallBack_Real);
					}
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.Create_NoVirtual(name,group,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Create_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual)
				{
					return base.Create_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group)
				{
					return base.Create_NoVirtual(name,group);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name)
				{
					return base.CreateUnmanaged_NoVirtual(name);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group);
				}
				public override void SetMemoryBudget(ulong bytes)
				{
					base.SetMemoryBudget_NoVirtual(bytes);
				}
				public override ulong GetMemoryBudget()
				{
					return base.GetMemoryBudget_NoVirtual();
				}
				public override ulong GetMemoryUsage()
				{
					return base.GetMemoryUsage_NoVirtual();
				}
				public override void Unload(string name)
				{
					base.Unload_NoVirtual(name);
				}
				public override void Unload(ulong handle)
				{
					base.Unload_NoVirtual(handle);
				}
				public override void UnloadAll(bool reloadableOnly)
				{
					base.UnloadAll_NoVirtual(reloadableOnly);
				}
				public override void UnloadAll()
				{
					base.UnloadAll_NoVirtual();
				}
				public override void ReloadAll(bool reloadableOnly)
				{
					base.ReloadAll_NoVirtual(reloadableOnly);
				}
				public override void ReloadAll()
				{
					base.ReloadAll_NoVirtual();
				}
				public override void UnloadUnreferencedResources(bool reloadableOnly)
				{
					base.UnloadUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void UnloadUnreferencedResources()
				{
					base.UnloadUnreferencedResources_NoVirtual();
				}
				public override void ReloadUnreferencedResources(bool reloadableOnly)
				{
					base.ReloadUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void ReloadUnreferencedResources()
				{
					base.ReloadUnreferencedResources_NoVirtual();
				}
				public override void Remove(ref EarthView.World.Graphic.ResourcePtr r)
				{
					base.Remove_NoVirtual(ref r);
				}
				public override void Remove(string name)
				{
					base.Remove_NoVirtual(name);
				}
				public override void Remove(ulong handle)
				{
					base.Remove_NoVirtual(handle);
				}
				public override void Remove(string name, string groupname)
				{
					base.Remove_NoVirtual(name,groupname);
				}
				public override void RemoveAll()
				{
					base.RemoveAll_NoVirtual();
				}
				public override void RemoveUnreferencedResources(bool reloadableOnly)
				{
					base.RemoveUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void RemoveUnreferencedResources()
				{
					base.RemoveUnreferencedResources_NoVirtual();
				}
				public override void RemoveUnreferencedResource(string name)
				{
					base.RemoveUnreferencedResource_NoVirtual(name);
				}
				public override void RemoveUnreferencedResource(string name, string groupName)
				{
					base.RemoveUnreferencedResource_NoVirtual(name,groupName);
				}
				public override void UnloadUnreferencedResource(string name, string groupName)
				{
					base.UnloadUnreferencedResource_NoVirtual(name,groupName);
				}
				public override void UnloadUnreferencedResource(string name, string groupName, ushort useCount)
				{
					base.UnloadUnreferencedResource_NoVirtual(name,groupName,useCount);
				}
				public override EarthView.World.Graphic.ResourcePtr GetByName(string name, string groupName)
				{
					return base.GetByName_NoVirtual(name,groupName);
				}
				public override EarthView.World.Graphic.ResourcePtr GetByName(string name)
				{
					return base.GetByName_NoVirtual(name);
				}
				public override EarthView.World.Graphic.ResourcePtr GetByHandle(ulong handle)
				{
					return base.GetByHandle_NoVirtual(handle);
				}
				public override bool ResourceExists(string name)
				{
					return base.ResourceExists_NoVirtual(name);
				}
				public override bool ResourceExists(ulong handle)
				{
					return base.ResourceExists_NoVirtual(handle);
				}
				public override void _notifyResourceTouched(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceTouched_NoVirtual(res);
				}
				public override void _notifyResourceLoaded(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceLoaded_NoVirtual(res);
				}
				public override void _notifyResourceUnloaded(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceUnloaded_NoVirtual(res);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader,loadParams,backgroundThread);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader,loadParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual)
				{
					return base.Prepare_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader,loadParams,backgroundThread);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader,loadParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual)
				{
					return base.Load_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group)
				{
					return base.Load_NoVirtual(name,group);
				}
				public override void SetVerbose(bool v)
				{
					base.SetVerbose_NoVirtual(v);
				}
				public override bool GetVerbose()
				{
					return base.GetVerbose_NoVirtual();
				}
				protected override void AddImpl(ref EarthView.World.Graphic.ResourcePtr res)
				{
					base.AddImpl_NoVirtual(ref res);
				}
				protected override void RemoveImpl(ref EarthView.World.Graphic.ResourcePtr res)
				{
					base.RemoveImpl_NoVirtual(ref res);
				}
				protected override void CheckUsage()
				{
					base.CheckUsage_NoVirtual();
				}
				public override EarthView.World.Core.StringVector GetScriptPatterns()
				{
					return base.GetScriptPatterns_NoVirtual();
				}
				public override double GetLoadingOrder()
				{
					return base.GetLoadingOrder_NoVirtual();
				}
				public static MaterialManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MaterialManager obj = baseObj as  MaterialManager;
					if (object.Equals(obj, null))
					{
						obj = new MaterialManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMaterialManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MaterialManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MaterialManager emptyInstance = new MaterialManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
