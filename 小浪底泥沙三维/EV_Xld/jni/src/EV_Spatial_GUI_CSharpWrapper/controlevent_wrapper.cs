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
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				public class ControlEvent : EarthView.World.Core.Event
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ctrl">关联的控件</param>
					/// <param name="type">事件类型</param>
					/// <returns>返回专题图类型</returns>
					public ControlEvent(EarthView.World.Spatial.Atlas.Ispatialcontrol ref_ctrl, ushort type) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_ctrl = new BasePtr(ref_ctrl);
						list.Add("ref_ctrl", valueref_ctrl.PtrVal);
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						Create("CControlEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <returns>返回专题图类型</returns>
					public ControlEvent(ushort type) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						Create("CControlEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_CControlEvent_setControl_void_ISpatialControl(IntPtr pNativeObject, IntPtr ref_ctrl);

					/// <summary>
					/// 设置该事件相关联的控件
					/// </summary>
					/// <param name="ctrl">控件</param>
					/// <returns></returns>
					public void SetControl(EarthView.World.Spatial.Atlas.Ispatialcontrol ref_ctrl)
					{
						EarthView_World_Spatial_SystemUI_CControlEvent_setControl_void_ISpatialControl(this.NativeObject, object.Equals(ref_ctrl, null) ? IntPtr.Zero : ref_ctrl.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_CControlEvent_getControl_ISpatialControl(IntPtr pNativeObject);

					/// <summary>
					/// 获取与该事件所关联的控件
					/// </summary>
					/// <param name=""></param>
					/// <returns>控件</returns>
					public EarthView.World.Spatial.Atlas.Ispatialcontrol GetControl()
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_CControlEvent_getControl_ISpatialControl(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ispatialcontrol csObj = new EarthView.World.Spatial.Atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialControl");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ispatialcontrol;
							csObj.BindNativeObject(__ptr, "ISpatialControl");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_d.so");
							private static bool csbLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

						#else 
							private static bool bLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadControlEvent = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#elif Linux 
							private static bool bLoadControlEvent = LoadDll.Load("EV_Spatial_GUI.so");
							private static bool csbLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

						#else 
							private static bool bLoadControlEvent = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadControlEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CControlEvent", new ControlEventClassFactory());

					public ControlEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ControlEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ControlEvent obj = baseObj as  ControlEvent;
						if (object.Equals(obj, null))
						{
							obj = new ControlEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CControlEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ControlEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ControlEvent emptyInstance = new ControlEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
