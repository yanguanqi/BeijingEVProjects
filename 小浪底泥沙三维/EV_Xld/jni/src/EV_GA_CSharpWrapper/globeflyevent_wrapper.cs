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
			namespace Controls
			{
				public class GlobeFlyEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyEvent", new GlobeFlyEventClassFactory());

					public GlobeFlyEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyEvent obj = baseObj as  GlobeFlyEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyEvent emptyInstance = new GlobeFlyEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_get_CGlobeFlyEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_get_CGlobeFlyEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorAssign_CGlobeFlyEventPtr_CGlobeFlyEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorAssign_CGlobeFlyEventPtr_CGlobeFlyEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorAssign_CGlobeFlyEventPtr_CGlobeFlyEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorAssign_CGlobeFlyEventPtr_CGlobeFlyEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_bind_void_CGlobeFlyEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_bind_void_CGlobeFlyEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr", new GlobeFlyEventPtrClassFactory());

					public GlobeFlyEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyEventPtr obj = baseObj as  GlobeFlyEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyEventPtr emptyInstance = new GlobeFlyEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyDataEvent : EarthView.World.Spatial3D.Controls.GlobeFlyEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyDataEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyDataEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyDataEvent_setFlyPath_void_CGlobeFlyPathPtr(IntPtr pNativeObject, IntPtr flyPath);

					/// <summary>
					/// 设置飞行线路
					/// </summary>
					/// <param name="flyPath">飞行线路</param>
					/// <returns></returns>
					public void SetFlyPath(EarthView.World.Spatial3D.GlobeFlyPathPtr flyPath)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyDataEvent_setFlyPath_void_CGlobeFlyPathPtr(this.NativeObject, object.Equals(flyPath, null) ? IntPtr.Zero : flyPath.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyDataEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent", new GlobeFlyDataEventClassFactory());

					public GlobeFlyDataEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyDataEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyDataEvent obj = baseObj as  GlobeFlyDataEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyDataEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyDataEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyDataEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyDataEvent emptyInstance = new GlobeFlyDataEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyDataEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyDataEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyDataEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyDataEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyDataEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyDataEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyDataEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyDataEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_get_CGlobeFlyDataEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyDataEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_get_CGlobeFlyDataEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyDataEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyDataEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyDataEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyDataEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyDataEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorAssign_CGlobeFlyDataEventPtr_CGlobeFlyDataEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorAssign_CGlobeFlyDataEventPtr_CGlobeFlyDataEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyDataEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyDataEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_bind_void_CGlobeFlyDataEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyDataEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_bind_void_CGlobeFlyDataEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorAssign_CGlobeFlyDataEventPtr_CGlobeFlyDataEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyDataEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorAssign_CGlobeFlyDataEventPtr_CGlobeFlyDataEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyDataEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyDataEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyDataEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyDataEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyDataEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr", new GlobeFlyDataEventPtrClassFactory());

					public GlobeFlyDataEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyDataEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyDataEventPtr obj = baseObj as  GlobeFlyDataEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyDataEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyDataEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyDataEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyDataEventPtr emptyInstance = new GlobeFlyDataEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyPlayEvent : EarthView.World.Spatial3D.Controls.GlobeFlyEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyPlayEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyPlayEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyPlayEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent", new GlobeFlyPlayEventClassFactory());

					public GlobeFlyPlayEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyPlayEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyPlayEvent obj = baseObj as  GlobeFlyPlayEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyPlayEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyPlayEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyPlayEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyPlayEvent emptyInstance = new GlobeFlyPlayEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyPlayEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyPlayEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyPlayEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyPlayEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyPlayEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyPlayEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyPlayEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyPlayEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_get_CGlobeFlyPlayEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyPlayEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_get_CGlobeFlyPlayEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyPlayEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyPlayEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyPlayEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyPlayEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyPlayEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_bind_void_CGlobeFlyPlayEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyPlayEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_bind_void_CGlobeFlyPlayEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorAssign_CGlobeFlyPlayEventPtr_CGlobeFlyPlayEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorAssign_CGlobeFlyPlayEventPtr_CGlobeFlyPlayEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyPlayEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyPlayEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorAssign_CGlobeFlyPlayEventPtr_CGlobeFlyPlayEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyPlayEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorAssign_CGlobeFlyPlayEventPtr_CGlobeFlyPlayEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyPlayEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyPlayEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyPlayEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPlayEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyPlayEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr", new GlobeFlyPlayEventPtrClassFactory());

					public GlobeFlyPlayEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyPlayEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyPlayEventPtr obj = baseObj as  GlobeFlyPlayEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyPlayEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyPlayEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyPlayEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyPlayEventPtr emptyInstance = new GlobeFlyPlayEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyPauseEvent : EarthView.World.Spatial3D.Controls.GlobeFlyEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyPauseEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyPauseEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyPauseEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent", new GlobeFlyPauseEventClassFactory());

					public GlobeFlyPauseEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyPauseEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyPauseEvent obj = baseObj as  GlobeFlyPauseEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyPauseEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyPauseEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyPauseEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyPauseEvent emptyInstance = new GlobeFlyPauseEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyPauseEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyPauseEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyPauseEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyPauseEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyPauseEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyPauseEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyPauseEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyPauseEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_get_CGlobeFlyPauseEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyPauseEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_get_CGlobeFlyPauseEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyPauseEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyPauseEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyPauseEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyPauseEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyPauseEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorAssign_CGlobeFlyPauseEventPtr_CGlobeFlyPauseEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorAssign_CGlobeFlyPauseEventPtr_CGlobeFlyPauseEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyPauseEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyPauseEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorAssign_CGlobeFlyPauseEventPtr_CGlobeFlyPauseEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyPauseEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorAssign_CGlobeFlyPauseEventPtr_CGlobeFlyPauseEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyPauseEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyPauseEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyPauseEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_bind_void_CGlobeFlyPauseEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyPauseEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_bind_void_CGlobeFlyPauseEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyPauseEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyPauseEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr", new GlobeFlyPauseEventPtrClassFactory());

					public GlobeFlyPauseEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyPauseEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyPauseEventPtr obj = baseObj as  GlobeFlyPauseEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyPauseEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyPauseEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyPauseEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyPauseEventPtr emptyInstance = new GlobeFlyPauseEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyStopEvent : EarthView.World.Spatial3D.Controls.GlobeFlyEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyStopEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyStopEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStopEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent", new GlobeFlyStopEventClassFactory());

					public GlobeFlyStopEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyStopEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyStopEvent obj = baseObj as  GlobeFlyStopEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyStopEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyStopEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyStopEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyStopEvent emptyInstance = new GlobeFlyStopEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyStopEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyStopEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyStopEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyStopEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyStopEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyStopEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyStopEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyStopEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_get_CGlobeFlyStopEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStopEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_get_CGlobeFlyStopEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyStopEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStopEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStopEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStopEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStopEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorAssign_CGlobeFlyStopEventPtr_CGlobeFlyStopEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorAssign_CGlobeFlyStopEventPtr_CGlobeFlyStopEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStopEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStopEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorAssign_CGlobeFlyStopEventPtr_CGlobeFlyStopEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyStopEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorAssign_CGlobeFlyStopEventPtr_CGlobeFlyStopEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStopEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStopEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStopEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_bind_void_CGlobeFlyStopEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyStopEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_bind_void_CGlobeFlyStopEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					///转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStopEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr", new GlobeFlyStopEventPtrClassFactory());

					public GlobeFlyStopEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyStopEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyStopEventPtr obj = baseObj as  GlobeFlyStopEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyStopEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyStopEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyStopEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyStopEventPtr emptyInstance = new GlobeFlyStopEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyStartSamplePointEvent : EarthView.World.Spatial3D.Controls.GlobeFlyEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyStartSamplePointEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyStartSamplePointEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStartSamplePointEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent", new GlobeFlyStartSamplePointEventClassFactory());

					public GlobeFlyStartSamplePointEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyStartSamplePointEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyStartSamplePointEvent obj = baseObj as  GlobeFlyStartSamplePointEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyStartSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyStartSamplePointEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyStartSamplePointEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyStartSamplePointEvent emptyInstance = new GlobeFlyStartSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyStartSamplePointEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyStartSamplePointEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyStartSamplePointEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyStartSamplePointEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyStartSamplePointEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyStartSamplePointEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyStartSamplePointEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_get_CGlobeFlyStartSamplePointEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_get_CGlobeFlyStartSamplePointEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStartSamplePointEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStartSamplePointEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorAssign_CGlobeFlyStartSamplePointEventPtr_CGlobeFlyStartSamplePointEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorAssign_CGlobeFlyStartSamplePointEventPtr_CGlobeFlyStartSamplePointEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStartSamplePointEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStartSamplePointEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorAssign_CGlobeFlyStartSamplePointEventPtr_CGlobeFlyStartSamplePointEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorAssign_CGlobeFlyStartSamplePointEventPtr_CGlobeFlyStartSamplePointEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStartSamplePointEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStartSamplePointEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_bind_void_CGlobeFlyStartSamplePointEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyStartSamplePointEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_bind_void_CGlobeFlyStartSamplePointEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStartSamplePointEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStartSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr", new GlobeFlyStartSamplePointEventPtrClassFactory());

					public GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyStartSamplePointEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyStartSamplePointEventPtr obj = baseObj as  GlobeFlyStartSamplePointEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyStartSamplePointEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyStartSamplePointEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyStartSamplePointEventPtr emptyInstance = new GlobeFlyStartSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyStopSamplePointEvent : EarthView.World.Spatial3D.Controls.GlobeFlyEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyStopSamplePointEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyStopSamplePointEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStopSamplePointEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent", new GlobeFlyStopSamplePointEventClassFactory());

					public GlobeFlyStopSamplePointEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyStopSamplePointEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyStopSamplePointEvent obj = baseObj as  GlobeFlyStopSamplePointEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyStopSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyStopSamplePointEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyStopSamplePointEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyStopSamplePointEvent emptyInstance = new GlobeFlyStopSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyStopSamplePointEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyStopSamplePointEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyStopSamplePointEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyStopSamplePointEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyStopSamplePointEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyStopSamplePointEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyStopSamplePointEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_get_CGlobeFlyStopSamplePointEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_get_CGlobeFlyStopSamplePointEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStopSamplePointEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStopSamplePointEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorAssign_CGlobeFlyStopSamplePointEventPtr_CGlobeFlyStopSamplePointEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorAssign_CGlobeFlyStopSamplePointEventPtr_CGlobeFlyStopSamplePointEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStopSamplePointEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStopSamplePointEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorAssign_CGlobeFlyStopSamplePointEventPtr_CGlobeFlyStopSamplePointEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorAssign_CGlobeFlyStopSamplePointEventPtr_CGlobeFlyStopSamplePointEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyStopSamplePointEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyStopSamplePointEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_bind_void_CGlobeFlyStopSamplePointEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyStopSamplePointEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_bind_void_CGlobeFlyStopSamplePointEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					///  转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyStopSamplePointEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyStopSamplePointEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr", new GlobeFlyStopSamplePointEventPtrClassFactory());

					public GlobeFlyStopSamplePointEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyStopSamplePointEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyStopSamplePointEventPtr obj = baseObj as  GlobeFlyStopSamplePointEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyStopSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyStopSamplePointEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyStopSamplePointEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyStopSamplePointEventPtr emptyInstance = new GlobeFlyStopSamplePointEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyShowAxisEvent : EarthView.World.Spatial3D.Controls.GlobeFlyEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyShowAxisEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyShowAxisEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEvent_mcloseWindow(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEvent_mcloseWindow( IntPtr pObject, byte value );

					public 					bool McloseWindow
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEvent_mcloseWindow(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEvent_mcloseWindow(this.NativeObject,Convert.ToByte(value));
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyShowAxisEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent", new GlobeFlyShowAxisEventClassFactory());

					public GlobeFlyShowAxisEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyShowAxisEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyShowAxisEvent obj = baseObj as  GlobeFlyShowAxisEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyShowAxisEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyShowAxisEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyShowAxisEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyShowAxisEvent emptyInstance = new GlobeFlyShowAxisEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyShowAxisEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyShowAxisEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyShowAxisEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyShowAxisEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyShowAxisEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyShowAxisEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyShowAxisEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_get_CGlobeFlyShowAxisEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_get_CGlobeFlyShowAxisEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyShowAxisEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyShowAxisEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorAssign_CGlobeFlyShowAxisEventPtr_CGlobeFlyShowAxisEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorAssign_CGlobeFlyShowAxisEventPtr_CGlobeFlyShowAxisEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyShowAxisEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyShowAxisEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorAssign_CGlobeFlyShowAxisEventPtr_CGlobeFlyShowAxisEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorAssign_CGlobeFlyShowAxisEventPtr_CGlobeFlyShowAxisEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyShowAxisEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyShowAxisEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_bind_void_CGlobeFlyShowAxisEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyShowAxisEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_bind_void_CGlobeFlyShowAxisEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyShowAxisEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyShowAxisEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr", new GlobeFlyShowAxisEventPtrClassFactory());

					public GlobeFlyShowAxisEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyShowAxisEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyShowAxisEventPtr obj = baseObj as  GlobeFlyShowAxisEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyShowAxisEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyShowAxisEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyShowAxisEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyShowAxisEventPtr emptyInstance = new GlobeFlyShowAxisEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyAdjustModeEvent : EarthView.World.Spatial3D.Controls.GlobeFlyEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyAdjustModeEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyAdjustModeEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEvent_mcloseWindow(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEvent_mcloseWindow( IntPtr pObject, byte value );

					public 					bool McloseWindow
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEvent_mcloseWindow(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEvent_mcloseWindow(this.NativeObject,Convert.ToByte(value));
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyAdjustModeEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent", new GlobeFlyAdjustModeEventClassFactory());

					public GlobeFlyAdjustModeEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyAdjustModeEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyAdjustModeEvent obj = baseObj as  GlobeFlyAdjustModeEvent;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyAdjustModeEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyAdjustModeEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyAdjustModeEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyAdjustModeEvent emptyInstance = new GlobeFlyAdjustModeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeFlyAdjustModeEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeFlyAdjustModeEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeFlyAdjustModeEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyAdjustModeEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGlobeFlyAdjustModeEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GlobeFlyAdjustModeEventPtr(EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGlobeFlyAdjustModeEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_get_CGlobeFlyAdjustModeEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_get_CGlobeFlyAdjustModeEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEvent csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyAdjustModeEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEvent;
							csObj.BindNativeObject(__ptr, "CGlobeFlyAdjustModeEvent");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorAssign_CGlobeFlyAdjustModeEventPtr_CGlobeFlyAdjustModeEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorAssign_CGlobeFlyAdjustModeEventPtr_CGlobeFlyAdjustModeEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyAdjustModeEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyAdjustModeEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorAssign_CGlobeFlyAdjustModeEventPtr_CGlobeFlyAdjustModeEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorAssign_CGlobeFlyAdjustModeEventPtr_CGlobeFlyAdjustModeEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr csObj = new EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeFlyAdjustModeEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEventPtr;
							csObj.BindNativeObject(__ptr, "CGlobeFlyAdjustModeEventPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_bind_void_CGlobeFlyAdjustModeEvent(IntPtr pNativeObject, IntPtr rep);

					public void Bind(EarthView.World.Spatial3D.Controls.GlobeFlyAdjustModeEvent rep)
					{
						EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_bind_void_CGlobeFlyAdjustModeEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeFlyAdjustModeEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeFlyAdjustModeEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr", new GlobeFlyAdjustModeEventPtrClassFactory());

					public GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeFlyAdjustModeEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeFlyAdjustModeEventPtr obj = baseObj as  GlobeFlyAdjustModeEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeFlyAdjustModeEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeFlyAdjustModeEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeFlyAdjustModeEventPtr emptyInstance = new GlobeFlyAdjustModeEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
