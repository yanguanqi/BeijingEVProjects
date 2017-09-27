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
			public class ScriptParser : EarthView.World.Core.AllocatedObject
			{
				public ScriptParser() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CScriptParser",  null);
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
				private static extern IntPtr EarthView_World_Graphic_CScriptParser_parse_ConcreteNodeListPtr_ScriptTokenListPtr(IntPtr pNativeObject, IntPtr tokens);

				public EarthView.World.Graphic.ConcreteNodeListPtr Parse(EarthView.World.Graphic.ScriptTokenListPtr tokens)
				{
					IntPtr __ptr = EarthView_World_Graphic_CScriptParser_parse_ConcreteNodeListPtr_ScriptTokenListPtr(this.NativeObject, object.Equals(tokens, null) ? IntPtr.Zero : tokens.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ConcreteNodeListPtr csObj = new EarthView.World.Graphic.ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ConcreteNodeListPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ConcreteNodeListPtr;
						csObj.BindNativeObject(__ptr, "ConcreteNodeListPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CScriptParser_parseChunk_ConcreteNodeListPtr_ScriptTokenListPtr(IntPtr pNativeObject, IntPtr tokens);

				public EarthView.World.Graphic.ConcreteNodeListPtr ParseChunk(EarthView.World.Graphic.ScriptTokenListPtr tokens)
				{
					IntPtr __ptr = EarthView_World_Graphic_CScriptParser_parseChunk_ConcreteNodeListPtr_ScriptTokenListPtr(this.NativeObject, object.Equals(tokens, null) ? IntPtr.Zero : tokens.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ConcreteNodeListPtr csObj = new EarthView.World.Graphic.ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ConcreteNodeListPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ConcreteNodeListPtr;
						csObj.BindNativeObject(__ptr, "ConcreteNodeListPtr");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScriptParser = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadScriptParser = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScriptParser = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadScriptParser = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadScriptParser = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadScriptParser = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScriptParser = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadScriptParser = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScriptParser = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadScriptParser = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadScriptParser = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadScriptParser = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CScriptParser", new ScriptParserClassFactory());

				public ScriptParser(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ScriptParser FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScriptParser obj = baseObj as  ScriptParser;
					if (object.Equals(obj, null))
					{
						obj = new ScriptParser(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScriptParser");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScriptParserClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScriptParser emptyInstance = new ScriptParser(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
