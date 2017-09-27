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
			public class ScreenScutcheonEvent : EarthView.World.Core.Event
			{
				public enum EVSCREENSCUTCHEONEVENTTYPE
				{
								STET_MouseDown = 8010,
								STET_MouseMove,
								STET_MouseUp,
								STET_KeyDown,
								STET_KeyUp,
								STET_Selected,
								STET_MouseWheel
				
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="type">事件类型</param>
				public ScreenScutcheonEvent(ushort type) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetype = new BasePtr(type);
					list.Add("type", valuetype.PtrVal);
					Create("CScreenScutcheonEvent", list);
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
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getSelectedScreenScutcheon_CScreenScutcheon(IntPtr pNativeObject);

				/// <summary>
				/// 获取已选择的屏幕标牌
				/// </summary>
				/// <returns>屏幕标牌对象 </returns>	
				public EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheon GetSelectedScreenScutcheon()
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getSelectedScreenScutcheon_CScreenScutcheon(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheon csObj = new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheon(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScreenScutcheon");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheon;
						csObj.BindNativeObject(__ptr, "CScreenScutcheon");
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_setSelectedScreenScutcheon_void_CScreenScutcheon(IntPtr pNativeObject, IntPtr scutcheon);

				/// <summary>
				/// 设置选择的屏幕标牌
				/// </summary>
				/// <param name="scutcheon">屏幕标牌对象 </param>
				public void SetSelectedScreenScutcheon(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheon scutcheon)
				{
					EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_setSelectedScreenScutcheon_void_CScreenScutcheon(this.NativeObject, object.Equals(scutcheon, null) ? IntPtr.Zero : scutcheon.NativeObject);
					
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
				private static extern int EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getX_int(IntPtr pNativeObject);

				/// <summary>
				///获取鼠标X坐标
				/// </summary>
				/// <returns>X坐标值 </returns>	
				public int GetX()
				{
					int ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getX_int(this.NativeObject);
					
					return ret;
					
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
				private static extern int EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getY_int(IntPtr pNativeObject);

				/// <summary>
				///获取鼠标Y坐标
				/// </summary>
				/// <returns>Y坐标值 </returns>	
				public int GetY()
				{
					int ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getY_int(this.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScreenScutcheonEvent = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent", new ScreenScutcheonEventClassFactory());

				public ScreenScutcheonEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ScreenScutcheonEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScreenScutcheonEvent obj = baseObj as  ScreenScutcheonEvent;
					if (object.Equals(obj, null))
					{
						obj = new ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScreenScutcheonEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScreenScutcheonEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScreenScutcheonEvent emptyInstance = new ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
