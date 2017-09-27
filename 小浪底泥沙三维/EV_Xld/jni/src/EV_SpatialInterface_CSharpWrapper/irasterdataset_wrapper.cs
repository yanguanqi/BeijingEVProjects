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
			namespace Raster
			{
				///<summary>
				///EVIOFlag
				///读写枚举
				///</summary>
				public enum EVIOFLAG
				{
								IO_READ = 0,
								IO_WRITE = 1
				
				}

				///<summary>
				///EarthView::World::Spatial2D::Raster::CAffineTransform
				///仿射变换信息 
				///</summary>
				public class AffineTransform : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///默认构造函数
					///</summary>
					public AffineTransform() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAffineTransform",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///赋值构造函数
					///</summary>
					/// <param name="dfUpLeftX">左上角起点坐标</param>
					/// <param name="dfResolutionX">X方向分辨率</param>
					/// <param name="dfRotateX">X轴方向旋转量</param>
					/// <param name="dfUpLeftY">左上角起点Y坐标</param>
					/// <param name="dfRotateY">Y轴方向旋转量</param>
					/// <param name="dfResolutionY">Y方向分辨率</param>
					public AffineTransform(double dfUpLeftX, double dfResolutionX, double dfRotateX, double dfUpLeftY, double dfRotateY, double dfResolutionY) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedfUpLeftX = new BasePtr(dfUpLeftX);
						list.Add("dfUpLeftX", valuedfUpLeftX.PtrVal);
						BasePtr valuedfResolutionX = new BasePtr(dfResolutionX);
						list.Add("dfResolutionX", valuedfResolutionX.PtrVal);
						BasePtr valuedfRotateX = new BasePtr(dfRotateX);
						list.Add("dfRotateX", valuedfRotateX.PtrVal);
						BasePtr valuedfUpLeftY = new BasePtr(dfUpLeftY);
						list.Add("dfUpLeftY", valuedfUpLeftY.PtrVal);
						BasePtr valuedfRotateY = new BasePtr(dfRotateY);
						list.Add("dfRotateY", valuedfRotateY.PtrVal);
						BasePtr valuedfResolutionY = new BasePtr(dfResolutionY);
						list.Add("dfResolutionY", valuedfResolutionY.PtrVal);
						Create("CAffineTransform", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///赋值构造函数
					///</summary>
					public AffineTransform(double[] dfGeoTransform) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedfGeoTransform = new BasePtr(dfGeoTransform);
						list.Add("dfGeoTransform", valuedfGeoTransform.PtrVal);
						Create("CAffineTransform", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Raster_CAffineTransform_getUpLeftX_ev_real64(IntPtr pNativeObject);

					///<summary>
					///获取左上角X坐标
					///</summary>
					///<returns>左上角X坐标</returns>
					public double GetUpLeftX()
					{
						double ret=EarthView_World_Spatial2D_Raster_CAffineTransform_getUpLeftX_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Raster_CAffineTransform_getUpLeftY_ev_real64(IntPtr pNativeObject);

					///<summary>
					///获取左上角Y坐标
					///</summary>
					///<returns>左上角Y坐标</returns>
					///</summary>
					public double GetUpLeftY()
					{
						double ret=EarthView_World_Spatial2D_Raster_CAffineTransform_getUpLeftY_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Raster_CAffineTransform_getRotateX_ev_real64(IntPtr pNativeObject);

					///<summary>
					///获取X方向旋转量
					///</summary>
					///<returns>X方向旋转量</returns>
					public double GetRotateX()
					{
						double ret=EarthView_World_Spatial2D_Raster_CAffineTransform_getRotateX_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Raster_CAffineTransform_getRotateY_ev_real64(IntPtr pNativeObject);

					///<summary>
					///获取Y方向旋转量
					///</summary>
					///<returns>Y方向旋转量</returns>
					public double GetRotateY()
					{
						double ret=EarthView_World_Spatial2D_Raster_CAffineTransform_getRotateY_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Raster_CAffineTransform_getResolutionX_ev_real64(IntPtr pNativeObject);

					///<summary>
					///获取X方向分辨率
					///</summary>
					///<returns>X方向分辨率</returns>
					public double GetResolutionX()
					{
						double ret=EarthView_World_Spatial2D_Raster_CAffineTransform_getResolutionX_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Raster_CAffineTransform_getResolutionY_ev_real64(IntPtr pNativeObject);

					///<summary>
					///获取Y方向分辨率
					///</summary>
					///<returns>Y方向分辨率</returns>
					public double GetResolutionY()
					{
						double ret=EarthView_World_Spatial2D_Raster_CAffineTransform_getResolutionY_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CAffineTransform_getGeoTransFormParameter_ev_real64(IntPtr pNativeObject);

					///<summary>
					///获取仿射变换参数指针
					///</summary>
					///<returns>参数指针,不能在外部释放</returns>
					public IntPtr GetGeoTransFormParameter()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CAffineTransform_getGeoTransFormParameter_ev_real64(this.NativeObject);
						
						return __ptr;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CAffineTransform_OperatorAssign_CAffineTransform_CAffineTransform(IntPtr pNativeObject, IntPtr objAffine);

					///<summary>
					///赋值操作符
					///</summary>
					public EarthView.World.Spatial2D.Raster.AffineTransform OperatorAssign(EarthView.World.Spatial2D.Raster.AffineTransform objAffine)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CAffineTransform_OperatorAssign_CAffineTransform_CAffineTransform(this.NativeObject, object.Equals(objAffine, null) ? IntPtr.Zero : objAffine.NativeObject);
						
						EarthView.World.Spatial2D.Raster.AffineTransform csObj = new EarthView.World.Spatial2D.Raster.AffineTransform(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAffineTransform");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.AffineTransform;
							csObj.BindNativeObject(__ptr, "CAffineTransform");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					///<summary>
					///拷贝构造函数
					///</summary>
					public AffineTransform(EarthView.World.Spatial2D.Raster.AffineTransform objAffine) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueobjAffine = new BasePtr(objAffine);
						list.Add("objAffine", valueobjAffine.PtrVal);
						Create("CAffineTransform", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Raster_CAffineTransform_geoToPixel_void_ev_real64_ev_real64(IntPtr pNativeObject, ref double dfX, ref double dfY);

					///<summary>
					///坐标变换，地理坐标到图像坐标
					///</summary>
					/// <param name="dfX">输入地理坐标X，返回图像坐标X</param>
					/// <param name="dfY">输入地理坐标Y，返回图像坐标Y</param>
					public void GeoToPixel(ref double dfX, ref double dfY)
					{
						EarthView_World_Spatial2D_Raster_CAffineTransform_geoToPixel_void_ev_real64_ev_real64(this.NativeObject, ref dfX, ref dfY);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Raster_CAffineTransform_pixelToGeo_void_ev_real64_ev_real64(IntPtr pNativeObject, ref double dfX, ref double dfY);

					///<summary>
					///坐标变换，图像坐标到地理坐标
					///</summary>
					/// <param name="dfX">输入图像坐标X，返回地理坐标X</param>
					/// <param name="dfY">输入图像坐标Y，返回地理坐标Y</param>
					public void PixelToGeo(ref double dfX, ref double dfY)
					{
						EarthView_World_Spatial2D_Raster_CAffineTransform_pixelToGeo_void_ev_real64_ev_real64(this.NativeObject, ref dfX, ref dfY);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAffineTransform = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadAffineTransform = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadAffineTransform = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadAffineTransform = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CAffineTransform", new AffineTransformClassFactory());

					public AffineTransform(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static AffineTransform FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AffineTransform obj = baseObj as  AffineTransform;
						if (object.Equals(obj, null))
						{
							obj = new AffineTransform(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAffineTransform");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AffineTransformClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AffineTransform emptyInstance = new AffineTransform(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

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
			namespace GeoDataset
			{
				///<summary>
				///常用的数据的存储精度
				///枚举操作权限
				///</summary>
				public enum EVRASTERDATATYPE
				{
								RDT_Unknown = 0,
								RDT_Byte = 1,
								RDT_UInt16 = 2,
								RDT_Int16 = 3,
								RDT_UInt32 = 4,
								RDT_Int32 = 5,
								RDT_Float32 = 6,
								RDT_Float64 = 7,
								RDT_CInt16 = 8,
								RDT_CInt32 = 9,
								RDT_CFloat32 = 10,
								RDT_CFloat64 = 11,
								RDT_TypeCount = 12
				
				}

				///<summary>
				/// 栅格数据集基类
				/// </summary>
				public class Irasterdataset : EarthView.World.Spatial.GeoDataset.Idataset
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getRasterRect_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64(ref double dfUpleftX, ref double dfUpleftY, ref double dfDownRightX, ref double dfDownRightY);

					protected getRasterRect_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 m_getRasterRect_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, ref double dfUpleftX, ref double dfUpleftY, ref double dfDownRightX, ref double dfDownRightY);

					///<summary>
					///获取栅格数据集的地理矩形
					///</summary>
					/// <param name="dfUpleftX">左上角X坐标</param>
					/// <param name="dfUpleftY">左上角Y坐标</param>
					/// <param name="dfDownRightX">左上角X坐标</param>
					/// <param name="dfDownRightY">左上角Y坐标</param>
					public virtual void GetRasterRect_NoVirtual(ref double dfUpleftX, ref double dfUpleftY, ref double dfDownRightX, ref double dfDownRightY)
					{
						EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, ref dfUpleftX, ref dfUpleftY, ref dfDownRightX, ref dfDownRightY);
						
					}

					protected  void EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Function(ref double dfUpleftX, ref double dfUpleftY, ref double dfDownRightX, ref double dfDownRightY)
					{
						GetRasterRect(ref dfUpleftX, ref dfUpleftY, ref dfDownRightX, ref dfDownRightY);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, ref double dfUpleftX, ref double dfUpleftY, ref double dfDownRightX, ref double dfDownRightY);

					///<summary>
					///获取栅格数据集的地理矩形
					///</summary>
					/// <param name="dfUpleftX">左上角X坐标</param>
					/// <param name="dfUpleftY">左上角Y坐标</param>
					/// <param name="dfDownRightX">左上角X坐标</param>
					/// <param name="dfDownRightY">左上角Y坐标</param>
					public virtual void GetRasterRect(ref double dfUpleftX, ref double dfUpleftY, ref double dfDownRightX, ref double dfDownRightY)
					{
						EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, ref dfUpleftX, ref dfUpleftY, ref dfDownRightX, ref dfDownRightY);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getRasterWidth_CallBack_ev_int32();

					protected getRasterWidth_CallBack_ev_int32 m_getRasterWidth_CallBack_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取栅格之宽度
					///</summary>
					public virtual int GetRasterWidth_NoVirtual()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Function()
					{
						int csret=GetRasterWidth();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32(IntPtr pNativeObject);

					///<summary>
					///获取栅格之宽度
					///</summary>
					public virtual int GetRasterWidth()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getRasterHeight_CallBack_ev_int32();

					protected getRasterHeight_CallBack_ev_int32 m_getRasterHeight_CallBack_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取栅格之高度
					///</summary>
					public virtual int GetRasterHeight_NoVirtual()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Function()
					{
						int csret=GetRasterHeight();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32(IntPtr pNativeObject);

					///<summary>
					///获取栅格之高度
					///</summary>
					public virtual int GetRasterHeight()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getBandCount_CallBack_ev_int32();

					protected getBandCount_CallBack_ev_int32 m_getBandCount_CallBack_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取波段数
					///</summary>
					public virtual int GetBandCount_NoVirtual()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Function()
					{
						int csret=GetBandCount();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32(IntPtr pNativeObject);

					///<summary>
					///获取波段数
					///</summary>
					public virtual int GetBandCount()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getGeoTransform_CallBack_CAffineTransform();

					protected getGeoTransform_CallBack_CAffineTransform m_getGeoTransform_CallBack_CAffineTransform;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取仿射变换参数
					///</summary>
					public virtual EarthView.World.Spatial2D.Raster.AffineTransform GetGeoTransform_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.AffineTransform csObj = new EarthView.World.Spatial2D.Raster.AffineTransform(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAffineTransform");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.AffineTransform;
							csObj.BindNativeObject(__ptr, "CAffineTransform");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Function()
					{
						EarthView.World.Spatial2D.Raster.AffineTransform csret=GetGeoTransform();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform(IntPtr pNativeObject);

					///<summary>
					///获取仿射变换参数
					///</summary>
					public virtual EarthView.World.Spatial2D.Raster.AffineTransform GetGeoTransform()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.AffineTransform csObj = new EarthView.World.Spatial2D.Raster.AffineTransform(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAffineTransform");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.AffineTransform;
							csObj.BindNativeObject(__ptr, "CAffineTransform");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getRasterDataType_CallBack_EVRasterDataType();

					protected getRasterDataType_CallBack_EVRasterDataType m_getRasterDataType_CallBack_EVRasterDataType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取栅格数据类型
					///</summary>
					public virtual EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE GetRasterDataType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE)ret;
						
					}

					protected  int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Function()
					{
						EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE csret=GetRasterDataType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType(IntPtr pNativeObject);

					///<summary>
					///获取栅格数据类型
					///</summary>
					public virtual EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE GetRasterDataType()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType(this.NativeObject);
						
						return (EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE)ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getSpatialReferenceWkt_CallBack_void_EVString(ref IntPtr strWKT);

					protected getSpatialReferenceWkt_CallBack_void_EVString m_getSpatialReferenceWkt_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_NoVirtual(IntPtr pNativeObject, ref IntPtr strWKT);

					///<summary>
					///获取数据集的空间参考
					///</summary>
					/// <param name="strWKT">空间参考的字符串表示</param>
					public virtual void GetSpatialReferenceWkt_NoVirtual(ref string strWKT)
					{
						IntPtr __ptrstrWKT=Marshal.StringToHGlobalAnsi(strWKT);
						IntPtr pTmpstrWKT=__ptrstrWKT;
						
						EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_NoVirtual(this.NativeObject, ref __ptrstrWKT);
						
						 Marshal.FreeHGlobal(pTmpstrWKT);
						strWKT= Marshal.PtrToStringAnsi(__ptrstrWKT);
						ClassFactory.FreeString(ref __ptrstrWKT);
						
					}

					protected  void EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Function(ref IntPtr strWKT)
					{
						string strstrWKT= Marshal.PtrToStringAnsi(strWKT);
						ClassFactory.FreeString(ref strWKT);
						
						GetSpatialReferenceWkt(ref strstrWKT);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString(IntPtr pNativeObject, ref IntPtr strWKT);

					///<summary>
					///获取数据集的空间参考
					///</summary>
					/// <param name="strWKT">空间参考的字符串表示</param>
					public virtual void GetSpatialReferenceWkt(ref string strWKT)
					{
						IntPtr __ptrstrWKT = Marshal.StringToHGlobalAnsi(strWKT);
						IntPtr pTmpstrWKT = __ptrstrWKT;
						
						EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString(this.NativeObject, ref __ptrstrWKT);
						
						 Marshal.FreeHGlobal(pTmpstrWKT);
						strWKT= Marshal.PtrToStringAnsi(__ptrstrWKT);
						ClassFactory.FreeString(ref __ptrstrWKT);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setSpatialReference_CallBack_void_EVString(ref IntPtr strWKT);

					protected setSpatialReference_CallBack_void_EVString m_setSpatialReference_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_NoVirtual(IntPtr pNativeObject, string strWKT);

					///<summary>
					///设置栅格数据集的空间参考
					///</summary>
					/// <param name="strWKT">空间参考的WKT字符串描述</param>
					public virtual void SetSpatialReference_NoVirtual(string strWKT)
					{
						EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_NoVirtual(this.NativeObject, strWKT);
						
					}

					protected  void EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Function(ref IntPtr strWKT)
					{
						string strstrWKT= Marshal.PtrToStringAnsi(strWKT);
						ClassFactory.FreeString(ref strWKT);
						
						SetSpatialReference(strstrWKT);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString(IntPtr pNativeObject, string strWKT);

					///<summary>
					///设置栅格数据集的空间参考
					///</summary>
					/// <param name="strWKT">空间参考的WKT字符串描述</param>
					public virtual void SetSpatialReference(string strWKT)
					{
						EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString(this.NativeObject, strWKT);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte read_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pDstRaster, uint upRow, uint leftCol, uint downRow, uint rightCol);

					protected read_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32 m_read_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr pDstRaster, uint upRow, uint leftCol, uint downRow, uint rightCol);

					///<summary>
					///读取栅格数据
					///如果栅格对象设置了地理参数，则根据地理范围读取数据（行列号可全部设置为0），
					///否则，根据行列号范围读取
					///</summary>
					/// <param name="pDstRaster">目标栅格块对象</param>
					/// <param name="upRow">左上角像素行号（从0开始）</param>
					/// <param name="leftCol">左上角像素列号（从0开始）</param>
					/// <param name="downRow">右下角行号</param>
					/// <param name="rightCol">右下角列号</param>
					public virtual bool Read_NoVirtual(EarthView.World.Spatial2D.Raster.Irasterblock pDstRaster, uint upRow, uint leftCol, uint downRow, uint rightCol)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, object.Equals(pDstRaster, null) ? IntPtr.Zero : pDstRaster.NativeObject, upRow, leftCol, downRow, rightCol);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Function(IntPtr pDstRaster, uint upRow, uint leftCol, uint downRow, uint rightCol)
					{
						EarthView.World.Spatial2D.Raster.Irasterblock csobj_pDstRaster = new EarthView.World.Spatial2D.Raster.Irasterblock(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pDstRaster.BindNativeObject(pDstRaster,"IRasterBlock");
						csobj_pDstRaster.Delegate = true;
						IClassFactory csobj_pDstRasterClassFactory = GlobalClassFactoryMap.Get(csobj_pDstRaster.GetCppInstanceTypeName());
						if (csobj_pDstRasterClassFactory != null)
						{
							csobj_pDstRaster.Delegate = true;
							csobj_pDstRaster = csobj_pDstRasterClassFactory.Create() as EarthView.World.Spatial2D.Raster.Irasterblock;
							csobj_pDstRaster.BindNativeObject(pDstRaster, "IRasterBlock");
							csobj_pDstRaster.Delegate = true;
						}
						
						bool csret=Read(csobj_pDstRaster, upRow, leftCol, downRow, rightCol);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr pDstRaster, uint upRow, uint leftCol, uint downRow, uint rightCol);

					///<summary>
					///读取栅格数据
					///如果栅格对象设置了地理参数，则根据地理范围读取数据（行列号可全部设置为0），
					///否则，根据行列号范围读取
					///</summary>
					/// <param name="pDstRaster">目标栅格块对象</param>
					/// <param name="upRow">左上角像素行号（从0开始）</param>
					/// <param name="leftCol">左上角像素列号（从0开始）</param>
					/// <param name="downRow">右下角行号</param>
					/// <param name="rightCol">右下角列号</param>
					public virtual bool Read(EarthView.World.Spatial2D.Raster.Irasterblock pDstRaster, uint upRow, uint leftCol, uint downRow, uint rightCol)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, object.Equals(pDstRaster, null) ? IntPtr.Zero : pDstRaster.NativeObject, upRow, leftCol, downRow, rightCol);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte write_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pSrcRaster, uint upRow, uint leftCol, uint downRow, uint rightCol);

					protected write_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32 m_write_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr pSrcRaster, uint upRow, uint leftCol, uint downRow, uint rightCol);

					///<summary>
					///将栅格块对象中的数据写入栅格数据集
					///如果栅格对象设置了地理参数，则根据地理范围写入数据集（行列号可全部设置为0），
					///否则，根据行列号范围写入
					///</summary>
					/// <param name="pSrcRaster">待写入的栅格块对象</param>
					/// <param name="upRow">左上角像素行号（从0开始）</param>
					/// <param name="leftCol">左上角像素列号（从0开始）</param>
					/// <param name="downRow">右下角行号</param>
					/// <param name="rightCol">右下角列号</param>
					public virtual bool Write_NoVirtual(EarthView.World.Spatial2D.Raster.Irasterblock pSrcRaster, uint upRow, uint leftCol, uint downRow, uint rightCol)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, object.Equals(pSrcRaster, null) ? IntPtr.Zero : pSrcRaster.NativeObject, upRow, leftCol, downRow, rightCol);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Function(IntPtr pSrcRaster, uint upRow, uint leftCol, uint downRow, uint rightCol)
					{
						EarthView.World.Spatial2D.Raster.Irasterblock csobj_pSrcRaster = new EarthView.World.Spatial2D.Raster.Irasterblock(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pSrcRaster.BindNativeObject(pSrcRaster,"IRasterBlock");
						csobj_pSrcRaster.Delegate = true;
						IClassFactory csobj_pSrcRasterClassFactory = GlobalClassFactoryMap.Get(csobj_pSrcRaster.GetCppInstanceTypeName());
						if (csobj_pSrcRasterClassFactory != null)
						{
							csobj_pSrcRaster.Delegate = true;
							csobj_pSrcRaster = csobj_pSrcRasterClassFactory.Create() as EarthView.World.Spatial2D.Raster.Irasterblock;
							csobj_pSrcRaster.BindNativeObject(pSrcRaster, "IRasterBlock");
							csobj_pSrcRaster.Delegate = true;
						}
						
						bool csret=Write(csobj_pSrcRaster, upRow, leftCol, downRow, rightCol);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr pSrcRaster, uint upRow, uint leftCol, uint downRow, uint rightCol);

					///<summary>
					///将栅格块对象中的数据写入栅格数据集
					///如果栅格对象设置了地理参数，则根据地理范围写入数据集（行列号可全部设置为0），
					///否则，根据行列号范围写入
					///</summary>
					/// <param name="pSrcRaster">待写入的栅格块对象</param>
					/// <param name="upRow">左上角像素行号（从0开始）</param>
					/// <param name="leftCol">左上角像素列号（从0开始）</param>
					/// <param name="downRow">右下角行号</param>
					/// <param name="rightCol">右下角列号</param>
					public virtual bool Write(EarthView.World.Spatial2D.Raster.Irasterblock pSrcRaster, uint upRow, uint leftCol, uint downRow, uint rightCol)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, object.Equals(pSrcRaster, null) ? IntPtr.Zero : pSrcRaster.NativeObject, upRow, leftCol, downRow, rightCol);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void read_CallBack_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(ref IntPtr strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, IntPtr pBuffer);

					protected read_CallBack_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte m_read_CallBack_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_NoVirtual(IntPtr pNativeObject, string strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, IntPtr pBuffer);

					/// <summary>
					/// 从栅格数据集中读取一块指定坐标系、大小、分辨率以及左上角坐标的数据
					/// </summary>
					/// <param name="spatialRef">目标坐标系的WKT字符串</param>
					/// <param name="lefttopX">目标数据的左上角X坐标</param>
					/// <param name="lefttopY">目标数据的左上角Y坐标</param>
					/// <param name="resolutionX">X方向分辨率</param>
					/// <param name="resolutionY">Y方向分辨率</param>
					/// <param name="xSize">X方向大小（宽度）</param>
					/// <param name="ySize">Y方向大小（高度）</param>
					/// <param name="nBands">波段数</param>
					/// <param name="pBandIndex">波段索引数组</param>
					/// <param name="pBuffer">存放读取数据的缓冲区，缓冲区大小为宽度 * 高度 * 像素占字节数 * 波段数</param>
					public virtual void Read_NoVirtual(string strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, IntPtr pBuffer)
					{
						EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_NoVirtual(this.NativeObject, strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
						
					}

					protected  void EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Function(ref IntPtr strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, IntPtr pBuffer)
					{
						string strstrWKT= Marshal.PtrToStringAnsi(strWKT);
						ClassFactory.FreeString(ref strWKT);
						
						Read(strstrWKT,lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(IntPtr pNativeObject, string strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, IntPtr pBuffer);

					/// <summary>
					/// 从栅格数据集中读取一块指定坐标系、大小、分辨率以及左上角坐标的数据
					/// </summary>
					/// <param name="spatialRef">目标坐标系的WKT字符串</param>
					/// <param name="lefttopX">目标数据的左上角X坐标</param>
					/// <param name="lefttopY">目标数据的左上角Y坐标</param>
					/// <param name="resolutionX">X方向分辨率</param>
					/// <param name="resolutionY">Y方向分辨率</param>
					/// <param name="xSize">X方向大小（宽度）</param>
					/// <param name="ySize">Y方向大小（高度）</param>
					/// <param name="nBands">波段数</param>
					/// <param name="pBandIndex">波段索引数组</param>
					/// <param name="pBuffer">存放读取数据的缓冲区，缓冲区大小为宽度 * 高度 * 像素占字节数 * 波段数</param>
					public virtual void Read(string strWKT, double lefttopX, double lefttopY, double resolutionX, double resolutionY, int xSize, int ySize, IntPtr pBuffer)
					{
						EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(this.NativeObject, strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte buildOverViews_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(int ibandCount, IntPtr piBandIndex, int nLevelCount, IntPtr piLevelIndex, IntPtr pDataProgress);

					protected buildOverViews_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo m_buildOverViews_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_NoVirtual(IntPtr pNativeObject, int ibandCount, IntPtr piBandIndex, int nLevelCount, IntPtr piLevelIndex, IntPtr pDataProgress);

					///<summary>
					///创建金字塔影像,img格式影像要求打开时候为Update，否则
					///创建金子塔会失败 
					///</summary>
					/// <param name="ibandCount">波段数</param>
					/// <param name="piBandIndex">波段索引</param>
					/// <param name="nLevelCount">金字塔级别数</param>
					/// <param name="piLevelIndex">金字塔级别索引</param>
					/// <param name="pfnProgress">函数指针</param>
					/// <param name="pDataProgress">进度相关数据</param>
					/// <returns>1,成功 0，失败</returns>
					public virtual bool BuildOverViews_NoVirtual(int ibandCount, IntPtr piBandIndex, int nLevelCount, IntPtr piLevelIndex, EarthView.World.Spatial2D.Raster.ProgressInfo pDataProgress)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_NoVirtual(this.NativeObject, ibandCount, piBandIndex, nLevelCount, piLevelIndex, object.Equals(pDataProgress, null) ? IntPtr.Zero : pDataProgress.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Function(int ibandCount, IntPtr piBandIndex, int nLevelCount, IntPtr piLevelIndex, IntPtr pDataProgress)
					{
						EarthView.World.Spatial2D.Raster.ProgressInfo csobj_pDataProgress = new EarthView.World.Spatial2D.Raster.ProgressInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pDataProgress.BindNativeObject(pDataProgress,"CProgressInfo");
						csobj_pDataProgress.Delegate = true;
						IClassFactory csobj_pDataProgressClassFactory = GlobalClassFactoryMap.Get(csobj_pDataProgress.GetCppInstanceTypeName());
						if (csobj_pDataProgressClassFactory != null)
						{
							csobj_pDataProgress.Delegate = true;
							csobj_pDataProgress = csobj_pDataProgressClassFactory.Create() as EarthView.World.Spatial2D.Raster.ProgressInfo;
							csobj_pDataProgress.BindNativeObject(pDataProgress, "CProgressInfo");
							csobj_pDataProgress.Delegate = true;
						}
						
						bool csret=BuildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, csobj_pDataProgress);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(IntPtr pNativeObject, int ibandCount, IntPtr piBandIndex, int nLevelCount, IntPtr piLevelIndex, IntPtr pDataProgress);

					///<summary>
					///创建金字塔影像,img格式影像要求打开时候为Update，否则
					///创建金子塔会失败 
					///</summary>
					/// <param name="ibandCount">波段数</param>
					/// <param name="piBandIndex">波段索引</param>
					/// <param name="nLevelCount">金字塔级别数</param>
					/// <param name="piLevelIndex">金字塔级别索引</param>
					/// <param name="pfnProgress">函数指针</param>
					/// <param name="pDataProgress">进度相关数据</param>
					/// <returns>1,成功 0，失败</returns>
					public virtual bool BuildOverViews(int ibandCount, IntPtr piBandIndex, int nLevelCount, IntPtr piLevelIndex, EarthView.World.Spatial2D.Raster.ProgressInfo pDataProgress)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(this.NativeObject, ibandCount, piBandIndex, nLevelCount, piLevelIndex, object.Equals(pDataProgress, null) ? IntPtr.Zero : pDataProgress.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte buildDefaultOverViews_CallBack_ev_bool_CProgressInfo(IntPtr pDataProgress);

					protected buildDefaultOverViews_CallBack_ev_bool_CProgressInfo m_buildDefaultOverViews_CallBack_ev_bool_CProgressInfo;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_NoVirtual(IntPtr pNativeObject, IntPtr pDataProgress);

					///<summary>
					///创建默认金字塔影像
					///</summary>
					/// <param name="pDataProgress">进度相关数据</param>
					/// <returns>1,成功 0，失败</returns>
					public virtual bool BuildDefaultOverViews_NoVirtual(EarthView.World.Spatial2D.Raster.ProgressInfo pDataProgress)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_NoVirtual(this.NativeObject, object.Equals(pDataProgress, null) ? IntPtr.Zero : pDataProgress.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Function(IntPtr pDataProgress)
					{
						EarthView.World.Spatial2D.Raster.ProgressInfo csobj_pDataProgress = new EarthView.World.Spatial2D.Raster.ProgressInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pDataProgress.BindNativeObject(pDataProgress,"CProgressInfo");
						csobj_pDataProgress.Delegate = true;
						IClassFactory csobj_pDataProgressClassFactory = GlobalClassFactoryMap.Get(csobj_pDataProgress.GetCppInstanceTypeName());
						if (csobj_pDataProgressClassFactory != null)
						{
							csobj_pDataProgress.Delegate = true;
							csobj_pDataProgress = csobj_pDataProgressClassFactory.Create() as EarthView.World.Spatial2D.Raster.ProgressInfo;
							csobj_pDataProgress.BindNativeObject(pDataProgress, "CProgressInfo");
							csobj_pDataProgress.Delegate = true;
						}
						
						bool csret=BuildDefaultOverViews(csobj_pDataProgress);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(IntPtr pNativeObject, IntPtr pDataProgress);

					///<summary>
					///创建默认金字塔影像
					///</summary>
					/// <param name="pDataProgress">进度相关数据</param>
					/// <returns>1,成功 0，失败</returns>
					public virtual bool BuildDefaultOverViews(EarthView.World.Spatial2D.Raster.ProgressInfo pDataProgress)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(this.NativeObject, object.Equals(pDataProgress, null) ? IntPtr.Zero : pDataProgress.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte rasterIO_CallBack_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(EarthView.World.Spatial2D.Raster.EVIOFLAG bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, IntPtr pIbandIndex, IntPtr pDstBuffer, int iBufferWidth, int iBufferHeight, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType);

					protected rasterIO_CallBack_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType m_rasterIO_CallBack_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial2D.Raster.EVIOFLAG bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, IntPtr pIbandIndex, IntPtr pDstBuffer, int iBufferWidth, int iBufferHeight, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType);

					///<summary>
					///读取栅格数据集图像数据
					///</summary>
					/// <param name="bflag">0,表示读；1，表示写</param>
					/// <param name="iOffsetX">X方向起点坐标</param>
					/// <param name="iOffsetY">Y方向起点坐标</param>
					/// <param name="iImageWidth">读取图像块的宽度</param>
					/// <param name="iImageHeight">读取图像块的高度</param>
					/// <param name="iBandCount">波段数</param>
					/// <param name="pIbandIndex">波段索引指针</param>
					/// <param name="pDstBuffer">目标缓存，用来存储读取的图像数据</param>
					/// <param name="iBufferWidth">缓存宽度</param>
					/// <param name="iBufferHeight">缓存高度</param>
					/// <param name="eDataType">缓存数据类型</param>
					/// <returns>0，表示失败；1，表示成功</returns>
					public virtual bool RasterIO_NoVirtual(EarthView.World.Spatial2D.Raster.EVIOFLAG bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, IntPtr pIbandIndex, IntPtr pDstBuffer, int iBufferWidth, int iBufferHeight, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_NoVirtual(this.NativeObject, bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Function(EarthView.World.Spatial2D.Raster.EVIOFLAG bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, IntPtr pIbandIndex, IntPtr pDstBuffer, int iBufferWidth, int iBufferHeight, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType)
					{
						bool csret=RasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(IntPtr pNativeObject, EarthView.World.Spatial2D.Raster.EVIOFLAG bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, IntPtr pIbandIndex, IntPtr pDstBuffer, int iBufferWidth, int iBufferHeight, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType);

					///<summary>
					///读取栅格数据集图像数据
					///</summary>
					/// <param name="bflag">0,表示读；1，表示写</param>
					/// <param name="iOffsetX">X方向起点坐标</param>
					/// <param name="iOffsetY">Y方向起点坐标</param>
					/// <param name="iImageWidth">读取图像块的宽度</param>
					/// <param name="iImageHeight">读取图像块的高度</param>
					/// <param name="iBandCount">波段数</param>
					/// <param name="pIbandIndex">波段索引指针</param>
					/// <param name="pDstBuffer">目标缓存，用来存储读取的图像数据</param>
					/// <param name="iBufferWidth">缓存宽度</param>
					/// <param name="iBufferHeight">缓存高度</param>
					/// <param name="eDataType">缓存数据类型</param>
					/// <returns>0，表示失败；1，表示成功</returns>
					public virtual bool RasterIO(EarthView.World.Spatial2D.Raster.EVIOFLAG bflag, int iOffsetX, int iOffsetY, int iImageWidth, int iImageHeight, int iBandCount, IntPtr pIbandIndex, IntPtr pDstBuffer, int iBufferWidth, int iBufferHeight, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(this.NativeObject, bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIrasterdataset = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IRasterDataset", new IrasterdatasetClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IRasterDatasetProxy", new IrasterdatasetClassFactory());

					public Irasterdataset(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getRasterRect_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32(IntPtr pObject, getRasterWidth_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32(IntPtr pObject, getRasterHeight_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32(IntPtr pObject, getBandCount_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform(IntPtr pObject, getGeoTransform_CallBack_CAffineTransform pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType(IntPtr pObject, getRasterDataType_CallBack_EVRasterDataType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString(IntPtr pObject, getSpatialReferenceWkt_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString(IntPtr pObject, setSpatialReference_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pObject, read_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pObject, write_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(IntPtr pObject, read_CallBack_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(IntPtr pObject, buildOverViews_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(IntPtr pObject, buildDefaultOverViews_CallBack_ev_bool_CProgressInfo pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(IntPtr pObject, rasterIO_CallBack_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType(IntPtr pObject, getType_CallBack_EVDatasetType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64(IntPtr pObject, getDataVersion_CallBack_ev_uint64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString(IntPtr pObject, getUpdateTime_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool(IntPtr pObject, hasSubDataset_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource(IntPtr pObject, getDataSourceRef_CallBack_IDataSource pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool(IntPtr pObject, canEdit_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool(IntPtr pObject, isEditing_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool(IntPtr pObject, startEditing_CallBack_ev_bool_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool(IntPtr pObject, stopEditing_CallBack_ev_bool_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool(IntPtr pObject, isBeginEditingOperation_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool(IntPtr pObject, beginEditingOperation_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool(IntPtr pObject, endEditingOperation_CallBack_ev_bool_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getRasterRect_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getRasterRect_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getRasterRect_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
							m_getRasterWidth_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Function;
							GC.KeepAlive(m_getRasterWidth_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32(this.NativeObject, m_getRasterWidth_CallBack_ev_int32);
							m_getRasterHeight_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Function;
							GC.KeepAlive(m_getRasterHeight_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32(this.NativeObject, m_getRasterHeight_CallBack_ev_int32);
							m_getBandCount_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Function;
							GC.KeepAlive(m_getBandCount_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32(this.NativeObject, m_getBandCount_CallBack_ev_int32);
							m_getGeoTransform_CallBack_CAffineTransform = EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Function;
							GC.KeepAlive(m_getGeoTransform_CallBack_CAffineTransform);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform(this.NativeObject, m_getGeoTransform_CallBack_CAffineTransform);
							m_getRasterDataType_CallBack_EVRasterDataType = EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Function;
							GC.KeepAlive(m_getRasterDataType_CallBack_EVRasterDataType);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType(this.NativeObject, m_getRasterDataType_CallBack_EVRasterDataType);
							m_getSpatialReferenceWkt_CallBack_void_EVString = EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Function;
							GC.KeepAlive(m_getSpatialReferenceWkt_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString(this.NativeObject, m_getSpatialReferenceWkt_CallBack_void_EVString);
							m_setSpatialReference_CallBack_void_EVString = EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Function;
							GC.KeepAlive(m_setSpatialReference_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString(this.NativeObject, m_setSpatialReference_CallBack_void_EVString);
							m_read_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32 = EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Function;
							GC.KeepAlive(m_read_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, m_read_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32);
							m_write_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32 = EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Function;
							GC.KeepAlive(m_write_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, m_write_CallBack_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32);
							m_read_CallBack_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte = EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Function;
							GC.KeepAlive(m_read_CallBack_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(this.NativeObject, m_read_CallBack_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte);
							m_buildOverViews_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo = EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Function;
							GC.KeepAlive(m_buildOverViews_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(this.NativeObject, m_buildOverViews_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo);
							m_buildDefaultOverViews_CallBack_ev_bool_CProgressInfo = EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Function;
							GC.KeepAlive(m_buildDefaultOverViews_CallBack_ev_bool_CProgressInfo);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(this.NativeObject, m_buildDefaultOverViews_CallBack_ev_bool_CProgressInfo);
							m_rasterIO_CallBack_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType = EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Function;
							GC.KeepAlive(m_rasterIO_CallBack_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(this.NativeObject, m_rasterIO_CallBack_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType);
							m_getType_CallBack_EVDatasetType = EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Function;
							GC.KeepAlive(m_getType_CallBack_EVDatasetType);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType(this.NativeObject, m_getType_CallBack_EVDatasetType);
							m_getName_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_getDataVersion_CallBack_ev_uint64 = EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Function;
							GC.KeepAlive(m_getDataVersion_CallBack_ev_uint64);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64(this.NativeObject, m_getDataVersion_CallBack_ev_uint64);
							m_getDescription_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Function;
							GC.KeepAlive(m_getDescription_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
							m_getUpdateTime_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Function;
							GC.KeepAlive(m_getUpdateTime_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString(this.NativeObject, m_getUpdateTime_CallBack_EVString);
							m_hasSubDataset_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Function;
							GC.KeepAlive(m_hasSubDataset_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool(this.NativeObject, m_hasSubDataset_CallBack_ev_bool);
							m_getDataSourceRef_CallBack_IDataSource = EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Function;
							GC.KeepAlive(m_getDataSourceRef_CallBack_IDataSource);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource(this.NativeObject, m_getDataSourceRef_CallBack_IDataSource);
							m_canEdit_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Function;
							GC.KeepAlive(m_canEdit_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool(this.NativeObject, m_canEdit_CallBack_ev_bool);
							m_isEditing_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Function;
							GC.KeepAlive(m_isEditing_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool(this.NativeObject, m_isEditing_CallBack_ev_bool);
							m_startEditing_CallBack_ev_bool_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Function;
							GC.KeepAlive(m_startEditing_CallBack_ev_bool_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool(this.NativeObject, m_startEditing_CallBack_ev_bool_ev_bool);
							m_stopEditing_CallBack_ev_bool_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Function;
							GC.KeepAlive(m_stopEditing_CallBack_ev_bool_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool(this.NativeObject, m_stopEditing_CallBack_ev_bool_ev_bool);
							m_isBeginEditingOperation_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Function;
							GC.KeepAlive(m_isBeginEditingOperation_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool(this.NativeObject, m_isBeginEditingOperation_CallBack_ev_bool);
							m_beginEditingOperation_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Function;
							GC.KeepAlive(m_beginEditingOperation_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool(this.NativeObject, m_beginEditingOperation_CallBack_ev_bool);
							m_endEditingOperation_CallBack_ev_bool_ev_bool = EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Function;
							GC.KeepAlive(m_endEditingOperation_CallBack_ev_bool_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool(this.NativeObject, m_endEditingOperation_CallBack_ev_bool_ev_bool);
						}
					}
					public override EarthView.World.Spatial.GeoDataset.EVDATASETTYPE GetType()
					{
						return base.GetType_NoVirtual();
					}
					public override string GetName()
					{
						return base.GetName_NoVirtual();
					}
					public override ulong GetDataVersion()
					{
						return base.GetDataVersion_NoVirtual();
					}
					public override string GetDescription()
					{
						return base.GetDescription_NoVirtual();
					}
					public override string GetUpdateTime()
					{
						return base.GetUpdateTime_NoVirtual();
					}
					public override bool HasSubDataset()
					{
						return base.HasSubDataset_NoVirtual();
					}
					public override EarthView.World.Spatial.GeoDataset.Idatasource GetDataSourceRef()
					{
						return base.GetDataSourceRef_NoVirtual();
					}
					public override bool CanEdit()
					{
						return base.CanEdit_NoVirtual();
					}
					public override bool IsEditing()
					{
						return base.IsEditing_NoVirtual();
					}
					public override bool StartEditing(bool withUndo)
					{
						return base.StartEditing_NoVirtual(withUndo);
					}
					public override bool StopEditing(bool isSave)
					{
						return base.StopEditing_NoVirtual(isSave);
					}
					public override bool IsBeginEditingOperation()
					{
						return base.IsBeginEditingOperation_NoVirtual();
					}
					public override bool BeginEditingOperation()
					{
						return base.BeginEditingOperation_NoVirtual();
					}
					public override bool EndEditingOperation(bool isConfirm)
					{
						return base.EndEditingOperation_NoVirtual(isConfirm);
					}
					public static Irasterdataset FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Irasterdataset obj = baseObj as  Irasterdataset;
						if (object.Equals(obj, null))
						{
							obj = new Irasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IRasterDataset");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IrasterdatasetClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Irasterdataset emptyInstance = new Irasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
