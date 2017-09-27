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
			namespace Effect3D
			{
				/// <summary>
				/// 天气控制点类
				/// </summary>
				public class WeatherControlPoint : EarthView.World.Core.AllocatedObject
				{
					public WeatherControlPoint(EarthView.World.Core.CoreTime time, EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetime = new BasePtr(time);
						list.Add("time", valuetime.PtrVal);
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						Create("CWeatherControlPoint", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					private EarthView.World.Core.CoreTime mTimeField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mTime(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mTime( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Core.CoreTime MTime
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mTime(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mTimeField, null)){
								mTimeField.NativeObject = __ptr;
								return mTimeField;
							}
							EarthView.World.Core.CoreTime csObj = new EarthView.World.Core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CCoreTime");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Core.CoreTime;
								csObj.BindNativeObject(__ptr, "CCoreTime");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mTimeField = value;
							Set_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mTime( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mWeatherType(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mWeatherType( IntPtr pObject, int value );

					public 					int MWeatherType
					{
						get
						{
							int ret=Get_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mWeatherType(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mWeatherType(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_d.so");
							private static bool csbLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_CSharp_d.so");

						#else 
							private static bool bLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D.so");
							private static bool csbLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_CSharp.so");

						#else 
							private static bool bLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadWeatherControlPoint = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CWeatherControlPoint", new WeatherControlPointClassFactory());

					public WeatherControlPoint(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static WeatherControlPoint FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						WeatherControlPoint obj = baseObj as  WeatherControlPoint;
						if (object.Equals(obj, null))
						{
							obj = new WeatherControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CWeatherControlPoint");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class WeatherControlPointClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						WeatherControlPoint emptyInstance = new WeatherControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class WeatherTransformation : EarthView.World.Core.AllocatedObject
				{
					public WeatherTransformation() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CWeatherTransformation",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Effect3D_CWeatherTransformation_addControlPoint_ev_int32_CWeatherControlPoint(IntPtr pNativeObject, IntPtr controlpoint);

					/// <summary>
					/// 新增控制点
					/// </summary>
					/// <param name="controlpoint">控制点对象</param>
					/// <returns>获取控制点索引</returns>
					public int AddControlPoint(EarthView.World.Spatial.Effect3D.WeatherControlPoint controlpoint)
					{
						int ret=EarthView_World_Spatial_Effect3D_CWeatherTransformation_addControlPoint_ev_int32_CWeatherControlPoint(this.NativeObject, object.Equals(controlpoint, null) ? IntPtr.Zero : controlpoint.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Effect3D_CWeatherTransformation_getControlPoint_ev_bool_ev_uint32_CWeatherControlPoint(IntPtr pNativeObject, uint index, IntPtr controlpoint);

					/// <summary>
					/// 根据索引获取控制点对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="controlpoint">控制点对象</param>
					/// <returns>是否获取成功</returns>
					public bool GetControlPoint(uint index, ref  EarthView.World.Spatial.Effect3D.WeatherControlPoint controlpoint)
					{
						byte ret=EarthView_World_Spatial_Effect3D_CWeatherTransformation_getControlPoint_ev_bool_ev_uint32_CWeatherControlPoint(this.NativeObject, index, object.Equals(controlpoint, null) ? IntPtr.Zero : controlpoint.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Effect3D_CWeatherTransformation_removeControlPoint_ev_bool_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 根据索引删除控制点
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>删除结果</returns>
					public bool RemoveControlPoint(uint index)
					{
						byte ret=EarthView_World_Spatial_Effect3D_CWeatherTransformation_removeControlPoint_ev_bool_ev_uint32(this.NativeObject, index);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Effect3D_CWeatherTransformation_getControlPointCount_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取控制点对象总数
					/// </summary>
					/// <returns>控制点总数</returns>
					public uint GetControlPointCount()
					{
						uint ret=EarthView_World_Spatial_Effect3D_CWeatherTransformation_getControlPointCount_ev_uint32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CWeatherTransformation_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空
					/// </summary>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial_Effect3D_CWeatherTransformation_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Effect3D_CWeatherTransformation_transformWeather_ev_bool_CRegionAtmosphere_CCoreTime_Real(IntPtr pNativeObject, IntPtr atmosphere, IntPtr time, double alt);

					/// <summary>
					/// 转换天气
					/// </summary>
					/// <param name="atmosphere">转换对象</param>
					/// <param name="time">时间</param>
					/// <param name="alt">镜头高度</param>
					/// <returns>转换结果</returns>
					public bool TransformWeather(EarthView.World.Spatial.Effect3D.RegionAtmosphere atmosphere, EarthView.World.Core.CoreTime time, double alt)
					{
						byte ret=EarthView_World_Spatial_Effect3D_CWeatherTransformation_transformWeather_ev_bool_CRegionAtmosphere_CCoreTime_Real(this.NativeObject, object.Equals(atmosphere, null) ? IntPtr.Zero : atmosphere.NativeObject, object.Equals(time, null) ? IntPtr.Zero : time.NativeObject, alt);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CWeatherTransformation_setDefaultWeather_void_EVWeatherType(IntPtr pNativeObject, EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type);

					/// <summary>
					/// 设置默认天气
					/// </summary>
					/// <param name="type">天气类型</param>
					/// <returns>设置结果</returns>
					public void SetDefaultWeather(EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type)
					{
						EarthView_World_Spatial_Effect3D_CWeatherTransformation_setDefaultWeather_void_EVWeatherType(this.NativeObject, type);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CWeatherTransformation_setStartEndTransitionTime_void_ev_uint32(IntPtr pNativeObject, uint seconds);

					/// <summary>
					/// 设置转换时间差
					/// </summary>
					/// <param name="seconds">时间差</param>
					/// <returns></returns>
					public void SetStartEndTransitionTime(uint seconds)
					{
						EarthView_World_Spatial_Effect3D_CWeatherTransformation_setStartEndTransitionTime_void_ev_uint32(this.NativeObject, seconds);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CWeatherTransformation_setNeedRestoreToDefault_void_ev_bool(IntPtr pNativeObject, byte restore);

					/// <summary>
					/// 设置是否需要存储默认状态
					/// </summary>
					/// <param name="restore">是否</param>
					/// <returns></returns>
					public void SetNeedRestoreToDefault(bool restore)
					{
						EarthView_World_Spatial_Effect3D_CWeatherTransformation_setNeedRestoreToDefault_void_ev_bool(this.NativeObject, Convert.ToByte(restore));
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_d.so");
							private static bool csbLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_CSharp_d.so");

						#else 
							private static bool bLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadWeatherTransformation = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadWeatherTransformation = LoadDll.Load("EV_Effect3D.so");
							private static bool csbLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_CSharp.so");

						#else 
							private static bool bLoadWeatherTransformation = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadWeatherTransformation = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CWeatherTransformation", new WeatherTransformationClassFactory());

					public WeatherTransformation(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static WeatherTransformation FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						WeatherTransformation obj = baseObj as  WeatherTransformation;
						if (object.Equals(obj, null))
						{
							obj = new WeatherTransformation(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CWeatherTransformation");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class WeatherTransformationClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						WeatherTransformation emptyInstance = new WeatherTransformation(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 全局环境类
				/// </summary>
				public class GlobeAtmosphere : EarthView.World.Spatial.Effect3D.RegionAtmosphere
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeAtmosphere(EarthView.World.Graphic.SceneManager ref_sceneMgr, double cloudVisibilityAlt, EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_sceneMgr = new BasePtr(ref_sceneMgr);
						list.Add("ref_sceneMgr", valueref_sceneMgr.PtrVal);
						BasePtr valuecloudVisibilityAlt = new BasePtr(cloudVisibilityAlt);
						list.Add("cloudVisibilityAlt", valuecloudVisibilityAlt.PtrVal);
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						Create("CGlobeAtmosphereProxy", list);
						if (!"EarthView.World.Spatial.Effect3D.GlobeAtmosphere".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setOriginLonLat_void_CDegree_CDegree(IntPtr pNativeObject, IntPtr lon, IntPtr lat);

					/// <summary>
					/// 设置源点经纬度
					/// </summary>
					/// <returns></returns>
					public void SetOriginLonLat(EarthView.World.Spatial.Math.Degree lon, EarthView.World.Spatial.Math.Degree lat)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setOriginLonLat_void_CDegree_CDegree(this.NativeObject, object.Equals(lon, null) ? IntPtr.Zero : lon.NativeObject, object.Equals(lat, null) ? IntPtr.Zero : lat.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_frameStarted_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

					/// <summary>
					/// 帧监听
					/// </summary>
					/// <returns></returns>
					public bool FrameStarted(ref EarthView.World.Graphic.FRAMEEVENT evt)
					{
						byte ret=EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_frameStarted_ev_bool_FrameEvent(this.NativeObject, ref evt);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_NoVirtual(IntPtr pNativeObject, IntPtr source, IntPtr camera);

					public new void PostUpdateSceneGraph_NoVirtual(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_NoVirtual(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pNativeObject, IntPtr source, IntPtr camera);

					public override void PostUpdateSceneGraph(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_createRegionAtmosphere_CRegionAtmosphere_CEnvelope_EVWeatherType(IntPtr pNativeObject, IntPtr envelope, EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type);

					/// <summary>
					/// 创建区域节点
					/// </summary>
					/// <param name="envelope">范围</param>
					/// <param name="type">天气类别</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Effect3D.RegionAtmosphere CreateRegionAtmosphere(EarthView.World.Spatial.Geometry.Envelope envelope, EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_createRegionAtmosphere_CRegionAtmosphere_CEnvelope_EVWeatherType(this.NativeObject, object.Equals(envelope, null) ? IntPtr.Zero : envelope.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Effect3D.RegionAtmosphere csObj = new EarthView.World.Spatial.Effect3D.RegionAtmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRegionAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Effect3D.RegionAtmosphere;
							csObj.BindNativeObject(__ptr, "CRegionAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroyRegionAtmosphere_void_CRegionAtmosphere(IntPtr pNativeObject, IntPtr regionatmosphere);

					/// <summary>
					/// 销毁区域
					/// </summary>
					/// <param name="regionatmosphere">区域</param>
					/// <returns></returns>
					public void DestroyRegionAtmosphere(EarthView.World.Spatial.Effect3D.RegionAtmosphere regionatmosphere)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroyRegionAtmosphere_void_CRegionAtmosphere(this.NativeObject, object.Equals(regionatmosphere, null) ? IntPtr.Zero : regionatmosphere.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionAtmospheresCount_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 获取局部区域总数
					/// </summary>
					/// <returns></returns>
					public ulong GetRegionAtmospheresCount()
					{
						ulong ret=EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionAtmospheresCount_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionAtmosphere_CRegionAtmosphere_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 根据索引获取区域
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Effect3D.RegionAtmosphere GetRegionAtmosphere(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionAtmosphere_CRegionAtmosphere_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Effect3D.RegionAtmosphere csObj = new EarthView.World.Spatial.Effect3D.RegionAtmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRegionAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Effect3D.RegionAtmosphere;
							csObj.BindNativeObject(__ptr, "CRegionAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_NoVirtual(IntPtr pNativeObject, double thickness);

					/// <summary>
					/// 设置大气层厚度
					/// </summary>
					/// <param name="thickness">大小</param>
					/// <returns></returns>
					public new void SetAerosphereThickness_NoVirtual(double thickness)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_NoVirtual(this.NativeObject, thickness);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real(IntPtr pNativeObject, double thickness);

					/// <summary>
					/// 设置大气层厚度
					/// </summary>
					/// <param name="thickness">大小</param>
					/// <returns></returns>
					public override void SetAerosphereThickness(double thickness)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real(this.NativeObject, thickness);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 读取xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>
					public new void FromXML_NoVirtual(ref EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 读取xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>
					public override void FromXML(ref EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <returns>字符串</returns>
					public new string ToXML_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <returns>字符串</returns>
					public override string ToXML()
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudMap_void_CImage(IntPtr pNativeObject, IntPtr img);

					/// <summary>
					/// 更新云图图片
					/// </summary>
					/// <param name="img">云图图片,图片的groupname为"Caelum"</param>
					/// <returns></returns>
					public void SetRealCloudMap(EarthView.World.Graphic.Image img)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudMap_void_CImage(this.NativeObject, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudMapAlpha_void_ev_real32(IntPtr pNativeObject, float alpha);

					/// <summary>
					/// 设置云图的alpha值
					/// </summary>
					/// <param name="alpha">alpha值</param>
					/// <returns></returns>
					public void SetRealCloudMapAlpha(float alpha)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudMapAlpha_void_ev_real32(this.NativeObject, alpha);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudMapAlpha_void_EVString_ev_real32(IntPtr pNativeObject, string name, float alpha);

					/// <summary>
					/// 设置局部云图的alpha值
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="alpha">alpha值</param>
					/// <returns></returns>
					public void SetRegionCloudMapAlpha(string name, float alpha)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudMapAlpha_void_EVString_ev_real32(this.NativeObject, name, alpha);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_addRegionCloudMap_void_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, string name, IntPtr img, double north, double west, double south, double east);

					/// <summary>
					/// 添加局部云图.(必须在调用了CRegionAtmosphere::enableRealCloud后再调用才有效)
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="img">图片</param>
					/// <param name="north">局部区域的北边界。(度为单位)</param>
					/// <param name="west">局部区域的西边界。(度为单位)</param>
					/// <param name="south">局部区域的南边界。(度为单位)</param>
					/// <param name="east">局部区域的东边界。(度为单位)</param>
					/// <returns></returns>
					public void AddRegionCloudMap(string name, EarthView.World.Graphic.Image img, double north, double west, double south, double east)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_addRegionCloudMap_void_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, name, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, north, west, south, east);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_addRegionCloudMap_void_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, string name, IntPtr img, double north, double west, double south, double east, double height);

					/// <summary>
					/// 添加局部云图.(必须在调用了CRegionAtmosphere::enableRealCloud后再调用才有效)
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="img">图片</param>
					/// <param name="north">局部区域的北边界。(度为单位)</param>
					/// <param name="west">局部区域的西边界。(度为单位)</param>
					/// <param name="south">局部区域的南边界。(度为单位)</param>
					/// <param name="east">局部区域的东边界。(度为单位)</param>
					/// <param name="height">局部云的高度。(度为米)</param>
					/// <returns></returns>
					public void AddRegionCloudMap(string name, EarthView.World.Graphic.Image img, double north, double west, double south, double east, double height)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_addRegionCloudMap_void_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, name, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject, north, west, south, east, height);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_removeRegionCloudMap_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 移除局部云图
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					public void RemoveRegionCloudMap(string name)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_removeRegionCloudMap_void_EVString(this.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudMapVisible_void_EVString_bool(IntPtr pNativeObject, string name, byte visible);

					/// <summary>
					/// 设置局部云图的可见性
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					public void SetRegionCloudMapVisible(string name, bool visible)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudMapVisible_void_EVString_bool(this.NativeObject, name, Convert.ToByte(visible));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionCloudMapVisible_ev_bool_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					///获取局部云图的可见性
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					public bool GetRegionCloudMapVisible(string name)
					{
						byte ret=EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionCloudMapVisible_ev_bool_EVString(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_enableGetCloudColorFromImage_void_ev_bool(IntPtr pNativeObject, byte enable);

					/// <summary>
					/// 设置体积云的颜色与图片一致
					/// </summary>
					/// <param name="ev_bool">是否一致</param>
					/// <returns></returns>
					public void EnableGetCloudColorFromImage(bool enable)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_enableGetCloudColorFromImage_void_ev_bool(this.NativeObject, Convert.ToByte(enable));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWindSpeedForRealCloudMap_void_CVector2(IntPtr pNativeObject, IntPtr speed);

					/// <summary>
					///设置风速.（默认速度为（-0.00000015，0.00000015），速度不宜设的过大）
					/// </summary>
					/// <param name="speed">风速</param>
					/// <returns></returns>
					public void SetWindSpeedForRealCloudMap(EarthView.World.Spatial.Math.Vector2 speed)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWindSpeedForRealCloudMap_void_CVector2(this.NativeObject, object.Equals(speed, null) ? IntPtr.Zero : speed.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudRotationInfomation_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, string name, double centerLat, double centerLon, double rotationAngleVelocity, double rotationRegionRadius);

					/// <summary>
					/// 设置局部云图的旋转信息
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="centerLat">中心点外的纬度</param>
					/// <param name="centerLon">中心点外的经度</param>
					/// <param name="rotationAngleVelocity">旋转的角速度，以度为单位</param>
					/// <param name="rotationRegionRadius">旋转范围的半径，以米为单位</param>
					/// <returns></returns>
					public void SetRegionCloudRotationInfomation(string name, double centerLat, double centerLon, double rotationAngleVelocity, double rotationRegionRadius)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudRotationInfomation_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, name, centerLat, centerLon, rotationAngleVelocity, rotationRegionRadius);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_enableRotateRegionCloud_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 允许旋转局部云
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					public void EnableRotateRegionCloud(string name)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_enableRotateRegionCloud_void_EVString(this.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_disableRotateRegionCloud_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 禁止转动局部云
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					public void DisableRotateRegionCloud(string name)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_disableRotateRegionCloud_void_EVString(this.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 销毁
					/// </summary>
					/// <returns></returns>
					public new void Destroy_NoVirtual()
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_NoVirtual(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void(IntPtr pNativeObject);

					/// <summary>
					/// 销毁
					/// </summary>
					/// <returns></returns>
					public override void Destroy()
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getWeatherTransformer_CWeatherTransformation(IntPtr pNativeObject);

					///void create(CViewport *viewport);
					//// <summary>
					//// 获取天气转换对象
					//// </summary>
					//// <returns>天气控制对象</returns>
					public EarthView.World.Spatial.Effect3D.WeatherTransformation GetWeatherTransformer()
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getWeatherTransformer_CWeatherTransformation(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Effect3D.WeatherTransformation csObj = new EarthView.World.Spatial.Effect3D.WeatherTransformation(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CWeatherTransformation");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Effect3D.WeatherTransformation;
							csObj.BindNativeObject(__ptr, "CWeatherTransformation");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_startWeatherTransform_void(IntPtr pNativeObject);

					/// <summary>
					/// 开始天气转换
					/// </summary>
					public void StartWeatherTransform()
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_startWeatherTransform_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_stopWeatherTransform_void(IntPtr pNativeObject);

					/// <summary>
					/// 停止天气转换
					/// </summary>
					public void StopWeatherTransform()
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_stopWeatherTransform_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type);

					/// <summary>
					/// 设置天气
					/// </summary>
					/// <returns></returns>
					public new void SetWeather_NoVirtual(EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_NoVirtual(this.NativeObject, type);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType(IntPtr pNativeObject, EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type);

					/// <summary>
					/// 设置天气
					/// </summary>
					/// <returns></returns>
					public override void SetWeather(EarthView.World.Spatial.Effect3D.EVWEATHERTYPE type)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType(this.NativeObject, type);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeatherTransitionTime_void_ev_uint32(IntPtr pNativeObject, uint seconds);

					/// <summary>
					/// 设置转换时间
					/// </summary>
					/// <returns></returns>
					public void SetWeatherTransitionTime(uint seconds)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeatherTransitionTime_void_ev_uint32(this.NativeObject, seconds);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr lon, IntPtr lat, double alt, IntPtr cameraLookDir, IntPtr cameraPos, float timeSinceLastFrame, IntPtr viewPort, byte mainCamera);

					protected new void Update_NoVirtual(EarthView.World.Spatial.Math.Degree lon, EarthView.World.Spatial.Math.Degree lat, double alt, EarthView.World.Spatial.Math.Vector3 cameraLookDir, EarthView.World.Spatial.Math.Vector3 cameraPos, float timeSinceLastFrame, EarthView.World.Graphic.Viewport viewPort, bool mainCamera)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_NoVirtual(this.NativeObject, object.Equals(lon, null) ? IntPtr.Zero : lon.NativeObject, object.Equals(lat, null) ? IntPtr.Zero : lat.NativeObject, alt, object.Equals(cameraLookDir, null) ? IntPtr.Zero : cameraLookDir.NativeObject, object.Equals(cameraPos, null) ? IntPtr.Zero : cameraPos.NativeObject, timeSinceLastFrame, object.Equals(viewPort, null) ? IntPtr.Zero : viewPort.NativeObject, Convert.ToByte(mainCamera));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(IntPtr pNativeObject, IntPtr lon, IntPtr lat, double alt, IntPtr cameraLookDir, IntPtr cameraPos, float timeSinceLastFrame, IntPtr viewPort, byte mainCamera);

					protected override void Update(EarthView.World.Spatial.Math.Degree lon, EarthView.World.Spatial.Math.Degree lat, double alt, EarthView.World.Spatial.Math.Vector3 cameraLookDir, EarthView.World.Spatial.Math.Vector3 cameraPos, float timeSinceLastFrame, EarthView.World.Graphic.Viewport viewPort, bool mainCamera)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(this.NativeObject, object.Equals(lon, null) ? IntPtr.Zero : lon.NativeObject, object.Equals(lat, null) ? IntPtr.Zero : lat.NativeObject, alt, object.Equals(cameraLookDir, null) ? IntPtr.Zero : cameraLookDir.NativeObject, object.Equals(cameraPos, null) ? IntPtr.Zero : cameraPos.NativeObject, timeSinceLastFrame, object.Equals(viewPort, null) ? IntPtr.Zero : viewPort.NativeObject, Convert.ToByte(mainCamera));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_NoVirtual(IntPtr pNativeObject, IntPtr layer);

					protected new void OnChildAtmosphereCloudLayerAdded_NoVirtual(EarthView.World.Spatial.Effect3D.CloudLayer layer)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_NoVirtual(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(IntPtr pNativeObject, IntPtr layer);

					protected override void OnChildAtmosphereCloudLayerAdded(EarthView.World.Spatial.Effect3D.CloudLayer layer)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_NoVirtual(IntPtr pNativeObject, IntPtr layer);

					protected new void OnChildAtmosphereCloudLayerRemoved_NoVirtual(EarthView.World.Spatial.Effect3D.CloudLayer layer)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_NoVirtual(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(IntPtr pNativeObject, IntPtr layer);

					protected override void OnChildAtmosphereCloudLayerRemoved(EarthView.World.Spatial.Effect3D.CloudLayer layer)
					{
						EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_d.so");
							private static bool csbLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_CSharp_d.so");

						#else 
							private static bool bLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D.so");
							private static bool csbLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_CSharp.so");

						#else 
							private static bool bLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadGlobeAtmosphere = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CGlobeAtmosphere", new GlobeAtmosphereClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CGlobeAtmosphereProxy", new GlobeAtmosphereClassFactory());

					public GlobeAtmosphere(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface(IntPtr pObject, getStringInterfacePtr_CallBack_CStringInterface pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType(IntPtr pObject, setWeather_CallBack_void_EVWeatherType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport(IntPtr pObject, create_CallBack_void_CViewport pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void(IntPtr pObject, destroy_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real(IntPtr pObject, setAerosphereThickness_CallBack_void_Real pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real(IntPtr pObject, setRealCloudHeight_CallBack_void_Real pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(IntPtr pObject, update_CallBack_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(IntPtr pObject, onChildAtmosphereCloudLayerAdded_CallBack_void_CCloudLayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(IntPtr pObject, onChildAtmosphereCloudLayerRemoved_CallBack_void_CCloudLayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue(IntPtr pObject, calcAmbientLightMultiplier_CallBack_CColourValue pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement(IntPtr pObject, fromXmlElement_CallBack_void_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement(IntPtr pObject, toXmlElement_CallBack_CXmlElement_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement(IntPtr pObject, fromXML_CallBack_void_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pObject, preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pObject, postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pObject, preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pObject, postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t(IntPtr pObject, shadowTexturesUpdated_CallBack_void_ev_size_t pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(IntPtr pObject, shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(IntPtr pObject, shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(IntPtr pObject, sortLightsAffectingFrustum_CallBack_ev_bool_LightList pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager(IntPtr pObject, sceneManagerDestroyed_CallBack_void_CSceneManager pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getStringInterfacePtr_CallBack_CStringInterface = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Function;
							GC.KeepAlive(m_getStringInterfacePtr_CallBack_CStringInterface);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface(this.NativeObject, m_getStringInterfacePtr_CallBack_CStringInterface);
							m_setWeather_CallBack_void_EVWeatherType = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Function;
							GC.KeepAlive(m_setWeather_CallBack_void_EVWeatherType);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType(this.NativeObject, m_setWeather_CallBack_void_EVWeatherType);
							m_create_CallBack_void_CViewport = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Function;
							GC.KeepAlive(m_create_CallBack_void_CViewport);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport(this.NativeObject, m_create_CallBack_void_CViewport);
							m_destroy_CallBack_void = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Function;
							GC.KeepAlive(m_destroy_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void(this.NativeObject, m_destroy_CallBack_void);
							m_setAerosphereThickness_CallBack_void_Real = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Function;
							GC.KeepAlive(m_setAerosphereThickness_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real(this.NativeObject, m_setAerosphereThickness_CallBack_void_Real);
							m_setRealCloudHeight_CallBack_void_Real = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Function;
							GC.KeepAlive(m_setRealCloudHeight_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real(this.NativeObject, m_setRealCloudHeight_CallBack_void_Real);
							m_update_CallBack_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Function;
							GC.KeepAlive(m_update_CallBack_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(this.NativeObject, m_update_CallBack_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool);
							m_onChildAtmosphereCloudLayerAdded_CallBack_void_CCloudLayer = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Function;
							GC.KeepAlive(m_onChildAtmosphereCloudLayerAdded_CallBack_void_CCloudLayer);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(this.NativeObject, m_onChildAtmosphereCloudLayerAdded_CallBack_void_CCloudLayer);
							m_onChildAtmosphereCloudLayerRemoved_CallBack_void_CCloudLayer = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Function;
							GC.KeepAlive(m_onChildAtmosphereCloudLayerRemoved_CallBack_void_CCloudLayer);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(this.NativeObject, m_onChildAtmosphereCloudLayerRemoved_CallBack_void_CCloudLayer);
							m_calcAmbientLightMultiplier_CallBack_CColourValue = EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Function;
							GC.KeepAlive(m_calcAmbientLightMultiplier_CallBack_CColourValue);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue(this.NativeObject, m_calcAmbientLightMultiplier_CallBack_CColourValue);
							m_getName_CallBack_EVString = EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_setName_CallBack_void_EVString = EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Function;
							GC.KeepAlive(m_setName_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
							m_fromXmlElement_CallBack_void_CXmlElement = EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Function;
							GC.KeepAlive(m_fromXmlElement_CallBack_void_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement(this.NativeObject, m_fromXmlElement_CallBack_void_CXmlElement);
							m_toXmlElement_CallBack_CXmlElement_CXmlElement = EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Function;
							GC.KeepAlive(m_toXmlElement_CallBack_CXmlElement_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement(this.NativeObject, m_toXmlElement_CallBack_CXmlElement_CXmlElement);
							m_fromXML_CallBack_void_CXmlElement = EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Function;
							GC.KeepAlive(m_fromXML_CallBack_void_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement(this.NativeObject, m_fromXML_CallBack_void_CXmlElement);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
							m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Function;
							GC.KeepAlive(m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
							m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Function;
							GC.KeepAlive(m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
							m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Function;
							GC.KeepAlive(m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
							m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Function;
							GC.KeepAlive(m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
							m_shadowTexturesUpdated_CallBack_void_ev_size_t = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Function;
							GC.KeepAlive(m_shadowTexturesUpdated_CallBack_void_ev_size_t);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t(this.NativeObject, m_shadowTexturesUpdated_CallBack_void_ev_size_t);
							m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Function;
							GC.KeepAlive(m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(this.NativeObject, m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t);
							m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Function;
							GC.KeepAlive(m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(this.NativeObject, m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum);
							m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Function;
							GC.KeepAlive(m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(this.NativeObject, m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList);
							m_sceneManagerDestroyed_CallBack_void_CSceneManager = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Function;
							GC.KeepAlive(m_sceneManagerDestroyed_CallBack_void_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager(this.NativeObject, m_sceneManagerDestroyed_CallBack_void_CSceneManager);
						}
					}
					public override EarthView.World.Core.StringInterface GetStringInterfacePtr()
					{
						return base.GetStringInterfacePtr_NoVirtual();
					}
					public override void Create(EarthView.World.Graphic.Viewport ref_viewport)
					{
						base.Create_NoVirtual(ref_viewport);
					}
					public override void SetRealCloudHeight(double height)
					{
						base.SetRealCloudHeight_NoVirtual(height);
					}
					protected override EarthView.World.Graphic.ColourValue CalcAmbientLightMultiplier()
					{
						return base.CalcAmbientLightMultiplier_NoVirtual();
					}
					public override string GetName()
					{
						return base.GetName_NoVirtual();
					}
					public override void SetName(string name)
					{
						base.SetName_NoVirtual(name);
					}
					public override void FromXmlElement(EarthView.World.Core.XmlElement element)
					{
						base.FromXmlElement_NoVirtual(element);
					}
					public override EarthView.World.Core.XmlElement ToXmlElement(ref EarthView.World.Core.XmlElement element)
					{
						return base.ToXmlElement_NoVirtual(ref element);
					}
					public override void PreUpdateSceneGraph(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
					{
						base.PreUpdateSceneGraph_NoVirtual(source,camera);
					}
					public override void PreFindVisibleObjects(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
					{
						base.PreFindVisibleObjects_NoVirtual(source,irs,v);
					}
					public override void PostFindVisibleObjects(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
					{
						base.PostFindVisibleObjects_NoVirtual(source,irs,v);
					}
					public override void ShadowTexturesUpdated(ulong numberOfShadowTextures)
					{
						base.ShadowTexturesUpdated_NoVirtual(numberOfShadowTextures);
					}
					public override void ShadowTextureCasterPreViewProj(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera camera, ulong iteration)
					{
						base.ShadowTextureCasterPreViewProj_NoVirtual(light,camera,iteration);
					}
					public override void ShadowTextureReceiverPreViewProj(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Frustum frustum)
					{
						base.ShadowTextureReceiverPreViewProj_NoVirtual(light,frustum);
					}
					public override bool SortLightsAffectingFrustum(ref EarthView.World.Graphic.LightList lightList)
					{
						return base.SortLightsAffectingFrustum_NoVirtual(ref lightList);
					}
					public override void SceneManagerDestroyed(EarthView.World.Graphic.SceneManager source)
					{
						base.SceneManagerDestroyed_NoVirtual(source);
					}
					public static GlobeAtmosphere FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeAtmosphere obj = baseObj as  GlobeAtmosphere;
						if (object.Equals(obj, null))
						{
							obj = new GlobeAtmosphere(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeAtmosphere");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeAtmosphereClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeAtmosphere emptyInstance = new GlobeAtmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 环境工厂类
				/// </summary>
				public class AtmosphereFactory : EarthView.World.Spatial.Spatial3D.Iatmospherefactory
				{
					public AtmosphereFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAtmosphereFactoryProxy", null);
						if (!"EarthView.World.Spatial.Effect3D.AtmosphereFactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr pScene);

					public new EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance_NoVirtual(EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_NoVirtual(this.NativeObject, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(IntPtr pNativeObject, IntPtr pScene);

					public override EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance(EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(this.NativeObject, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_NoVirtual(IntPtr pNativeObject, string strXml, IntPtr pScene);

					public new EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance_NoVirtual(string strXml, EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_NoVirtual(this.NativeObject, strXml, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(IntPtr pNativeObject, string strXml, IntPtr pScene);

					public override EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance(string strXml, EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(this.NativeObject, strXml, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr element, IntPtr pScene);

					public new EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance_NoVirtual(ref EarthView.World.Core.XmlElement element, EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(IntPtr pNativeObject, IntPtr element, IntPtr pScene);

					public override EarthView.World.Spatial.Spatial3D.Iatmosphere CreateInstance(ref EarthView.World.Core.XmlElement element, EarthView.World.Graphic.SceneManager pScene)
					{
						IntPtr __ptr = EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject, object.Equals(pScene, null) ? IntPtr.Zero : pScene.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Spatial3D.Iatmosphere csObj = new EarthView.World.Spatial.Spatial3D.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IAtmosphere");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Spatial3D.Iatmosphere;
							csObj.BindNativeObject(__ptr, "IAtmosphere");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_NoVirtual(IntPtr pNativeObject, IntPtr environment);

					public new void DestroyInstance_NoVirtual(EarthView.World.Spatial.Spatial3D.Iatmosphere environment)
					{
						EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_NoVirtual(this.NativeObject, object.Equals(environment, null) ? IntPtr.Zero : environment.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere(IntPtr pNativeObject, IntPtr environment);

					public override void DestroyInstance(EarthView.World.Spatial.Spatial3D.Iatmosphere environment)
					{
						EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere(this.NativeObject, object.Equals(environment, null) ? IntPtr.Zero : environment.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_d.so");
							private static bool csbLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_CSharp_d.so");

						#else 
							private static bool bLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D.so");
							private static bool csbLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_CSharp.so");

						#else 
							private static bool bLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadAtmosphereFactory = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CAtmosphereFactory", new AtmosphereFactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CAtmosphereFactoryProxy", new AtmosphereFactoryClassFactory());

					public AtmosphereFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(IntPtr pObject, createInstance_CallBack_IAtmosphere_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(IntPtr pObject, createInstance_CallBack_IAtmosphere_EVString_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(IntPtr pObject, createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere(IntPtr pObject, destroyInstance_CallBack_void_IAtmosphere pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_createInstance_CallBack_IAtmosphere_CSceneManager = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Function;
							GC.KeepAlive(m_createInstance_CallBack_IAtmosphere_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(this.NativeObject, m_createInstance_CallBack_IAtmosphere_CSceneManager);
							m_createInstance_CallBack_IAtmosphere_EVString_CSceneManager = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Function;
							GC.KeepAlive(m_createInstance_CallBack_IAtmosphere_EVString_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(this.NativeObject, m_createInstance_CallBack_IAtmosphere_EVString_CSceneManager);
							m_createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Function;
							GC.KeepAlive(m_createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(this.NativeObject, m_createInstance_CallBack_IAtmosphere_CXmlElement_CSceneManager);
							m_destroyInstance_CallBack_void_IAtmosphere = EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Function;
							GC.KeepAlive(m_destroyInstance_CallBack_void_IAtmosphere);
							EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere(this.NativeObject, m_destroyInstance_CallBack_void_IAtmosphere);
						}
					}
					public static AtmosphereFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AtmosphereFactory obj = baseObj as  AtmosphereFactory;
						if (object.Equals(obj, null))
						{
							obj = new AtmosphereFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAtmosphereFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AtmosphereFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AtmosphereFactory emptyInstance = new AtmosphereFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
