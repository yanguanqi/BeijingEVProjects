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
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				public class CompassWidgetVisibleEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>		
					public CompassWidgetVisibleEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCompassWidgetVisibleEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEvent_mvisibleMode(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEvent_mvisibleMode( IntPtr pObject, int value );

					public 					int MvisibleMode
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEvent_mvisibleMode(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEvent_mvisibleMode(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCompassWidgetVisibleEvent = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent", new CompassWidgetVisibleEventClassFactory());

					public CompassWidgetVisibleEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static CompassWidgetVisibleEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CompassWidgetVisibleEvent obj = baseObj as  CompassWidgetVisibleEvent;
						if (object.Equals(obj, null))
						{
							obj = new CompassWidgetVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCompassWidgetVisibleEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CompassWidgetVisibleEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CompassWidgetVisibleEvent emptyInstance = new CompassWidgetVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CompassWidgetVisibleEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>		
					public CompassWidgetVisibleEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCompassWidgetVisibleEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public CompassWidgetVisibleEventPtr(EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CCompassWidgetVisibleEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public CompassWidgetVisibleEventPtr(EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CCompassWidgetVisibleEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_get_CCompassWidgetVisibleEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_get_CCompassWidgetVisibleEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEvent csObj = new EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCompassWidgetVisibleEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEvent;
							csObj.BindNativeObject(__ptr, "CCompassWidgetVisibleEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorAssign_CCompassWidgetVisibleEventPtr_CCompassWidgetVisibleEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorAssign_CCompassWidgetVisibleEventPtr_CCompassWidgetVisibleEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr csObj = new EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCompassWidgetVisibleEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr;
							csObj.BindNativeObject(__ptr, "CCompassWidgetVisibleEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorAssign_CCompassWidgetVisibleEventPtr_CCompassWidgetVisibleEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorAssign_CCompassWidgetVisibleEventPtr_CCompassWidgetVisibleEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr csObj = new EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCompassWidgetVisibleEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtr;
							csObj.BindNativeObject(__ptr, "CCompassWidgetVisibleEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>		
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Guieventptr csObj = new EarthView.World.Spatial.SystemUI.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGUIEventPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guieventptr;
							csObj.BindNativeObject(__ptr, "CGUIEventPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
						EarthView.World.Spatial.SystemUI.Guieventptr csObj = new EarthView.World.Spatial.SystemUI.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGUIEventPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guieventptr;
							csObj.BindNativeObject(__ptr, "CGUIEventPtr");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCompassWidgetVisibleEventPtr = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr", new CompassWidgetVisibleEventPtrClassFactory());

					public CompassWidgetVisibleEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static CompassWidgetVisibleEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CompassWidgetVisibleEventPtr obj = baseObj as  CompassWidgetVisibleEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new CompassWidgetVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCompassWidgetVisibleEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CompassWidgetVisibleEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CompassWidgetVisibleEventPtr emptyInstance = new CompassWidgetVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 导航器控件
				/// </summary>
				public class CompassWidget : EarthView.World.Spatial3D.Controls.Widget
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <param name="camera">相机</param>
					/// <returns></returns>
					public CompassWidget(string name, EarthView.World.Spatial3D.GlobeCamera ref_camera) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						BasePtr valueref_camera = new BasePtr(ref_camera);
						list.Add("ref_camera", valueref_camera.PtrVal);
						Create("CCompassWidgetProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.CompassWidget".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CCompassWidget_setHandleEnable_void_ev_bool(IntPtr pNativeObject, byte canHandle);

					/// <summary>
					/// 是否能处理事件
					/// </summary>
					/// <param name="canHandle"></param>
					/// <returns></returns>
					public void SetHandleEnable(bool canHandle)
					{
						EarthView_World_Spatial3D_Controls_CCompassWidget_setHandleEnable_void_ev_bool(this.NativeObject, Convert.ToByte(canHandle));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 滑动滑块松开鼠标的处理
					/// </summary>
					/// <returns></returns>
					public new void AdditionMouseUp_NoVirtual()
					{
						EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_NoVirtual(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void(IntPtr pNativeObject);

					/// <summary>
					/// 滑动滑块松开鼠标的处理
					/// </summary>
					/// <returns></returns>
					public override void AdditionMouseUp()
					{
						EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_NoVirtual(IntPtr pNativeObject, IntPtr EVevent, IntPtr viewport);

					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					public new bool HandleFrameEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent EVevent, EarthView.World.Graphic.Viewport viewport)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_NoVirtual(this.NativeObject, object.Equals(EVevent, null) ? IntPtr.Zero : EVevent.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(IntPtr pNativeObject, IntPtr EVevent, IntPtr viewport);

					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					public override bool HandleFrameEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent, EarthView.World.Graphic.Viewport viewport)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(this.NativeObject, object.Equals(EVevent, null) ? IntPtr.Zero : EVevent.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理鼠标按下事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleMouseDownEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理鼠标按下事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleMouseDownEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理鼠标松开事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleMouseUpEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理鼠标松开事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleMouseUpEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理鼠标移动事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleMouseMoveEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理鼠标移动事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleMouseMoveEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr EVevent);

					/// <summary>
					/// 处理处定义事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleUserEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(EVevent, null) ? IntPtr.Zero : EVevent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr EVevent);

					/// <summary>
					/// 处理处定义事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleUserEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(EVevent, null) ? IntPtr.Zero : EVevent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCompassWidget = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCompassWidget = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCompassWidget = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadCompassWidget = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadCompassWidget = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCompassWidget = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCompassWidget = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCompassWidget = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadCompassWidget = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadCompassWidget = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadCompassWidget = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCompassWidget = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCompassWidget", new CompassWidgetClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCompassWidgetProxy", new CompassWidgetClassFactory());

					public CompassWidget(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void(IntPtr pObject, additionMouseUp_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseUpEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseDownEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(IntPtr pObject, handeMouseDbClickEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent(IntPtr pObject, handleKeyDownEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent(IntPtr pObject, handleKeyUpEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent(IntPtr pObject, handleUserEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(IntPtr pObject, handleFrameEvent_CallBack_ev_bool_CGUIEvent_CViewport pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_additionMouseUp_CallBack_void = EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Function;
							GC.KeepAlive(m_additionMouseUp_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void(this.NativeObject, m_additionMouseUp_CallBack_void);
							m_handleMouseUpEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseUpEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseUpEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent);
							m_handeMouseDbClickEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handeMouseDbClickEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(this.NativeObject, m_handeMouseDbClickEvent_CallBack_ev_bool_CGUIEvent);
							m_handleKeyDownEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleKeyDownEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleKeyDownEvent_CallBack_ev_bool_CGUIEvent);
							m_handleKeyUpEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleKeyUpEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleKeyUpEvent_CallBack_ev_bool_CGUIEvent);
							m_handleUserEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleUserEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleUserEvent_CallBack_ev_bool_CGUIEvent);
							m_handleFrameEvent_CallBack_ev_bool_CGUIEvent_CViewport = EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Function;
							GC.KeepAlive(m_handleFrameEvent_CallBack_ev_bool_CGUIEvent_CViewport);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(this.NativeObject, m_handleFrameEvent_CallBack_ev_bool_CGUIEvent_CViewport);
						}
					}
					public override bool HandeMouseDbClickEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						return base.HandeMouseDbClickEvent_NoVirtual(EVevent);
					}
					public override bool HandleKeyDownEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						return base.HandleKeyDownEvent_NoVirtual(EVevent);
					}
					public override bool HandleKeyUpEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						return base.HandleKeyUpEvent_NoVirtual(EVevent);
					}
					public static CompassWidget FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CompassWidget obj = baseObj as  CompassWidget;
						if (object.Equals(obj, null))
						{
							obj = new CompassWidget(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCompassWidget");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CompassWidgetClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CompassWidget emptyInstance = new CompassWidget(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
