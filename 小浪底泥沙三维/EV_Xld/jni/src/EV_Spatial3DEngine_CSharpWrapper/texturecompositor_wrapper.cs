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
			public class TextureCompositor : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>	
				public TextureCompositor() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTextureCompositor",  null);
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
				private static extern void EarthView_World_Spatial3D_CTextureCompositor_thumbImage_void_EarthView_World_Core_ev_wstring_EarthView_World_Core_ev_wstring(IntPtr pNativeObject, IntPtr path, IntPtr imagefilename);

				/// <summary>
				/// 生成小纹理
				/// </summary>
				/// <param name="path">结果文件路径</param>
				/// <param name="imagefilename">结果文件名</param>
				/// <returns></returns>	
				public void ThumbImage(string path, string imagefilename)
				{
					IntPtr __ptrpath = Marshal.StringToHGlobalUni(path);
					IntPtr __ptrimagefilename = Marshal.StringToHGlobalUni(imagefilename);
					
					EarthView_World_Spatial3D_CTextureCompositor_thumbImage_void_EarthView_World_Core_ev_wstring_EarthView_World_Core_ev_wstring(this.NativeObject, __ptrpath,__ptrimagefilename);
					
					Marshal.FreeHGlobal(__ptrpath);
					Marshal.FreeHGlobal(__ptrimagefilename);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadTextureCompositor = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CTextureCompositor", new TextureCompositorClassFactory());

				public TextureCompositor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static TextureCompositor FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TextureCompositor obj = baseObj as  TextureCompositor;
					if (object.Equals(obj, null))
					{
						obj = new TextureCompositor(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTextureCompositor");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TextureCompositorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TextureCompositor emptyInstance = new TextureCompositor(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
