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
			namespace Atlas
			{
				public class VectorOctreeCachePublisher : EarthView.World.Core.AllocatedObject
				{
					public VectorOctreeCachePublisher() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CVectorOctreeCachePublisherProxy", null);
						if (!"EarthView.World.Spatial3D.Atlas.VectorOctreeCachePublisher".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte publish_CallBack_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(IntPtr pLayer, ref IntPtr path, ref IntPtr fileName, IntPtr fieldNames);

					protected publish_CallBack_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector m_publish_CallBack_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_NoVirtual(IntPtr pNativeObject, IntPtr pLayer, string path, string fileName, IntPtr fieldNames);

					public virtual bool Publish_NoVirtual(EarthView.World.Spatial3D.Atlas.Iscenelayer pLayer, string path, string fileName, EarthView.World.Spatial3D.Atlas.Vector3DCacheFieldVector fieldNames)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_NoVirtual(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject, path, fileName, object.Equals(fieldNames, null) ? IntPtr.Zero : fieldNames.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Function(IntPtr pLayer, ref IntPtr path, ref IntPtr fileName, IntPtr fieldNames)
					{
						EarthView.World.Spatial3D.Atlas.Iscenelayer csobj_pLayer = new EarthView.World.Spatial3D.Atlas.Iscenelayer(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pLayer.BindNativeObject(pLayer,"ISceneLayer");
						csobj_pLayer.Delegate = true;
						IClassFactory csobj_pLayerClassFactory = GlobalClassFactoryMap.Get(csobj_pLayer.GetCppInstanceTypeName());
						if (csobj_pLayerClassFactory != null)
						{
							csobj_pLayer.Delegate = true;
							csobj_pLayer = csobj_pLayerClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Iscenelayer;
							csobj_pLayer.BindNativeObject(pLayer, "ISceneLayer");
							csobj_pLayer.Delegate = true;
						}
						string strpath= Marshal.PtrToStringAnsi(path);
						ClassFactory.FreeString(ref path);
						string strfileName= Marshal.PtrToStringAnsi(fileName);
						ClassFactory.FreeString(ref fileName);
						EarthView.World.Spatial3D.Atlas.Vector3DCacheFieldVector csobj_fieldNames = new EarthView.World.Spatial3D.Atlas.Vector3DCacheFieldVector(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_fieldNames.BindNativeObject(fieldNames,"CVector3DCacheFieldVector");
						csobj_fieldNames.Delegate = true;
						IClassFactory csobj_fieldNamesClassFactory = GlobalClassFactoryMap.Get(csobj_fieldNames.GetCppInstanceTypeName());
						if (csobj_fieldNamesClassFactory != null)
						{
							csobj_fieldNames.Delegate = true;
							csobj_fieldNames = csobj_fieldNamesClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Vector3DCacheFieldVector;
							csobj_fieldNames.BindNativeObject(fieldNames, "CVector3DCacheFieldVector");
							csobj_fieldNames.Delegate = true;
						}
						
						bool csret=Publish(csobj_pLayer, strpath,strfileName,csobj_fieldNames);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(IntPtr pNativeObject, IntPtr pLayer, string path, string fileName, IntPtr fieldNames);

					public virtual bool Publish(EarthView.World.Spatial3D.Atlas.Iscenelayer pLayer, string path, string fileName, EarthView.World.Spatial3D.Atlas.Vector3DCacheFieldVector fieldNames)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(this.NativeObject, object.Equals(pLayer, null) ? IntPtr.Zero : pLayer.NativeObject, path, fileName, object.Equals(fieldNames, null) ? IntPtr.Zero : fieldNames.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void stopPublish_CallBack_void();

					protected stopPublish_CallBack_void m_stopPublish_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_NoVirtual(IntPtr pNativeObject);

					public virtual void StopPublish_NoVirtual()
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Function()
					{
						StopPublish();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void(IntPtr pNativeObject);

					public virtual void StopPublish()
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setPublishListener_CallBack_void_CVectorOctreePublishListener(IntPtr listener);

					protected setPublishListener_CallBack_void_CVectorOctreePublishListener m_setPublishListener_CallBack_void_CVectorOctreePublishListener;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

					public virtual void SetPublishListener_NoVirtual(EarthView.World.Spatial3D.Atlas.VectorOctreePublishListener listener)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Function(IntPtr listener)
					{
						EarthView.World.Spatial3D.Atlas.VectorOctreePublishListener csobj_listener = new EarthView.World.Spatial3D.Atlas.VectorOctreePublishListener(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_listener.BindNativeObject(listener,"CVectorOctreePublishListener");
						csobj_listener.Delegate = true;
						IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
						if (csobj_listenerClassFactory != null)
						{
							csobj_listener.Delegate = true;
							csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Spatial3D.Atlas.VectorOctreePublishListener;
							csobj_listener.BindNativeObject(listener, "CVectorOctreePublishListener");
							csobj_listener.Delegate = true;
						}
						
						SetPublishListener(csobj_listener);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener(IntPtr pNativeObject, IntPtr listener);

					public virtual void SetPublishListener(EarthView.World.Spatial3D.Atlas.VectorOctreePublishListener listener)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setTotalCount_CallBack_void_ev_uint32(uint count);

					protected setTotalCount_CallBack_void_ev_uint32 m_setTotalCount_CallBack_void_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_NoVirtual(IntPtr pNativeObject, uint count);

					public virtual void SetTotalCount_NoVirtual(uint count)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_NoVirtual(this.NativeObject, count);
						
					}

					protected  void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Function(uint count)
					{
						SetTotalCount(count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32(IntPtr pNativeObject, uint count);

					public virtual void SetTotalCount(uint count)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32(this.NativeObject, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void updateProgressInformation_CallBack_void_EVString_ev_uint32(ref IntPtr info, uint publishCount);

					protected updateProgressInformation_CallBack_void_EVString_ev_uint32 m_updateProgressInformation_CallBack_void_EVString_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_NoVirtual(IntPtr pNativeObject, string info, uint publishCount);

					public virtual void UpdateProgressInformation_NoVirtual(string info, uint publishCount)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_NoVirtual(this.NativeObject, info, publishCount);
						
					}

					protected  void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Function(ref IntPtr info, uint publishCount)
					{
						string strinfo= Marshal.PtrToStringAnsi(info);
						ClassFactory.FreeString(ref info);
						
						UpdateProgressInformation(strinfo,publishCount);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32(IntPtr pNativeObject, string info, uint publishCount);

					public virtual void UpdateProgressInformation(string info, uint publishCount)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32(this.NativeObject, info, publishCount);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setInformation_CallBack_void_EVString_ev_int32(ref IntPtr info, int percent);

					protected setInformation_CallBack_void_EVString_ev_int32 m_setInformation_CallBack_void_EVString_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_NoVirtual(IntPtr pNativeObject, string info, int percent);

					public virtual void SetInformation_NoVirtual(string info, int percent)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_NoVirtual(this.NativeObject, info, percent);
						
					}

					protected  void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Function(ref IntPtr info, int percent)
					{
						string strinfo= Marshal.PtrToStringAnsi(info);
						ClassFactory.FreeString(ref info);
						
						SetInformation(strinfo,percent);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32(IntPtr pNativeObject, string info, int percent);

					public virtual void SetInformation(string info, int percent)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32(this.NativeObject, info, percent);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_d.so");
							private static bool csbLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.so");

						#else 
							private static bool bLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#elif Linux 
							private static bool bLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer.so");
							private static bool csbLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_CSharp.so");

						#else 
							private static bool bLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadVectorOctreeCachePublisher = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher", new VectorOctreeCachePublisherClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisherProxy", new VectorOctreeCachePublisherClassFactory());

					public VectorOctreeCachePublisher(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(IntPtr pObject, publish_CallBack_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void(IntPtr pObject, stopPublish_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener(IntPtr pObject, setPublishListener_CallBack_void_CVectorOctreePublishListener pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32(IntPtr pObject, setTotalCount_CallBack_void_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32(IntPtr pObject, updateProgressInformation_CallBack_void_EVString_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32(IntPtr pObject, setInformation_CallBack_void_EVString_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_publish_CallBack_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector = EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Function;
							GC.KeepAlive(m_publish_CallBack_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(this.NativeObject, m_publish_CallBack_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector);
							m_stopPublish_CallBack_void = EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Function;
							GC.KeepAlive(m_stopPublish_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void(this.NativeObject, m_stopPublish_CallBack_void);
							m_setPublishListener_CallBack_void_CVectorOctreePublishListener = EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Function;
							GC.KeepAlive(m_setPublishListener_CallBack_void_CVectorOctreePublishListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener(this.NativeObject, m_setPublishListener_CallBack_void_CVectorOctreePublishListener);
							m_setTotalCount_CallBack_void_ev_uint32 = EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Function;
							GC.KeepAlive(m_setTotalCount_CallBack_void_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32(this.NativeObject, m_setTotalCount_CallBack_void_ev_uint32);
							m_updateProgressInformation_CallBack_void_EVString_ev_uint32 = EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Function;
							GC.KeepAlive(m_updateProgressInformation_CallBack_void_EVString_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32(this.NativeObject, m_updateProgressInformation_CallBack_void_EVString_ev_uint32);
							m_setInformation_CallBack_void_EVString_ev_int32 = EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Function;
							GC.KeepAlive(m_setInformation_CallBack_void_EVString_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32(this.NativeObject, m_setInformation_CallBack_void_EVString_ev_int32);
						}
					}
					public static VectorOctreeCachePublisher FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						VectorOctreeCachePublisher obj = baseObj as  VectorOctreeCachePublisher;
						if (object.Equals(obj, null))
						{
							obj = new VectorOctreeCachePublisher(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CVectorOctreeCachePublisher");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class VectorOctreeCachePublisherClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						VectorOctreeCachePublisher emptyInstance = new VectorOctreeCachePublisher(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>				
				/// 矢量缓存发布进度监听类
				/// </summary>
				public class VectorOctreePublishListener : EarthView.World.Core.BaseObject
				{
					public VectorOctreePublishListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CVectorOctreePublishListenerProxy", null);
						if (!"EarthView.World.Spatial3D.Atlas.VectorOctreePublishListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setInformation_CallBack_void_EVString_ev_int32(ref IntPtr info, int percent);

					protected setInformation_CallBack_void_EVString_ev_int32 m_setInformation_CallBack_void_EVString_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_NoVirtual(IntPtr pNativeObject, string info, int percent);

					/// <summary>
					/// 消息接收
					/// </summary>
					/// <param name="info">消息内容</param>
					/// <param name="percent">进程</param>
					/// <returns></returns>
					public virtual void SetInformation_NoVirtual(string info, int percent)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_NoVirtual(this.NativeObject, info, percent);
						
					}

					protected  void EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Function(ref IntPtr info, int percent)
					{
						string strinfo= Marshal.PtrToStringAnsi(info);
						ClassFactory.FreeString(ref info);
						
						SetInformation(strinfo,percent);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32(IntPtr pNativeObject, string info, int percent);

					/// <summary>
					/// 消息接收
					/// </summary>
					/// <param name="info">消息内容</param>
					/// <param name="percent">进程</param>
					/// <returns></returns>
					public virtual void SetInformation(string info, int percent)
					{
						EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32(this.NativeObject, info, percent);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_d.so");
							private static bool csbLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.so");

						#else 
							private static bool bLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#elif Linux 
							private static bool bLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer.so");
							private static bool csbLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_CSharp.so");

						#else 
							private static bool bLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadVectorOctreePublishListener = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener", new VectorOctreePublishListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListenerProxy", new VectorOctreePublishListenerClassFactory());

					public VectorOctreePublishListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32(IntPtr pObject, setInformation_CallBack_void_EVString_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_setInformation_CallBack_void_EVString_ev_int32 = EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Function;
							GC.KeepAlive(m_setInformation_CallBack_void_EVString_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32(this.NativeObject, m_setInformation_CallBack_void_EVString_ev_int32);
						}
					}
					public static VectorOctreePublishListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						VectorOctreePublishListener obj = baseObj as  VectorOctreePublishListener;
						if (object.Equals(obj, null))
						{
							obj = new VectorOctreePublishListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CVectorOctreePublishListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class VectorOctreePublishListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						VectorOctreePublishListener emptyInstance = new VectorOctreePublishListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Vector3DCacheField : EarthView.World.Core.BaseObject
				{
					private string mFieldNameField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldName(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldName( IntPtr pObject, string value );

					public 					string MFieldName
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldName(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							mFieldNameField = value;
							Set_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldName( this.NativeObject,value );
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldType(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldType( IntPtr pObject, int value );

					public 					int MFieldType
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldType(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldType(this.NativeObject,value);
						}
					}

					public Vector3DCacheField() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CVector3DCacheField",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public Vector3DCacheField(string fieldName, EarthView.World.Spatial.GeoDataset.EVFIELDTYPE type) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuefieldName = new BasePtr(fieldName);
						list.Add("fieldName", valuefieldName.PtrVal);
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						Create("CVector3DCacheField", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CVector3DCacheField_getFieldName_EVString(IntPtr pNativeObject);

					public string GetFieldName()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CVector3DCacheField_getFieldName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Atlas_CVector3DCacheField_getFieldType_EVFieldType(IntPtr pNativeObject);

					public EarthView.World.Spatial.GeoDataset.EVFIELDTYPE GetFieldType()
					{
						int ret=EarthView_World_Spatial3D_Atlas_CVector3DCacheField_getFieldType_EVFieldType(this.NativeObject);
						
						return (EarthView.World.Spatial.GeoDataset.EVFIELDTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CVector3DCacheField_toXmlElement_CXmlElement(IntPtr pNativeObject);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					public EarthView.World.Core.XmlElement ToXmlElement()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CVector3DCacheField_toXmlElement_CXmlElement(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheField_fromXmlElement_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					public void FromXmlElement(EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheField_fromXmlElement_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_d.so");
							private static bool csbLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.so");

						#else 
							private static bool bLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#elif Linux 
							private static bool bLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer.so");
							private static bool csbLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_CSharp.so");

						#else 
							private static bool bLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadVector3DCacheField = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVector3DCacheField", new Vector3DCacheFieldClassFactory());

					public Vector3DCacheField(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Vector3DCacheField FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Vector3DCacheField obj = baseObj as  Vector3DCacheField;
						if (object.Equals(obj, null))
						{
							obj = new Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CVector3DCacheField");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Vector3DCacheFieldClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Vector3DCacheField emptyInstance = new Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Vector3DCacheFieldVector : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public Vector3DCacheFieldVector() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CVector3DCacheFieldVector",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_push_back_void_CVector3DCacheField(IntPtr pNativeObject, IntPtr t);

					/// <summary>
					/// 在容器的尾部添加值为t的元素
					/// </summary>
					/// <param name="t">添加元素的值</param>
					/// <returns></returns>
					public void Push_back(EarthView.World.Spatial3D.Atlas.Vector3DCacheField t)
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_push_back_void_CVector3DCacheField(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_pop_back_void(IntPtr pNativeObject);

					/// <summary>
					/// 删除容器的最后一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Pop_back()
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_pop_back_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_front_CVector3DCacheField(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器的第一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Atlas.Vector3DCacheField Front()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_front_CVector3DCacheField(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Atlas.Vector3DCacheField csObj = new EarthView.World.Spatial3D.Atlas.Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3DCacheField");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Vector3DCacheField;
							csObj.BindNativeObject(__ptr, "CVector3DCacheField");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_back_CVector3DCacheField(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器的最后一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Atlas.Vector3DCacheField Back()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_back_CVector3DCacheField(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Atlas.Vector3DCacheField csObj = new EarthView.World.Spatial3D.Atlas.Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3DCacheField");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Vector3DCacheField;
							csObj.BindNativeObject(__ptr, "CVector3DCacheField");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_insert_void_ev_uint32_CVector3DCacheField(IntPtr pNativeObject, uint pos, IntPtr t);

					/// <summary>
					/// 在迭代器pos所指向的元素前面插入值为t的新元素
					/// </summary>
					/// <param name="pos">插入元素的位置</param>
					/// <param name="t">插入元素的值</param>
					/// <returns></returns>
					public void Insert(uint pos, EarthView.World.Spatial3D.Atlas.Vector3DCacheField t)
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_insert_void_ev_uint32_CVector3DCacheField(this.NativeObject, pos, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					/// <summary>
					/// 去掉位置pos处元素的值
					/// </summary>
					/// <param name="pos">元素的位置</param>
					/// <returns>返回容器当前的值</returns>
					public void Remove(ulong pos)
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_remove_void_ev_size_t(this.NativeObject, pos);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 返回标记容器大小是否为0的布尔值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_at_CVector3DCacheField_ev_size_t(IntPtr pNativeObject, ulong n);

					/// <summary>
					/// 返回下标为n的元素的引用
					/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Atlas.Vector3DCacheField At(ulong n)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_at_CVector3DCacheField_ev_size_t(this.NativeObject, n);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Atlas.Vector3DCacheField csObj = new EarthView.World.Spatial3D.Atlas.Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3DCacheField");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Vector3DCacheField;
							csObj.BindNativeObject(__ptr, "CVector3DCacheField");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器中元素的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					/// <summary>
					/// 调整容器的长度大小，使其能容纳newSize个元素
					/// </summary>
					/// <param name="newSize">长度</param>
					/// <returns></returns>
					public void Resize(ulong newSize)
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_resize_void_ev_size_t(this.NativeObject, newSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					public void Reserve(ulong count)
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_reserve_void_ev_size_t(this.NativeObject, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 删除容器中的所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_swap_void_CVector3DCacheFieldVector(IntPtr pNativeObject, IntPtr list);

					/// <summary>
					/// 交换内容
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Swap(ref EarthView.World.Spatial3D.Atlas.Vector3DCacheFieldVector list)
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_swap_void_CVector3DCacheFieldVector(this.NativeObject, object.Equals(list, null) ? IntPtr.Zero : list.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_toXmlElement_CXmlElement(IntPtr pNativeObject);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					public EarthView.World.Core.XmlElement ToXmlElement()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_toXmlElement_CXmlElement(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DLayer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_fromXmlElement_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					public void FromXmlElement(EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_fromXmlElement_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_d.so");
							private static bool csbLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.so");

						#else 
							private static bool bLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_d.dll");
							private static bool csbLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#elif Linux 
							private static bool bLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer.so");
							private static bool csbLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_CSharp.so");

						#else 
							private static bool bLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer.dll");
							private static bool csbLoadVector3DCacheFieldVector = LoadDll.Load("EV_Spatial3DLayer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector", new Vector3DCacheFieldVectorClassFactory());

					public Vector3DCacheFieldVector(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Vector3DCacheFieldVector FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Vector3DCacheFieldVector obj = baseObj as  Vector3DCacheFieldVector;
						if (object.Equals(obj, null))
						{
							obj = new Vector3DCacheFieldVector(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CVector3DCacheFieldVector");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Vector3DCacheFieldVectorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Vector3DCacheFieldVector emptyInstance = new Vector3DCacheFieldVector(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
