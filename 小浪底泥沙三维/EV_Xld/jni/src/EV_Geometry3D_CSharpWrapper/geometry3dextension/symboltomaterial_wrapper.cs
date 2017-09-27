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
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// 根CSymbol创建CMaterialPtr
			/// </summary>
			public class SymbolToMaterial : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public SymbolToMaterial() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CSymbolToMaterial",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Geometry3D_CSymbolToMaterial_colorToLineMaterial_CMaterialPtr_IColor_EVString_EVString(IntPtr color, ref IntPtr symbolName, string groupName);

				/// <summary>
				/// 创建简单的线材质
				/// </summary>
				/// <param name=""></param>
				/// <param name="groupName">资源组名称</param>
				/// <returns>材质</returns>
				public static EarthView.World.Graphic.MaterialPtr ColorToLineMaterial(EarthView.World.Spatial.Display.Icolor color, ref string symbolName, string groupName)
				{
					IntPtr __ptrsymbolName = Marshal.StringToHGlobalAnsi(symbolName);
					IntPtr pTmpsymbolName = __ptrsymbolName;
					
					IntPtr __ptr = EarthView_World_Geometry3D_CSymbolToMaterial_colorToLineMaterial_CMaterialPtr_IColor_EVString_EVString(object.Equals(color, null) ? IntPtr.Zero : color.NativeObject, ref __ptrsymbolName,groupName);
					
					 Marshal.FreeHGlobal(pTmpsymbolName);
					symbolName= Marshal.PtrToStringAnsi(__ptrsymbolName);
					ClassFactory.FreeString(ref __ptrsymbolName);
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
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_CMaterialPtr_ISymbol_EVString(IntPtr symbol, string groupName);

				/// <summary>
				/// 创建材质
				/// </summary>
				/// <param name="symbol">风格</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns>材质</returns>
				public static EarthView.World.Graphic.MaterialPtr CreateMaterial(EarthView.World.Spatial.Display.Isymbol symbol, string groupName)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_CMaterialPtr_ISymbol_EVString(object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, groupName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr_CMaterialPtr_CMaterialPtr(IntPtr symbol, string groupName, IntPtr topMaterial, IntPtr exteriorSideMaterial, IntPtr interiorSideMaterial);

				/// <summary>
				/// 创建材质，用于面扩展
				/// </summary>
				/// <param name="symbol">风格</param>
				/// <param name="groupName">资源组名称</param>
				/// <param name="topMaterial">顶面材质</param>
				/// <param name="exteriorSideMaterial">外环侧面材质</param>
				/// <param name="interiorSideMaterial">内环侧面材质</param>
				/// <returns></returns>
				public static void CreateMaterial(EarthView.World.Spatial.Display.Isymbol symbol, string groupName, ref EarthView.World.Graphic.MaterialPtr topMaterial, ref EarthView.World.Graphic.MaterialPtr exteriorSideMaterial, ref EarthView.World.Graphic.MaterialPtr interiorSideMaterial)
				{
					EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr_CMaterialPtr_CMaterialPtr(object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, groupName, object.Equals(topMaterial, null) ? IntPtr.Zero : topMaterial.NativeObject, object.Equals(exteriorSideMaterial, null) ? IntPtr.Zero : exteriorSideMaterial.NativeObject, object.Equals(interiorSideMaterial, null) ? IntPtr.Zero : interiorSideMaterial.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr_CMaterialPtr(IntPtr symbol, string groupName, IntPtr topMaterial, IntPtr exteriorSideMaterial);

				/// <summary>
				/// 创建材质，用于面扩展
				/// </summary>
				/// <param name="symbol">风格</param>
				/// <param name="groupName">资源组名称</param>
				/// <param name="topMaterial">顶面材质</param>
				/// <param name="exteriorSideMaterial">外环侧面材质</param>
				/// <returns></returns>
				public static void CreateMaterial(EarthView.World.Spatial.Display.Isymbol symbol, string groupName, ref EarthView.World.Graphic.MaterialPtr topMaterial, ref EarthView.World.Graphic.MaterialPtr exteriorSideMaterial)
				{
					EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr_CMaterialPtr(object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, groupName, object.Equals(topMaterial, null) ? IntPtr.Zero : topMaterial.NativeObject, object.Equals(exteriorSideMaterial, null) ? IntPtr.Zero : exteriorSideMaterial.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr(IntPtr symbol, string groupName, IntPtr topMaterial);

				/// <summary>
				/// 创建材质，用于面扩展
				/// </summary>
				/// <param name="symbol">风格</param>
				/// <param name="groupName">资源组名称</param>
				/// <param name="topMaterial">顶面材质</param>
				/// <returns></returns>
				public static void CreateMaterial(EarthView.World.Spatial.Display.Isymbol symbol, string groupName, ref EarthView.World.Graphic.MaterialPtr topMaterial)
				{
					EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr(object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, groupName, object.Equals(topMaterial, null) ? IntPtr.Zero : topMaterial.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Geometry3D_CSymbolToMaterial_blankLineMaterial_CMaterialPtr_EVString(string groupName);

				/// <summary>
				/// 创建简单的线材质
				/// </summary>
				/// <param name="groupName">资源组名称</param>
				/// <returns>材质</returns>
				public static EarthView.World.Graphic.MaterialPtr BlankLineMaterial(string groupName)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CSymbolToMaterial_blankLineMaterial_CMaterialPtr_EVString(groupName);
					
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
						private static bool bLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadSymbolToMaterial = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CSymbolToMaterial", new SymbolToMaterialClassFactory());

				public SymbolToMaterial(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static SymbolToMaterial FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					SymbolToMaterial obj = baseObj as  SymbolToMaterial;
					if (object.Equals(obj, null))
					{
						obj = new SymbolToMaterial(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CSymbolToMaterial");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class SymbolToMaterialClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					SymbolToMaterial emptyInstance = new SymbolToMaterial(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
