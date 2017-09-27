/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			/// <summary>
			/// 标牌事件对象
			/// </summary>
			public class ScutcheonTextEvent : EarthView.World.Core.Event
			{
				public enum SCUTCHEONTEXTEVENTTYPE
				{
								STET_MouseDown = 8001,
								STET_MouseMove,
								STET_MouseUp,
								STET_KeyDown,
								STET_KeyUp,
								STET_Selected
				
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="type">事件类型</param>
				public ScutcheonTextEvent(ushort type) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetype = new BasePtr(type);
					list.Add("type", valuetype.PtrVal);
					Create("CScutcheonTextEvent", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEvent_getSelectedScutcheon_CScutcheonText(IntPtr pNativeObject);

				public EarthView.IndustryEngine.IndustryGraphic.ScutcheonText GetSelectedScutcheon()
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEvent_getSelectedScutcheon_CScutcheonText(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.IndustryGraphic.ScutcheonText csObj = new EarthView.IndustryEngine.IndustryGraphic.ScutcheonText(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScutcheonText");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScutcheonText;
						csObj.BindNativeObject(__ptr, "CScutcheonText");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEvent_setSelectedScutcheon_void_CScutcheonText(IntPtr pNativeObject, IntPtr scutcheon);

				public void SetSelectedScutcheon(EarthView.IndustryEngine.IndustryGraphic.ScutcheonText scutcheon)
				{
					EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEvent_setSelectedScutcheon_void_CScutcheonText(this.NativeObject, object.Equals(scutcheon, null) ? IntPtr.Zero : scutcheon.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScutcheonTextEvent = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent", new ScutcheonTextEventClassFactory());

				public ScutcheonTextEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ScutcheonTextEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScutcheonTextEvent obj = baseObj as  ScutcheonTextEvent;
					if (object.Equals(obj, null))
					{
						obj = new ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScutcheonTextEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScutcheonTextEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScutcheonTextEvent emptyInstance = new ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
