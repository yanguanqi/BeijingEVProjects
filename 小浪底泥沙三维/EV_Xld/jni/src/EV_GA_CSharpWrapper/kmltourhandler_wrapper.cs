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
				public class TourEndEvent : EarthView.World.Core.Event
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public TourEndEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTourEndEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					public TourEndEvent(ushort type) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						Create("CTourEndEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <param name="sender">发送者</param>
					/// <returns></returns>
					public TourEndEvent(ushort type, EarthView.World.Core.EventObject sender) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						BasePtr valuesender = new BasePtr(sender);
						list.Add("sender", valuesender.PtrVal);
						Create("CTourEndEvent", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTourEndEvent_getTourPath_CKmlTourPathPtr(IntPtr pNativeObject);

					/// <summary>
					/// 返回ＫＭＬ游览的线路
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr GetTourPath()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTourEndEvent_getTourPath_CKmlTourPathPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr csObj = new EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourPathPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr;
							csObj.BindNativeObject(__ptr, "CKmlTourPathPtr");
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
					private static extern void EarthView_World_Spatial3D_Controls_CTourEndEvent_setTourPath_void_CKmlTourPathPtr(IntPtr pNativeObject, IntPtr kmlTourPath);

					/// <summary>
					/// 设置ＫＭＬ游览的线路
					/// </summary>
					/// <param name="kmlTourPath">游览对象</param>
					/// <returns></returns>
					public void SetTourPath(EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr kmlTourPath)
					{
						EarthView_World_Spatial3D_Controls_CTourEndEvent_setTourPath_void_CKmlTourPathPtr(this.NativeObject, object.Equals(kmlTourPath, null) ? IntPtr.Zero : kmlTourPath.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTourEndEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTourEndEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTourEndEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadTourEndEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadTourEndEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTourEndEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTourEndEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTourEndEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadTourEndEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadTourEndEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadTourEndEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTourEndEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTourEndEvent", new TourEndEventClassFactory());

					public TourEndEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static TourEndEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TourEndEvent obj = baseObj as  TourEndEvent;
						if (object.Equals(obj, null))
						{
							obj = new TourEndEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTourEndEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TourEndEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TourEndEvent emptyInstance = new TourEndEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlTourEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					public enum KMLEVENTTYPE
					{
										DATA = 0,
										START,
										STOP,
										STARTRECORD,
										STOPRECORD
					
					}

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlTourEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlTourEvent",  null);
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
					private static extern int EarthView_World_Spatial3D_Controls_CKmlTourEvent_getKmlEventType_KmlEventType(IntPtr pNativeObject);

					/// <summary>
					/// 返回事件的类型
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Controls.KmlTourEvent.KMLEVENTTYPE GetKmlEventType()
					{
						int ret=EarthView_World_Spatial3D_Controls_CKmlTourEvent_getKmlEventType_KmlEventType(this.NativeObject);
						
						return (EarthView.World.Spatial3D.Controls.KmlTourEvent.KMLEVENTTYPE)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlTourEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlTourEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlTourEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlTourEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlTourEvent", new KmlTourEventClassFactory());

					public KmlTourEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlTourEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlTourEvent obj = baseObj as  KmlTourEvent;
						if (object.Equals(obj, null))
						{
							obj = new KmlTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlTourEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlTourEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlTourEvent emptyInstance = new KmlTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlTourEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlTourEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlTourEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlTourEventPtr(EarthView.World.Spatial3D.Controls.KmlTourEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CKmlTourEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlTourEventPtr(EarthView.World.Spatial3D.Controls.KmlTourEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CKmlTourEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_get_CKmlTourEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.KmlTourEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_get_CKmlTourEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.KmlTourEvent csObj = new EarthView.World.Spatial3D.Controls.KmlTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlTourEvent;
							csObj.BindNativeObject(__ptr, "CKmlTourEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorAssign_CKmlTourEventPtr_CKmlTourEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.KmlTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlTourEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorAssign_CKmlTourEventPtr_CKmlTourEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorAssign_CKmlTourEventPtr_CKmlTourEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.KmlTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlTourEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorAssign_CKmlTourEventPtr_CKmlTourEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadKmlTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlTourEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlTourEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlTourEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlTourEventPtr", new KmlTourEventPtrClassFactory());

					public KmlTourEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlTourEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlTourEventPtr obj = baseObj as  KmlTourEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new KmlTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlTourEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlTourEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlTourEventPtr emptyInstance = new KmlTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlTourPathEvent : EarthView.World.Spatial3D.Controls.KmlTourEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlTourPathEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlTourPathEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					private EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr mkmlTourPathField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CKmlTourPathEvent_mkmlTourPath(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CKmlTourPathEvent_mkmlTourPath( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr MkmlTourPath
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CKmlTourPathEvent_mkmlTourPath(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mkmlTourPathField, null)){
								mkmlTourPathField.NativeObject = __ptr;
								return mkmlTourPathField;
							}
							EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr csObj = new EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CKmlTourPathPtr");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr;
								csObj.BindNativeObject(__ptr, "CKmlTourPathPtr");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mkmlTourPathField = value;
							Set_EarthView_World_Spatial3D_Controls_CKmlTourPathEvent_mkmlTourPath( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlTourPathEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourPathEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlTourPathEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlTourPathEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlTourPathEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourPathEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlTourPathEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourPathEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlTourPathEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlTourPathEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlTourPathEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourPathEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlTourPathEvent", new KmlTourPathEventClassFactory());

					public KmlTourPathEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlTourPathEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlTourPathEvent obj = baseObj as  KmlTourPathEvent;
						if (object.Equals(obj, null))
						{
							obj = new KmlTourPathEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlTourPathEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlTourPathEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlTourPathEvent emptyInstance = new KmlTourPathEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlTourPathEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlTourPathEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlTourPathEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlTourPathEventPtr(EarthView.World.Spatial3D.Controls.KmlTourPathEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CKmlTourPathEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlTourPathEventPtr(EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CKmlTourPathEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_get_CKmlTourPathEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.KmlTourPathEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_get_CKmlTourPathEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.KmlTourPathEvent csObj = new EarthView.World.Spatial3D.Controls.KmlTourPathEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourPathEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlTourPathEvent;
							csObj.BindNativeObject(__ptr, "CKmlTourPathEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorAssign_CKmlTourPathEventPtr_CKmlTourPathEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorAssign_CKmlTourPathEventPtr_CKmlTourPathEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourPathEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlTourPathEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorAssign_CKmlTourPathEventPtr_CKmlTourPathEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlTourPathEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorAssign_CKmlTourPathEventPtr_CKmlTourPathEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourPathEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlTourPathEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlTourPathEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlTourPathEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourPathEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr", new KmlTourPathEventPtrClassFactory());

					public KmlTourPathEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlTourPathEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlTourPathEventPtr obj = baseObj as  KmlTourPathEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new KmlTourPathEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlTourPathEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlTourPathEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlTourPathEventPtr emptyInstance = new KmlTourPathEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlStartTourEvent : EarthView.World.Spatial3D.Controls.KmlTourEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlStartTourEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlStartTourEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlStartTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStartTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlStartTourEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlStartTourEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlStartTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStartTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlStartTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStartTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlStartTourEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlStartTourEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlStartTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStartTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlStartTourEvent", new KmlStartTourEventClassFactory());

					public KmlStartTourEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlStartTourEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlStartTourEvent obj = baseObj as  KmlStartTourEvent;
						if (object.Equals(obj, null))
						{
							obj = new KmlStartTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlStartTourEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlStartTourEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlStartTourEvent emptyInstance = new KmlStartTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlStartTourEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					///构造函数
					/// </summary>
					/// <returns></returns>
					public KmlStartTourEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlStartTourEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlStartTourEventPtr(EarthView.World.Spatial3D.Controls.KmlStartTourEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CKmlStartTourEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlStartTourEventPtr(EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CKmlStartTourEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_get_CKmlStartTourEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.KmlStartTourEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_get_CKmlStartTourEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.KmlStartTourEvent csObj = new EarthView.World.Spatial3D.Controls.KmlStartTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStartTourEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStartTourEvent;
							csObj.BindNativeObject(__ptr, "CKmlStartTourEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorAssign_CKmlStartTourEventPtr_CKmlStartTourEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorAssign_CKmlStartTourEventPtr_CKmlStartTourEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStartTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlStartTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorAssign_CKmlStartTourEventPtr_CKmlStartTourEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlStartTourEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorAssign_CKmlStartTourEventPtr_CKmlStartTourEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStartTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStartTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlStartTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStartTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr", new KmlStartTourEventPtrClassFactory());

					public KmlStartTourEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlStartTourEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlStartTourEventPtr obj = baseObj as  KmlStartTourEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new KmlStartTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlStartTourEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlStartTourEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlStartTourEventPtr emptyInstance = new KmlStartTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlStopTourEvent : EarthView.World.Spatial3D.Controls.KmlTourEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlStopTourEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlStopTourEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlStopTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStopTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlStopTourEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlStopTourEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlStopTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStopTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlStopTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStopTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlStopTourEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlStopTourEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlStopTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStopTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlStopTourEvent", new KmlStopTourEventClassFactory());

					public KmlStopTourEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlStopTourEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlStopTourEvent obj = baseObj as  KmlStopTourEvent;
						if (object.Equals(obj, null))
						{
							obj = new KmlStopTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlStopTourEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlStopTourEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlStopTourEvent emptyInstance = new KmlStopTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlStopTourEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					///构造函数
					/// </summary>
					/// <returns></returns>
					public KmlStopTourEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlStopTourEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlStopTourEventPtr(EarthView.World.Spatial3D.Controls.KmlStopTourEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CKmlStopTourEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlStopTourEventPtr(EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CKmlStopTourEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_get_CKmlStopTourEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.KmlStopTourEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_get_CKmlStopTourEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.KmlStopTourEvent csObj = new EarthView.World.Spatial3D.Controls.KmlStopTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStopTourEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStopTourEvent;
							csObj.BindNativeObject(__ptr, "CKmlStopTourEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorAssign_CKmlStopTourEventPtr_CKmlStopTourEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorAssign_CKmlStopTourEventPtr_CKmlStopTourEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStopTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlStopTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorAssign_CKmlStopTourEventPtr_CKmlStopTourEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlStopTourEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorAssign_CKmlStopTourEventPtr_CKmlStopTourEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStopTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStopTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlStopTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStopTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr", new KmlStopTourEventPtrClassFactory());

					public KmlStopTourEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlStopTourEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlStopTourEventPtr obj = baseObj as  KmlStopTourEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new KmlStopTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlStopTourEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlStopTourEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlStopTourEventPtr emptyInstance = new KmlStopTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlStartRecordTourEvent : EarthView.World.Spatial3D.Controls.KmlTourEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlStartRecordTourEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlStartRecordTourEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStartRecordTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent", new KmlStartRecordTourEventClassFactory());

					public KmlStartRecordTourEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlStartRecordTourEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlStartRecordTourEvent obj = baseObj as  KmlStartRecordTourEvent;
						if (object.Equals(obj, null))
						{
							obj = new KmlStartRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlStartRecordTourEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlStartRecordTourEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlStartRecordTourEvent emptyInstance = new KmlStartRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlStartRecordTourEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					///构造函数
					/// </summary>
					/// <returns></returns>
					public KmlStartRecordTourEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlStartRecordTourEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlStartRecordTourEventPtr(EarthView.World.Spatial3D.Controls.KmlStartRecordTourEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CKmlStartRecordTourEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlStartRecordTourEventPtr(EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CKmlStartRecordTourEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_get_CKmlStartRecordTourEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.KmlStartRecordTourEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_get_CKmlStartRecordTourEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.KmlStartRecordTourEvent csObj = new EarthView.World.Spatial3D.Controls.KmlStartRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStartRecordTourEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStartRecordTourEvent;
							csObj.BindNativeObject(__ptr, "CKmlStartRecordTourEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorAssign_CKmlStartRecordTourEventPtr_CKmlStartRecordTourEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorAssign_CKmlStartRecordTourEventPtr_CKmlStartRecordTourEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStartRecordTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlStartRecordTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorAssign_CKmlStartRecordTourEventPtr_CKmlStartRecordTourEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlStartRecordTourEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorAssign_CKmlStartRecordTourEventPtr_CKmlStartRecordTourEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStartRecordTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStartRecordTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlStartRecordTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStartRecordTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStartRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr", new KmlStartRecordTourEventPtrClassFactory());

					public KmlStartRecordTourEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlStartRecordTourEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlStartRecordTourEventPtr obj = baseObj as  KmlStartRecordTourEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new KmlStartRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlStartRecordTourEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlStartRecordTourEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlStartRecordTourEventPtr emptyInstance = new KmlStartRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlStopRecordTourEvent : EarthView.World.Spatial3D.Controls.KmlTourEvent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlStopRecordTourEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlStopRecordTourEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStopRecordTourEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent", new KmlStopRecordTourEventClassFactory());

					public KmlStopRecordTourEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlStopRecordTourEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlStopRecordTourEvent obj = baseObj as  KmlStopRecordTourEvent;
						if (object.Equals(obj, null))
						{
							obj = new KmlStopRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlStopRecordTourEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlStopRecordTourEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlStopRecordTourEvent emptyInstance = new KmlStopRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlStopRecordTourEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlStopRecordTourEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlStopRecordTourEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlStopRecordTourEventPtr(EarthView.World.Spatial3D.Controls.KmlStopRecordTourEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CKmlStopRecordTourEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public KmlStopRecordTourEventPtr(EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CKmlStopRecordTourEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_get_CKmlStopRecordTourEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.KmlStopRecordTourEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_get_CKmlStopRecordTourEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.KmlStopRecordTourEvent csObj = new EarthView.World.Spatial3D.Controls.KmlStopRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStopRecordTourEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStopRecordTourEvent;
							csObj.BindNativeObject(__ptr, "CKmlStopRecordTourEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorAssign_CKmlStopRecordTourEventPtr_CKmlStopRecordTourEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorAssign_CKmlStopRecordTourEventPtr_CKmlStopRecordTourEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStopRecordTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlStopRecordTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorAssign_CKmlStopRecordTourEventPtr_CKmlStopRecordTourEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.KmlStopRecordTourEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorAssign_CKmlStopRecordTourEventPtr_CKmlStopRecordTourEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr csObj = new EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlStopRecordTourEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.KmlStopRecordTourEventPtr;
							csObj.BindNativeObject(__ptr, "CKmlStopRecordTourEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CKmlStopRecordTourEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlStopRecordTourEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr", new KmlStopRecordTourEventPtrClassFactory());

					public KmlStopRecordTourEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlStopRecordTourEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlStopRecordTourEventPtr obj = baseObj as  KmlStopRecordTourEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new KmlStopRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlStopRecordTourEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlStopRecordTourEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlStopRecordTourEventPtr emptyInstance = new KmlStopRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlTourHandler : EarthView.World.Spatial3D.Controls.Guieventhandler
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					public KmlTourHandler(EarthView.World.Spatial3D.GlobeCamera globeCamera) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueglobeCamera = new BasePtr(globeCamera);
						list.Add("globeCamera", valueglobeCamera.PtrVal);
						Create("CKmlTourHandlerProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.KmlTourHandler".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleUseEvent_CallBack_ev_bool_CGUIEvent(IntPtr userEvent);

					protected handleUseEvent_CallBack_ev_bool_CGUIEvent m_handleUseEvent_CallBack_ev_bool_CGUIEvent;

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
					private static extern byte EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr userEvent);

					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleUseEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent userEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(userEvent, null) ? IntPtr.Zero : userEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Function(IntPtr userEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_userEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_userEvent.BindNativeObject(userEvent,"CGUIEvent");
						csobj_userEvent.Delegate = true;
						IClassFactory csobj_userEventClassFactory = GlobalClassFactoryMap.Get(csobj_userEvent.GetCppInstanceTypeName());
						if (csobj_userEventClassFactory != null)
						{
							csobj_userEvent.Delegate = true;
							csobj_userEvent = csobj_userEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_userEvent.BindNativeObject(userEvent, "CGUIEvent");
							csobj_userEvent.Delegate = true;
						}
						
						bool csret=HandleUseEvent(csobj_userEvent);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr userEvent);

					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleUseEvent(EarthView.World.Spatial.SystemUI.Guievent userEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(userEvent, null) ? IntPtr.Zero : userEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleFrame_CallBack_ev_bool_CGUIEvent(IntPtr guiEvent);

					protected handleFrame_CallBack_ev_bool_CGUIEvent m_handleFrame_CallBack_ev_bool_CGUIEvent;

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
					private static extern byte EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleFrame_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Function(IntPtr guiEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_guiEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_guiEvent.BindNativeObject(guiEvent,"CGUIEvent");
						csobj_guiEvent.Delegate = true;
						IClassFactory csobj_guiEventClassFactory = GlobalClassFactoryMap.Get(csobj_guiEvent.GetCppInstanceTypeName());
						if (csobj_guiEventClassFactory != null)
						{
							csobj_guiEvent.Delegate = true;
							csobj_guiEvent = csobj_guiEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_guiEvent.BindNativeObject(guiEvent, "CGUIEvent");
							csobj_guiEvent.Delegate = true;
						}
						
						bool csret=HandleFrame(csobj_guiEvent);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleFrame(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CKmlTourHandler_sendActiveEvent_void_CEvent(IntPtr pNativeObject, IntPtr EVevent);

					/// <summary>
					/// 向界面发送事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
					public void SendActiveEvent(EarthView.World.Core.Event EVevent)
					{
						EarthView_World_Spatial3D_Controls_CKmlTourHandler_sendActiveEvent_void_CEvent(this.NativeObject, object.Equals(EVevent, null) ? IntPtr.Zero : EVevent.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlTourHandler = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourHandler = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlTourHandler = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadKmlTourHandler = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadKmlTourHandler = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadKmlTourHandler = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlTourHandler = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourHandler = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlTourHandler = LoadDll.Load("EV_GA.so");
							private static bool csbLoadKmlTourHandler = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadKmlTourHandler = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadKmlTourHandler = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlTourHandler", new KmlTourHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CKmlTourHandlerProxy", new KmlTourHandlerClassFactory());

					public KmlTourHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent(IntPtr pObject, handleUseEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent(IntPtr pObject, handleFrame_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleUseEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleUseEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleUseEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleUseEvent_CallBack_ev_bool_CGUIEvent);
							m_handleFrame_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleFrame_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleFrame_ev_bool_CGUIEvent(this.NativeObject, m_handleFrame_CallBack_ev_bool_CGUIEvent);
							m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CKmlTourHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
						}
					}
					public static KmlTourHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlTourHandler obj = baseObj as  KmlTourHandler;
						if (object.Equals(obj, null))
						{
							obj = new KmlTourHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlTourHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlTourHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlTourHandler emptyInstance = new KmlTourHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
