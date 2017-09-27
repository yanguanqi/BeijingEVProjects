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
			namespace Rtshadersystem
			{
				public class ShaderGenerator : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_initialize_ev_bool();

					public static bool Initialize()
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_initialize_ev_bool();
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_finalize_void();

					public static void Finalize()
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_finalize_void();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSingleton_CShaderGenerator();

					public static EarthView.World.Graphic.Rtshadersystem.ShaderGenerator GetSingleton()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSingleton_CShaderGenerator();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.ShaderGenerator csObj = new EarthView.World.Graphic.Rtshadersystem.ShaderGenerator(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CShaderGenerator");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ShaderGenerator;
							csObj.BindNativeObject(__ptr, "CShaderGenerator");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSingletonPtr_CShaderGenerator();

					public static EarthView.World.Graphic.Rtshadersystem.ShaderGenerator GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSingletonPtr_CShaderGenerator();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.ShaderGenerator csObj = new EarthView.World.Graphic.Rtshadersystem.ShaderGenerator(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CShaderGenerator");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ShaderGenerator;
							csObj.BindNativeObject(__ptr, "CShaderGenerator");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_addSceneManager_void_CSceneManager(IntPtr pNativeObject, IntPtr sceneMgr);

					public void AddSceneManager(EarthView.World.Graphic.SceneManager sceneMgr)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_addSceneManager_void_CSceneManager(this.NativeObject, object.Equals(sceneMgr, null) ? IntPtr.Zero : sceneMgr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeSceneManager_void_CSceneManager(IntPtr pNativeObject, IntPtr sceneMgr);

					public void RemoveSceneManager(EarthView.World.Graphic.SceneManager sceneMgr)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeSceneManager_void_CSceneManager(this.NativeObject, object.Equals(sceneMgr, null) ? IntPtr.Zero : sceneMgr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getActiveSceneManager_CSceneManager(IntPtr pNativeObject);

					public EarthView.World.Graphic.SceneManager GetActiveSceneManager()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getActiveSceneManager_CSceneManager(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.SceneManager csObj = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSceneManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneManager;
							csObj.BindNativeObject(__ptr, "CSceneManager");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setTargetLanguage_void_EVString(IntPtr pNativeObject, string shaderLanguage);

					public void SetTargetLanguage(string shaderLanguage)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setTargetLanguage_void_EVString(this.NativeObject, shaderLanguage);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getTargetLanguage_EVString(IntPtr pNativeObject);

					public string GetTargetLanguage()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getTargetLanguage_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setVertexShaderProfiles_void_EVString(IntPtr pNativeObject, string vertexShaderProfiles);

					public void SetVertexShaderProfiles(string vertexShaderProfiles)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setVertexShaderProfiles_void_EVString(this.NativeObject, vertexShaderProfiles);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderProfiles_EVString(IntPtr pNativeObject);

					public string GetVertexShaderProfiles()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderProfiles_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderProfilesList_StringVector(IntPtr pNativeObject);

					public EarthView.World.Core.StringVector GetVertexShaderProfilesList()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderProfilesList_StringVector(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setFragmentShaderProfiles_void_EVString(IntPtr pNativeObject, string fragmentShaderProfiles);

					public void SetFragmentShaderProfiles(string fragmentShaderProfiles)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setFragmentShaderProfiles_void_EVString(this.NativeObject, fragmentShaderProfiles);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderProfiles_EVString(IntPtr pNativeObject);

					public string GetFragmentShaderProfiles()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderProfiles_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderProfilesList_StringVector(IntPtr pNativeObject);

					public EarthView.World.Core.StringVector GetFragmentShaderProfilesList()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderProfilesList_StringVector(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setShaderCachePath_void_EVString(IntPtr pNativeObject, string cachePath);

					public void SetShaderCachePath(string cachePath)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setShaderCachePath_void_EVString(this.NativeObject, cachePath);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getShaderCachePath_EVString(IntPtr pNativeObject);

					public string GetShaderCachePath()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getShaderCachePath_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_flushShaderCache_void(IntPtr pNativeObject);

					public void FlushShaderCache()
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_flushShaderCache_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString(IntPtr pNativeObject, string schemeName);

					public EarthView.World.Graphic.Rtshadersystem.RenderState GetRenderState(string schemeName)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString(this.NativeObject, schemeName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.RenderState csObj = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
							csObj.BindNativeObject(__ptr, "CRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					public class RenderStateCreateOrRetrieveResult : EarthView.World.Core.BaseObject
					{
						private EarthView.World.Graphic.Rtshadersystem.RenderState firstField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_first(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_first( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.Rtshadersystem.RenderState First
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_first(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(firstField, null)){
									firstField.NativeObject = __ptr;
									return firstField;
								}
								EarthView.World.Graphic.Rtshadersystem.RenderState csObj = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CRenderState");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
									csObj.BindNativeObject(__ptr, "CRenderState");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								firstField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_first( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_second(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_second( IntPtr pObject, byte value );

						public 						bool Second
						{
							get
							{
								byte ret=Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_second(this.NativeObject);
								
								return Convert.ToBoolean(ret);
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_RenderStateCreateOrRetrieveResult_second(this.NativeObject,Convert.ToByte(value));
							}
						}

						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="fir">键</param>
						/// <param name="sec">值</param>
						/// <returns></returns>
						public RenderStateCreateOrRetrieveResult(EarthView.World.Graphic.Rtshadersystem.RenderState fir, bool sec) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valuefir = new BasePtr(fir);
							list.Add("fir", valuefir.PtrVal);
							BasePtr valuesec = new BasePtr(sec);
							list.Add("sec", valuesec.PtrVal);
							Create("RenderStateCreateOrRetrieveResult", list);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						public RenderStateCreateOrRetrieveResult() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("RenderStateCreateOrRetrieveResult",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadRenderStateCreateOrRetrieveResult = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult", new RenderStateCreateOrRetrieveResultClassFactory());

						public RenderStateCreateOrRetrieveResult(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static RenderStateCreateOrRetrieveResult FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							RenderStateCreateOrRetrieveResult obj = baseObj as  RenderStateCreateOrRetrieveResult;
							if (object.Equals(obj, null))
							{
								obj = new RenderStateCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "RenderStateCreateOrRetrieveResult");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class RenderStateCreateOrRetrieveResultClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							RenderStateCreateOrRetrieveResult emptyInstance = new RenderStateCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createOrRetrieveRenderState_RenderStateCreateOrRetrieveResult_EVString(IntPtr pNativeObject, string schemeName);

					public EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.RenderStateCreateOrRetrieveResult CreateOrRetrieveRenderState(string schemeName)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createOrRetrieveRenderState_RenderStateCreateOrRetrieveResult_EVString(this.NativeObject, schemeName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.RenderStateCreateOrRetrieveResult csObj = new EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.RenderStateCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderStateCreateOrRetrieveResult");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.RenderStateCreateOrRetrieveResult;
							csObj.BindNativeObject(__ptr, "RenderStateCreateOrRetrieveResult");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasRenderState_ev_bool_EVString(IntPtr pNativeObject, string schemeName);

					public bool HasRenderState(string schemeName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasRenderState_ev_bool_EVString(this.NativeObject, schemeName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString_EVString_ev_uint16(IntPtr pNativeObject, string schemeName, string materialName, ushort passIndex);

					public EarthView.World.Graphic.Rtshadersystem.RenderState GetRenderState(string schemeName, string materialName, ushort passIndex)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString_EVString_ev_uint16(this.NativeObject, schemeName, materialName, passIndex);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.RenderState csObj = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
							csObj.BindNativeObject(__ptr, "CRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString_EVString_EVString_ev_uint16(IntPtr pNativeObject, string schemeName, string materialName, string groupName, ushort passIndex);

					public EarthView.World.Graphic.Rtshadersystem.RenderState GetRenderState(string schemeName, string materialName, string groupName, ushort passIndex)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRenderState_CRenderState_EVString_EVString_EVString_ev_uint16(this.NativeObject, schemeName, materialName, groupName, passIndex);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.RenderState csObj = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
							csObj.BindNativeObject(__ptr, "CRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_addSubRenderStateFactory_void_CSubRenderStateFactory(IntPtr pNativeObject, IntPtr factory);

					public void AddSubRenderStateFactory(EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory factory)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_addSubRenderStateFactory_void_CSubRenderStateFactory(this.NativeObject, object.Equals(factory, null) ? IntPtr.Zero : factory.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getNumSubRenderStateFactories_ev_size_t(IntPtr pNativeObject);

					public ulong GetNumSubRenderStateFactories()
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getNumSubRenderStateFactories_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSubRenderStateFactory_CSubRenderStateFactory_ev_size_t(IntPtr pNativeObject, ulong index);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory GetSubRenderStateFactory(ulong index)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSubRenderStateFactory_CSubRenderStateFactory_ev_size_t(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderStateFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory;
							csObj.BindNativeObject(__ptr, "CSubRenderStateFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSubRenderStateFactory_CSubRenderStateFactory_EVString(IntPtr pNativeObject, string type);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory GetSubRenderStateFactory(string type)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getSubRenderStateFactory_CSubRenderStateFactory_EVString(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderStateFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory;
							csObj.BindNativeObject(__ptr, "CSubRenderStateFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeSubRenderStateFactory_void_CSubRenderStateFactory(IntPtr pNativeObject, IntPtr factory);

					public void RemoveSubRenderStateFactory(EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory factory)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeSubRenderStateFactory_void_CSubRenderStateFactory(this.NativeObject, object.Equals(factory, null) ? IntPtr.Zero : factory.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createSubRenderState_CSubRenderState_EVString(IntPtr pNativeObject, string type);

					public EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateSubRenderState(string type)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createSubRenderState_CSubRenderState_EVString(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_destroySubRenderState_void_CSubRenderState(IntPtr pNativeObject, IntPtr subRenderState);

					public void DestroySubRenderState(EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_destroySubRenderState_void_CSubRenderState(this.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasShaderBasedTechnique_ev_bool_EVString_EVString_EVString(IntPtr pNativeObject, string materialName, string srcTechniqueSchemeName, string dstTechniqueSchemeName);

					public bool HasShaderBasedTechnique(string materialName, string srcTechniqueSchemeName, string dstTechniqueSchemeName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasShaderBasedTechnique_ev_bool_EVString_EVString_EVString(this.NativeObject, materialName, srcTechniqueSchemeName, dstTechniqueSchemeName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName, string srcTechniqueSchemeName, string dstTechniqueSchemeName);

					public bool HasShaderBasedTechnique(string materialName, string groupName, string srcTechniqueSchemeName, string dstTechniqueSchemeName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_hasShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(this.NativeObject, materialName, groupName, srcTechniqueSchemeName, dstTechniqueSchemeName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_ev_bool(IntPtr pNativeObject, string materialName, string srcTechniqueSchemeName, string dstTechniqueSchemeName, byte overProgrammable);

					public bool CreateShaderBasedTechnique(string materialName, string srcTechniqueSchemeName, string dstTechniqueSchemeName, bool overProgrammable)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_ev_bool(this.NativeObject, materialName, srcTechniqueSchemeName, dstTechniqueSchemeName, Convert.ToByte(overProgrammable));
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString(IntPtr pNativeObject, string materialName, string srcTechniqueSchemeName, string dstTechniqueSchemeName);

					public bool CreateShaderBasedTechnique(string materialName, string srcTechniqueSchemeName, string dstTechniqueSchemeName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString(this.NativeObject, materialName, srcTechniqueSchemeName, dstTechniqueSchemeName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString_ev_bool(IntPtr pNativeObject, string materialName, string groupName, string srcTechniqueSchemeName, string dstTechniqueSchemeName, byte overProgrammable);

					public bool CreateShaderBasedTechnique(string materialName, string groupName, string srcTechniqueSchemeName, string dstTechniqueSchemeName, bool overProgrammable)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString_ev_bool(this.NativeObject, materialName, groupName, srcTechniqueSchemeName, dstTechniqueSchemeName, Convert.ToByte(overProgrammable));
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName, string srcTechniqueSchemeName, string dstTechniqueSchemeName);

					public bool CreateShaderBasedTechnique(string materialName, string groupName, string srcTechniqueSchemeName, string dstTechniqueSchemeName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(this.NativeObject, materialName, groupName, srcTechniqueSchemeName, dstTechniqueSchemeName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeShaderBasedTechnique_ev_bool_EVString_EVString_EVString(IntPtr pNativeObject, string materialName, string srcTechniqueSchemeName, string dstTechniqueSchemeName);

					public bool RemoveShaderBasedTechnique(string materialName, string srcTechniqueSchemeName, string dstTechniqueSchemeName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeShaderBasedTechnique_ev_bool_EVString_EVString_EVString(this.NativeObject, materialName, srcTechniqueSchemeName, dstTechniqueSchemeName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName, string srcTechniqueSchemeName, string dstTechniqueSchemeName);

					public bool RemoveShaderBasedTechnique(string materialName, string groupName, string srcTechniqueSchemeName, string dstTechniqueSchemeName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeShaderBasedTechnique_ev_bool_EVString_EVString_EVString_EVString(this.NativeObject, materialName, groupName, srcTechniqueSchemeName, dstTechniqueSchemeName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_ev_bool_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName);

					public bool RemoveAllShaderBasedTechniques(string materialName, string groupName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_ev_bool_EVString_EVString(this.NativeObject, materialName, groupName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_ev_bool_EVString(IntPtr pNativeObject, string materialName);

					public bool RemoveAllShaderBasedTechniques(string materialName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_ev_bool_EVString(this.NativeObject, materialName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_cloneShaderBasedTechniques_ev_bool_EVString_EVString_EVString_EVString(IntPtr pNativeObject, string srcMaterialName, string srcGroupName, string dstMaterialName, string dstGroupName);

					public bool CloneShaderBasedTechniques(string srcMaterialName, string srcGroupName, string dstMaterialName, string dstGroupName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_cloneShaderBasedTechniques_ev_bool_EVString_EVString_EVString_EVString(this.NativeObject, srcMaterialName, srcGroupName, dstMaterialName, dstGroupName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_void(IntPtr pNativeObject);

					public void RemoveAllShaderBasedTechniques()
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_removeAllShaderBasedTechniques_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createScheme_void_EVString(IntPtr pNativeObject, string schemeName);

					public void CreateScheme(string schemeName)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_createScheme_void_EVString(this.NativeObject, schemeName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateScheme_void_EVString(IntPtr pNativeObject, string schemeName);

					public void InvalidateScheme(string schemeName)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateScheme_void_EVString(this.NativeObject, schemeName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateScheme_ev_bool_EVString(IntPtr pNativeObject, string schemeName);

					public bool ValidateScheme(string schemeName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateScheme_ev_bool_EVString(this.NativeObject, schemeName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateMaterial_void_EVString_EVString_EVString(IntPtr pNativeObject, string schemeName, string materialName, string groupName);

					public void InvalidateMaterial(string schemeName, string materialName, string groupName)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateMaterial_void_EVString_EVString_EVString(this.NativeObject, schemeName, materialName, groupName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateMaterial_void_EVString_EVString(IntPtr pNativeObject, string schemeName, string materialName);

					public void InvalidateMaterial(string schemeName, string materialName)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_invalidateMaterial_void_EVString_EVString(this.NativeObject, schemeName, materialName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateMaterial_ev_bool_EVString_EVString_EVString(IntPtr pNativeObject, string schemeName, string materialName, string groupName);

					public bool ValidateMaterial(string schemeName, string materialName, string groupName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateMaterial_ev_bool_EVString_EVString_EVString(this.NativeObject, schemeName, materialName, groupName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateMaterial_ev_bool_EVString_EVString(IntPtr pNativeObject, string schemeName, string materialName);

					public bool ValidateMaterial(string schemeName, string materialName)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_validateMaterial_ev_bool_EVString_EVString(this.NativeObject, schemeName, materialName);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getMaterialSerializerListener_CSGMaterialSerializerListener(IntPtr pNativeObject);

					public EarthView.World.Graphic.Rtshadersystem.Sgmaterialserializerlistener GetMaterialSerializerListener()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getMaterialSerializerListener_CSGMaterialSerializerListener(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.Sgmaterialserializerlistener csObj = new EarthView.World.Graphic.Rtshadersystem.Sgmaterialserializerlistener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSGMaterialSerializerListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Sgmaterialserializerlistener;
							csObj.BindNativeObject(__ptr, "CSGMaterialSerializerListener");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderCount_ev_size_t(IntPtr pNativeObject);

					public ulong GetVertexShaderCount()
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderCount_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderCount_ev_size_t(IntPtr pNativeObject);

					public ulong GetFragmentShaderCount()
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getFragmentShaderCount_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setVertexShaderOutputsCompactPolicy_void_VSOutputCompactPolicy(IntPtr pNativeObject, EarthView.World.Graphic.Rtshadersystem.VSOUTPUTCOMPACTPOLICY policy);

					public void SetVertexShaderOutputsCompactPolicy(EarthView.World.Graphic.Rtshadersystem.VSOUTPUTCOMPACTPOLICY policy)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setVertexShaderOutputsCompactPolicy_void_VSOutputCompactPolicy(this.NativeObject, policy);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderOutputsCompactPolicy_VSOutputCompactPolicy(IntPtr pNativeObject);

					public EarthView.World.Graphic.Rtshadersystem.VSOUTPUTCOMPACTPOLICY GetVertexShaderOutputsCompactPolicy()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getVertexShaderOutputsCompactPolicy_VSOutputCompactPolicy(this.NativeObject);
						
						return (EarthView.World.Graphic.Rtshadersystem.VSOUTPUTCOMPACTPOLICY)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setCreateShaderOverProgrammablePass_void_ev_bool(IntPtr pNativeObject, byte value);

					public void SetCreateShaderOverProgrammablePass(bool value)
					{
						EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_setCreateShaderOverProgrammablePass_void_ev_bool(this.NativeObject, Convert.ToByte(value));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getCreateShaderOverProgrammablePass_ev_bool(IntPtr pNativeObject);

					public bool GetCreateShaderOverProgrammablePass()
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getCreateShaderOverProgrammablePass_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRTShaderSchemeCount_ev_size_t(IntPtr pNativeObject);

					public ulong GetRTShaderSchemeCount()
					{
						ulong ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRTShaderSchemeCount_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRTShaderScheme_EVString_ev_size_t(IntPtr pNativeObject, ulong index);

					public string GetRTShaderScheme(ulong index)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_getRTShaderScheme_EVString_ev_size_t(this.NativeObject, index);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					private static string DEFAULT_SCHEME_NAMEField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_DEFAULT_SCHEME_NAME( );

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_DEFAULT_SCHEME_NAME( string value );

					public 					static string DEFAULT_SCHEME_NAME
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_DEFAULT_SCHEME_NAME();
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							DEFAULT_SCHEME_NAMEField = value;
							Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_DEFAULT_SCHEME_NAME( value );
						}
					}

					public class Sgtechniquelist : EarthView.World.Core.BaseObject
					{
						public Sgtechniquelist() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("SGTechniqueList",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_push_back_void_SGTechnique(IntPtr pNativeObject, IntPtr t);

						public void Push_back(EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique t)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_push_back_void_SGTechnique(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_pop_back_void(IntPtr pNativeObject);

						public void Pop_back()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_pop_back_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_front_SGTechnique(IntPtr pNativeObject);

						public EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique Front()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_front_SGTechnique(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique csObj = new EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "SGTechnique");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique;
								csObj.BindNativeObject(__ptr, "SGTechnique");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_back_SGTechnique(IntPtr pNativeObject);

						public EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique Back()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_back_SGTechnique(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique csObj = new EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "SGTechnique");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique;
								csObj.BindNativeObject(__ptr, "SGTechnique");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_insert_void_ev_uint32_SGTechnique(IntPtr pNativeObject, uint pos, ref IntPtr t);

						public void Insert(uint pos, EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique t)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_insert_void_ev_uint32_SGTechnique(this.NativeObject, pos, ref t.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

						public void Remove(ulong pos)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_remove_void_ev_size_t(this.NativeObject, pos);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_empty_ev_bool(IntPtr pNativeObject);

						public bool Empty()
						{
							byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_empty_ev_bool(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_at_SGTechnique_ev_size_t(IntPtr pNativeObject, ulong n);

						public EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique At(ulong n)
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_at_SGTechnique_ev_size_t(this.NativeObject, n);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique csObj = new EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "SGTechnique");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique;
								csObj.BindNativeObject(__ptr, "SGTechnique");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern ulong EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_size_ev_size_t(IntPtr pNativeObject);

						public ulong Size()
						{
							ulong ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_size_ev_size_t(this.NativeObject);
							
							return ret;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

						public void Resize(ulong newSize)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_resize_void_ev_size_t(this.NativeObject, newSize);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

						public void Reserve(ulong count)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_reserve_void_ev_size_t(this.NativeObject, count);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_clear_void(IntPtr pNativeObject);

						public void Clear()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechniqueList_clear_void(this.NativeObject);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgtechniquelist = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList", new SgtechniquelistClassFactory());

						public Sgtechniquelist(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static Sgtechniquelist FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Sgtechniquelist obj = baseObj as  Sgtechniquelist;
							if (object.Equals(obj, null))
							{
								obj = new Sgtechniquelist(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SGTechniqueList");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SgtechniquelistClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Sgtechniquelist emptyInstance = new Sgtechniquelist(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class Sgpass : EarthView.World.Core.AllocatedObject
					{
						public Sgpass(EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique parent, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueparent = new BasePtr(parent);
							list.Add("parent", valueparent.PtrVal);
							BasePtr valuesrcPass = new BasePtr(srcPass);
							list.Add("srcPass", valuesrcPass.PtrVal);
							BasePtr valuedstPass = new BasePtr(dstPass);
							list.Add("dstPass", valuedstPass.PtrVal);
							Create("SGPass", list);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_buildTargetRenderState_void(IntPtr pNativeObject);

						public void BuildTargetRenderState()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_buildTargetRenderState_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_acquirePrograms_void(IntPtr pNativeObject);

						public void AcquirePrograms()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_acquirePrograms_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_releasePrograms_void(IntPtr pNativeObject);

						public void ReleasePrograms()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_releasePrograms_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_notifyRenderSingleObject_void_CRenderable_CAutoParamDataSource_LightList_ev_bool(IntPtr pNativeObject, IntPtr rend, IntPtr source, IntPtr pLightList, byte suppressRenderStateChanges);

						public void NotifyRenderSingleObject(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_notifyRenderSingleObject_void_CRenderable_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject, Convert.ToByte(suppressRenderStateChanges));
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getSrcPass_CPass(IntPtr pNativeObject);

						public EarthView.World.Graphic.Pass GetSrcPass()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getSrcPass_CPass(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
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


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getDstPass_CPass(IntPtr pNativeObject);

						public EarthView.World.Graphic.Pass GetDstPass()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getDstPass_CPass(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
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


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getCustomFFPSubState_CSubRenderState_ev_int32(IntPtr pNativeObject, int subStateOrder);

						public EarthView.World.Graphic.Rtshadersystem.SubRenderState GetCustomFFPSubState(int subStateOrder)
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getCustomFFPSubState_CSubRenderState_ev_int32(this.NativeObject, subStateOrder);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
								csObj.BindNativeObject(__ptr, "CSubRenderState");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getCustomRenderState_CRenderState(IntPtr pNativeObject);

						public EarthView.World.Graphic.Rtshadersystem.RenderState GetCustomRenderState()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_getCustomRenderState_CRenderState(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.RenderState csObj = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CRenderState");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
								csObj.BindNativeObject(__ptr, "CRenderState");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_setCustomRenderState_void_CRenderState(IntPtr pNativeObject, IntPtr customRenderState);

						public void SetCustomRenderState(EarthView.World.Graphic.Rtshadersystem.RenderState customRenderState)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_setCustomRenderState_void_CRenderState(this.NativeObject, object.Equals(customRenderState, null) ? IntPtr.Zero : customRenderState.NativeObject);
							
						}

						private static string UserKeyField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_UserKey( );

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_UserKey( string value );

						public 						static string UserKey
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_UserKey();
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								UserKeyField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGPass_UserKey( value );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSgpass = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgpass = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSgpass = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadSgpass = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadSgpass = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgpass = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSgpass = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgpass = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadSgpass = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadSgpass = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadSgpass = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgpass = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass", new SgpassClassFactory());

						public Sgpass(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static Sgpass FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Sgpass obj = baseObj as  Sgpass;
							if (object.Equals(obj, null))
							{
								obj = new Sgpass(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SGPass");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SgpassClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Sgpass emptyInstance = new Sgpass(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class Sgtechnique : EarthView.World.Core.AllocatedObject
					{
						public Sgtechnique(EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgmaterial parent, EarthView.World.Graphic.Technique srcTechnique, string dstTechniqueSchemeName) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueparent = new BasePtr(parent);
							list.Add("parent", valueparent.PtrVal);
							BasePtr valuesrcTechnique = new BasePtr(srcTechnique);
							list.Add("srcTechnique", valuesrcTechnique.PtrVal);
							BasePtr valuedstTechniqueSchemeName = new BasePtr(dstTechniqueSchemeName);
							list.Add("dstTechniqueSchemeName", valuedstTechniqueSchemeName.PtrVal);
							Create("SGTechnique", list);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getParent_SGMaterial(IntPtr pNativeObject);

						public EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgmaterial GetParent()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getParent_SGMaterial(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgmaterial csObj = new EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgmaterial(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "SGMaterial");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgmaterial;
								csObj.BindNativeObject(__ptr, "SGMaterial");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getSourceTechnique_CTechnique(IntPtr pNativeObject);

						public EarthView.World.Graphic.Technique GetSourceTechnique()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getSourceTechnique_CTechnique(this.NativeObject);
							
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
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getDestinationTechnique_CTechnique(IntPtr pNativeObject);

						public EarthView.World.Graphic.Technique GetDestinationTechnique()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getDestinationTechnique_CTechnique(this.NativeObject);
							
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
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getDestinationTechniqueSchemeName_EVString(IntPtr pNativeObject);

						public string GetDestinationTechniqueSchemeName()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getDestinationTechniqueSchemeName_EVString(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_buildTargetRenderState_void(IntPtr pNativeObject);

						public void BuildTargetRenderState()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_buildTargetRenderState_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_acquirePrograms_void(IntPtr pNativeObject);

						public void AcquirePrograms()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_acquirePrograms_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_releasePrograms_void(IntPtr pNativeObject);

						public void ReleasePrograms()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_releasePrograms_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_setBuildDestinationTechnique_void_ev_bool(IntPtr pNativeObject, byte buildTechnique);

						public void SetBuildDestinationTechnique(bool buildTechnique)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_setBuildDestinationTechnique_void_ev_bool(this.NativeObject, Convert.ToByte(buildTechnique));
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getBuildDestinationTechnique_ev_bool(IntPtr pNativeObject);

						public bool GetBuildDestinationTechnique()
						{
							byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getBuildDestinationTechnique_ev_bool(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getRenderState_CRenderState_ev_uint16(IntPtr pNativeObject, ushort passIndex);

						public EarthView.World.Graphic.Rtshadersystem.RenderState GetRenderState(ushort passIndex)
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_getRenderState_CRenderState_ev_uint16(this.NativeObject, passIndex);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.RenderState csObj = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CRenderState");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
								csObj.BindNativeObject(__ptr, "CRenderState");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_hasRenderState_ev_bool_ev_uint16(IntPtr pNativeObject, ushort passIndex);

						public bool HasRenderState(ushort passIndex)
						{
							byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_hasRenderState_ev_bool_ev_uint16(this.NativeObject, passIndex);
							
							return Convert.ToBoolean(ret);
							
						}

						private static string UserKeyField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_UserKey( );

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_UserKey( string value );

						public 						static string UserKey
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_UserKey();
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								UserKeyField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGTechnique_UserKey( value );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgtechnique = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique", new SgtechniqueClassFactory());

						public Sgtechnique(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static Sgtechnique FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Sgtechnique obj = baseObj as  Sgtechnique;
							if (object.Equals(obj, null))
							{
								obj = new Sgtechnique(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SGTechnique");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SgtechniqueClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Sgtechnique emptyInstance = new Sgtechnique(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class Sgmaterial : EarthView.World.Core.AllocatedObject
					{
						public Sgmaterial(string materialName, string groupName) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valuematerialName = new BasePtr(materialName);
							list.Add("materialName", valuematerialName.PtrVal);
							BasePtr valuegroupName = new BasePtr(groupName);
							list.Add("groupName", valuegroupName.PtrVal);
							Create("SGMaterial", list);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getMaterialName_EVString(IntPtr pNativeObject);

						public string GetMaterialName()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getMaterialName_EVString(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getGroupName_EVString(IntPtr pNativeObject);

						public string GetGroupName()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getGroupName_EVString(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getTechniqueList_SGTechniqueList(IntPtr pNativeObject);

						public EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechniquelist GetTechniqueList()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGMaterial_getTechniqueList_SGTechniqueList(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechniquelist csObj = new EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechniquelist(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "SGTechniqueList");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechniquelist;
								csObj.BindNativeObject(__ptr, "SGTechniqueList");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgmaterial = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial", new SgmaterialClassFactory());

						public Sgmaterial(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static Sgmaterial FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Sgmaterial obj = baseObj as  Sgmaterial;
							if (object.Equals(obj, null))
							{
								obj = new Sgmaterial(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SGMaterial");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SgmaterialClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Sgmaterial emptyInstance = new Sgmaterial(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class Sgscheme : EarthView.World.Core.AllocatedObject
					{
						public Sgscheme(string schemeName) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueschemeName = new BasePtr(schemeName);
							list.Add("schemeName", valueschemeName.PtrVal);
							Create("SGScheme", list);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_empty_ev_bool(IntPtr pNativeObject);

						public bool Empty()
						{
							byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_empty_ev_bool(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void(IntPtr pNativeObject);

						public void Invalidate()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_void(IntPtr pNativeObject);

						public void Validate()
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName);

						public void Invalidate(string materialName, string groupName)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void_EVString_EVString(this.NativeObject, materialName, groupName);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void_EVString(IntPtr pNativeObject, string materialName);

						public void Invalidate(string materialName)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_invalidate_void_EVString(this.NativeObject, materialName);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_ev_bool_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName);

						public bool Validate(string materialName, string groupName)
						{
							byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_ev_bool_EVString_EVString(this.NativeObject, materialName, groupName);
							
							return Convert.ToBoolean(ret);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_ev_bool_EVString(IntPtr pNativeObject, string materialName);

						public bool Validate(string materialName)
						{
							byte ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_validate_ev_bool_EVString(this.NativeObject, materialName);
							
							return Convert.ToBoolean(ret);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_addTechniqueEntry_void_SGTechnique(IntPtr pNativeObject, IntPtr techEntry);

						public void AddTechniqueEntry(EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique techEntry)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_addTechniqueEntry_void_SGTechnique(this.NativeObject, object.Equals(techEntry, null) ? IntPtr.Zero : techEntry.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_removeTechniqueEntry_void_SGTechnique(IntPtr pNativeObject, IntPtr techEntry);

						public void RemoveTechniqueEntry(EarthView.World.Graphic.Rtshadersystem.ShaderGenerator.Sgtechnique techEntry)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_removeTechniqueEntry_void_SGTechnique(this.NativeObject, object.Equals(techEntry, null) ? IntPtr.Zero : techEntry.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_getRenderState_CRenderState(IntPtr pNativeObject);

						public EarthView.World.Graphic.Rtshadersystem.RenderState GetRenderState()
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_getRenderState_CRenderState(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.RenderState csObj = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CRenderState");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
								csObj.BindNativeObject(__ptr, "CRenderState");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_getRenderState_CRenderState_EVString_EVString_ev_uint16(IntPtr pNativeObject, string materialName, string groupName, ushort passIndex);

						public EarthView.World.Graphic.Rtshadersystem.RenderState GetRenderState(string materialName, string groupName, ushort passIndex)
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScheme_getRenderState_CRenderState_EVString_EVString_ev_uint16(this.NativeObject, materialName, groupName, passIndex);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.Rtshadersystem.RenderState csObj = new EarthView.World.Graphic.Rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CRenderState");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.RenderState;
								csObj.BindNativeObject(__ptr, "CRenderState");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSgscheme = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadSgscheme = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadSgscheme = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgscheme = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme", new SgschemeClassFactory());

						public Sgscheme(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static Sgscheme FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Sgscheme obj = baseObj as  Sgscheme;
							if (object.Equals(obj, null))
							{
								obj = new Sgscheme(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SGScheme");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SgschemeClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Sgscheme emptyInstance = new Sgscheme(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class Sgrenderobjectlistener : EarthView.World.Graphic.RenderObjectListener
					{
						public Sgrenderobjectlistener(EarthView.World.Graphic.Rtshadersystem.ShaderGenerator owner) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueowner = new BasePtr(owner);
							list.Add("owner", valueowner.PtrVal);
							Create("SGRenderObjectListenerProxy", list);
							if (!"EarthView.World.Graphic.Rtshadersystem.ShaderGenerator+Sgrenderobjectlistener".Equals(((Object)this).GetType().ToString()))
							{
								this.SetCustomExtend(true);
							}
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
						protected delegate void notifyRenderSingleObject_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, bool suppressRenderStateChanges);

						protected notifyRenderSingleObject_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool m_notifyRenderSingleObject_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool;

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, byte suppressRenderStateChanges);

						public virtual void NotifyRenderSingleObject_NoVirtual(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject, Convert.ToByte(suppressRenderStateChanges));
							
						}

						protected  void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Function(IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, bool suppressRenderStateChanges)
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
							
							NotifyRenderSingleObject(csobj_rend, csobj_pass, csobj_source, csobj_pLightList, suppressRenderStateChanges);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList, byte suppressRenderStateChanges);

						public virtual void NotifyRenderSingleObject(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject, Convert.ToByte(suppressRenderStateChanges));
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgrenderobjectlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener", new SgrenderobjectlistenerClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListenerProxy", new SgrenderobjectlistenerClassFactory());

						public Sgrenderobjectlistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr pObject, notifyRenderSingleObject_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr pObject, notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(IntPtr pObject, notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_notifyRenderSingleObject_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Function;
								GC.KeepAlive(m_notifyRenderSingleObject_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObject_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, m_notifyRenderSingleObject_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
								m_notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool = EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Function;
								GC.KeepAlive(m_notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, m_notifyRenderSingleObjectStarted_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
								m_notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool = EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Function;
								GC.KeepAlive(m_notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.NativeObject, m_notifyRenderSingleObjectEnd_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool);
							}
						}
						public override void NotifyRenderSingleObjectStarted(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
						{
							base.NotifyRenderSingleObjectStarted_NoVirtual(rend,pass,source,pLightList,suppressRenderStateChanges);
						}
						public override void NotifyRenderSingleObjectEnd(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList, bool suppressRenderStateChanges)
						{
							base.NotifyRenderSingleObjectEnd_NoVirtual(rend,pass,source,pLightList,suppressRenderStateChanges);
						}
						public static Sgrenderobjectlistener FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Sgrenderobjectlistener obj = baseObj as  Sgrenderobjectlistener;
							if (object.Equals(obj, null))
							{
								obj = new Sgrenderobjectlistener(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SGRenderObjectListener");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SgrenderobjectlistenerClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Sgrenderobjectlistener emptyInstance = new Sgrenderobjectlistener(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class Sgscenemanagerlistener : EarthView.World.Graphic.SceneManager.SceneManagerListener
					{
						public Sgscenemanagerlistener(EarthView.World.Graphic.Rtshadersystem.ShaderGenerator owner) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueowner = new BasePtr(owner);
							list.Add("owner", valueowner.PtrVal);
							Create("SGSceneManagerListenerProxy", list);
							if (!"EarthView.World.Graphic.Rtshadersystem.ShaderGenerator+Sgscenemanagerlistener".Equals(((Object)this).GetType().ToString()))
							{
								this.SetCustomExtend(true);
							}
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(IntPtr pNativeObject, IntPtr source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, IntPtr v);

						public new void PreFindVisibleObjects_NoVirtual(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, irs, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pNativeObject, IntPtr source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, IntPtr v);

						public override void PreFindVisibleObjects(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, irs, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(IntPtr pNativeObject, IntPtr source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, IntPtr v);

						public new void PostFindVisibleObjects_NoVirtual(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, irs, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pNativeObject, IntPtr source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, IntPtr v);

						public override void PostFindVisibleObjects(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, irs, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong numberOfShadowTextures);

						public new void ShadowTexturesUpdated_NoVirtual(ulong numberOfShadowTextures)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_NoVirtual(this.NativeObject, numberOfShadowTextures);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(IntPtr pNativeObject, ulong numberOfShadowTextures);

						public override void ShadowTexturesUpdated(ulong numberOfShadowTextures)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(this.NativeObject, numberOfShadowTextures);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr light, IntPtr camera, ulong iteration);

						public new void ShadowTextureCasterPreViewProj_NoVirtual(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera camera, ulong iteration)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_NoVirtual(this.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject, iteration);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(IntPtr pNativeObject, IntPtr light, IntPtr camera, ulong iteration);

						public override void ShadowTextureCasterPreViewProj(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera camera, ulong iteration)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(this.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject, iteration);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_NoVirtual(IntPtr pNativeObject, IntPtr light, IntPtr frustum);

						public new void ShadowTextureReceiverPreViewProj_NoVirtual(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Frustum frustum)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_NoVirtual(this.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(frustum, null) ? IntPtr.Zero : frustum.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(IntPtr pNativeObject, IntPtr light, IntPtr frustum);

						public override void ShadowTextureReceiverPreViewProj(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Frustum frustum)
						{
							EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(this.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(frustum, null) ? IntPtr.Zero : frustum.NativeObject);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgscenemanagerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener", new SgscenemanagerlistenerClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListenerProxy", new SgscenemanagerlistenerClassFactory());

						public Sgscenemanagerlistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pObject, preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pObject, postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pObject, preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pObject, postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(IntPtr pObject, shadowTexturesUpdated_CallBack_void_ev_size_t pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(IntPtr pObject, shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(IntPtr pObject, shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList(IntPtr pObject, sortLightsAffectingFrustum_CallBack_ev_bool_LightList pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager(IntPtr pObject, sceneManagerDestroyed_CallBack_void_CSceneManager pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Function;
								GC.KeepAlive(m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
								m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Function;
								GC.KeepAlive(m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
								m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Function;
								GC.KeepAlive(m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
								m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Function;
								GC.KeepAlive(m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
								m_shadowTexturesUpdated_CallBack_void_ev_size_t = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Function;
								GC.KeepAlive(m_shadowTexturesUpdated_CallBack_void_ev_size_t);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(this.NativeObject, m_shadowTexturesUpdated_CallBack_void_ev_size_t);
								m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Function;
								GC.KeepAlive(m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(this.NativeObject, m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t);
								m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Function;
								GC.KeepAlive(m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(this.NativeObject, m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum);
								m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Function;
								GC.KeepAlive(m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList(this.NativeObject, m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList);
								m_sceneManagerDestroyed_CallBack_void_CSceneManager = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Function;
								GC.KeepAlive(m_sceneManagerDestroyed_CallBack_void_CSceneManager);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGSceneManagerListener_sceneManagerDestroyed_void_CSceneManager(this.NativeObject, m_sceneManagerDestroyed_CallBack_void_CSceneManager);
							}
						}
						public override void PreUpdateSceneGraph(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
						{
							base.PreUpdateSceneGraph_NoVirtual(source,camera);
						}
						public override void PostUpdateSceneGraph(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
						{
							base.PostUpdateSceneGraph_NoVirtual(source,camera);
						}
						public override bool SortLightsAffectingFrustum(ref EarthView.World.Graphic.LightList lightList)
						{
							return base.SortLightsAffectingFrustum_NoVirtual(ref lightList);
						}
						public override void SceneManagerDestroyed(EarthView.World.Graphic.SceneManager source)
						{
							base.SceneManagerDestroyed_NoVirtual(source);
						}
						public static Sgscenemanagerlistener FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Sgscenemanagerlistener obj = baseObj as  Sgscenemanagerlistener;
							if (object.Equals(obj, null))
							{
								obj = new Sgscenemanagerlistener(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SGSceneManagerListener");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SgscenemanagerlistenerClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Sgscenemanagerlistener emptyInstance = new Sgscenemanagerlistener(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class Sgscripttranslatormanager : EarthView.World.Graphic.ScriptTranslatorManager
					{
						public Sgscripttranslatormanager(EarthView.World.Graphic.Rtshadersystem.ShaderGenerator owner) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueowner = new BasePtr(owner);
							list.Add("owner", valueowner.PtrVal);
							Create("SGScriptTranslatorManagerProxy", list);
							if (!"EarthView.World.Graphic.Rtshadersystem.ShaderGenerator+Sgscripttranslatormanager".Equals(((Object)this).GetType().ToString()))
							{
								this.SetCustomExtend(true);
							}
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern ulong EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(IntPtr pNativeObject);

						public new ulong GetNumTranslators_NoVirtual()
						{
							ulong ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(this.NativeObject);
							
							return ret;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern ulong EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t(IntPtr pNativeObject);

						public override ulong GetNumTranslators()
						{
							ulong ret=EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t(this.NativeObject);
							
							return ret;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr node);

						public new EarthView.World.Graphic.ScriptTranslator GetTranslator_NoVirtual(EarthView.World.Graphic.AbstractNodePtr node)
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CScriptTranslator");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
								csObj.BindNativeObject(__ptr, "CScriptTranslator");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(IntPtr pNativeObject, IntPtr node);

						public override EarthView.World.Graphic.ScriptTranslator GetTranslator(EarthView.World.Graphic.AbstractNodePtr node)
						{
							IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CScriptTranslator");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
								csObj.BindNativeObject(__ptr, "CScriptTranslator");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadSgscripttranslatormanager = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager", new SgscripttranslatormanagerClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManagerProxy", new SgscripttranslatormanagerClassFactory());

						public Sgscripttranslatormanager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t(IntPtr pObject, getNumTranslators_CallBack_ev_size_t pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(IntPtr pObject, getTranslator_CallBack_CScriptTranslator_AbstractNodePtr pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_getNumTranslators_CallBack_ev_size_t = EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Function;
								GC.KeepAlive(m_getNumTranslators_CallBack_ev_size_t);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getNumTranslators_ev_size_t(this.NativeObject, m_getNumTranslators_CallBack_ev_size_t);
								m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Function;
								GC.KeepAlive(m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr);
								EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CShaderGenerator_SGScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(this.NativeObject, m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr);
							}
						}
						public static Sgscripttranslatormanager FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Sgscripttranslatormanager obj = baseObj as  Sgscripttranslatormanager;
							if (object.Equals(obj, null))
							{
								obj = new Sgscripttranslatormanager(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SGScriptTranslatorManager");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SgscripttranslatormanagerClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Sgscripttranslatormanager emptyInstance = new Sgscripttranslatormanager(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadShaderGenerator = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator", new ShaderGeneratorClassFactory());

					public ShaderGenerator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ShaderGenerator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ShaderGenerator obj = baseObj as  ShaderGenerator;
						if (object.Equals(obj, null))
						{
							obj = new ShaderGenerator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CShaderGenerator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ShaderGeneratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ShaderGenerator emptyInstance = new ShaderGenerator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
