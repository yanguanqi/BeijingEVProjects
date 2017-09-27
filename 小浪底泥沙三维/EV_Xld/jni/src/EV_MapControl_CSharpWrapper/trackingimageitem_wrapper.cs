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
		namespace Spatial2D
		{
			namespace Controls
			{
				public class TrackingImageItem : EarthView.World.Spatial2D.Controls.TrackingItem
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					public TrackingImageItem() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTrackingImageItemProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.TrackingImageItem".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					///TIU_PixelUnit  位置以地图渲染设备像素为参照，不随地图范围及其变化而变化
					///TIU_MapUnit    位置以地图坐标为参照；图片大小为原始大小，不会改变
					/// </summary>
					/// <param name="unitType">单位类型</param>
					/// <returns></returns>
					public TrackingImageItem(EarthView.World.Spatial2D.Controls.EVTRACKINGITEMUNIT unitType) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueunitType = new BasePtr(unitType);
						list.Add("unitType", valueunitType.PtrVal);
						Create("CTrackingImageItemProxy", list);
						if (!"EarthView.World.Spatial2D.Controls.TrackingImageItem".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingImageItem_boundingRect_CSpatialRect_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒对象</returns>
					public new EarthView.World.Spatial.Display.SpatialRect BoundingRect_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingImageItem_boundingRect_CSpatialRect_NoVirtual(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingImageItem_boundingRect_CSpatialRect(IntPtr pNativeObject);

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒对象</returns>
					public override EarthView.World.Spatial.Display.SpatialRect BoundingRect()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingImageItem_boundingRect_CSpatialRect(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingImageItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(IntPtr pNativeObject, IntPtr display, ref EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, IntPtr rect);

					/// <summary>
					/// 绘制操作
					/// </summary>
					/// <param name="display">显示设备对象</param>
					/// <param name="state">跟踪目标状态</param>
					/// <param name="rect">绘制范围</param>
					/// <returns></returns>
					public new void Paint_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingImageItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, ref state, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingImageItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pNativeObject, IntPtr display, ref EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, IntPtr rect);

					/// <summary>
					/// 绘制操作
					/// </summary>
					/// <param name="display">显示设备对象</param>
					/// <param name="state">跟踪目标状态</param>
					/// <param name="rect">绘制范围</param>
					/// <returns></returns>
					public override void Paint(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial2D.Controls.EVTRACKINGITEMSTATE state, EarthView.World.Spatial.Display.SpatialRect rect)
					{
						EarthView_World_Spatial2D_Controls_CTrackingImageItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, ref state, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
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
					private static extern int EarthView_World_Spatial2D_Controls_CTrackingImageItem_type_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取追踪项类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>对象类型</returns>
					public new int EVType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_Controls_CTrackingImageItem_type_ev_int32_NoVirtual(this.NativeObject);
						
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
					private static extern int EarthView_World_Spatial2D_Controls_CTrackingImageItem_type_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取追踪项类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>对象类型</returns>
					public override int EVType()
					{
						int ret=EarthView_World_Spatial2D_Controls_CTrackingImageItem_type_ev_int32(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingImageItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x, double y);

					/// <summary>
					/// 判断包含操作
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <returns>true，包含，false不包含</returns>
					public new bool IsContains_NoVirtual(double x, double y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingImageItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(this.NativeObject, x, y);
						
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
					private static extern byte EarthView_World_Spatial2D_Controls_CTrackingImageItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y);

					/// <summary>
					/// 判断包含操作
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <returns>true，包含，false不包含</returns>
					public override bool IsContains(double x, double y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CTrackingImageItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, x, y);
						
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
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingImageItem_setImage_void_IBitmap(IntPtr pNativeObject, IntPtr bitmap);

					/// <summary>
					/// 设置图像,内部保存了一个副本
					/// </summary>
					/// <param name="geo">几何体指针</param>
					/// <returns></returns>
					public void SetImage(EarthView.World.Display.Ibitmap bitmap)
					{
						EarthView_World_Spatial2D_Controls_CTrackingImageItem_setImage_void_IBitmap(this.NativeObject, object.Equals(bitmap, null) ? IntPtr.Zero : bitmap.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CTrackingImageItem_getImageRef_IBitmap(IntPtr pNativeObject);

					/// <summary>
					/// 获取图像
					/// </summary>
					/// <param name=""></param>
					/// <returns>图像</returns>
					public EarthView.World.Display.Ibitmap GetImageRef()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CTrackingImageItem_getImageRef_IBitmap(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Display.Ibitmap csObj = new EarthView.World.Display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IBitmap");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Display.Ibitmap;
							csObj.BindNativeObject(__ptr, "IBitmap");
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
					private static extern void EarthView_World_Spatial2D_Controls_CTrackingImageItem_setRotation_void_ev_real64(IntPtr pNativeObject, double rotation);

					/// <summary>
					/// 设置旋转角度
					/// </summary>
					/// <param name="rotation">旋转角度</param>
					/// <returns></returns>
					public void SetRotation(double rotation)
					{
						EarthView_World_Spatial2D_Controls_CTrackingImageItem_setRotation_void_ev_real64(this.NativeObject, rotation);
						
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
					private static extern double EarthView_World_Spatial2D_Controls_CTrackingImageItem_getRotation_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取图像
					/// </summary>
					/// <param name=""></param>
					/// <returns>图像</returns>
					public double GetRotation()
					{
						double ret=EarthView_World_Spatial2D_Controls_CTrackingImageItem_getRotation_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTrackingImageItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingImageItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTrackingImageItem = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadTrackingImageItem = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadTrackingImageItem = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadTrackingImageItem = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTrackingImageItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingImageItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadTrackingImageItem = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadTrackingImageItem = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadTrackingImageItem = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadTrackingImageItem = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingImageItem", new TrackingImageItemClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CTrackingImageItemProxy", new TrackingImageItemClassFactory());

					public TrackingImageItem(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingImageItem_boundingRect_CSpatialRect(IntPtr pObject, boundingRect_CallBack_CSpatialRect pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingImageItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(IntPtr pObject, paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingImageItem_isContains_ev_bool_ev_real64_ev_real64(IntPtr pObject, isContains_CallBack_ev_bool_ev_real64_ev_real64 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingImageItem_type_ev_int32(IntPtr pObject, type_CallBack_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_boundingRect_CallBack_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Function;
							GC.KeepAlive(m_boundingRect_CallBack_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingImageItem_boundingRect_CSpatialRect(this.NativeObject, m_boundingRect_CallBack_CSpatialRect);
							m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect = EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Function;
							GC.KeepAlive(m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingImageItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.NativeObject, m_paint_CallBack_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect);
							m_isContains_CallBack_ev_bool_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingImageItem_isContains_ev_bool_ev_real64_ev_real64(this.NativeObject, m_isContains_CallBack_ev_bool_ev_real64_ev_real64);
							m_type_CallBack_ev_int32 = EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Function;
							GC.KeepAlive(m_type_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingImageItem_type_ev_int32(this.NativeObject, m_type_CallBack_ev_int32);
						}
					}
					public static TrackingImageItem FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TrackingImageItem obj = baseObj as  TrackingImageItem;
						if (object.Equals(obj, null))
						{
							obj = new TrackingImageItem(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTrackingImageItem");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TrackingImageItemClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TrackingImageItem emptyInstance = new TrackingImageItem(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
