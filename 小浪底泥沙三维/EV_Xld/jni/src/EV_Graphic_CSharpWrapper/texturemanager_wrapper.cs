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
			/// 纹理管理类,
			/// 管理纹理
			/// </summary>
			public class TextureManager : EarthView.World.Graphic.ResourceManager
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				public TextureManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTextureManagerProxy", null);
					if (!"EarthView.World.Graphic.TextureManager".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_getSingleton_CTextureManager();

				/// <summary>
				/// 获得单例
				/// </summary>
				/// <returns></returns>
				public static EarthView.World.Graphic.TextureManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_getSingleton_CTextureManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TextureManager csObj = new EarthView.World.Graphic.TextureManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTextureManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TextureManager;
						csObj.BindNativeObject(__ptr, "CTextureManager");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_getSingletonPtr_CTextureManager();

				/// <summary>
				/// 获得单例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public static EarthView.World.Graphic.TextureManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_getSingletonPtr_CTextureManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TextureManager csObj = new EarthView.World.Graphic.TextureManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTextureManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TextureManager;
						csObj.BindNativeObject(__ptr, "CTextureManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 创建一个新的纹理，或者得到一件存在的同名的纹理
				/// </summary>
				/// <param name="name">纹理名称</param>
				/// <param name="group"></param>
				/// <param name="isManual"></param>
				/// <param name="loader"></param>
				/// <param name="createParams"></param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"> </param>
				/// <param name="isAlpha"></param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
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
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual, csobj_ref_loader, csobj_createParams, texType, numMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 创建一个新的纹理，或者得到一件存在的同名的纹理
				/// </summary>
				/// <param name="name">纹理名称</param>
				/// <param name="group"></param>
				/// <param name="isManual"></param>
				/// <param name="loader"></param>
				/// <param name="createParams"></param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"> </param>
				/// <param name="isAlpha"></param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
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
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
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
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual, csobj_ref_loader, csobj_createParams, texType, numMipmaps, gamma, isAlpha, desiredFormat);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
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
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha));
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
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
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual, csobj_loader, csobj_createParams, texType, numMipmaps, gamma, isAlpha);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha));
					
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
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
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
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual, csobj_ref_loader, csobj_createParams, texType, numMipmaps, gamma);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma);
					
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
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32 m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
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
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual, csobj_ref_loader, csobj_createParams, texType, numMipmaps);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps);
					
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
				protected delegate IntPtr createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType);

				protected createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Function(ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType)
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
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=CreateOrRetrieve(strname,strgroup,isManual, csobj_ref_loader, csobj_createParams, texType);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams);

				public new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr createParams);

				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr loader);

				public new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr loader);

				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual);

				public new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual));
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual);

				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual));
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string group);

				public new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(this.NativeObject, name, group);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pNativeObject, string name, string group);

				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, name, group);
					
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
				protected delegate IntPtr replaceResource_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString(ref IntPtr name, ref IntPtr group);

				protected replaceResource_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString m_replaceResource_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult ReplaceResource_NoVirtual(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(this.NativeObject, name, group);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Function(ref IntPtr name, ref IntPtr group)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csret=ReplaceResource(strname,strgroup);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult ReplaceResource(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, name, group);
					
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
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 创建一个新的纹理
				/// </summary>
				/// <param name="name">纹理名称</param>				
				/// <param name="isManual"></param>
				/// <param name="loader"></param>
				/// <param name="createParams"></param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"> </param>
				/// <param name="isAlpha"></param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
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
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual, csobj_ref_loader, csobj_createParams, texType, numMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 创建一个新的纹理
				/// </summary>
				/// <param name="name">纹理名称</param>				
				/// <param name="isManual"></param>
				/// <param name="loader"></param>
				/// <param name="createParams"></param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"> </param>
				/// <param name="isAlpha"></param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
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
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
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
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual, csobj_ref_loader, csobj_createParams, texType, numMipmaps, gamma, isAlpha, desiredFormat);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
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
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(ref IntPtr name, bool isManual, IntPtr loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha));
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Function(ref IntPtr name, bool isManual, IntPtr loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
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
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual, csobj_loader, csobj_createParams, texType, numMipmaps, gamma, isAlpha);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(IntPtr pNativeObject, string name, byte isManual, IntPtr loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma, Convert.ToByte(isAlpha));
					
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
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Function(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
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
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual, csobj_ref_loader, csobj_createParams, texType, numMipmaps, gamma);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps, gamma);
					
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
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32 m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Function(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
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
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual, csobj_ref_loader, csobj_createParams, texType, numMipmaps);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType, numMipmaps);
					
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
				protected delegate IntPtr createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType);

				protected createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Function(ref IntPtr name, bool isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType)
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
					
					EarthView.World.Graphic.ResourcePtr csret=CreateUnmanaged(strname,isManual, csobj_ref_loader, csobj_createParams, texType);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject, texType);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams);

				public new EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, byte isManual, IntPtr ref_loader, IntPtr createParams);

				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, byte isManual, IntPtr loader);

				public new EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, byte isManual, IntPtr loader);

				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, byte isManual);

				public new EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_NoVirtual(this.NativeObject, name, Convert.ToByte(isManual));
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool(IntPtr pNativeObject, string name, byte isManual);

				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool(this.NativeObject, name, Convert.ToByte(isManual));
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public new EarthView.World.Graphic.ResourcePtr CreateUnmanaged_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_NoVirtual(this.NativeObject, name);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString(IntPtr pNativeObject, string name);

				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString(this.NativeObject, name);
					
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
				protected delegate IntPtr prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection);

				protected prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 从一个资源定位文件中准备一个纹理
				/// </summary>
				/// <param name="name">加载的文件名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"></param>
				/// <param name="isAlpha">仅适用于灰白影像</param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.TexturePtr Prepare_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=Prepare(strname,strgroup,texType, numMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 从一个资源定位文件中准备一个纹理
				/// </summary>
				/// <param name="name">加载的文件名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"></param>
				/// <param name="isAlpha">仅适用于灰白影像</param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.TexturePtr Prepare(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				protected prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.TexturePtr Prepare_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=Prepare(strname,strgroup,texType, numMipmaps, gamma, isAlpha, desiredFormat);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.TexturePtr Prepare(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha);

				protected prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha);

				public virtual EarthView.World.Graphic.TexturePtr Prepare_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=Prepare(strname,strgroup,texType, numMipmaps, gamma, isAlpha);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha);

				public virtual EarthView.World.Graphic.TexturePtr Prepare(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				protected prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				public virtual EarthView.World.Graphic.TexturePtr Prepare_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(this.NativeObject, name, group, texType, numMipmaps, gamma);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=Prepare(strname,strgroup,texType, numMipmaps, gamma);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				public virtual EarthView.World.Graphic.TexturePtr Prepare(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real(this.NativeObject, name, group, texType, numMipmaps, gamma);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				protected prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32 m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				public virtual EarthView.World.Graphic.TexturePtr Prepare_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_NoVirtual(this.NativeObject, name, group, texType, numMipmaps);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=Prepare(strname,strgroup,texType, numMipmaps);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				public virtual EarthView.World.Graphic.TexturePtr Prepare(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32(this.NativeObject, name, group, texType, numMipmaps);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CTexturePtr_EVString_EVString_TextureType(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType);

				protected prepare_CallBack_CTexturePtr_EVString_EVString_TextureType m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.TexturePtr Prepare_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_NoVirtual(this.NativeObject, name, group, texType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=Prepare(strname,strgroup,texType);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.TexturePtr Prepare(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType(this.NativeObject, name, group, texType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CTexturePtr_EVString_EVString(ref IntPtr name, ref IntPtr group);

				protected prepare_CallBack_CTexturePtr_EVString_EVString m_prepare_CallBack_CTexturePtr_EVString_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.TexturePtr Prepare_NoVirtual(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_NoVirtual(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Function(ref IntPtr name, ref IntPtr group)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=Prepare(strname,strgroup);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString(IntPtr pNativeObject, string name, string group);

				public virtual EarthView.World.Graphic.TexturePtr Prepare(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection);

				protected load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 从资源定位文件中加载一个纹理
				/// </summary>
				/// <param name="name">加载的文件名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"></param>
				/// <param name="isAlpha">仅适用于灰白影像</param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,texType, numMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 从资源定位文件中加载一个纹理
				/// </summary>
				/// <param name="name">加载的文件名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"></param>
				/// <param name="isAlpha">仅适用于灰白影像</param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
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
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				protected load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,texType, numMipmaps, gamma, isAlpha, desiredFormat);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
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
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha);

				protected load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha));
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,texType, numMipmaps, gamma, isAlpha);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, byte isAlpha);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma, bool isAlpha)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(this.NativeObject, name, group, texType, numMipmaps, gamma, Convert.ToByte(isAlpha));
					
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
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				protected load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(this.NativeObject, name, group, texType, numMipmaps, gamma);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,texType, numMipmaps, gamma);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real(this.NativeObject, name, group, texType, numMipmaps, gamma);
					
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
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				protected load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32 m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_NoVirtual(this.NativeObject, name, group, texType, numMipmaps);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,texType, numMipmaps);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, int numMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32(this.NativeObject, name, group, texType, numMipmaps);
					
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
				protected delegate IntPtr load_CallBack_ResourcePtr_EVString_EVString_TextureType(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType);

				protected load_CallBack_ResourcePtr_EVString_EVString_TextureType m_load_CallBack_ResourcePtr_EVString_EVString_TextureType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_NoVirtual(this.NativeObject, name, group, texType);
					
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

				protected  IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.ResourcePtr csret=Load(strname,strgroup,texType);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.ResourcePtr Load(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType(this.NativeObject, name, group, texType);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string group);

				public new EarthView.World.Graphic.ResourcePtr Load_NoVirtual(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_NoVirtual(this.NativeObject, name, group);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString(IntPtr pNativeObject, string name, string group);

				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString(this.NativeObject, name, group);
					
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
				protected delegate IntPtr loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection);

				protected loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 从Image对象中加载纹理
				/// </summary>
				/// <param name="name">生成的纹理名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="img">包含所加载数据的EarthView::World::Graphic::CImage类对象</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="iNumMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"></param>
				/// <param name="isAlpha">仅适用于灰白影像</param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.TexturePtr LoadImage_NoVirtual(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.Image csobj_img = new EarthView.World.Graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_img.BindNativeObject(img,"CImage");
					csobj_img.Delegate = true;
					IClassFactory csobj_imgClassFactory = GlobalClassFactoryMap.Get(csobj_img.GetCppInstanceTypeName());
					if (csobj_imgClassFactory != null)
					{
						csobj_img.Delegate = true;
						csobj_img = csobj_imgClassFactory.Create() as EarthView.World.Graphic.Image;
						csobj_img.BindNativeObject(img, "CImage");
						csobj_img.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadImage(strname,strgroup,csobj_img, texType, iNumMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, byte hwGammaCorrection);

				/// <summary>
				/// 从Image对象中加载纹理
				/// </summary>
				/// <param name="name">生成的纹理名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="img">包含所加载数据的EarthView::World::Graphic::CImage类对象</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="iNumMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"></param>
				/// <param name="isAlpha">仅适用于灰白影像</param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.TexturePtr LoadImage(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				protected loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage_NoVirtual(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.Image csobj_img = new EarthView.World.Graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_img.BindNativeObject(img,"CImage");
					csobj_img.Delegate = true;
					IClassFactory csobj_imgClassFactory = GlobalClassFactoryMap.Get(csobj_img.GetCppInstanceTypeName());
					if (csobj_imgClassFactory != null)
					{
						csobj_img.Delegate = true;
						csobj_img = csobj_imgClassFactory.Create() as EarthView.World.Graphic.Image;
						csobj_img.BindNativeObject(img, "CImage");
						csobj_img.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadImage(strname,strgroup,csobj_img, texType, iNumMipmaps, gamma, isAlpha, desiredFormat);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, byte isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlpha, EarthView.World.Graphic.PIXELFORMAT desiredFormat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps, gamma, Convert.ToByte(isAlpha), desiredFormat);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlphat);

				protected loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, byte isAlphat);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage_NoVirtual(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlphat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps, gamma, Convert.ToByte(isAlphat));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Function(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlphat)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.Image csobj_img = new EarthView.World.Graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_img.BindNativeObject(img,"CImage");
					csobj_img.Delegate = true;
					IClassFactory csobj_imgClassFactory = GlobalClassFactoryMap.Get(csobj_img.GetCppInstanceTypeName());
					if (csobj_imgClassFactory != null)
					{
						csobj_img.Delegate = true;
						csobj_img = csobj_imgClassFactory.Create() as EarthView.World.Graphic.Image;
						csobj_img.BindNativeObject(img, "CImage");
						csobj_img.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadImage(strname,strgroup,csobj_img, texType, iNumMipmaps, gamma, isAlphat);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, byte isAlphat);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool isAlphat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps, gamma, Convert.ToByte(isAlphat));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma);

				protected loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage_NoVirtual(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_NoVirtual(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps, gamma);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Function(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.Image csobj_img = new EarthView.World.Graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_img.BindNativeObject(img,"CImage");
					csobj_img.Delegate = true;
					IClassFactory csobj_imgClassFactory = GlobalClassFactoryMap.Get(csobj_img.GetCppInstanceTypeName());
					if (csobj_imgClassFactory != null)
					{
						csobj_img.Delegate = true;
						csobj_img = csobj_imgClassFactory.Create() as EarthView.World.Graphic.Image;
						csobj_img.BindNativeObject(img, "CImage");
						csobj_img.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadImage(strname,strgroup,csobj_img, texType, iNumMipmaps, gamma);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps, gamma);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps);

				protected loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32 m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage_NoVirtual(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_NoVirtual(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Function(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.Image csobj_img = new EarthView.World.Graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_img.BindNativeObject(img,"CImage");
					csobj_img.Delegate = true;
					IClassFactory csobj_imgClassFactory = GlobalClassFactoryMap.Get(csobj_img.GetCppInstanceTypeName());
					if (csobj_imgClassFactory != null)
					{
						csobj_img.Delegate = true;
						csobj_img = csobj_imgClassFactory.Create() as EarthView.World.Graphic.Image;
						csobj_img.BindNativeObject(img, "CImage");
						csobj_img.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadImage(strname,strgroup,csobj_img, texType, iNumMipmaps);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType, iNumMipmaps);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType);

				protected loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage_NoVirtual(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_NoVirtual(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Function(ref IntPtr name, ref IntPtr group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.Image csobj_img = new EarthView.World.Graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_img.BindNativeObject(img,"CImage");
					csobj_img.Delegate = true;
					IClassFactory csobj_imgClassFactory = GlobalClassFactoryMap.Get(csobj_img.GetCppInstanceTypeName());
					if (csobj_imgClassFactory != null)
					{
						csobj_img.Delegate = true;
						csobj_img = csobj_imgClassFactory.Create() as EarthView.World.Graphic.Image;
						csobj_img.BindNativeObject(img, "CImage");
						csobj_img.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadImage(strname,strgroup,csobj_img, texType);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType(IntPtr pNativeObject, string name, string group, IntPtr img, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage(string name, string group, EarthView.World.Graphic.Image img, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, texType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadImage_CallBack_CTexturePtr_EVString_EVString_CImage(ref IntPtr name, ref IntPtr group, IntPtr img);

				protected loadImage_CallBack_CTexturePtr_EVString_EVString_CImage m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr img);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage_NoVirtual(string name, string group, EarthView.World.Graphic.Image img)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_NoVirtual(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Function(ref IntPtr name, ref IntPtr group, IntPtr img)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.Image csobj_img = new EarthView.World.Graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_img.BindNativeObject(img,"CImage");
					csobj_img.Delegate = true;
					IClassFactory csobj_imgClassFactory = GlobalClassFactoryMap.Get(csobj_img.GetCppInstanceTypeName());
					if (csobj_imgClassFactory != null)
					{
						csobj_img.Delegate = true;
						csobj_img = csobj_imgClassFactory.Create() as EarthView.World.Graphic.Image;
						csobj_img.BindNativeObject(img, "CImage");
						csobj_img.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadImage(strname,strgroup,csobj_img);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage(IntPtr pNativeObject, string name, string group, IntPtr img);

				public virtual EarthView.World.Graphic.TexturePtr LoadImage(string name, string group, EarthView.World.Graphic.Image img)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage(this.NativeObject, name, group, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool hwGammaCorrection);

				protected loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, byte hwGammaCorrection);

				/// <summary>
				/// 从原始数据流加载纹理
				/// </summary>
				/// <param name="name">生成的纹理名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="stream">引入的数据流</param>
				/// <param name="uWidth">该纹理的宽</param>
				/// <param name="uHeight">该纹理的高</param>
				/// <param name="format">导入的数据的格式</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="iNumMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.TexturePtr LoadRawData_NoVirtual(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format, texType, iNumMipmaps, gamma, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Function(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool hwGammaCorrection)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Core.DataStreamPtr csobj_stream = new EarthView.World.Core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_stream.BindNativeObject(stream,"DataStreamPtr");
					csobj_stream.Delegate = true;
					IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
					if (csobj_streamClassFactory != null)
					{
						csobj_stream.Delegate = true;
						csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStreamPtr;
						csobj_stream.BindNativeObject(stream, "DataStreamPtr");
						csobj_stream.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadRawData(strname,strgroup,ref csobj_stream, uWidth, uHeight, format, texType, iNumMipmaps, gamma, hwGammaCorrection);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, byte hwGammaCorrection);

				/// <summary>
				/// 从原始数据流加载纹理
				/// </summary>
				/// <param name="name">生成的纹理名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="stream">引入的数据流</param>
				/// <param name="uWidth">该纹理的宽</param>
				/// <param name="uHeight">该纹理的高</param>
				/// <param name="format">导入的数据的格式</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="iNumMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.TexturePtr LoadRawData(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format, texType, iNumMipmaps, gamma, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma);

				protected loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma);

				public virtual EarthView.World.Graphic.TexturePtr LoadRawData_NoVirtual(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_NoVirtual(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format, texType, iNumMipmaps, gamma);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Function(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Core.DataStreamPtr csobj_stream = new EarthView.World.Core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_stream.BindNativeObject(stream,"DataStreamPtr");
					csobj_stream.Delegate = true;
					IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
					if (csobj_streamClassFactory != null)
					{
						csobj_stream.Delegate = true;
						csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStreamPtr;
						csobj_stream.BindNativeObject(stream, "DataStreamPtr");
						csobj_stream.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadRawData(strname,strgroup,ref csobj_stream, uWidth, uHeight, format, texType, iNumMipmaps, gamma);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma);

				public virtual EarthView.World.Graphic.TexturePtr LoadRawData(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps, double gamma)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format, texType, iNumMipmaps, gamma);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps);

				protected loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32 m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps);

				public virtual EarthView.World.Graphic.TexturePtr LoadRawData_NoVirtual(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_NoVirtual(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format, texType, iNumMipmaps);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Function(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Core.DataStreamPtr csobj_stream = new EarthView.World.Core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_stream.BindNativeObject(stream,"DataStreamPtr");
					csobj_stream.Delegate = true;
					IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
					if (csobj_streamClassFactory != null)
					{
						csobj_stream.Delegate = true;
						csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStreamPtr;
						csobj_stream.BindNativeObject(stream, "DataStreamPtr");
						csobj_stream.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadRawData(strname,strgroup,ref csobj_stream, uWidth, uHeight, format, texType, iNumMipmaps);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps);

				public virtual EarthView.World.Graphic.TexturePtr LoadRawData(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType, int iNumMipmaps)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format, texType, iNumMipmaps);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType);

				protected loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.TexturePtr LoadRawData_NoVirtual(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_NoVirtual(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format, texType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Function(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Core.DataStreamPtr csobj_stream = new EarthView.World.Core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_stream.BindNativeObject(stream,"DataStreamPtr");
					csobj_stream.Delegate = true;
					IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
					if (csobj_streamClassFactory != null)
					{
						csobj_stream.Delegate = true;
						csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStreamPtr;
						csobj_stream.BindNativeObject(stream, "DataStreamPtr");
						csobj_stream.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadRawData(strname,strgroup,ref csobj_stream, uWidth, uHeight, format, texType);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType);

				public virtual EarthView.World.Graphic.TexturePtr LoadRawData(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.TEXTURETYPE texType)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format, texType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format);

				protected loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_NoVirtual(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format);

				public virtual EarthView.World.Graphic.TexturePtr LoadRawData_NoVirtual(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_NoVirtual(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Function(ref IntPtr name, ref IntPtr group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Core.DataStreamPtr csobj_stream = new EarthView.World.Core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_stream.BindNativeObject(stream,"DataStreamPtr");
					csobj_stream.Delegate = true;
					IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
					if (csobj_streamClassFactory != null)
					{
						csobj_stream.Delegate = true;
						csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStreamPtr;
						csobj_stream.BindNativeObject(stream, "DataStreamPtr");
						csobj_stream.Delegate = true;
					}
					
					EarthView.World.Graphic.TexturePtr csret=LoadRawData(strname,strgroup,ref csobj_stream, uWidth, uHeight, format);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(IntPtr pNativeObject, string name, string group, IntPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format);

				public virtual EarthView.World.Graphic.TexturePtr LoadRawData(string name, string group, ref EarthView.World.Core.DataStreamPtr stream, ushort uWidth, ushort uHeight, EarthView.World.Graphic.PIXELFORMAT format)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(this.NativeObject, name, group, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, uWidth, uHeight, format);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, bool hwGammaCorrection, uint fsaa, ref IntPtr fsaaHint);

				protected createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection, uint fsaa, string fsaaHint);

				/// <summary>
				/// 用特定的宽，高，深度来创建一个纹理
				/// </summary>
				/// <param name="name">生成的纹理名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="width">纹理的宽</param>
				/// <param name="height">该纹理的高</param>
				/// <param name="depth">该纹理的深度</param>
				/// <param name="num_mips">多级渐进纹理的数量</param>
				/// <param name="format">像素格式</param>
				/// <param name="usage">用途</param>
				/// <param name="ref_loader">手动加载器</param>
				/// <param name="hwGammaCorrection"></param>
				/// <param name="fsaa">多重采样级别</param>
				/// <param name="fsaaHint"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.TexturePtr CreateManual_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection, uint fsaa, string fsaaHint)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_NoVirtual(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection), fsaa, fsaaHint);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, bool hwGammaCorrection, uint fsaa, ref IntPtr fsaaHint)
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
					string strfsaaHint= Marshal.PtrToStringAnsi(fsaaHint);
					ClassFactory.FreeString(ref fsaaHint);
					
					EarthView.World.Graphic.TexturePtr csret=CreateManual(strname,strgroup,texType, width, height, depth, num_mips, format, usage, csobj_ref_loader, hwGammaCorrection, fsaa, strfsaaHint);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection, uint fsaa, string fsaaHint);

				/// <summary>
				/// 用特定的宽，高，深度来创建一个纹理
				/// </summary>
				/// <param name="name">生成的纹理名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="width">纹理的宽</param>
				/// <param name="height">该纹理的高</param>
				/// <param name="depth">该纹理的深度</param>
				/// <param name="num_mips">多级渐进纹理的数量</param>
				/// <param name="format">像素格式</param>
				/// <param name="usage">用途</param>
				/// <param name="ref_loader">手动加载器</param>
				/// <param name="hwGammaCorrection"></param>
				/// <param name="fsaa">多重采样级别</param>
				/// <param name="fsaaHint"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection, uint fsaa, string fsaaHint)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection), fsaa, fsaaHint);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, bool hwGammaCorrection, uint fsaa);

				protected createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32 m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection, uint fsaa);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection, uint fsaa)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_NoVirtual(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection), fsaa);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, bool hwGammaCorrection, uint fsaa)
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
					
					EarthView.World.Graphic.TexturePtr csret=CreateManual(strname,strgroup,texType, width, height, depth, num_mips, format, usage, csobj_ref_loader, hwGammaCorrection, fsaa);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection, uint fsaa);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection, uint fsaa)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection), fsaa);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, bool hwGammaCorrection);

				protected createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_NoVirtual(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, bool hwGammaCorrection)
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
					
					EarthView.World.Graphic.TexturePtr csret=CreateManual(strname,strgroup,texType, width, height, depth, num_mips, format, usage, csobj_ref_loader, hwGammaCorrection);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader);

				protected createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_NoVirtual(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader)
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
					
					EarthView.World.Graphic.TexturePtr csret=CreateManual(strname,strgroup,texType, width, height, depth, num_mips, format, usage, csobj_ref_loader);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				protected createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32 m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_NoVirtual(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=CreateManual(strname,strgroup,texType, width, height, depth, num_mips, format, usage);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(this.NativeObject, name, group, texType, width, height, depth, num_mips, format, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format);

				protected createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual_NoVirtual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_NoVirtual(this.NativeObject, name, group, texType, width, height, depth, num_mips, format);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					EarthView.World.Graphic.TexturePtr csret=CreateManual(strname,strgroup,texType, width, height, depth, num_mips, format);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format);

				public virtual EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, uint depth, int num_mips, EarthView.World.Graphic.PIXELFORMAT format)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(this.NativeObject, name, group, texType, width, height, depth, num_mips, format);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection, uint fsaa, string fsaaHint);

				/// <summary>
				/// 手动创建一个深度为1的纹理
				/// </summary>
				/// <param name="name">生成的纹理名称</param>
				/// <param name="group">划分纹理的资源名称</param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="width">纹理的宽</param>
				/// <param name="height">该纹理的高</param>
				/// <param name="num_mips">多级渐进纹理的数量</param>
				/// <param name="format">像素格式</param>
				/// <param name="usage">用途</param>
				/// <param name="ref_loader">手动加载器</param>
				/// <param name="hwGammaCorrection"></param>
				/// <param name="fsaa">多重采样级别</param>
				/// <param name="fsaaHint"></param>
				/// <returns></returns>
				public EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection, uint fsaa, string fsaaHint)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(this.NativeObject, name, group, texType, width, height, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection), fsaa, fsaaHint);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection, uint fsaa);

				public EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection, uint fsaa)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(this.NativeObject, name, group, texType, width, height, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection), fsaa);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader, byte hwGammaCorrection);

				public EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader, bool hwGammaCorrection)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(this.NativeObject, name, group, texType, width, height, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, Convert.ToByte(hwGammaCorrection));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, IntPtr ref_loader);

				public EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(this.NativeObject, name, group, texType, width, height, num_mips, format, usage, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				public EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(this.NativeObject, name, group, texType, width, height, num_mips, format, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format);

				public EarthView.World.Graphic.TexturePtr CreateManual(string name, string group, EarthView.World.Graphic.TEXTURETYPE texType, uint width, uint height, int num_mips, EarthView.World.Graphic.PIXELFORMAT format)
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat(this.NativeObject, name, group, texType, width, height, num_mips, format);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.TexturePtr csObj = new EarthView.World.Graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CTexturePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TexturePtr;
						csObj.BindNativeObject(__ptr, "CTexturePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPreferredIntegerBitDepth_CallBack_void_ev_uint16_ev_bool(ushort bits, bool reloadTextures);

				protected setPreferredIntegerBitDepth_CallBack_void_ev_uint16_ev_bool m_setPreferredIntegerBitDepth_CallBack_void_ev_uint16_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_NoVirtual(IntPtr pNativeObject, ushort bits, byte reloadTextures);

				/// <summary>
				/// 为纹理设置一个首选的位的范围
				/// </summary>
				/// <param name="bits">位数</param>
				/// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
				/// <returns></returns>
				public virtual void SetPreferredIntegerBitDepth_NoVirtual(ushort bits, bool reloadTextures)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_NoVirtual(this.NativeObject, bits, Convert.ToByte(reloadTextures));
					
				}

				protected  void EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Function(ushort bits, bool reloadTextures)
				{
					SetPreferredIntegerBitDepth(bits, reloadTextures);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool(IntPtr pNativeObject, ushort bits, byte reloadTextures);

				/// <summary>
				/// 为纹理设置一个首选的位的范围
				/// </summary>
				/// <param name="bits">位数</param>
				/// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
				/// <returns></returns>
				public virtual void SetPreferredIntegerBitDepth(ushort bits, bool reloadTextures)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool(this.NativeObject, bits, Convert.ToByte(reloadTextures));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPreferredIntegerBitDepth_CallBack_void_ev_uint16(ushort bits);

				protected setPreferredIntegerBitDepth_CallBack_void_ev_uint16 m_setPreferredIntegerBitDepth_CallBack_void_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort bits);

				public virtual void SetPreferredIntegerBitDepth_NoVirtual(ushort bits)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_NoVirtual(this.NativeObject, bits);
					
				}

				protected  void EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Function(ushort bits)
				{
					SetPreferredIntegerBitDepth(bits);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16(IntPtr pNativeObject, ushort bits);

				public virtual void SetPreferredIntegerBitDepth(ushort bits)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16(this.NativeObject, bits);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort getPreferredIntegerBitDepth_CallBack_ev_uint16();

				protected getPreferredIntegerBitDepth_CallBack_ev_uint16 m_getPreferredIntegerBitDepth_CallBack_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到整型像素格式的纹理首选的位深度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual ushort GetPreferredIntegerBitDepth_NoVirtual()
				{
					ushort ret=EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Function()
				{
					ushort csret=GetPreferredIntegerBitDepth();
					
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
				private static extern ushort EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 得到整型像素格式的纹理首选的位深度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual ushort GetPreferredIntegerBitDepth()
				{
					ushort ret=EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPreferredFloatBitDepth_CallBack_void_ev_uint16_ev_bool(ushort bits, bool reloadTextures);

				protected setPreferredFloatBitDepth_CallBack_void_ev_uint16_ev_bool m_setPreferredFloatBitDepth_CallBack_void_ev_uint16_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_NoVirtual(IntPtr pNativeObject, ushort bits, byte reloadTextures);

				/// <summary>
				/// 得到浮点型像素格式的纹理首选的位深度
				/// </summary>
				/// <param name="bits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
				/// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
				/// <returns></returns>
				public virtual void SetPreferredFloatBitDepth_NoVirtual(ushort bits, bool reloadTextures)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_NoVirtual(this.NativeObject, bits, Convert.ToByte(reloadTextures));
					
				}

				protected  void EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Function(ushort bits, bool reloadTextures)
				{
					SetPreferredFloatBitDepth(bits, reloadTextures);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool(IntPtr pNativeObject, ushort bits, byte reloadTextures);

				/// <summary>
				/// 得到浮点型像素格式的纹理首选的位深度
				/// </summary>
				/// <param name="bits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
				/// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
				/// <returns></returns>
				public virtual void SetPreferredFloatBitDepth(ushort bits, bool reloadTextures)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool(this.NativeObject, bits, Convert.ToByte(reloadTextures));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPreferredFloatBitDepth_CallBack_void_ev_uint16(ushort bits);

				protected setPreferredFloatBitDepth_CallBack_void_ev_uint16 m_setPreferredFloatBitDepth_CallBack_void_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort bits);

				public virtual void SetPreferredFloatBitDepth_NoVirtual(ushort bits)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_NoVirtual(this.NativeObject, bits);
					
				}

				protected  void EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Function(ushort bits)
				{
					SetPreferredFloatBitDepth(bits);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16(IntPtr pNativeObject, ushort bits);

				public virtual void SetPreferredFloatBitDepth(ushort bits)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16(this.NativeObject, bits);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort getPreferredFloatBitDepth_CallBack_ev_uint16();

				protected getPreferredFloatBitDepth_CallBack_ev_uint16 m_getPreferredFloatBitDepth_CallBack_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到浮点型像素格式纹理的首选的位深度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual ushort GetPreferredFloatBitDepth_NoVirtual()
				{
					ushort ret=EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Function()
				{
					ushort csret=GetPreferredFloatBitDepth();
					
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
				private static extern ushort EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 得到浮点型像素格式纹理的首选的位深度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual ushort GetPreferredFloatBitDepth()
				{
					ushort ret=EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16_ev_bool(ushort integerBits, ushort floatBits, bool reloadTextures);

				protected setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16_ev_bool m_setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_NoVirtual(IntPtr pNativeObject, ushort integerBits, ushort floatBits, byte reloadTextures);

				/// <summary>
				/// 为整型和浮点型像素格式的纹理设置首选的位深度
				/// </summary>
				/// <param name="integerBits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
				/// <param name="floatBits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
				/// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
				/// <returns></returns>
				public virtual void SetPreferredBitDepths_NoVirtual(ushort integerBits, ushort floatBits, bool reloadTextures)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_NoVirtual(this.NativeObject, integerBits, floatBits, Convert.ToByte(reloadTextures));
					
				}

				protected  void EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Function(ushort integerBits, ushort floatBits, bool reloadTextures)
				{
					SetPreferredBitDepths(integerBits, floatBits, reloadTextures);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool(IntPtr pNativeObject, ushort integerBits, ushort floatBits, byte reloadTextures);

				/// <summary>
				/// 为整型和浮点型像素格式的纹理设置首选的位深度
				/// </summary>
				/// <param name="integerBits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
				/// <param name="floatBits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
				/// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
				/// <returns></returns>
				public virtual void SetPreferredBitDepths(ushort integerBits, ushort floatBits, bool reloadTextures)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool(this.NativeObject, integerBits, floatBits, Convert.ToByte(reloadTextures));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16(ushort integerBits, ushort floatBits);

				protected setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16 m_setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort integerBits, ushort floatBits);

				public virtual void SetPreferredBitDepths_NoVirtual(ushort integerBits, ushort floatBits)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_NoVirtual(this.NativeObject, integerBits, floatBits);
					
				}

				protected  void EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Function(ushort integerBits, ushort floatBits)
				{
					SetPreferredBitDepths(integerBits, floatBits);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16(IntPtr pNativeObject, ushort integerBits, ushort floatBits);

				public virtual void SetPreferredBitDepths(ushort integerBits, ushort floatBits)
				{
					EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16(this.NativeObject, integerBits, floatBits);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				protected isFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 m_isFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				/// <summary>
				/// 判断该系统能否支持给定的选项的纹理格式
				/// </summary>
				/// <param name="ttype"></param>
				/// <param name="format">要求的像素格式</param>
				/// <param name="usage">纹理所需要使用的类型</param>
				/// <returns>假如支持该格式则返回true</returns>
				public virtual bool IsFormatSupported_NoVirtual(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					byte ret=EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(this.NativeObject, ttype, format, usage);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Function(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					bool csret=IsFormatSupported(ttype, format, usage);
					
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
				private static extern byte EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				/// <summary>
				/// 判断该系统能否支持给定的选项的纹理格式
				/// </summary>
				/// <param name="ttype"></param>
				/// <param name="format">要求的像素格式</param>
				/// <param name="usage">纹理所需要使用的类型</param>
				/// <returns>假如支持该格式则返回true</returns>
				public virtual bool IsFormatSupported(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					byte ret=EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(this.NativeObject, ttype, format, usage);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isEquivalentFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				protected isEquivalentFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 m_isEquivalentFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				/// <summary>
				/// 利用给定的选项，判断该系统能否支持纹理格式，或者另一个没有质量损失的格式
				/// </summary>
				/// <param name="ttype"></param>
				/// <param name="format">要求的像素格式</param>
				/// <param name="usage">纹理所需要使用的类型</param>
				/// <returns>假如支持该格式则返回true</returns>
				public virtual bool IsEquivalentFormatSupported_NoVirtual(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					byte ret=EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(this.NativeObject, ttype, format, usage);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Function(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					bool csret=IsEquivalentFormatSupported(ttype, format, usage);
					
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
				private static extern byte EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				/// <summary>
				/// 利用给定的选项，判断该系统能否支持纹理格式，或者另一个没有质量损失的格式
				/// </summary>
				/// <param name="ttype"></param>
				/// <param name="format">要求的像素格式</param>
				/// <param name="usage">纹理所需要使用的类型</param>
				/// <returns>假如支持该格式则返回true</returns>
				public virtual bool IsEquivalentFormatSupported(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					byte ret=EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(this.NativeObject, ttype, format, usage);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getNativeFormat_CallBack_PixelFormat_TextureType_PixelFormat_ev_int32(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				protected getNativeFormat_CallBack_PixelFormat_TextureType_PixelFormat_ev_int32 m_getNativeFormat_CallBack_PixelFormat_TextureType_PixelFormat_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				/// <summary>
				///
				/// </summary>
				/// <param name="ttype"></param>
				/// <param name="format">要求的像素格式</param>
				/// <param name="usage">纹理所需要使用的类型</param>
				/// <returns>返回像素格式</returns>
				public virtual EarthView.World.Graphic.PIXELFORMAT GetNativeFormat_NoVirtual(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					int ret=EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_NoVirtual(this.NativeObject, ttype, format, usage);
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
				}

				protected  int EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Function(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					EarthView.World.Graphic.PIXELFORMAT csret=GetNativeFormat(ttype, format, usage);
					
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
				private static extern int EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				/// <summary>
				///
				/// </summary>
				/// <param name="ttype"></param>
				/// <param name="format">要求的像素格式</param>
				/// <param name="usage">纹理所需要使用的类型</param>
				/// <returns>返回像素格式</returns>
				public virtual EarthView.World.Graphic.PIXELFORMAT GetNativeFormat(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					int ret=EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32(this.NativeObject, ttype, format, usage);
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage, bool preciseFormatOnly);

				protected isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool m_isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage, byte preciseFormatOnly);

				/// <summary>
				/// 判断硬件是否支持给定纹理类型的过滤
				/// </summary>
				/// <param name="ttype">被要求的纹理类型</param>
				/// <param name="format">被要求的像素格式</param>
				/// <param name="usage">纹理所需要使用的类型</param>
				/// <param name="preciseFormatOnly"></param>
				/// <returns>假如该纹理过滤器被支持则返回true，否则返回false</returns>
				public virtual bool IsHardwareFilteringSupported_NoVirtual(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage, bool preciseFormatOnly)
				{
					byte ret=EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_NoVirtual(this.NativeObject, ttype, format, usage, Convert.ToByte(preciseFormatOnly));
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Function(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage, bool preciseFormatOnly)
				{
					bool csret=IsHardwareFilteringSupported(ttype, format, usage, preciseFormatOnly);
					
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
				private static extern byte EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage, byte preciseFormatOnly);

				/// <summary>
				/// 判断硬件是否支持给定纹理类型的过滤
				/// </summary>
				/// <param name="ttype">被要求的纹理类型</param>
				/// <param name="format">被要求的像素格式</param>
				/// <param name="usage">纹理所需要使用的类型</param>
				/// <param name="preciseFormatOnly"></param>
				/// <returns>假如该纹理过滤器被支持则返回true，否则返回false</returns>
				public virtual bool IsHardwareFilteringSupported(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage, bool preciseFormatOnly)
				{
					byte ret=EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool(this.NativeObject, ttype, format, usage, Convert.ToByte(preciseFormatOnly));
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				protected isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 m_isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				public virtual bool IsHardwareFilteringSupported_NoVirtual(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					byte ret=EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(this.NativeObject, ttype, format, usage);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Function(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					bool csret=IsHardwareFilteringSupported(ttype, format, usage);
					
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
				private static extern byte EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32(IntPtr pNativeObject, EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage);

				public virtual bool IsHardwareFilteringSupported(EarthView.World.Graphic.TEXTURETYPE ttype, EarthView.World.Graphic.PIXELFORMAT format, int usage)
				{
					byte ret=EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32(this.NativeObject, ttype, format, usage);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setDefaultNumMipmaps_CallBack_void_ev_size_t(ulong num);

				protected setDefaultNumMipmaps_CallBack_void_ev_size_t m_setDefaultNumMipmaps_CallBack_void_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong num);

				/// <summary>
				/// 设置默认的多级渐进纹理级数,不设置则默认是0
				/// </summary>
				/// <param name="num"></param>
				/// <returns></returns>
				public virtual void SetDefaultNumMipmaps_NoVirtual(ulong num)
				{
					EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_NoVirtual(this.NativeObject, num);
					
				}

				protected  void EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Function(ulong num)
				{
					SetDefaultNumMipmaps(num);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t(IntPtr pNativeObject, ulong num);

				/// <summary>
				/// 设置默认的多级渐进纹理级数,不设置则默认是0
				/// </summary>
				/// <param name="num"></param>
				/// <returns></returns>
				public virtual void SetDefaultNumMipmaps(ulong num)
				{
					EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t(this.NativeObject, num);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong getDefaultNumMipmaps_CallBack_ev_size_t();

				protected getDefaultNumMipmaps_CallBack_ev_size_t m_getDefaultNumMipmaps_CallBack_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到默认的多级渐进纹理的级数
				/// </summary>
				/// <param name="num"></param>
				/// <returns></returns>
				public virtual ulong GetDefaultNumMipmaps_NoVirtual()
				{
					ulong ret=EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Function()
				{
					ulong csret=GetDefaultNumMipmaps();
					
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
				private static extern ulong EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 得到默认的多级渐进纹理的级数
				/// </summary>
				/// <param name="num"></param>
				/// <returns></returns>
				public virtual ulong GetDefaultNumMipmaps()
				{
					ulong ret=EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t(this.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTextureManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextureManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTextureManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTextureManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTextureManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextureManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTextureManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextureManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTextureManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTextureManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTextureManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextureManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextureManager", new TextureManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextureManagerProxy", new TextureManagerClassFactory());

				public TextureManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pObject, replaceResource_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pObject, prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pObject, prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(IntPtr pObject, prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real(IntPtr pObject, prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32(IntPtr pObject, prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType(IntPtr pObject, prepare_CallBack_CTexturePtr_EVString_EVString_TextureType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString(IntPtr pObject, prepare_CallBack_CTexturePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_TextureType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(IntPtr pObject, loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(IntPtr pObject, loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(IntPtr pObject, loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real(IntPtr pObject, loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32(IntPtr pObject, loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType(IntPtr pObject, loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage(IntPtr pObject, loadImage_CallBack_CTexturePtr_EVString_EVString_CImage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(IntPtr pObject, loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(IntPtr pObject, loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(IntPtr pObject, loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(IntPtr pObject, loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(IntPtr pObject, loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(IntPtr pObject, createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(IntPtr pObject, createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(IntPtr pObject, createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(IntPtr pObject, createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(IntPtr pObject, createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(IntPtr pObject, createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool(IntPtr pObject, setPreferredIntegerBitDepth_CallBack_void_ev_uint16_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16(IntPtr pObject, setPreferredIntegerBitDepth_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16(IntPtr pObject, getPreferredIntegerBitDepth_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool(IntPtr pObject, setPreferredFloatBitDepth_CallBack_void_ev_uint16_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16(IntPtr pObject, setPreferredFloatBitDepth_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16(IntPtr pObject, getPreferredFloatBitDepth_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool(IntPtr pObject, setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16(IntPtr pObject, setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(IntPtr pObject, isFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(IntPtr pObject, isEquivalentFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32(IntPtr pObject, getNativeFormat_CallBack_PixelFormat_TextureType_PixelFormat_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool(IntPtr pObject, isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32(IntPtr pObject, isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t(IntPtr pObject, setDefaultNumMipmaps_CallBack_void_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t(IntPtr pObject, getDefaultNumMipmaps_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t(IntPtr pObject, setMemoryBudget_CallBack_void_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t(IntPtr pObject, getMemoryBudget_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t(IntPtr pObject, getMemoryUsage_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unload_void_EVString(IntPtr pObject, unload_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64(IntPtr pObject, unload_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool(IntPtr pObject, unloadAll_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void(IntPtr pObject, unloadAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool(IntPtr pObject, reloadAll_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void(IntPtr pObject, reloadAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool(IntPtr pObject, unloadUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void(IntPtr pObject, unloadUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool(IntPtr pObject, reloadUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void(IntPtr pObject, reloadUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr(IntPtr pObject, remove_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString(IntPtr pObject, remove_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64(IntPtr pObject, remove_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString(IntPtr pObject, remove_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeAll_void(IntPtr pObject, removeAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool(IntPtr pObject, removeUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void(IntPtr pObject, removeUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64(IntPtr pObject, getByHandle_CallBack_ResourcePtr_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString(IntPtr pObject, resourceExists_CallBack_ev_bool_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64(IntPtr pObject, resourceExists_CallBack_ev_bool_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource(IntPtr pObject, _notifyResourceTouched_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource(IntPtr pObject, _notifyResourceLoaded_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource(IntPtr pObject, _notifyResourceUnloaded_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool(IntPtr pObject, setVerbose_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool(IntPtr pObject, getVerbose_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr(IntPtr pObject, addImpl_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr(IntPtr pObject, removeImpl_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_checkUsage_void(IntPtr pObject, checkUsage_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector(IntPtr pObject, getScriptPatterns_CallBack_StringVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString(IntPtr pObject, parseScript_CallBack_void_DataStreamPtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real(IntPtr pObject, getLoadingOrder_CallBack_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32 = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType = EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType);
						m_replaceResource_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString = EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Function;
						GC.KeepAlive(m_replaceResource_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, m_replaceResource_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32 = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType = EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType);
						m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function;
						GC.KeepAlive(m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(this.NativeObject, m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool);
						m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Function;
						GC.KeepAlive(m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real(this.NativeObject, m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real);
						m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32 = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Function;
						GC.KeepAlive(m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32(this.NativeObject, m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_int32);
						m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Function;
						GC.KeepAlive(m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType(this.NativeObject, m_prepare_CallBack_CTexturePtr_EVString_EVString_TextureType);
						m_prepare_CallBack_CTexturePtr_EVString_EVString = EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Function;
						GC.KeepAlive(m_prepare_CallBack_CTexturePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString(this.NativeObject, m_prepare_CallBack_CTexturePtr_EVString_EVString);
						m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real);
						m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32 = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_TextureType_ev_int32);
						m_load_CallBack_ResourcePtr_EVString_EVString_TextureType = EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_TextureType);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_TextureType);
						m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Function;
						GC.KeepAlive(m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.NativeObject, m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool);
						m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Function;
						GC.KeepAlive(m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.NativeObject, m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat);
						m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Function;
						GC.KeepAlive(m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(this.NativeObject, m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool);
						m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Function;
						GC.KeepAlive(m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real(this.NativeObject, m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real);
						m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32 = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Function;
						GC.KeepAlive(m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32(this.NativeObject, m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32);
						m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Function;
						GC.KeepAlive(m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType(this.NativeObject, m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage_TextureType);
						m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage = EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Function;
						GC.KeepAlive(m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage(this.NativeObject, m_loadImage_CallBack_CTexturePtr_EVString_EVString_CImage);
						m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Function;
						GC.KeepAlive(m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(this.NativeObject, m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool);
						m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Function;
						GC.KeepAlive(m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(this.NativeObject, m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real);
						m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32 = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Function;
						GC.KeepAlive(m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(this.NativeObject, m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32);
						m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Function;
						GC.KeepAlive(m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(this.NativeObject, m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType);
						m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat = EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Function;
						GC.KeepAlive(m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(this.NativeObject, m_loadRawData_CallBack_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat);
						m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Function;
						GC.KeepAlive(m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(this.NativeObject, m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString);
						m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32 = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Function;
						GC.KeepAlive(m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(this.NativeObject, m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32);
						m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Function;
						GC.KeepAlive(m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(this.NativeObject, m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool);
						m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Function;
						GC.KeepAlive(m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(this.NativeObject, m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader);
						m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32 = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Function;
						GC.KeepAlive(m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(this.NativeObject, m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32);
						m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat = EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Function;
						GC.KeepAlive(m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(this.NativeObject, m_createManual_CallBack_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat);
						m_setPreferredIntegerBitDepth_CallBack_void_ev_uint16_ev_bool = EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Function;
						GC.KeepAlive(m_setPreferredIntegerBitDepth_CallBack_void_ev_uint16_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool(this.NativeObject, m_setPreferredIntegerBitDepth_CallBack_void_ev_uint16_ev_bool);
						m_setPreferredIntegerBitDepth_CallBack_void_ev_uint16 = EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Function;
						GC.KeepAlive(m_setPreferredIntegerBitDepth_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16(this.NativeObject, m_setPreferredIntegerBitDepth_CallBack_void_ev_uint16);
						m_getPreferredIntegerBitDepth_CallBack_ev_uint16 = EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Function;
						GC.KeepAlive(m_getPreferredIntegerBitDepth_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16(this.NativeObject, m_getPreferredIntegerBitDepth_CallBack_ev_uint16);
						m_setPreferredFloatBitDepth_CallBack_void_ev_uint16_ev_bool = EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Function;
						GC.KeepAlive(m_setPreferredFloatBitDepth_CallBack_void_ev_uint16_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool(this.NativeObject, m_setPreferredFloatBitDepth_CallBack_void_ev_uint16_ev_bool);
						m_setPreferredFloatBitDepth_CallBack_void_ev_uint16 = EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Function;
						GC.KeepAlive(m_setPreferredFloatBitDepth_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16(this.NativeObject, m_setPreferredFloatBitDepth_CallBack_void_ev_uint16);
						m_getPreferredFloatBitDepth_CallBack_ev_uint16 = EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Function;
						GC.KeepAlive(m_getPreferredFloatBitDepth_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16(this.NativeObject, m_getPreferredFloatBitDepth_CallBack_ev_uint16);
						m_setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16_ev_bool = EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Function;
						GC.KeepAlive(m_setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool(this.NativeObject, m_setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16_ev_bool);
						m_setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16 = EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Function;
						GC.KeepAlive(m_setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16(this.NativeObject, m_setPreferredBitDepths_CallBack_void_ev_uint16_ev_uint16);
						m_isFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 = EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Function;
						GC.KeepAlive(m_isFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(this.NativeObject, m_isFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32);
						m_isEquivalentFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 = EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Function;
						GC.KeepAlive(m_isEquivalentFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(this.NativeObject, m_isEquivalentFormatSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32);
						m_getNativeFormat_CallBack_PixelFormat_TextureType_PixelFormat_ev_int32 = EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Function;
						GC.KeepAlive(m_getNativeFormat_CallBack_PixelFormat_TextureType_PixelFormat_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32(this.NativeObject, m_getNativeFormat_CallBack_PixelFormat_TextureType_PixelFormat_ev_int32);
						m_isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool = EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Function;
						GC.KeepAlive(m_isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool(this.NativeObject, m_isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool);
						m_isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32 = EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Function;
						GC.KeepAlive(m_isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32(this.NativeObject, m_isHardwareFilteringSupported_CallBack_ev_bool_TextureType_PixelFormat_ev_int32);
						m_setDefaultNumMipmaps_CallBack_void_ev_size_t = EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Function;
						GC.KeepAlive(m_setDefaultNumMipmaps_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t(this.NativeObject, m_setDefaultNumMipmaps_CallBack_void_ev_size_t);
						m_getDefaultNumMipmaps_CallBack_ev_size_t = EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Function;
						GC.KeepAlive(m_getDefaultNumMipmaps_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t(this.NativeObject, m_getDefaultNumMipmaps_CallBack_ev_size_t);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_create_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						m_createUnmanaged_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						m_setMemoryBudget_CallBack_void_ev_size_t = EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_Function;
						GC.KeepAlive(m_setMemoryBudget_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t(this.NativeObject, m_setMemoryBudget_CallBack_void_ev_size_t);
						m_getMemoryBudget_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryBudget_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t(this.NativeObject, m_getMemoryBudget_CallBack_ev_size_t);
						m_getMemoryUsage_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryUsage_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t(this.NativeObject, m_getMemoryUsage_CallBack_ev_size_t);
						m_unload_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_unload_void_EVString_Function;
						GC.KeepAlive(m_unload_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unload_void_EVString(this.NativeObject, m_unload_CallBack_void_EVString);
						m_unload_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_Function;
						GC.KeepAlive(m_unload_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64(this.NativeObject, m_unload_CallBack_void_ev_uint64);
						m_unloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool(this.NativeObject, m_unloadAll_CallBack_void_ev_bool);
						m_unloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadAll_void_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void(this.NativeObject, m_unloadAll_CallBack_void);
						m_reloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool(this.NativeObject, m_reloadAll_CallBack_void_ev_bool);
						m_reloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadAll_void_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void(this.NativeObject, m_reloadAll_CallBack_void);
						m_unloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool(this.NativeObject, m_unloadUnreferencedResources_CallBack_void_ev_bool);
						m_unloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void(this.NativeObject, m_unloadUnreferencedResources_CallBack_void);
						m_reloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool(this.NativeObject, m_reloadUnreferencedResources_CallBack_void_ev_bool);
						m_reloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void(this.NativeObject, m_reloadUnreferencedResources_CallBack_void);
						m_remove_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_Function;
						GC.KeepAlive(m_remove_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr(this.NativeObject, m_remove_CallBack_void_ResourcePtr);
						m_remove_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString(this.NativeObject, m_remove_CallBack_void_EVString);
						m_remove_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_Function;
						GC.KeepAlive(m_remove_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64(this.NativeObject, m_remove_CallBack_void_ev_uint64);
						m_remove_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString(this.NativeObject, m_remove_CallBack_void_EVString_EVString);
						m_removeAll_CallBack_void = EarthView_World_Graphic_CResourceManager_removeAll_void_Function;
						GC.KeepAlive(m_removeAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeAll_void(this.NativeObject, m_removeAll_CallBack_void);
						m_removeUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool(this.NativeObject, m_removeUnreferencedResources_CallBack_void_ev_bool);
						m_removeUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void(this.NativeObject, m_removeUnreferencedResources_CallBack_void);
						m_removeUnreferencedResource_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString);
						m_removeUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						m_getByName_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString_EVString);
						m_getByName_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString);
						m_getByHandle_CallBack_ResourcePtr_ev_uint64 = EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_Function;
						GC.KeepAlive(m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64(this.NativeObject, m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						m_resourceExists_CallBack_ev_bool_EVString = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString(this.NativeObject, m_resourceExists_CallBack_ev_bool_EVString);
						m_resourceExists_CallBack_ev_bool_ev_uint64 = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64(this.NativeObject, m_resourceExists_CallBack_ev_bool_ev_uint64);
						m__notifyResourceTouched_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceTouched_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource(this.NativeObject, m__notifyResourceTouched_CallBack_void_CResource);
						m__notifyResourceLoaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceLoaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource(this.NativeObject, m__notifyResourceLoaded_CallBack_void_CResource);
						m__notifyResourceUnloaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceUnloaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource(this.NativeObject, m__notifyResourceUnloaded_CallBack_void_CResource);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString);
						m_setVerbose_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_Function;
						GC.KeepAlive(m_setVerbose_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool(this.NativeObject, m_setVerbose_CallBack_void_ev_bool);
						m_getVerbose_CallBack_ev_bool = EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_Function;
						GC.KeepAlive(m_getVerbose_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool(this.NativeObject, m_getVerbose_CallBack_ev_bool);
						m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_addImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_addImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr(this.NativeObject, m_addImpl_CallBack_void_ResourcePtr);
						m_removeImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_removeImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr(this.NativeObject, m_removeImpl_CallBack_void_ResourcePtr);
						m_checkUsage_CallBack_void = EarthView_World_Graphic_CResourceManager_checkUsage_void_Function;
						GC.KeepAlive(m_checkUsage_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_checkUsage_void(this.NativeObject, m_checkUsage_CallBack_void);
						m_getScriptPatterns_CallBack_StringVector = EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Function;
						GC.KeepAlive(m_getScriptPatterns_CallBack_StringVector);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector(this.NativeObject, m_getScriptPatterns_CallBack_StringVector);
						m_parseScript_CallBack_void_DataStreamPtr_EVString = EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Function;
						GC.KeepAlive(m_parseScript_CallBack_void_DataStreamPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString(this.NativeObject, m_parseScript_CallBack_void_DataStreamPtr_EVString);
						m_getLoadingOrder_CallBack_Real = EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Function;
						GC.KeepAlive(m_getLoadingOrder_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real(this.NativeObject, m_getLoadingOrder_CallBack_Real);
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
				public override void SetVerbose(bool v)
				{
					base.SetVerbose_NoVirtual(v);
				}
				public override bool GetVerbose()
				{
					return base.GetVerbose_NoVirtual();
				}
				protected override EarthView.World.Graphic.Resource CreateImpl(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.CreateImpl_NoVirtual(name,handle,group,isManual,loader,createParams);
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
				public override void ParseScript(ref EarthView.World.Core.DataStreamPtr stream, string groupName)
				{
					base.ParseScript_NoVirtual(ref stream,groupName);
				}
				public override double GetLoadingOrder()
				{
					return base.GetLoadingOrder_NoVirtual();
				}
				public static TextureManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TextureManager obj = baseObj as  TextureManager;
					if (object.Equals(obj, null))
					{
						obj = new TextureManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTextureManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TextureManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TextureManager emptyInstance = new TextureManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
