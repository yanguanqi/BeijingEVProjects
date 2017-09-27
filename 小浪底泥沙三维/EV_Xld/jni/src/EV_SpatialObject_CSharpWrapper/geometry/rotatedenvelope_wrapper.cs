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
			namespace Geometry
			{
				/// <summary>
				/// 可旋转的包围盒类
				/// </summary>
				public class RotatedEnvelope : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RotatedEnvelope() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRotatedEnvelope",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="envelope">包围盒对象</param>
					/// <param name="rotation">旋转角度</param>
					/// <returns></returns>
					public RotatedEnvelope(EarthView.World.Spatial.Geometry.Ienvelope envelope, double rotation) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueenvelope = new BasePtr(envelope);
						list.Add("envelope", valueenvelope.PtrVal);
						BasePtr valuerotation = new BasePtr(rotation);
						list.Add("rotation", valuerotation.PtrVal);
						Create("CRotatedEnvelope", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">包围盒对象</param>
					/// <returns></returns>
					public RotatedEnvelope(ref EarthView.World.Spatial.Geometry.RotatedEnvelope obj) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueobj = new BasePtr(obj);
						list.Add("obj", valueobj.PtrVal);
						Create("CRotatedEnvelope", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_CRotatedEnvelope_getEnvelope_IEnvelope(IntPtr pNativeObject);

					/// <summary>
					/// 获取包围盒对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒</returns>
					public EarthView.World.Spatial.Geometry.Ienvelope GetEnvelope()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_CRotatedEnvelope_getEnvelope_IEnvelope(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_CRotatedEnvelope_getRotation_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转角度</returns>
					public double GetRotation()
					{
						double ret=EarthView_World_Spatial_Geometry_CRotatedEnvelope_getRotation_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_CRotatedEnvelope_setRotation_void_ev_real64(IntPtr pNativeObject, double value);

					/// <summary>
					/// 设置旋转角度
					/// </summary>
					/// <param name="value">旋转角度</param>
					/// <returns></returns>
					public void SetRotation(double value)
					{
						EarthView_World_Spatial_Geometry_CRotatedEnvelope_setRotation_void_ev_real64(this.NativeObject, value);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_d.so");
							private static bool csbLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_CSharp_d.so");

						#else 
							private static bool bLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject.so");
							private static bool csbLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_CSharp.so");

						#else 
							private static bool bLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadRotatedEnvelope = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::CRotatedEnvelope", new RotatedEnvelopeClassFactory());

					public RotatedEnvelope(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RotatedEnvelope FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RotatedEnvelope obj = baseObj as  RotatedEnvelope;
						if (object.Equals(obj, null))
						{
							obj = new RotatedEnvelope(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRotatedEnvelope");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RotatedEnvelopeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RotatedEnvelope emptyInstance = new RotatedEnvelope(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
