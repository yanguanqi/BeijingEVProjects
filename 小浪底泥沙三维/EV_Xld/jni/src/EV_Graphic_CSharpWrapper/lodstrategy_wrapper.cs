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
			public class LodStrategy : EarthView.World.Core.AllocatedObject
			{
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getValueImpl_CallBack_Real_CMovableObject_CCamera(IntPtr movableObject, IntPtr camera);

				protected getValueImpl_CallBack_Real_CMovableObject_CCamera m_getValueImpl_CallBack_Real_CMovableObject_CCamera;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_getValueImpl_Real_CMovableObject_CCamera_NoVirtual(IntPtr pNativeObject, IntPtr movableObject, IntPtr camera);

				protected virtual double GetValueImpl_NoVirtual(EarthView.World.Graphic.MovableObject movableObject, EarthView.World.Graphic.Camera camera)
				{
					double ret=EarthView_World_Graphic_CLodStrategy_getValueImpl_Real_CMovableObject_CCamera_NoVirtual(this.NativeObject, object.Equals(movableObject, null) ? IntPtr.Zero : movableObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_World_Graphic_CLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Function(IntPtr movableObject, IntPtr camera)
				{
					EarthView.World.Graphic.MovableObject csobj_movableObject = new EarthView.World.Graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_movableObject.BindNativeObject(movableObject,"CMovableObject");
					csobj_movableObject.Delegate = true;
					IClassFactory csobj_movableObjectClassFactory = GlobalClassFactoryMap.Get(csobj_movableObject.GetCppInstanceTypeName());
					if (csobj_movableObjectClassFactory != null)
					{
						csobj_movableObject.Delegate = true;
						csobj_movableObject = csobj_movableObjectClassFactory.Create() as EarthView.World.Graphic.MovableObject;
						csobj_movableObject.BindNativeObject(movableObject, "CMovableObject");
						csobj_movableObject.Delegate = true;
					}
					EarthView.World.Graphic.Camera csobj_camera = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_camera.BindNativeObject(camera,"CCamera");
					csobj_camera.Delegate = true;
					IClassFactory csobj_cameraClassFactory = GlobalClassFactoryMap.Get(csobj_camera.GetCppInstanceTypeName());
					if (csobj_cameraClassFactory != null)
					{
						csobj_camera.Delegate = true;
						csobj_camera = csobj_cameraClassFactory.Create() as EarthView.World.Graphic.Camera;
						csobj_camera.BindNativeObject(camera, "CCamera");
						csobj_camera.Delegate = true;
					}
					
					double csret=GetValueImpl(csobj_movableObject, csobj_camera);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_getValueImpl_Real_CMovableObject_CCamera(IntPtr pNativeObject, IntPtr movableObject, IntPtr camera);

				protected virtual double GetValueImpl(EarthView.World.Graphic.MovableObject movableObject, EarthView.World.Graphic.Camera camera)
				{
					double ret=EarthView_World_Graphic_CLodStrategy_getValueImpl_Real_CMovableObject_CCamera(this.NativeObject, object.Equals(movableObject, null) ? IntPtr.Zero : movableObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return ret;
					
				}

				public LodStrategy(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					Create("CLodStrategyProxy", list);
					if (!"EarthView.World.Graphic.LodStrategy".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getBaseValue_CallBack_Real();

				protected getBaseValue_CallBack_Real m_getBaseValue_CallBack_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_getBaseValue_Real_NoVirtual(IntPtr pNativeObject);

				public virtual double GetBaseValue_NoVirtual()
				{
					double ret=EarthView_World_Graphic_CLodStrategy_getBaseValue_Real_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_World_Graphic_CLodStrategy_getBaseValue_Real_Function()
				{
					double csret=GetBaseValue();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_getBaseValue_Real(IntPtr pNativeObject);

				public virtual double GetBaseValue()
				{
					double ret=EarthView_World_Graphic_CLodStrategy_getBaseValue_Real(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double transformBias_CallBack_Real_Real(double factor);

				protected transformBias_CallBack_Real_Real m_transformBias_CallBack_Real_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_transformBias_Real_Real_NoVirtual(IntPtr pNativeObject, double factor);

				public virtual double TransformBias_NoVirtual(double factor)
				{
					double ret=EarthView_World_Graphic_CLodStrategy_transformBias_Real_Real_NoVirtual(this.NativeObject, factor);
					
					return ret;
					
				}

				protected  double EarthView_World_Graphic_CLodStrategy_transformBias_Real_Real_Function(double factor)
				{
					double csret=TransformBias(factor);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_transformBias_Real_Real(IntPtr pNativeObject, double factor);

				public virtual double TransformBias(double factor)
				{
					double ret=EarthView_World_Graphic_CLodStrategy_transformBias_Real_Real(this.NativeObject, factor);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double transformUserValue_CallBack_Real_Real(double userValue);

				protected transformUserValue_CallBack_Real_Real m_transformUserValue_CallBack_Real_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_transformUserValue_Real_Real_NoVirtual(IntPtr pNativeObject, double userValue);

				public virtual double TransformUserValue_NoVirtual(double userValue)
				{
					double ret=EarthView_World_Graphic_CLodStrategy_transformUserValue_Real_Real_NoVirtual(this.NativeObject, userValue);
					
					return ret;
					
				}

				protected  double EarthView_World_Graphic_CLodStrategy_transformUserValue_Real_Real_Function(double userValue)
				{
					double csret=TransformUserValue(userValue);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_transformUserValue_Real_Real(IntPtr pNativeObject, double userValue);

				public virtual double TransformUserValue(double userValue)
				{
					double ret=EarthView_World_Graphic_CLodStrategy_transformUserValue_Real_Real(this.NativeObject, userValue);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CLodStrategy_getValue_Real_CMovableObject_CCamera(IntPtr pNativeObject, IntPtr movableObject, IntPtr camera);

				public double GetValue(EarthView.World.Graphic.MovableObject movableObject, EarthView.World.Graphic.Camera camera)
				{
					double ret=EarthView_World_Graphic_CLodStrategy_getValue_Real_CMovableObject_CCamera(this.NativeObject, object.Equals(movableObject, null) ? IntPtr.Zero : movableObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort getIndex_CallBack_ev_uint16_Real_MeshLodUsageList(double value, IntPtr meshLodUsageList);

				protected getIndex_CallBack_ev_uint16_Real_MeshLodUsageList m_getIndex_CallBack_ev_uint16_Real_MeshLodUsageList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_NoVirtual(IntPtr pNativeObject, double value, IntPtr meshLodUsageList);

				public virtual ushort GetIndex_NoVirtual(double value, EarthView.World.Graphic.Mesh.MeshLodUsageList meshLodUsageList)
				{
					ushort ret=EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_NoVirtual(this.NativeObject, value, object.Equals(meshLodUsageList, null) ? IntPtr.Zero : meshLodUsageList.NativeObject);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Function(double value, IntPtr meshLodUsageList)
				{
					EarthView.World.Graphic.Mesh.MeshLodUsageList csobj_meshLodUsageList = new EarthView.World.Graphic.Mesh.MeshLodUsageList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_meshLodUsageList.BindNativeObject(meshLodUsageList,"MeshLodUsageList");
					csobj_meshLodUsageList.Delegate = true;
					IClassFactory csobj_meshLodUsageListClassFactory = GlobalClassFactoryMap.Get(csobj_meshLodUsageList.GetCppInstanceTypeName());
					if (csobj_meshLodUsageListClassFactory != null)
					{
						csobj_meshLodUsageList.Delegate = true;
						csobj_meshLodUsageList = csobj_meshLodUsageListClassFactory.Create() as EarthView.World.Graphic.Mesh.MeshLodUsageList;
						csobj_meshLodUsageList.BindNativeObject(meshLodUsageList, "MeshLodUsageList");
						csobj_meshLodUsageList.Delegate = true;
					}
					
					ushort csret=GetIndex(value, csobj_meshLodUsageList);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList(IntPtr pNativeObject, double value, IntPtr meshLodUsageList);

				public virtual ushort GetIndex(double value, EarthView.World.Graphic.Mesh.MeshLodUsageList meshLodUsageList)
				{
					ushort ret=EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList(this.NativeObject, value, object.Equals(meshLodUsageList, null) ? IntPtr.Zero : meshLodUsageList.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort getIndex_CallBack_ev_uint16_Real_LodValueList(double value, IntPtr materialLodValueList);

				protected getIndex_CallBack_ev_uint16_Real_LodValueList m_getIndex_CallBack_ev_uint16_Real_LodValueList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_LodValueList_NoVirtual(IntPtr pNativeObject, double value, IntPtr materialLodValueList);

				public virtual ushort GetIndex_NoVirtual(double value, EarthView.World.Graphic.LodValueList materialLodValueList)
				{
					ushort ret=EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_LodValueList_NoVirtual(this.NativeObject, value, object.Equals(materialLodValueList, null) ? IntPtr.Zero : materialLodValueList.NativeObject);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_LodValueList_Function(double value, IntPtr materialLodValueList)
				{
					EarthView.World.Graphic.LodValueList csobj_materialLodValueList = new EarthView.World.Graphic.LodValueList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_materialLodValueList.BindNativeObject(materialLodValueList,"LodValueList");
					csobj_materialLodValueList.Delegate = true;
					IClassFactory csobj_materialLodValueListClassFactory = GlobalClassFactoryMap.Get(csobj_materialLodValueList.GetCppInstanceTypeName());
					if (csobj_materialLodValueListClassFactory != null)
					{
						csobj_materialLodValueList.Delegate = true;
						csobj_materialLodValueList = csobj_materialLodValueListClassFactory.Create() as EarthView.World.Graphic.LodValueList;
						csobj_materialLodValueList.BindNativeObject(materialLodValueList, "LodValueList");
						csobj_materialLodValueList.Delegate = true;
					}
					
					ushort csret=GetIndex(value, csobj_materialLodValueList);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_LodValueList(IntPtr pNativeObject, double value, IntPtr materialLodValueList);

				public virtual ushort GetIndex(double value, EarthView.World.Graphic.LodValueList materialLodValueList)
				{
					ushort ret=EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_LodValueList(this.NativeObject, value, object.Equals(materialLodValueList, null) ? IntPtr.Zero : materialLodValueList.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void sort_CallBack_void_MeshLodUsageList(IntPtr meshLodUsageList);

				protected sort_CallBack_void_MeshLodUsageList m_sort_CallBack_void_MeshLodUsageList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CLodStrategy_sort_void_MeshLodUsageList_NoVirtual(IntPtr pNativeObject, IntPtr meshLodUsageList);

				public virtual void Sort_NoVirtual(ref EarthView.World.Graphic.Mesh.MeshLodUsageList meshLodUsageList)
				{
					EarthView_World_Graphic_CLodStrategy_sort_void_MeshLodUsageList_NoVirtual(this.NativeObject, object.Equals(meshLodUsageList, null) ? IntPtr.Zero : meshLodUsageList.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CLodStrategy_sort_void_MeshLodUsageList_Function(IntPtr meshLodUsageList)
				{
					EarthView.World.Graphic.Mesh.MeshLodUsageList csobj_meshLodUsageList = new EarthView.World.Graphic.Mesh.MeshLodUsageList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_meshLodUsageList.BindNativeObject(meshLodUsageList,"MeshLodUsageList");
					csobj_meshLodUsageList.Delegate = true;
					IClassFactory csobj_meshLodUsageListClassFactory = GlobalClassFactoryMap.Get(csobj_meshLodUsageList.GetCppInstanceTypeName());
					if (csobj_meshLodUsageListClassFactory != null)
					{
						csobj_meshLodUsageList.Delegate = true;
						csobj_meshLodUsageList = csobj_meshLodUsageListClassFactory.Create() as EarthView.World.Graphic.Mesh.MeshLodUsageList;
						csobj_meshLodUsageList.BindNativeObject(meshLodUsageList, "MeshLodUsageList");
						csobj_meshLodUsageList.Delegate = true;
					}
					
					Sort(ref csobj_meshLodUsageList);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CLodStrategy_sort_void_MeshLodUsageList(IntPtr pNativeObject, IntPtr meshLodUsageList);

				public virtual void Sort(ref EarthView.World.Graphic.Mesh.MeshLodUsageList meshLodUsageList)
				{
					EarthView_World_Graphic_CLodStrategy_sort_void_MeshLodUsageList(this.NativeObject, object.Equals(meshLodUsageList, null) ? IntPtr.Zero : meshLodUsageList.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isSorted_CallBack_ev_bool_LodValueList(IntPtr values);

				protected isSorted_CallBack_ev_bool_LodValueList m_isSorted_CallBack_ev_bool_LodValueList;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CLodStrategy_isSorted_ev_bool_LodValueList_NoVirtual(IntPtr pNativeObject, IntPtr values);

				public virtual bool IsSorted_NoVirtual(EarthView.World.Graphic.LodValueList values)
				{
					byte ret=EarthView_World_Graphic_CLodStrategy_isSorted_ev_bool_LodValueList_NoVirtual(this.NativeObject, object.Equals(values, null) ? IntPtr.Zero : values.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CLodStrategy_isSorted_ev_bool_LodValueList_Function(IntPtr values)
				{
					EarthView.World.Graphic.LodValueList csobj_values = new EarthView.World.Graphic.LodValueList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_values.BindNativeObject(values,"LodValueList");
					csobj_values.Delegate = true;
					IClassFactory csobj_valuesClassFactory = GlobalClassFactoryMap.Get(csobj_values.GetCppInstanceTypeName());
					if (csobj_valuesClassFactory != null)
					{
						csobj_values.Delegate = true;
						csobj_values = csobj_valuesClassFactory.Create() as EarthView.World.Graphic.LodValueList;
						csobj_values.BindNativeObject(values, "LodValueList");
						csobj_values.Delegate = true;
					}
					
					bool csret=IsSorted(csobj_values);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CLodStrategy_isSorted_ev_bool_LodValueList(IntPtr pNativeObject, IntPtr values);

				public virtual bool IsSorted(EarthView.World.Graphic.LodValueList values)
				{
					byte ret=EarthView_World_Graphic_CLodStrategy_isSorted_ev_bool_LodValueList(this.NativeObject, object.Equals(values, null) ? IntPtr.Zero : values.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CLodStrategy_assertSorted_void_LodValueList(IntPtr pNativeObject, IntPtr values);

				public void AssertSorted(EarthView.World.Graphic.LodValueList values)
				{
					EarthView_World_Graphic_CLodStrategy_assertSorted_void_LodValueList(this.NativeObject, object.Equals(values, null) ? IntPtr.Zero : values.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CLodStrategy_getName_EVString(IntPtr pNativeObject);

				public string GetName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CLodStrategy_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLodStrategy = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadLodStrategy = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLodStrategy = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadLodStrategy = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadLodStrategy = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadLodStrategy = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLodStrategy = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadLodStrategy = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadLodStrategy = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadLodStrategy = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadLodStrategy = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadLodStrategy = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CLodStrategy", new LodStrategyClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CLodStrategyProxy", new LodStrategyClassFactory());

				public LodStrategy(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_getValueImpl_Real_CMovableObject_CCamera(IntPtr pObject, getValueImpl_CallBack_Real_CMovableObject_CCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_getBaseValue_Real(IntPtr pObject, getBaseValue_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_transformBias_Real_Real(IntPtr pObject, transformBias_CallBack_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_transformUserValue_Real_Real(IntPtr pObject, transformUserValue_CallBack_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList(IntPtr pObject, getIndex_CallBack_ev_uint16_Real_MeshLodUsageList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_LodValueList(IntPtr pObject, getIndex_CallBack_ev_uint16_Real_LodValueList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_sort_void_MeshLodUsageList(IntPtr pObject, sort_CallBack_void_MeshLodUsageList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_isSorted_ev_bool_LodValueList(IntPtr pObject, isSorted_CallBack_ev_bool_LodValueList pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getValueImpl_CallBack_Real_CMovableObject_CCamera = EarthView_World_Graphic_CLodStrategy_getValueImpl_Real_CMovableObject_CCamera_Function;
						GC.KeepAlive(m_getValueImpl_CallBack_Real_CMovableObject_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_getValueImpl_Real_CMovableObject_CCamera(this.NativeObject, m_getValueImpl_CallBack_Real_CMovableObject_CCamera);
						m_getBaseValue_CallBack_Real = EarthView_World_Graphic_CLodStrategy_getBaseValue_Real_Function;
						GC.KeepAlive(m_getBaseValue_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_getBaseValue_Real(this.NativeObject, m_getBaseValue_CallBack_Real);
						m_transformBias_CallBack_Real_Real = EarthView_World_Graphic_CLodStrategy_transformBias_Real_Real_Function;
						GC.KeepAlive(m_transformBias_CallBack_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_transformBias_Real_Real(this.NativeObject, m_transformBias_CallBack_Real_Real);
						m_transformUserValue_CallBack_Real_Real = EarthView_World_Graphic_CLodStrategy_transformUserValue_Real_Real_Function;
						GC.KeepAlive(m_transformUserValue_CallBack_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_transformUserValue_Real_Real(this.NativeObject, m_transformUserValue_CallBack_Real_Real);
						m_getIndex_CallBack_ev_uint16_Real_MeshLodUsageList = EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList_Function;
						GC.KeepAlive(m_getIndex_CallBack_ev_uint16_Real_MeshLodUsageList);
						EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_MeshLodUsageList(this.NativeObject, m_getIndex_CallBack_ev_uint16_Real_MeshLodUsageList);
						m_getIndex_CallBack_ev_uint16_Real_LodValueList = EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_LodValueList_Function;
						GC.KeepAlive(m_getIndex_CallBack_ev_uint16_Real_LodValueList);
						EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_getIndex_ev_uint16_Real_LodValueList(this.NativeObject, m_getIndex_CallBack_ev_uint16_Real_LodValueList);
						m_sort_CallBack_void_MeshLodUsageList = EarthView_World_Graphic_CLodStrategy_sort_void_MeshLodUsageList_Function;
						GC.KeepAlive(m_sort_CallBack_void_MeshLodUsageList);
						EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_sort_void_MeshLodUsageList(this.NativeObject, m_sort_CallBack_void_MeshLodUsageList);
						m_isSorted_CallBack_ev_bool_LodValueList = EarthView_World_Graphic_CLodStrategy_isSorted_ev_bool_LodValueList_Function;
						GC.KeepAlive(m_isSorted_CallBack_ev_bool_LodValueList);
						EV_RegisterCallback_EarthView_World_Graphic_CLodStrategy_isSorted_ev_bool_LodValueList(this.NativeObject, m_isSorted_CallBack_ev_bool_LodValueList);
					}
				}
				public static LodStrategy FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LodStrategy obj = baseObj as  LodStrategy;
					if (object.Equals(obj, null))
					{
						obj = new LodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLodStrategy");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LodStrategyClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LodStrategy emptyInstance = new LodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
