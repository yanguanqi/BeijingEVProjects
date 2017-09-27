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
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				/// <summary>
				/// 简单图形跟踪项
				/// </summary>
				public class TrackingShapeItem : EarthView.World.Spatial2D.Controls.TrackingItem
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingShapeItem_setPenColor_void_IColor(IntPtr pNativeObject, IntPtr clr);

					/// <summary>
					/// 设置画笔颜色
					/// </summary>
					/// <param name="clr">颜色</param>
					/// <returns></returns>
					public void SetPenColor(EarthView.World.Spatial.Display.Icolor clr)
					{
						EarthView_World_Spatial2D_Controls_CTrackingShapeItem_setPenColor_void_IColor(this.NativeObject, object.Equals(clr, null) ? IntPtr.Zero : clr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingShapeItem_getPenColor_IColor(IntPtr pNativeObject);

					/// <summary>
					/// 获取画笔颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					public EarthView.World.Spatial.Display.Icolor GetPenColor()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingShapeItem_getPenColor_IColor(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Icolor csObj = new EarthView.World.Spatial.Display.Icolor(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IColor");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Icolor;
							csObj.BindNativeObject(__ptr, "IColor");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingShapeItem_setPenWidth_void_ev_real64(IntPtr pNativeObject, double width);

					/// <summary>
					/// 设置画笔宽度
					/// </summary>
					/// <param name="width">画笔宽度</param>
					/// <returns></returns>
					public void SetPenWidth(double width)
					{
						EarthView_World_Spatial2D_Controls_CTrackingShapeItem_setPenWidth_void_ev_real64(this.NativeObject, width);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CTrackingShapeItem_getPenWidth_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取画笔宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns>画笔宽度</returns>
					public double GetPenWidth()
					{
						double ret=EarthView_World_Spatial2D_Controls_CTrackingShapeItem_getPenWidth_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTrackingShapeItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadTrackingShapeItem = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadTrackingShapeItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingShapeItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingShapeItem", new TrackingShapeItemClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingShapeItemProxy", new TrackingShapeItemClassFactory());

					public TrackingShapeItem(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect(IntPtr pObject, boundingRect_CallBack_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pObject, paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pObject, isContains_CallBack_ev_bool_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32(IntPtr pObject, type_CallBack_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_boundingRect_CallBack_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Function;
							GC.KeepAlive(m_boundingRect_CallBack_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect(this.NativeObject, m_boundingRect_CallBack_CSpatialRect);
							m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Function;
							GC.KeepAlive(m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							m_isContains_CallBack_ev_bool_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							m_type_CallBack_ev_int32 = EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Function;
							GC.KeepAlive(m_type_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32(this.NativeObject, m_type_CallBack_ev_int32);
						}
					}
					public override EarthView.World.Spatial.Display.SpatialRect BoundingRect()
					{
						return base.BoundingRect_NoVirtual();
					}
					public override void Paint(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						base.Paint_NoVirtual(display,state,rect);
					}
					public override bool IsContains(double x, double y)
					{
						return base.IsContains_NoVirtual(x,y);
					}
					public override int EVType()
					{
						return base.EVType_NoVirtual();
					}
					public static TrackingShapeItem FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TrackingShapeItem obj = baseObj as  TrackingShapeItem;
						if (object.Equals(obj, null))
						{
							obj = new TrackingShapeItem(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTrackingShapeItem");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TrackingShapeItemClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TrackingShapeItem emptyInstance = new TrackingShapeItem(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 简单折线
				/// </summary>
				public class TrackingPolylineItem : EarthView.World.Spatial2D.Controls.TrackingShapeItem
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public TrackingPolylineItem() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTrackingPolylineItemProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.TrackingPolylineItem".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="unitType">单位</param>
					/// <returns></returns>
					public TrackingPolylineItem(EarthView.World.Spatial2D.Controls.EVTRACKINGITEMUNIT unitType) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueunitType = new BasePtr(unitType);
						list.Add("unitType", valueunitType.PtrVal);
						Create("CTrackingPolylineItemProxy", list);
						if (!"EarthView.World.Spatial2D.Controls.TrackingPolylineItem".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒对象</returns>
					public new EarthView.World.Spatial.Display.SpatialRect BoundingRect_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.SpatialRect csObj = new EarthView.World.Spatial.Display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialRect");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.SpatialRect;
							csObj.BindNativeObject(__ptr, "CSpatialRect");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect(IntPtr pNativeObject);

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒对象</returns>
					public override EarthView.World.Spatial.Display.SpatialRect BoundingRect()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.SpatialRect csObj = new EarthView.World.Spatial.Display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialRect");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.SpatialRect;
							csObj.BindNativeObject(__ptr, "CSpatialRect");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(IntPtr pNativeObject, IntPtr display, ref EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, IntPtr rect);

					/// <summary>
					/// 绘制操作
					/// </summary>
					/// <param name="display">显示设备对象</param>
					/// <param name="state">跟踪目标状态</param>
					/// <param name="rect">绘制范围</param>
					/// <returns></returns>
					public new void Paint_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, ref state, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pNativeObject, IntPtr display, ref EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, IntPtr rect);

					/// <summary>
					/// 绘制操作
					/// </summary>
					/// <param name="display">显示设备对象</param>
					/// <param name="state">跟踪目标状态</param>
					/// <param name="rect">绘制范围</param>
					/// <returns></returns>
					public override void Paint(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, ref state, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x, double y);

					/// <summary>
					/// 判断包含操作
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <returns>true，包含，false不包含</returns>
					public new bool IsContains_NoVirtual(double x, double y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(this.NativeObject, x, y);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y);

					/// <summary>
					/// 判断包含操作
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <returns>true，包含，false不包含</returns>
					public override bool IsContains(double x, double y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, x, y);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取追踪项类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>对象类型</returns>
					public new int EVType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取追踪项类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>对象类型</returns>
					public override int EVType()
					{
						int ret=EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_setPolyline_void_CLineString(IntPtr pNativeObject, IntPtr lstr);

					/// <summary>
					/// 设置折线
					/// </summary>
					/// <param name="lstr">线对象</param>
					/// <returns></returns>
					public void SetPolyline(EarthView.World.Spatial.Geometry.LineString lstr)
					{
						EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_setPolyline_void_CLineString(this.NativeObject, object.Equals(lstr, null) ? IntPtr.Zero : lstr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_getPolyline_CLineString(IntPtr pNativeObject);

					/// <summary>
					/// 获取折线对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>折线</returns>
					public EarthView.World.Spatial.Geometry.LineString GetPolyline()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_getPolyline_CLineString(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.LineString csObj = new EarthView.World.Spatial.Geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLineString");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.LineString;
							csObj.BindNativeObject(__ptr, "CLineString");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingPolylineItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingPolylineItem", new TrackingPolylineItemClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingPolylineItemProxy", new TrackingPolylineItemClassFactory());

					public TrackingPolylineItem(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect(IntPtr pObject, boundingRect_CallBack_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pObject, paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pObject, isContains_CallBack_ev_bool_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32(IntPtr pObject, type_CallBack_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_boundingRect_CallBack_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Function;
							GC.KeepAlive(m_boundingRect_CallBack_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect(this.NativeObject, m_boundingRect_CallBack_CSpatialRect);
							m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Function;
							GC.KeepAlive(m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							m_isContains_CallBack_ev_bool_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							m_type_CallBack_ev_int32 = EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Function;
							GC.KeepAlive(m_type_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32(this.NativeObject, m_type_CallBack_ev_int32);
						}
					}
					public static TrackingPolylineItem FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TrackingPolylineItem obj = baseObj as  TrackingPolylineItem;
						if (object.Equals(obj, null))
						{
							obj = new TrackingPolylineItem(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTrackingPolylineItem");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TrackingPolylineItemClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TrackingPolylineItem emptyInstance = new TrackingPolylineItem(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 简单填充项
				/// </summary>
				public class TrackingFillShapeItem : EarthView.World.Spatial2D.Controls.TrackingShapeItem
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_setFillColor_void_IColor(IntPtr pNativeObject, IntPtr clr);

					/// <summary>
					/// 设置填充颜色
					/// </summary>
					/// <param name="clr">颜色</param>
					/// <returns></returns>
					public void SetFillColor(EarthView.World.Spatial.Display.Icolor clr)
					{
						EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_setFillColor_void_IColor(this.NativeObject, object.Equals(clr, null) ? IntPtr.Zero : clr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_getFillColor_IColor(IntPtr pNativeObject);

					/// <summary>
					/// 获取填充颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					public EarthView.World.Spatial.Display.Icolor GetFillColor()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_getFillColor_IColor(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Icolor csObj = new EarthView.World.Spatial.Display.Icolor(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IColor");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Icolor;
							csObj.BindNativeObject(__ptr, "IColor");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_setFill_void_ev_bool(IntPtr pNativeObject, byte bFill);

					/// <summary>
					/// 设置是否填充
					/// </summary>
					/// <param name="bFill">是否填充</param>
					/// <returns></returns>
					public void SetFill(bool bFill)
					{
						EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_setFill_void_ev_bool(this.NativeObject, Convert.ToByte(bFill));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isFill_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否进行了填充
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果为真,那进行了填充,反之则否</returns>
					public bool IsFill()
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isFill_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingFillShapeItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem", new TrackingFillShapeItemClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingFillShapeItemProxy", new TrackingFillShapeItemClassFactory());

					public TrackingFillShapeItem(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect(IntPtr pObject, boundingRect_CallBack_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pObject, paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pObject, isContains_CallBack_ev_bool_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32(IntPtr pObject, type_CallBack_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_boundingRect_CallBack_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Function;
							GC.KeepAlive(m_boundingRect_CallBack_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect(this.NativeObject, m_boundingRect_CallBack_CSpatialRect);
							m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Function;
							GC.KeepAlive(m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							m_isContains_CallBack_ev_bool_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							m_type_CallBack_ev_int32 = EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Function;
							GC.KeepAlive(m_type_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32(this.NativeObject, m_type_CallBack_ev_int32);
						}
					}
					public override EarthView.World.Spatial.Display.SpatialRect BoundingRect()
					{
						return base.BoundingRect_NoVirtual();
					}
					public override void Paint(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						base.Paint_NoVirtual(display,state,rect);
					}
					public override bool IsContains(double x, double y)
					{
						return base.IsContains_NoVirtual(x,y);
					}
					public override int EVType()
					{
						return base.EVType_NoVirtual();
					}
					public static TrackingFillShapeItem FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TrackingFillShapeItem obj = baseObj as  TrackingFillShapeItem;
						if (object.Equals(obj, null))
						{
							obj = new TrackingFillShapeItem(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTrackingFillShapeItem");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TrackingFillShapeItemClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TrackingFillShapeItem emptyInstance = new TrackingFillShapeItem(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 简单矩形项
				/// </summary>
				public class TrackingRectItem : EarthView.World.Spatial2D.Controls.TrackingFillShapeItem
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public TrackingRectItem() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTrackingRectItemProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.TrackingRectItem".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="unitType">单位类型</param>
					/// <returns></returns>
					public TrackingRectItem(EarthView.World.Spatial2D.Controls.EVTRACKINGITEMUNIT unitType) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueunitType = new BasePtr(unitType);
						list.Add("unitType", valueunitType.PtrVal);
						Create("CTrackingRectItemProxy", list);
						if (!"EarthView.World.Spatial2D.Controls.TrackingRectItem".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒对象</returns>
					public new EarthView.World.Spatial.Display.SpatialRect BoundingRect_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.SpatialRect csObj = new EarthView.World.Spatial.Display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialRect");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.SpatialRect;
							csObj.BindNativeObject(__ptr, "CSpatialRect");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect(IntPtr pNativeObject);

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒对象</returns>
					public override EarthView.World.Spatial.Display.SpatialRect BoundingRect()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.SpatialRect csObj = new EarthView.World.Spatial.Display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialRect");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.SpatialRect;
							csObj.BindNativeObject(__ptr, "CSpatialRect");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(IntPtr pNativeObject, IntPtr display, ref EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, IntPtr rect);

					/// <summary>
					/// 绘制操作
					/// </summary>
					/// <param name="display">显示设备对象</param>
					/// <param name="state">跟踪目标状态</param>
					/// <param name="rect">绘制范围</param>
					/// <returns></returns>
					public new void Paint_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, ref state, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pNativeObject, IntPtr display, ref EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, IntPtr rect);

					/// <summary>
					/// 绘制操作
					/// </summary>
					/// <param name="display">显示设备对象</param>
					/// <param name="state">跟踪目标状态</param>
					/// <param name="rect">绘制范围</param>
					/// <returns></returns>
					public override void Paint(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, ref state, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x, double y);

					/// <summary>
					/// 判断包含操作
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <returns>true，包含，false不包含</returns>
					public new bool IsContains_NoVirtual(double x, double y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(this.NativeObject, x, y);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y);

					/// <summary>
					/// 判断包含操作
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <returns>true，包含，false不包含</returns>
					public override bool IsContains(double x, double y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, x, y);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取追踪项类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>对象类型</returns>
					public new int EVType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取追踪项类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>对象类型</returns>
					public override int EVType()
					{
						int ret=EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingRectItem_setRect_void_CSpatialRect(IntPtr pNativeObject, IntPtr rect);

					/// <summary>
					/// 设置显示矩形
					/// </summary>
					/// <param name="rect">矩形</param>
					/// <returns></returns>
					public void SetRect(EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingRectItem_setRect_void_CSpatialRect(this.NativeObject, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingRectItem_getRect_CSpatialRect(IntPtr pNativeObject);

					/// <summary>
					/// 获取显示矩形
					/// </summary>
					/// <param name=""></param>
					/// <returns>矩形</returns>
					public EarthView.World.Spatial.Display.SpatialRect GetRect()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingRectItem_getRect_CSpatialRect(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.SpatialRect csObj = new EarthView.World.Spatial.Display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialRect");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.SpatialRect;
							csObj.BindNativeObject(__ptr, "CSpatialRect");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTrackingRectItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingRectItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTrackingRectItem = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadTrackingRectItem = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadTrackingRectItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingRectItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTrackingRectItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingRectItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadTrackingRectItem = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadTrackingRectItem = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadTrackingRectItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingRectItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingRectItem", new TrackingRectItemClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingRectItemProxy", new TrackingRectItemClassFactory());

					public TrackingRectItem(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect(IntPtr pObject, boundingRect_CallBack_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pObject, paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pObject, isContains_CallBack_ev_bool_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32(IntPtr pObject, type_CallBack_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_boundingRect_CallBack_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Function;
							GC.KeepAlive(m_boundingRect_CallBack_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect(this.NativeObject, m_boundingRect_CallBack_CSpatialRect);
							m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Function;
							GC.KeepAlive(m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							m_isContains_CallBack_ev_bool_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							m_type_CallBack_ev_int32 = EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Function;
							GC.KeepAlive(m_type_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32(this.NativeObject, m_type_CallBack_ev_int32);
						}
					}
					public static TrackingRectItem FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TrackingRectItem obj = baseObj as  TrackingRectItem;
						if (object.Equals(obj, null))
						{
							obj = new TrackingRectItem(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTrackingRectItem");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TrackingRectItemClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TrackingRectItem emptyInstance = new TrackingRectItem(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 简单椭圆类型(包含圆)
				/// </summary>
				public class TrackingEllipseItem : EarthView.World.Spatial2D.Controls.TrackingRectItem
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public TrackingEllipseItem() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTrackingEllipseItemProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.TrackingEllipseItem".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="unitType">单位类型</param>
					/// <returns></returns>
					public TrackingEllipseItem(EarthView.World.Spatial2D.Controls.EVTRACKINGITEMUNIT unitType) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueunitType = new BasePtr(unitType);
						list.Add("unitType", valueunitType.PtrVal);
						Create("CTrackingEllipseItemProxy", list);
						if (!"EarthView.World.Spatial2D.Controls.TrackingEllipseItem".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(IntPtr pNativeObject, IntPtr display, ref EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, IntPtr rect);

					/// <summary>
					/// 绘制操作
					/// </summary>
					/// <param name="display">显示设备对象</param>
					/// <param name="state">跟踪目标状态</param>
					/// <param name="rect">绘制范围</param>
					/// <returns></returns>
					public new void Paint_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, ref state, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pNativeObject, IntPtr display, ref EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, IntPtr rect);

					/// <summary>
					/// 绘制操作
					/// </summary>
					/// <param name="display">显示设备对象</param>
					/// <param name="state">跟踪目标状态</param>
					/// <param name="rect">绘制范围</param>
					/// <returns></returns>
					public override void Paint(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, ref state, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x, double y);

					/// <summary>
					/// 判断包含操作
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <returns>true，包含，false不包含</returns>
					public new bool IsContains_NoVirtual(double x, double y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(this.NativeObject, x, y);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y);

					/// <summary>
					/// 判断包含操作
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <returns>true，包含，false不包含</returns>
					public override bool IsContains(double x, double y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, x, y);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取追踪项类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>对象类型</returns>
					public new int EVType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取追踪项类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>对象类型</returns>
					public override int EVType()
					{
						int ret=EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingEllipseItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingEllipseItem", new TrackingEllipseItemClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingEllipseItemProxy", new TrackingEllipseItemClassFactory());

					public TrackingEllipseItem(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect(IntPtr pObject, boundingRect_CallBack_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pObject, paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pObject, isContains_CallBack_ev_bool_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32(IntPtr pObject, type_CallBack_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_boundingRect_CallBack_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Function;
							GC.KeepAlive(m_boundingRect_CallBack_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect(this.NativeObject, m_boundingRect_CallBack_CSpatialRect);
							m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Function;
							GC.KeepAlive(m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							m_isContains_CallBack_ev_bool_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							m_type_CallBack_ev_int32 = EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Function;
							GC.KeepAlive(m_type_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32(this.NativeObject, m_type_CallBack_ev_int32);
						}
					}
					public override EarthView.World.Spatial.Display.SpatialRect BoundingRect()
					{
						return base.BoundingRect_NoVirtual();
					}
					public static TrackingEllipseItem FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TrackingEllipseItem obj = baseObj as  TrackingEllipseItem;
						if (object.Equals(obj, null))
						{
							obj = new TrackingEllipseItem(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTrackingEllipseItem");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TrackingEllipseItemClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TrackingEllipseItem emptyInstance = new TrackingEllipseItem(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
