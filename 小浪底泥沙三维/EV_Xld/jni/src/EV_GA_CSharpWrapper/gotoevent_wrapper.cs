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
				public class GotoEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GotoEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGotoEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					public GotoEvent(EarthView.World.Spatial.Math.Degree latitude, EarthView.World.Spatial.Math.Degree longitude, double timeSpan) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelatitude = new BasePtr(latitude);
						list.Add("latitude", valuelatitude.PtrVal);
						BasePtr valuelongitude = new BasePtr(longitude);
						list.Add("longitude", valuelongitude.PtrVal);
						BasePtr valuetimeSpan = new BasePtr(timeSpan);
						list.Add("timeSpan", valuetimeSpan.PtrVal);
						Create("CGotoEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">海拔</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					public GotoEvent(EarthView.World.Spatial.Math.Degree latitude, EarthView.World.Spatial.Math.Degree longitude, double altitude, double timeSpan) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelatitude = new BasePtr(latitude);
						list.Add("latitude", valuelatitude.PtrVal);
						BasePtr valuelongitude = new BasePtr(longitude);
						list.Add("longitude", valuelongitude.PtrVal);
						BasePtr valuealtitude = new BasePtr(altitude);
						list.Add("altitude", valuealtitude.PtrVal);
						BasePtr valuetimeSpan = new BasePtr(timeSpan);
						list.Add("timeSpan", valuetimeSpan.PtrVal);
						Create("CGotoEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="altitude">海拔</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					public GotoEvent(EarthView.World.Spatial.Math.Degree latitude, EarthView.World.Spatial.Math.Degree longitude, EarthView.World.Spatial.Math.Degree heading, double altitude, double timeSpan) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelatitude = new BasePtr(latitude);
						list.Add("latitude", valuelatitude.PtrVal);
						BasePtr valuelongitude = new BasePtr(longitude);
						list.Add("longitude", valuelongitude.PtrVal);
						BasePtr valueheading = new BasePtr(heading);
						list.Add("heading", valueheading.PtrVal);
						BasePtr valuealtitude = new BasePtr(altitude);
						list.Add("altitude", valuealtitude.PtrVal);
						BasePtr valuetimeSpan = new BasePtr(timeSpan);
						list.Add("timeSpan", valuetimeSpan.PtrVal);
						Create("CGotoEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">海拔</param>
					/// <param name="tilt">倾解</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					public GotoEvent(EarthView.World.Spatial.Math.Degree latitude, EarthView.World.Spatial.Math.Degree longitude, double altitude, EarthView.World.Spatial.Math.Degree tilt, double timeSpan) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelatitude = new BasePtr(latitude);
						list.Add("latitude", valuelatitude.PtrVal);
						BasePtr valuelongitude = new BasePtr(longitude);
						list.Add("longitude", valuelongitude.PtrVal);
						BasePtr valuealtitude = new BasePtr(altitude);
						list.Add("altitude", valuealtitude.PtrVal);
						BasePtr valuetilt = new BasePtr(tilt);
						list.Add("tilt", valuetilt.PtrVal);
						BasePtr valuetimeSpan = new BasePtr(timeSpan);
						list.Add("timeSpan", valuetimeSpan.PtrVal);
						Create("CGotoEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="altitude">海拔</param>
					/// <param name="moditifyAltitude">观察点处的海拔</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					public GotoEvent(EarthView.World.Spatial.Math.Degree latitude, EarthView.World.Spatial.Math.Degree longitude, EarthView.World.Spatial.Math.Degree heading, EarthView.World.Spatial.Math.Degree tilt, double altitude, double modifyAltitude, double timeSpan) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelatitude = new BasePtr(latitude);
						list.Add("latitude", valuelatitude.PtrVal);
						BasePtr valuelongitude = new BasePtr(longitude);
						list.Add("longitude", valuelongitude.PtrVal);
						BasePtr valueheading = new BasePtr(heading);
						list.Add("heading", valueheading.PtrVal);
						BasePtr valuetilt = new BasePtr(tilt);
						list.Add("tilt", valuetilt.PtrVal);
						BasePtr valuealtitude = new BasePtr(altitude);
						list.Add("altitude", valuealtitude.PtrVal);
						BasePtr valuemodifyAltitude = new BasePtr(modifyAltitude);
						list.Add("modifyAltitude", valuemodifyAltitude.PtrVal);
						BasePtr valuetimeSpan = new BasePtr(timeSpan);
						list.Add("timeSpan", valuetimeSpan.PtrVal);
						Create("CGotoEvent", list);
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
					private static extern void EarthView_World_Spatial3D_Controls_CGotoEvent_OperatorAssign_void_CGotoEvent(IntPtr pNativeObject, IntPtr rhs);

					public void OperatorAssign(EarthView.World.Spatial3D.Controls.GotoEvent rhs)
					{
						EarthView_World_Spatial3D_Controls_CGotoEvent_OperatorAssign_void_CGotoEvent(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}

					private EarthView.World.Spatial.Math.Degree mlatitudeField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mlatitude(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mlatitude( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree Mlatitude
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mlatitude(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mlatitudeField, null)){
								mlatitudeField.NativeObject = __ptr;
								return mlatitudeField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mlatitudeField = value;
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mlatitude( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Degree mlongitudeField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mlongitude(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mlongitude( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree Mlongitude
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mlongitude(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mlongitudeField, null)){
								mlongitudeField.NativeObject = __ptr;
								return mlongitudeField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mlongitudeField = value;
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mlongitude( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Degree mheadingField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mheading(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mheading( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree Mheading
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mheading(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mheadingField, null)){
								mheadingField.NativeObject = __ptr;
								return mheadingField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mheadingField = value;
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mheading( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
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
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeHeading(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeHeading( IntPtr pObject, byte value );

					public 					bool MincludeHeading
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeHeading(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeHeading(this.NativeObject,Convert.ToByte(value));
						}
					}

					private EarthView.World.Spatial.Math.Degree mtiltField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mtilt(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mtilt( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree Mtilt
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mtilt(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mtiltField, null)){
								mtiltField.NativeObject = __ptr;
								return mtiltField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mtiltField = value;
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mtilt( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
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
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeTilt(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeTilt( IntPtr pObject, byte value );

					public 					bool MincludeTilt
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeTilt(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeTilt(this.NativeObject,Convert.ToByte(value));
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CGotoEvent_maltitude(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_maltitude( IntPtr pObject, double value );

					public 					double Maltitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CGotoEvent_maltitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_maltitude(this.NativeObject,value);
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
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeAltitude(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeAltitude( IntPtr pObject, byte value );

					public 					bool MincludeAltitude
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeAltitude(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mincludeAltitude(this.NativeObject,Convert.ToByte(value));
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mmodifyAltitude(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mmodifyAltitude( IntPtr pObject, double value );

					public 					double MmodifyAltitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mmodifyAltitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mmodifyAltitude(this.NativeObject,value);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mtimeSpan(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mtimeSpan( IntPtr pObject, double value );

					public 					double MtimeSpan
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mtimeSpan(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mtimeSpan(this.NativeObject,value);
						}
					}

					private EarthView.World.Spatial.Math.Vector3 mTargetField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mTarget(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mTarget( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Vector3 MTarget
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mTarget(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mTargetField, null)){
								mTargetField.NativeObject = __ptr;
								return mTargetField;
							}
							EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mTargetField = value;
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mTarget( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mDistance(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mDistance( IntPtr pObject, double value );

					public 					double MDistance
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mDistance(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mDistance(this.NativeObject,value);
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
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mStopGoto(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mStopGoto( IntPtr pObject, byte value );

					public 					bool MStopGoto
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CGotoEvent_mStopGoto(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGotoEvent_mStopGoto(this.NativeObject,Convert.ToByte(value));
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGotoEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGotoEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGotoEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGotoEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGotoEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGotoEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGotoEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGotoEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGotoEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGotoEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGotoEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGotoEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGotoEvent", new GotoEventClassFactory());

					public GotoEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GotoEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GotoEvent obj = baseObj as  GotoEvent;
						if (object.Equals(obj, null))
						{
							obj = new GotoEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGotoEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GotoEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GotoEvent emptyInstance = new GotoEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GotoEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GotoEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGotoEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GotoEventPtr(EarthView.World.Spatial3D.Controls.GotoEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CGotoEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GotoEventPtr(EarthView.World.Spatial3D.Controls.GotoEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CGotoEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGotoEventPtr_get_CGotoEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.GotoEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGotoEventPtr_get_CGotoEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GotoEvent csObj = new EarthView.World.Spatial3D.Controls.GotoEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGotoEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GotoEvent;
							csObj.BindNativeObject(__ptr, "CGotoEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorAssign_CGotoEventPtr_CGotoEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.GotoEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GotoEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorAssign_CGotoEventPtr_CGotoEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GotoEventPtr csObj = new EarthView.World.Spatial3D.Controls.GotoEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGotoEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GotoEventPtr;
							csObj.BindNativeObject(__ptr, "CGotoEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorAssign_CGotoEventPtr_CGotoEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.GotoEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.GotoEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorAssign_CGotoEventPtr_CGotoEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.GotoEventPtr csObj = new EarthView.World.Spatial3D.Controls.GotoEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGotoEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GotoEventPtr;
							csObj.BindNativeObject(__ptr, "CGotoEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGotoEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGotoEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGotoEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadGotoEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGotoEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGotoEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGotoEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGotoEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGotoEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGotoEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGotoEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGotoEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGotoEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGotoEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGotoEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGotoEventPtr", new GotoEventPtrClassFactory());

					public GotoEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GotoEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GotoEventPtr obj = baseObj as  GotoEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new GotoEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGotoEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GotoEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GotoEventPtr emptyInstance = new GotoEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class LocationEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public LocationEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CLocationEvent",  null);
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
					private static extern void EarthView_World_Spatial3D_Controls_CLocationEvent_OperatorAssign_void_CLocationEvent(IntPtr pNativeObject, IntPtr rhs);

					public void OperatorAssign(EarthView.World.Spatial3D.Controls.LocationEvent rhs)
					{
						EarthView_World_Spatial3D_Controls_CLocationEvent_OperatorAssign_void_CLocationEvent(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}

					private EarthView.World.Spatial.Math.Vector3 mTargetField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mTarget(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mTarget( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Vector3 MTarget
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mTarget(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mTargetField, null)){
								mTargetField.NativeObject = __ptr;
								return mTargetField;
							}
							EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mTargetField = value;
							Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mTarget( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Degree mTiltField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mTilt(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mTilt( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree MTilt
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mTilt(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mTiltField, null)){
								mTiltField.NativeObject = __ptr;
								return mTiltField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mTiltField = value;
							Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mTilt( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Degree mHeadingField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mHeading(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mHeading( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree MHeading
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mHeading(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mHeadingField, null)){
								mHeadingField.NativeObject = __ptr;
								return mHeadingField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mHeadingField = value;
							Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mHeading( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mDistance(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mDistance( IntPtr pObject, double value );

					public 					double MDistance
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mDistance(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mDistance(this.NativeObject,value);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mtimeSpan(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mtimeSpan( IntPtr pObject, double value );

					public 					double MtimeSpan
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CLocationEvent_mtimeSpan(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CLocationEvent_mtimeSpan(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLocationEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadLocationEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLocationEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadLocationEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadLocationEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadLocationEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLocationEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadLocationEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadLocationEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadLocationEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadLocationEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadLocationEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CLocationEvent", new LocationEventClassFactory());

					public LocationEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static LocationEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LocationEvent obj = baseObj as  LocationEvent;
						if (object.Equals(obj, null))
						{
							obj = new LocationEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLocationEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LocationEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LocationEvent emptyInstance = new LocationEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class LocationEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public LocationEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CLocationEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public LocationEventPtr(EarthView.World.Spatial3D.Controls.LocationEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CLocationEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public LocationEventPtr(EarthView.World.Spatial3D.Controls.LocationEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CLocationEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CLocationEventPtr_get_CLocationEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.LocationEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CLocationEventPtr_get_CLocationEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.LocationEvent csObj = new EarthView.World.Spatial3D.Controls.LocationEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLocationEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.LocationEvent;
							csObj.BindNativeObject(__ptr, "CLocationEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorAssign_CLocationEventPtr_CLocationEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.LocationEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.LocationEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorAssign_CLocationEventPtr_CLocationEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.LocationEventPtr csObj = new EarthView.World.Spatial3D.Controls.LocationEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLocationEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.LocationEventPtr;
							csObj.BindNativeObject(__ptr, "CLocationEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorAssign_CLocationEventPtr_CLocationEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.LocationEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.LocationEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorAssign_CLocationEventPtr_CLocationEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.LocationEventPtr csObj = new EarthView.World.Spatial3D.Controls.LocationEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLocationEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.LocationEventPtr;
							csObj.BindNativeObject(__ptr, "CLocationEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CLocationEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CLocationEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CLocationEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadLocationEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadLocationEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLocationEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadLocationEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadLocationEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadLocationEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLocationEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadLocationEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadLocationEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadLocationEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadLocationEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadLocationEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CLocationEventPtr", new LocationEventPtrClassFactory());

					public LocationEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static LocationEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LocationEventPtr obj = baseObj as  LocationEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new LocationEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLocationEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LocationEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LocationEventPtr emptyInstance = new LocationEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SetCameraControlDepthEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public SetCameraControlDepthEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSetCameraControlDepthEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="cameraControlDepth">相机固定的深度</param>
					/// <returns></returns>
					public SetCameraControlDepthEvent(double cameraControlDepth) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuecameraControlDepth = new BasePtr(cameraControlDepth);
						list.Add("cameraControlDepth", valuecameraControlDepth.PtrVal);
						Create("CSetCameraControlDepthEvent", list);
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
					private static extern void EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEvent_OperatorAssign_void_CSetCameraControlDepthEvent(IntPtr pNativeObject, IntPtr rhs);

					public void OperatorAssign(EarthView.World.Spatial3D.Controls.SetCameraControlDepthEvent rhs)
					{
						EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEvent_OperatorAssign_void_CSetCameraControlDepthEvent(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraControlDepthEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent", new SetCameraControlDepthEventClassFactory());

					public SetCameraControlDepthEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SetCameraControlDepthEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SetCameraControlDepthEvent obj = baseObj as  SetCameraControlDepthEvent;
						if (object.Equals(obj, null))
						{
							obj = new SetCameraControlDepthEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSetCameraControlDepthEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SetCameraControlDepthEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SetCameraControlDepthEvent emptyInstance = new SetCameraControlDepthEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SetCameraControlDepthEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public SetCameraControlDepthEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSetCameraControlDepthEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraControlDepthEventPtr(EarthView.World.Spatial3D.Controls.SetCameraControlDepthEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CSetCameraControlDepthEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraControlDepthEventPtr(EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CSetCameraControlDepthEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_get_CSetCameraControlDepthEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.SetCameraControlDepthEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_get_CSetCameraControlDepthEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.SetCameraControlDepthEvent csObj = new EarthView.World.Spatial3D.Controls.SetCameraControlDepthEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraControlDepthEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraControlDepthEvent;
							csObj.BindNativeObject(__ptr, "CSetCameraControlDepthEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorAssign_CSetCameraControlDepthEventPtr_CSetCameraControlDepthEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorAssign_CSetCameraControlDepthEventPtr_CSetCameraControlDepthEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr csObj = new EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraControlDepthEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr;
							csObj.BindNativeObject(__ptr, "CSetCameraControlDepthEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorAssign_CSetCameraControlDepthEventPtr_CSetCameraControlDepthEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.SetCameraControlDepthEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorAssign_CSetCameraControlDepthEventPtr_CSetCameraControlDepthEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr csObj = new EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraControlDepthEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraControlDepthEventPtr;
							csObj.BindNativeObject(__ptr, "CSetCameraControlDepthEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraControlDepthEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraControlDepthEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr", new SetCameraControlDepthEventPtrClassFactory());

					public SetCameraControlDepthEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SetCameraControlDepthEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SetCameraControlDepthEventPtr obj = baseObj as  SetCameraControlDepthEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new SetCameraControlDepthEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSetCameraControlDepthEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SetCameraControlDepthEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SetCameraControlDepthEventPtr emptyInstance = new SetCameraControlDepthEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class RotationAndZoomCameraEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public RotationAndZoomCameraEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRotationAndZoomCameraEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public RotationAndZoomCameraEvent(double x, double y, double rotationDegree, double zoomRatio) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuex = new BasePtr(x);
						list.Add("x", valuex.PtrVal);
						BasePtr valuey = new BasePtr(y);
						list.Add("y", valuey.PtrVal);
						BasePtr valuerotationDegree = new BasePtr(rotationDegree);
						list.Add("rotationDegree", valuerotationDegree.PtrVal);
						BasePtr valuezoomRatio = new BasePtr(zoomRatio);
						list.Add("zoomRatio", valuezoomRatio.PtrVal);
						Create("CRotationAndZoomCameraEvent", list);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointx(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointx( IntPtr pObject, double value );

					public 					double MPointx
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointx(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointx(this.NativeObject,value);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointy(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointy( IntPtr pObject, double value );

					public 					double MPointy
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointy(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mPointy(this.NativeObject,value);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mrotationDegree(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mrotationDegree( IntPtr pObject, double value );

					public 					double MrotationDegree
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mrotationDegree(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mrotationDegree(this.NativeObject,value);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mzoomRatio(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mzoomRatio( IntPtr pObject, double value );

					public 					double MzoomRatio
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mzoomRatio(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEvent_mzoomRatio(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRotationAndZoomCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent", new RotationAndZoomCameraEventClassFactory());

					public RotationAndZoomCameraEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RotationAndZoomCameraEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RotationAndZoomCameraEvent obj = baseObj as  RotationAndZoomCameraEvent;
						if (object.Equals(obj, null))
						{
							obj = new RotationAndZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRotationAndZoomCameraEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RotationAndZoomCameraEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RotationAndZoomCameraEvent emptyInstance = new RotationAndZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class RotationAndZoomCameraEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public RotationAndZoomCameraEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRotationAndZoomCameraEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public RotationAndZoomCameraEventPtr(EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CRotationAndZoomCameraEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public RotationAndZoomCameraEventPtr(EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CRotationAndZoomCameraEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_get_CRotationAndZoomCameraEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_get_CRotationAndZoomCameraEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEvent csObj = new EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRotationAndZoomCameraEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEvent;
							csObj.BindNativeObject(__ptr, "CRotationAndZoomCameraEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorAssign_CRotationAndZoomCameraEventPtr_CRotationAndZoomCameraEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorAssign_CRotationAndZoomCameraEventPtr_CRotationAndZoomCameraEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr csObj = new EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRotationAndZoomCameraEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr;
							csObj.BindNativeObject(__ptr, "CRotationAndZoomCameraEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorAssign_CRotationAndZoomCameraEventPtr_CRotationAndZoomCameraEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorAssign_CRotationAndZoomCameraEventPtr_CRotationAndZoomCameraEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr csObj = new EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRotationAndZoomCameraEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.RotationAndZoomCameraEventPtr;
							csObj.BindNativeObject(__ptr, "CRotationAndZoomCameraEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CRotationAndZoomCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRotationAndZoomCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr", new RotationAndZoomCameraEventPtrClassFactory());

					public RotationAndZoomCameraEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RotationAndZoomCameraEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RotationAndZoomCameraEventPtr obj = baseObj as  RotationAndZoomCameraEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new RotationAndZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRotationAndZoomCameraEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RotationAndZoomCameraEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RotationAndZoomCameraEventPtr emptyInstance = new RotationAndZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class TiltCameraEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public TiltCameraEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTiltCameraEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="x">鼠标的Ｘ坐标</param>
					/// <param name="y">鼠标的Y坐标</param>
					/// <param name="tiltDegree">倾斜的角度</param>
					/// <returns></returns>
					public TiltCameraEvent(double x, double y, double tiltDegree) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuex = new BasePtr(x);
						list.Add("x", valuex.PtrVal);
						BasePtr valuey = new BasePtr(y);
						list.Add("y", valuey.PtrVal);
						BasePtr valuetiltDegree = new BasePtr(tiltDegree);
						list.Add("tiltDegree", valuetiltDegree.PtrVal);
						Create("CTiltCameraEvent", list);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointx(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointx( IntPtr pObject, double value );

					public 					double MPointx
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointx(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointx(this.NativeObject,value);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointy(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointy( IntPtr pObject, double value );

					public 					double MPointy
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointy(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mPointy(this.NativeObject,value);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mtiltDegree(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mtiltDegree( IntPtr pObject, double value );

					public 					double MtiltDegree
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mtiltDegree(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CTiltCameraEvent_mtiltDegree(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTiltCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTiltCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTiltCameraEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadTiltCameraEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadTiltCameraEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTiltCameraEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTiltCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTiltCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadTiltCameraEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadTiltCameraEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadTiltCameraEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTiltCameraEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTiltCameraEvent", new TiltCameraEventClassFactory());

					public TiltCameraEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static TiltCameraEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TiltCameraEvent obj = baseObj as  TiltCameraEvent;
						if (object.Equals(obj, null))
						{
							obj = new TiltCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTiltCameraEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TiltCameraEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TiltCameraEvent emptyInstance = new TiltCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class TiltCameraEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public TiltCameraEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTiltCameraEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public TiltCameraEventPtr(EarthView.World.Spatial3D.Controls.TiltCameraEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CTiltCameraEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public TiltCameraEventPtr(EarthView.World.Spatial3D.Controls.TiltCameraEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CTiltCameraEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_get_CTiltCameraEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.TiltCameraEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_get_CTiltCameraEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.TiltCameraEvent csObj = new EarthView.World.Spatial3D.Controls.TiltCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CTiltCameraEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.TiltCameraEvent;
							csObj.BindNativeObject(__ptr, "CTiltCameraEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorAssign_CTiltCameraEventPtr_CTiltCameraEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.TiltCameraEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.TiltCameraEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorAssign_CTiltCameraEventPtr_CTiltCameraEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.TiltCameraEventPtr csObj = new EarthView.World.Spatial3D.Controls.TiltCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CTiltCameraEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.TiltCameraEventPtr;
							csObj.BindNativeObject(__ptr, "CTiltCameraEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorAssign_CTiltCameraEventPtr_CTiltCameraEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.TiltCameraEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.TiltCameraEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorAssign_CTiltCameraEventPtr_CTiltCameraEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.TiltCameraEventPtr csObj = new EarthView.World.Spatial3D.Controls.TiltCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CTiltCameraEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.TiltCameraEventPtr;
							csObj.BindNativeObject(__ptr, "CTiltCameraEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CTiltCameraEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTiltCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadTiltCameraEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadTiltCameraEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadTiltCameraEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr", new TiltCameraEventPtrClassFactory());

					public TiltCameraEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static TiltCameraEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TiltCameraEventPtr obj = baseObj as  TiltCameraEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new TiltCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTiltCameraEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TiltCameraEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TiltCameraEventPtr emptyInstance = new TiltCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SetCameraRotationratioEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public SetCameraRotationratioEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSetCameraRotationratioEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					///计逄相机的旋转速度
					/// </summary>
					/// <param name="rotationratio">旋转速度</param>
					/// <returns></returns>
					public SetCameraRotationratioEvent(double rotationratio) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerotationratio = new BasePtr(rotationratio);
						list.Add("rotationratio", valuerotationratio.PtrVal);
						Create("CSetCameraRotationratioEvent", list);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEvent_mrotationratio(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEvent_mrotationratio( IntPtr pObject, double value );

					public 					double Mrotationratio
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEvent_mrotationratio(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEvent_mrotationratio(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraRotationratioEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent", new SetCameraRotationratioEventClassFactory());

					public SetCameraRotationratioEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SetCameraRotationratioEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SetCameraRotationratioEvent obj = baseObj as  SetCameraRotationratioEvent;
						if (object.Equals(obj, null))
						{
							obj = new SetCameraRotationratioEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSetCameraRotationratioEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SetCameraRotationratioEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SetCameraRotationratioEvent emptyInstance = new SetCameraRotationratioEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SetCameraRotationratioEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public SetCameraRotationratioEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSetCameraRotationratioEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraRotationratioEventPtr(EarthView.World.Spatial3D.Controls.SetCameraRotationratioEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CSetCameraRotationratioEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraRotationratioEventPtr(EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CSetCameraRotationratioEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_get_CSetCameraRotationratioEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.SetCameraRotationratioEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_get_CSetCameraRotationratioEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.SetCameraRotationratioEvent csObj = new EarthView.World.Spatial3D.Controls.SetCameraRotationratioEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraRotationratioEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraRotationratioEvent;
							csObj.BindNativeObject(__ptr, "CSetCameraRotationratioEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorAssign_CSetCameraRotationratioEventPtr_CSetCameraRotationratioEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorAssign_CSetCameraRotationratioEventPtr_CSetCameraRotationratioEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr csObj = new EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraRotationratioEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr;
							csObj.BindNativeObject(__ptr, "CSetCameraRotationratioEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorAssign_CSetCameraRotationratioEventPtr_CSetCameraRotationratioEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.SetCameraRotationratioEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorAssign_CSetCameraRotationratioEventPtr_CSetCameraRotationratioEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr csObj = new EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraRotationratioEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraRotationratioEventPtr;
							csObj.BindNativeObject(__ptr, "CSetCameraRotationratioEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraRotationratioEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraRotationratioEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr", new SetCameraRotationratioEventPtrClassFactory());

					public SetCameraRotationratioEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SetCameraRotationratioEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SetCameraRotationratioEventPtr obj = baseObj as  SetCameraRotationratioEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new SetCameraRotationratioEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSetCameraRotationratioEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SetCameraRotationratioEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SetCameraRotationratioEventPtr emptyInstance = new SetCameraRotationratioEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SetCameraLockTargetEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public SetCameraLockTargetEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSetCameraLockTargetEvent",  null);
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
					private static extern void EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockTarget_void_CSceneNode(IntPtr pNativeObject, IntPtr lockTarget);

					/// 					/// <summary>
					/// 					/// 构造函数
					/// 					/// </summary>
					/// 					/// <param name="lockTarget">锁定的目标</param>
					/// 					/// <param name="heading">偏航角</param>
					/// 					/// <param name="tilt">倾角</param>
					/// 					/// <param name="distance">相机距离目标点之间的距离</param>
					/// 					/// <returns></returns>
					/// 					CSetCameraLockTargetEvent(EarthView::World::Graphic::CSceneNode* lockTarget,EarthView::World::Spatial::Math::CDegree& heading,EarthView::World::Spatial::Math::CDegree& tilt,ev_real64 distance);
					//// <summary>
					//// 设置相机要锁定的目标结点
					//// </summary>
					//// <param name="lockTarget">锁定的目标</param>
					//// <returns></returns>
					public void SetCameraLockTarget(EarthView.World.Graphic.SceneNode lockTarget)
					{
						EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockTarget_void_CSceneNode(this.NativeObject, object.Equals(lockTarget, null) ? IntPtr.Zero : lockTarget.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockTarget_CSceneNode(IntPtr pNativeObject);

					/// <summary>
					/// 获取相机要锁定的目标结点
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Graphic.SceneNode GetCameraLockTarget()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockTarget_CSceneNode(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.SceneNode csObj = new EarthView.World.Graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSceneNode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneNode;
							csObj.BindNativeObject(__ptr, "CSceneNode");
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
					private static extern byte EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockTarget_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否设置了锁定的目标结点
					/// </summary>
					/// <returns></returns>
					public bool HasSetLockTarget()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockTarget_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockHeading_void_CDegree(IntPtr pNativeObject, IntPtr headingt);

					/// <summary>
					/// 设置相机锁定的偏航角
					/// </summary>
					/// <param name="headingt">锁定的偏航角</param>
					/// <returns></returns>
					public void SetCameraLockHeading(EarthView.World.Spatial.Math.Degree headingt)
					{
						EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockHeading_void_CDegree(this.NativeObject, object.Equals(headingt, null) ? IntPtr.Zero : headingt.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockHeading_CDegree(IntPtr pNativeObject);

					/// <summary>
					/// 获取相机要锁定的偏航角
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.Math.Degree GetCameraLockHeading()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockHeading_CDegree(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDegree");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csObj.BindNativeObject(__ptr, "CDegree");
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
					private static extern byte EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockHeading_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否设置了锁定的偏航角
					/// </summary>
					/// <returns></returns>
					public bool HasSetLockHeading()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockHeading_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockTilt_void_CDegree(IntPtr pNativeObject, IntPtr tilt);

					/// <summary>
					/// 设置相机锁定的倾角
					/// </summary>
					/// <param name="tilt">锁定的倾角</param>
					/// <returns></returns>
					public void SetCameraLockTilt(EarthView.World.Spatial.Math.Degree tilt)
					{
						EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockTilt_void_CDegree(this.NativeObject, object.Equals(tilt, null) ? IntPtr.Zero : tilt.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockTilt_CDegree(IntPtr pNativeObject);

					/// <summary>
					/// 获取相机要锁定的倾角
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.Math.Degree GetCameraLockTilt()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockTilt_CDegree(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDegree");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csObj.BindNativeObject(__ptr, "CDegree");
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
					private static extern byte EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockTilt_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否设置了锁定的倾角
					/// </summary>
					/// <returns></returns>
					public bool HasSetLockTilt()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockTilt_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockDistance_void_ev_real64(IntPtr pNativeObject, double distance);

					/// <summary>
					/// 设置相机锁定的距离
					/// </summary>
					/// <param name="distance">锁定的距离</param>
					/// <returns></returns>
					public void SetCameraLockDistance(double distance)
					{
						EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockDistance_void_ev_real64(this.NativeObject, distance);
						
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
					private static extern double EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockDistance_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取相机要锁定的距离
					/// </summary>
					/// <returns></returns>
					public double GetCameraLockDistance()
					{
						double ret=EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_getCameraLockDistance_ev_real64(this.NativeObject);
						
						return ret;
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockDistance_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否设置了锁定的距离
					/// </summary>
					/// <returns></returns>
					public bool HasSetLockDistance()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockDistance_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockMode_void_ev_bool(IntPtr pNativeObject, byte isThirdPersonMode);

					/// <summary>
					/// 设置相机的锁定模式
					/// </summary>
					/// <param name="isThirdPersonMode">是否为第三人称</param>
					/// <returns></returns>
					public void SetCameraLockMode(bool isThirdPersonMode)
					{
						EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_setCameraLockMode_void_ev_bool(this.NativeObject, Convert.ToByte(isThirdPersonMode));
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockMode_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否设置了锁定的模式
					/// </summary>
					/// <returns></returns>
					public bool HasSetLockMode()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_hasSetLockMode_ev_bool(this.NativeObject);
						
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
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeTilt(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeTilt( IntPtr pObject, byte value );

					public 					bool MbCanChangeTilt
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeTilt(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeTilt(this.NativeObject,Convert.ToByte(value));
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
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeHeading(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeHeading( IntPtr pObject, byte value );

					public 					bool MbCanChangeHeading
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeHeading(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeHeading(this.NativeObject,Convert.ToByte(value));
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
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeDistance(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeDistance( IntPtr pObject, byte value );

					public 					bool MbCanChangeDistance
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeDistance(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mbCanChangeDistance(this.NativeObject,Convert.ToByte(value));
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
					private static extern byte Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mIsThirdPersonMode(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mIsThirdPersonMode( IntPtr pObject, byte value );

					public 					bool MIsThirdPersonMode
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mIsThirdPersonMode(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEvent_mIsThirdPersonMode(this.NativeObject,Convert.ToByte(value));
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraLockTargetEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent", new SetCameraLockTargetEventClassFactory());

					public SetCameraLockTargetEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SetCameraLockTargetEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SetCameraLockTargetEvent obj = baseObj as  SetCameraLockTargetEvent;
						if (object.Equals(obj, null))
						{
							obj = new SetCameraLockTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSetCameraLockTargetEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SetCameraLockTargetEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SetCameraLockTargetEvent emptyInstance = new SetCameraLockTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SetCameraLockTargetEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public SetCameraLockTargetEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSetCameraLockTargetEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraLockTargetEventPtr(EarthView.World.Spatial3D.Controls.SetCameraLockTargetEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CSetCameraLockTargetEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SetCameraLockTargetEventPtr(EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CSetCameraLockTargetEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_get_CSetCameraLockTargetEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.SetCameraLockTargetEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_get_CSetCameraLockTargetEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.SetCameraLockTargetEvent csObj = new EarthView.World.Spatial3D.Controls.SetCameraLockTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraLockTargetEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraLockTargetEvent;
							csObj.BindNativeObject(__ptr, "CSetCameraLockTargetEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorAssign_CSetCameraLockTargetEventPtr_CSetCameraLockTargetEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorAssign_CSetCameraLockTargetEventPtr_CSetCameraLockTargetEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr csObj = new EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraLockTargetEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr;
							csObj.BindNativeObject(__ptr, "CSetCameraLockTargetEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorAssign_CSetCameraLockTargetEventPtr_CSetCameraLockTargetEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.SetCameraLockTargetEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorAssign_CSetCameraLockTargetEventPtr_CSetCameraLockTargetEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr csObj = new EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSetCameraLockTargetEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.SetCameraLockTargetEventPtr;
							csObj.BindNativeObject(__ptr, "CSetCameraLockTargetEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CSetCameraLockTargetEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadSetCameraLockTargetEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr", new SetCameraLockTargetEventPtrClassFactory());

					public SetCameraLockTargetEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SetCameraLockTargetEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SetCameraLockTargetEventPtr obj = baseObj as  SetCameraLockTargetEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new SetCameraLockTargetEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSetCameraLockTargetEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SetCameraLockTargetEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SetCameraLockTargetEventPtr emptyInstance = new SetCameraLockTargetEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class FadeInOutEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public FadeInOutEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CFadeInOutEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="time">镜头合成器开启后的持续时间（秒）</param>
					/// <returns></returns>
					public FadeInOutEvent(double time) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetime = new BasePtr(time);
						list.Add("time", valuetime.PtrVal);
						Create("CFadeInOutEvent", list);
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
					private static extern double Get_EarthView_World_Spatial3D_Controls_CFadeInOutEvent_mCompositorTime(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CFadeInOutEvent_mCompositorTime( IntPtr pObject, double value );

					public 					double MCompositorTime
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CFadeInOutEvent_mCompositorTime(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CFadeInOutEvent_mCompositorTime(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadFadeInOutEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadFadeInOutEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadFadeInOutEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadFadeInOutEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadFadeInOutEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadFadeInOutEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadFadeInOutEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadFadeInOutEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadFadeInOutEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadFadeInOutEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadFadeInOutEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadFadeInOutEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CFadeInOutEvent", new FadeInOutEventClassFactory());

					public FadeInOutEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static FadeInOutEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						FadeInOutEvent obj = baseObj as  FadeInOutEvent;
						if (object.Equals(obj, null))
						{
							obj = new FadeInOutEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CFadeInOutEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class FadeInOutEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						FadeInOutEvent emptyInstance = new FadeInOutEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class FadeInOutEventPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public FadeInOutEventPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CFadeInOutEventPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public FadeInOutEventPtr(EarthView.World.Spatial3D.Controls.FadeInOutEvent rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CFadeInOutEventPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public FadeInOutEventPtr(EarthView.World.Spatial3D.Controls.FadeInOutEventPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CFadeInOutEventPtr", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_get_CFadeInOutEvent(IntPtr pNativeObject);

					public EarthView.World.Spatial3D.Controls.FadeInOutEvent Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_get_CFadeInOutEvent(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.FadeInOutEvent csObj = new EarthView.World.Spatial3D.Controls.FadeInOutEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CFadeInOutEvent");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.FadeInOutEvent;
							csObj.BindNativeObject(__ptr, "CFadeInOutEvent");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorAssign_CFadeInOutEventPtr_CFadeInOutEventPtr(IntPtr pNativeObject, IntPtr r);

					public EarthView.World.Spatial3D.Controls.FadeInOutEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.FadeInOutEventPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorAssign_CFadeInOutEventPtr_CFadeInOutEventPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.Controls.FadeInOutEventPtr csObj = new EarthView.World.Spatial3D.Controls.FadeInOutEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CFadeInOutEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.FadeInOutEventPtr;
							csObj.BindNativeObject(__ptr, "CFadeInOutEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorAssign_CFadeInOutEventPtr_CFadeInOutEvent(IntPtr pNativeObject, IntPtr rep);

					public EarthView.World.Spatial3D.Controls.FadeInOutEventPtr OperatorAssign(EarthView.World.Spatial3D.Controls.FadeInOutEvent rep)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorAssign_CFadeInOutEventPtr_CFadeInOutEvent(this.NativeObject, object.Equals(rep, null) ? IntPtr.Zero : rep.NativeObject);
						
						EarthView.World.Spatial3D.Controls.FadeInOutEventPtr csObj = new EarthView.World.Spatial3D.Controls.FadeInOutEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CFadeInOutEventPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.FadeInOutEventPtr;
							csObj.BindNativeObject(__ptr, "CFadeInOutEventPtr");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_toCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial.SystemUI.Guieventptr ToCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_toCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(IntPtr pNativeObject);

					public EarthView.World.Spatial.SystemUI.Guieventptr OperatorConvertionCGUIEventPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CFadeInOutEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(this.NativeObject);
						
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
							private static bool bLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadFadeInOutEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadFadeInOutEventPtr = LoadDll.Load("EV_GA.so");
							private static bool csbLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadFadeInOutEventPtr = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadFadeInOutEventPtr = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr", new FadeInOutEventPtrClassFactory());

					public FadeInOutEventPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static FadeInOutEventPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						FadeInOutEventPtr obj = baseObj as  FadeInOutEventPtr;
						if (object.Equals(obj, null))
						{
							obj = new FadeInOutEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CFadeInOutEventPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class FadeInOutEventPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						FadeInOutEventPtr emptyInstance = new FadeInOutEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
