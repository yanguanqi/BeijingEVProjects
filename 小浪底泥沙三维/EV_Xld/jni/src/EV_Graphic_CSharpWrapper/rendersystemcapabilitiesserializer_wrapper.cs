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
			/// 连载 RenderSystemCapabilities 到渲染性能脚本
			/// </summary>
			public class RenderSystemCapabilitiesSerializer : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public RenderSystemCapabilitiesSerializer() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CRenderSystemCapabilitiesSerializer",  null);
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
				private static extern void EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_writeScript_void_CRenderSystemCapabilities_EVString_EVString(IntPtr pNativeObject, IntPtr caps, string name, string filename);

				/// <summary>
				/// 向数据流中写入一个RenderSystemCapabilities对象
				/// </summary>
				/// <param name="caps"></param>
				/// <param name="name"></param>
				/// <param name="filename"></param>
				/// <returns></returns>
				public void WriteScript(EarthView.World.Graphic.RenderSystemCapabilities caps, string name, string filename)
				{
					EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_writeScript_void_CRenderSystemCapabilities_EVString_EVString(this.NativeObject, object.Equals(caps, null) ? IntPtr.Zero : caps.NativeObject, name, filename);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_writeString_EVString_CRenderSystemCapabilities_EVString(IntPtr pNativeObject, IntPtr caps, string name);

				public string WriteString(EarthView.World.Graphic.RenderSystemCapabilities caps, string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_writeString_EVString_CRenderSystemCapabilities_EVString(this.NativeObject, object.Equals(caps, null) ? IntPtr.Zero : caps.NativeObject, name);
					
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
				private static extern void EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_parseScript_void_DataStreamPtr(IntPtr pNativeObject, IntPtr stream);

				/// <summary>
				/// 解析RenderSystemCapabilities脚本文件，并将其添加到RenderSystemCapabilitiesManager::_addRenderSystemCapabilities中
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void ParseScript(ref EarthView.World.Core.DataStreamPtr stream)
				{
					EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_parseScript_void_DataStreamPtr(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderSystemCapabilitiesSerializer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer", new RenderSystemCapabilitiesSerializerClassFactory());

				public RenderSystemCapabilitiesSerializer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RenderSystemCapabilitiesSerializer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderSystemCapabilitiesSerializer obj = baseObj as  RenderSystemCapabilitiesSerializer;
					if (object.Equals(obj, null))
					{
						obj = new RenderSystemCapabilitiesSerializer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderSystemCapabilitiesSerializer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderSystemCapabilitiesSerializerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderSystemCapabilitiesSerializer emptyInstance = new RenderSystemCapabilitiesSerializer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
