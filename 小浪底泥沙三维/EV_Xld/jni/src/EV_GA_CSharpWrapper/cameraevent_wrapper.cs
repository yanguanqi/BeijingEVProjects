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
				public class RoamCameraEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public RoamCameraEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRoamCameraEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="originX">动画的XML节点</param>
					/// <param name="originY">动画的XML节点</param>
					/// <param name="lastX">动画的XML节点</param>
					/// <param name="lastY">动画的XML节点</param>
					/// <returns></returns>
					public RoamCameraEvent(int originX, int originY, int lastX, int lastY) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueoriginX = new BasePtr(originX);
						list.Add("originX", valueoriginX.PtrVal);
						BasePtr valueoriginY = new BasePtr(originY);
						list.Add("originY", valueoriginY.PtrVal);
						BasePtr valuelastX = new BasePtr(lastX);
						list.Add("lastX", valuelastX.PtrVal);
						BasePtr valuelastY = new BasePtr(lastY);
						list.Add("lastY", valuelastY.PtrVal);
						Create("CRoamCameraEvent", list);
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginX(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginX( IntPtr pObject, int value );

					public 					int MoriginX
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginX(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginX(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginY(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginY( IntPtr pObject, int value );

					public 					int MoriginY
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginY(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_moriginY(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastX(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastX( IntPtr pObject, int value );

					public 					int MlastX
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastX(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastX(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastY(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastY( IntPtr pObject, int value );

					public 					int MlastY
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastY(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRoamCameraEvent_mlastY(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRoamCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRoamCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRoamCameraEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadRoamCameraEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadRoamCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRoamCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRoamCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRoamCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadRoamCameraEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadRoamCameraEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadRoamCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRoamCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CRoamCameraEvent", new RoamCameraEventClassFactory());

					public RoamCameraEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RoamCameraEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RoamCameraEvent obj = baseObj as  RoamCameraEvent;
						if (object.Equals(obj, null))
						{
							obj = new RoamCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRoamCameraEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RoamCameraEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RoamCameraEvent emptyInstance = new RoamCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class RoamCameraEventPtr : EarthView.World.Core.BaseObject
				{
					public RoamCameraEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRoamCameraEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public RoamCameraEventPtr(EarthView.World.Spatial3D.Controls.RoamCameraEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CRoamCameraEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public RoamCameraEventPtr(EarthView.World.Spatial3D.Controls.RoamCameraEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CRoamCameraEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_get_CRoamCameraEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.RoamCameraEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_get_CRoamCameraEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.RoamCameraEvent csObj = new EarthView.World.Spatial3D.Controls.RoamCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRoamCameraEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.RoamCameraEvent;
							csObj.BindNativeObject(__ptr, "CRoamCameraEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRoamCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRoamCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadRoamCameraEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadRoamCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRoamCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr", new RoamCameraEventPtrClassFactory());

					public RoamCameraEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RoamCameraEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RoamCameraEventPtr obj = baseObj as  RoamCameraEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new RoamCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRoamCameraEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RoamCameraEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RoamCameraEventPtr emptyInstance = new RoamCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ZoomCameraEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public ZoomCameraEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CZoomCameraEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="x">缩放点的Ｘ坐标</param>
					/// <param name="y">缩放点的Y坐标</param>
					/// <param name="zoomRatio">缩放比例</param>
					/// <returns></returns>
					public ZoomCameraEvent(int x, int y, double zoomRatio) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuex = new BasePtr(x);
						list.Add("x", valuex.PtrVal);
						BasePtr valuey = new BasePtr(y);
						list.Add("y", valuey.PtrVal);
						BasePtr valuezoomRatio = new BasePtr(zoomRatio);
						list.Add("zoomRatio", valuezoomRatio.PtrVal);
						Create("CZoomCameraEvent", list);
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mx(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mx( IntPtr pObject, int value );

					public 					int Mx
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mx(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mx(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_my(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_my( IntPtr pObject, int value );

					public 					int My
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_my(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_my(this.NativeObject,value);
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mzoomRatio(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mzoomRatio( IntPtr pObject, double value );

					public 					double MzoomRatio
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mzoomRatio(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CZoomCameraEvent_mzoomRatio(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadZoomCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadZoomCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadZoomCameraEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadZoomCameraEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadZoomCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadZoomCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadZoomCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadZoomCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadZoomCameraEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadZoomCameraEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadZoomCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadZoomCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CZoomCameraEvent", new ZoomCameraEventClassFactory());

					public ZoomCameraEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ZoomCameraEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ZoomCameraEvent obj = baseObj as  ZoomCameraEvent;
						if (object.Equals(obj, null))
						{
							obj = new ZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CZoomCameraEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ZoomCameraEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ZoomCameraEvent emptyInstance = new ZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ZoomCameraEventPtr : EarthView.World.Core.BaseObject
				{
					public ZoomCameraEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CZoomCameraEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public ZoomCameraEventPtr(EarthView.World.Spatial3D.Controls.ZoomCameraEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CZoomCameraEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public ZoomCameraEventPtr(EarthView.World.Spatial3D.Controls.ZoomCameraEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CZoomCameraEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_get_CZoomCameraEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.ZoomCameraEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_get_CZoomCameraEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.ZoomCameraEvent csObj = new EarthView.World.Spatial3D.Controls.ZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CZoomCameraEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.ZoomCameraEvent;
							csObj.BindNativeObject(__ptr, "CZoomCameraEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CZoomCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadZoomCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadZoomCameraEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadZoomCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr", new ZoomCameraEventPtrClassFactory());

					public ZoomCameraEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ZoomCameraEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ZoomCameraEventPtr obj = baseObj as  ZoomCameraEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new ZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CZoomCameraEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ZoomCameraEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ZoomCameraEventPtr emptyInstance = new ZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class RotationCameraEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public RotationCameraEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRotationCameraEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="x">缩放点的Ｘ坐标</param>
					/// <param name="y">缩放点的Y坐标</param>
					/// <param name="rotationDegree">旋转的角度</param>
					/// <returns></returns>
					public RotationCameraEvent(int x, int y, double rotationDegree) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuex = new BasePtr(x);
						list.Add("x", valuex.PtrVal);
						BasePtr valuey = new BasePtr(y);
						list.Add("y", valuey.PtrVal);
						BasePtr valuerotationDegree = new BasePtr(rotationDegree);
						list.Add("rotationDegree", valuerotationDegree.PtrVal);
						Create("CRotationCameraEvent", list);
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mx(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mx( IntPtr pObject, int value );

					public 					int Mx
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mx(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mx(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_my(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_my( IntPtr pObject, int value );

					public 					int My
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_my(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_my(this.NativeObject,value);
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mrotationDegree(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mrotationDegree( IntPtr pObject, double value );

					public 					double MrotationDegree
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mrotationDegree(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRotationCameraEvent_mrotationDegree(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRotationCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRotationCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRotationCameraEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadRotationCameraEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadRotationCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRotationCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRotationCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRotationCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadRotationCameraEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadRotationCameraEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadRotationCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRotationCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CRotationCameraEvent", new RotationCameraEventClassFactory());

					public RotationCameraEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RotationCameraEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RotationCameraEvent obj = baseObj as  RotationCameraEvent;
						if (object.Equals(obj, null))
						{
							obj = new RotationCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRotationCameraEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RotationCameraEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RotationCameraEvent emptyInstance = new RotationCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class RotationCameraEventPtr : EarthView.World.Core.BaseObject
				{
					public RotationCameraEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRotationCameraEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public RotationCameraEventPtr(EarthView.World.Spatial3D.Controls.RotationCameraEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CRotationCameraEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public RotationCameraEventPtr(EarthView.World.Spatial3D.Controls.RotationCameraEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CRotationCameraEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_get_CRotationCameraEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.RotationCameraEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_get_CRotationCameraEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.RotationCameraEvent csObj = new EarthView.World.Spatial3D.Controls.RotationCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRotationCameraEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.RotationCameraEvent;
							csObj.BindNativeObject(__ptr, "CRotationCameraEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRotationCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRotationCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadRotationCameraEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadRotationCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRotationCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr", new RotationCameraEventPtrClassFactory());

					public RotationCameraEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RotationCameraEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RotationCameraEventPtr obj = baseObj as  RotationCameraEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new RotationCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRotationCameraEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RotationCameraEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RotationCameraEventPtr emptyInstance = new RotationCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class TiltCameraEventEX : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public TiltCameraEventEX() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTiltCameraEventEX",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="x">缩放点的Ｘ坐标</param>
					/// <param name="y">缩放点的Y坐标</param>
					/// <param name="tiltDegree">倾斜的角度</param>
					/// <returns></returns>
					public TiltCameraEventEX(int x, int y, double tiltDegree) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuex = new BasePtr(x);
						list.Add("x", valuex.PtrVal);
						BasePtr valuey = new BasePtr(y);
						list.Add("y", valuey.PtrVal);
						BasePtr valuetiltDegree = new BasePtr(tiltDegree);
						list.Add("tiltDegree", valuetiltDegree.PtrVal);
						Create("CTiltCameraEventEX", list);
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mx(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mx( IntPtr pObject, int value );

					public 					int Mx
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mx(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mx(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_my(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_my( IntPtr pObject, int value );

					public 					int My
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_my(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_my(this.NativeObject,value);
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mtiltDegree(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mtiltDegree( IntPtr pObject, double value );

					public 					double MtiltDegree
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mtiltDegree(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CTiltCameraEventEX_mtiltDegree(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTiltCameraEventEX = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTiltCameraEventEX = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTiltCameraEventEX = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadTiltCameraEventEX = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadTiltCameraEventEX = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTiltCameraEventEX = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTiltCameraEventEX = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTiltCameraEventEX = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadTiltCameraEventEX = LoadDll.Load("EV_GA.so");
							private static bool csbLoadTiltCameraEventEX = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadTiltCameraEventEX = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTiltCameraEventEX = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTiltCameraEventEX", new TiltCameraEventEXClassFactory());

					public TiltCameraEventEX(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static TiltCameraEventEX FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TiltCameraEventEX obj = baseObj as  TiltCameraEventEX;
						if (object.Equals(obj, null))
						{
							obj = new TiltCameraEventEX(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTiltCameraEventEX");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TiltCameraEventEXClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TiltCameraEventEX emptyInstance = new TiltCameraEventEX(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class TiltCameraEventEXPtr : EarthView.World.Core.BaseObject
				{
					public TiltCameraEventEXPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTiltCameraEventEXPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public TiltCameraEventEXPtr(EarthView.World.Spatial3D.Controls.TiltCameraEventEX rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CTiltCameraEventEXPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public TiltCameraEventEXPtr(EarthView.World.Spatial3D.Controls.TiltCameraEventEXPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CTiltCameraEventEXPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_get_CTiltCameraEventEX(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.TiltCameraEventEX Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_get_CTiltCameraEventEX(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.TiltCameraEventEX csObj = new EarthView.World.Spatial3D.Controls.TiltCameraEventEX(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CTiltCameraEventEX");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.TiltCameraEventEX;
							csObj.BindNativeObject(__ptr, "CTiltCameraEventEX");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTiltCameraEventEXPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTiltCameraEventEXPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr", new TiltCameraEventEXPtrClassFactory());

					public TiltCameraEventEXPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static TiltCameraEventEXPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TiltCameraEventEXPtr obj = baseObj as  TiltCameraEventEXPtr;
						if (object.Equals(obj, null))
						{
							obj = new TiltCameraEventEXPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTiltCameraEventEXPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TiltCameraEventEXPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TiltCameraEventEXPtr emptyInstance = new TiltCameraEventEXPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SetCameraRotationratioEventEX : EarthView.World.Spatial.SystemUI.Guievent
				{
					public SetCameraRotationratioEventEX() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSetCameraRotationratioEventEX",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraRotationratioEventEX(double rotationratio) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerotationratio = new BasePtr(rotationratio);
						list.Add("rotationratio", valuerotationratio.PtrVal);
						Create("CSetCameraRotationratioEventEX", list);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEX_mrotationratio(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEX_mrotationratio( IntPtr pObject, double value );

					public 					double Mrotationratio
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEX_mrotationratio(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEX_mrotationratio(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA.so");
							private static bool csbLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraRotationratioEventEX = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX", new SetCameraRotationratioEventEXClassFactory());

					public SetCameraRotationratioEventEX(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SetCameraRotationratioEventEX FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SetCameraRotationratioEventEX obj = baseObj as  SetCameraRotationratioEventEX;
						if (object.Equals(obj, null))
						{
							obj = new SetCameraRotationratioEventEX(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSetCameraRotationratioEventEX");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SetCameraRotationratioEventEXClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SetCameraRotationratioEventEX emptyInstance = new SetCameraRotationratioEventEX(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SetCameraRotationratioEventEXPtr : EarthView.World.Core.BaseObject
				{
					public SetCameraRotationratioEventEXPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSetCameraRotationratioEventEXPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraRotationratioEventEXPtr(EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventEX rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CSetCameraRotationratioEventEXPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraRotationratioEventEXPtr(EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventEXPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CSetCameraRotationratioEventEXPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_get_CSetCameraRotationratioEventEX(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventEX Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_get_CSetCameraRotationratioEventEX(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventEX csObj = new EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventEX(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraRotationratioEventEX");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventEX;
							csObj.BindNativeObject(__ptr, "CSetCameraRotationratioEventEX");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventEXPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraRotationratioEventEXPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr", new SetCameraRotationratioEventEXPtrClassFactory());

					public SetCameraRotationratioEventEXPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SetCameraRotationratioEventEXPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SetCameraRotationratioEventEXPtr obj = baseObj as  SetCameraRotationratioEventEXPtr;
						if (object.Equals(obj, null))
						{
							obj = new SetCameraRotationratioEventEXPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSetCameraRotationratioEventEXPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SetCameraRotationratioEventEXPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SetCameraRotationratioEventEXPtr emptyInstance = new SetCameraRotationratioEventEXPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
