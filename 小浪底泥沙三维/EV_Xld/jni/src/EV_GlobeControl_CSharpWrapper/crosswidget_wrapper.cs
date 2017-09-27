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
				/// <summary>
				/// 窗口中心十字叉，目前没有使用
				/// </summary>
				public class CrossWidget : EarthView.World.Spatial3D.Controls.Widget
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <returns></returns>
					public CrossWidget(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						Create("CCrossWidgetProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.CrossWidget".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <returns></returns>
					public CrossWidget(EarthView.World.Spatial3D.Controls.CrossWidget rhs) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerhs = new BasePtr(rhs);
						list.Add("rhs", valuerhs.PtrVal);
						Create("CCrossWidgetProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.CrossWidget".Equals(((Object)this).GetType().ToString()))
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
					private static extern void EarthView_World_Spatial3D_Controls_CCrossWidget_OperatorAssign_void_CCrossWidget(IntPtr pNativeObject, IntPtr rhs);

					/// <summary>
					/// 赋值运算符
					/// </summary>
					/// <returns></returns>
					protected void OperatorAssign(EarthView.World.Spatial3D.Controls.CrossWidget rhs)
					{
						EarthView_World_Spatial3D_Controls_CCrossWidget_OperatorAssign_void_CCrossWidget(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}

					private EarthView.World.Graphic.PanelOverlayElement mPanelField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CCrossWidget_mPanel(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CCrossWidget_mPanel( IntPtr pObject, IntPtr value );

					protected 					EarthView.World.Graphic.PanelOverlayElement MPanel
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CCrossWidget_mPanel(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mPanelField, null)){
								mPanelField.NativeObject = __ptr;
								return mPanelField;
							}
							EarthView.World.Graphic.PanelOverlayElement csObj = new EarthView.World.Graphic.PanelOverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CPanelOverlayElement");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PanelOverlayElement;
								csObj.BindNativeObject(__ptr, "CPanelOverlayElement");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mPanelField = value;
							Set_EarthView_World_Spatial3D_Controls_CCrossWidget_mPanel( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCrossWidget = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCrossWidget = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCrossWidget = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadCrossWidget = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadCrossWidget = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCrossWidget = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCrossWidget = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCrossWidget = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadCrossWidget = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadCrossWidget = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadCrossWidget = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCrossWidget = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCrossWidget", new CrossWidgetClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCrossWidgetProxy", new CrossWidgetClassFactory());

					public CrossWidget(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void(IntPtr pObject, additionMouseUp_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseUpEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseDownEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(IntPtr pObject, handeMouseDbClickEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent(IntPtr pObject, handleKeyDownEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent(IntPtr pObject, handleKeyUpEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent(IntPtr pObject, handleUserEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(IntPtr pObject, handleFrameEvent_CallBack_ev_bool_CGUIEvent_CViewport pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_additionMouseUp_CallBack_void = EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Function;
							GC.KeepAlive(m_additionMouseUp_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void(this.NativeObject, m_additionMouseUp_CallBack_void);
							m_handleMouseUpEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseUpEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseUpEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent);
							m_handeMouseDbClickEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handeMouseDbClickEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(this.NativeObject, m_handeMouseDbClickEvent_CallBack_ev_bool_CGUIEvent);
							m_handleKeyDownEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleKeyDownEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleKeyDownEvent_CallBack_ev_bool_CGUIEvent);
							m_handleKeyUpEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleKeyUpEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleKeyUpEvent_CallBack_ev_bool_CGUIEvent);
							m_handleUserEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleUserEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleUserEvent_CallBack_ev_bool_CGUIEvent);
							m_handleFrameEvent_CallBack_ev_bool_CGUIEvent_CViewport = EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Function;
							GC.KeepAlive(m_handleFrameEvent_CallBack_ev_bool_CGUIEvent_CViewport);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(this.NativeObject, m_handleFrameEvent_CallBack_ev_bool_CGUIEvent_CViewport);
						}
					}
					public override void AdditionMouseUp()
					{
						base.AdditionMouseUp_NoVirtual();
					}
					public override bool HandleMouseUpEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						return base.HandleMouseUpEvent_NoVirtual(EVevent);
					}
					public override bool HandleMouseMoveEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						return base.HandleMouseMoveEvent_NoVirtual(EVevent);
					}
					public override bool HandleMouseDownEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						return base.HandleMouseDownEvent_NoVirtual(EVevent);
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
					public override bool HandleUserEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent)
					{
						return base.HandleUserEvent_NoVirtual(EVevent);
					}
					public override bool HandleFrameEvent(EarthView.World.Spatial.SystemUI.Guievent EVevent, EarthView.World.Graphic.Viewport viewport)
					{
						return base.HandleFrameEvent_NoVirtual(EVevent,viewport);
					}
					public static CrossWidget FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CrossWidget obj = baseObj as  CrossWidget;
						if (object.Equals(obj, null))
						{
							obj = new CrossWidget(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCrossWidget");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CrossWidgetClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CrossWidget emptyInstance = new CrossWidget(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
