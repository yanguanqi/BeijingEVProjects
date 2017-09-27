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
		namespace Spatial3D
		{
			namespace EffectManager
			{
				/// <summary>
				/// 粒子分析类
				/// </summary>
				public class ParticleAnalyse : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public ParticleAnalyse() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CParticleAnalyse",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_findParticles_void_EVString_CStringArray_CStringArray(IntPtr pNativeObject, string folder, IntPtr partilceFileNames, IntPtr particleNames);

					/// <summary>
					/// 查找粒子特效
					/// </summary>
					/// <param name="folder">文件路径</param>
					/// <param name="partilceFileNames">文件名队列</param>
					/// <param name="particleNames">特效名队列</param>
					/// <returns></returns>
					public void FindParticles(string folder, ref  EarthView.World.Core.StringArray partilceFileNames, ref  EarthView.World.Core.StringArray particleNames)
					{
						EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_findParticles_void_EVString_CStringArray_CStringArray(this.NativeObject, folder, object.Equals(partilceFileNames, null) ? IntPtr.Zero : partilceFileNames.NativeObject, object.Equals(particleNames, null) ? IntPtr.Zero : particleNames.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_analyseParticle_void_EVString_EVString_EVString_EVString_CStringArray_CStringArray_CStringArray_CStringArray(IntPtr pNativeObject, string folder, string particleFileName, string particleName, ref IntPtr materilname, IntPtr textures, IntPtr gpus, IntPtr progs, IntPtr errors);

					/// <summary>
					/// 解析粒子特效
					/// </summary>
					/// <param name="folder">文件路径</param>
					/// <param name="particleFileName">粒子文件名称</param>
					/// <param name="particleName">粒子名称</param>
					/// <param name="materilname">材质名称</param>
					/// <param name="textures">纹理</param>
					/// <param name="gpus">gpus脚本文件名</param>
					/// <param name="progs">progs脚本文件名</param>
					/// <param name="errors">错误信息</param>
					/// <returns></returns>
					public void AnalyseParticle(string folder, string particleFileName, string particleName, ref string materilname, ref  EarthView.World.Core.StringArray textures, ref  EarthView.World.Core.StringArray gpus, ref  EarthView.World.Core.StringArray progs, ref  EarthView.World.Core.StringArray errors)
					{
						IntPtr __ptrmaterilname = Marshal.StringToHGlobalAnsi(materilname);
						IntPtr pTmpmaterilname = __ptrmaterilname;
						
						EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_analyseParticle_void_EVString_EVString_EVString_EVString_CStringArray_CStringArray_CStringArray_CStringArray(this.NativeObject, folder, particleFileName, particleName, ref __ptrmaterilname,object.Equals(textures, null) ? IntPtr.Zero : textures.NativeObject, object.Equals(gpus, null) ? IntPtr.Zero : gpus.NativeObject, object.Equals(progs, null) ? IntPtr.Zero : progs.NativeObject, object.Equals(errors, null) ? IntPtr.Zero : errors.NativeObject);
						
						 Marshal.FreeHGlobal(pTmpmaterilname);
						materilname= Marshal.PtrToStringAnsi(__ptrmaterilname);
						ClassFactory.FreeString(ref __ptrmaterilname);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_getFilename_EVString_EVString(IntPtr pNativeObject, string file);

					/// <summary>
					/// 获取文件名
					/// </summary>
					/// <param name="file">文件路径</param>
					/// <returns>文件名</returns>
					public string GetFilename(string file)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_getFilename_EVString_EVString(this.NativeObject, file);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadParticleAnalyse = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::EffectManager::CParticleAnalyse", new ParticleAnalyseClassFactory());

					public ParticleAnalyse(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ParticleAnalyse FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ParticleAnalyse obj = baseObj as  ParticleAnalyse;
						if (object.Equals(obj, null))
						{
							obj = new ParticleAnalyse(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CParticleAnalyse");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ParticleAnalyseClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ParticleAnalyse emptyInstance = new ParticleAnalyse(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
