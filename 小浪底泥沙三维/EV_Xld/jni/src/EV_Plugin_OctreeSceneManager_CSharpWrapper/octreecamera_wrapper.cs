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
			public class OctreeCamera : EarthView.World.Graphic.Camera
			{
				public enum VISIBILITY
				{
								NONE,
								PARTIAL,
								FULL
				
				}

				public OctreeCamera(string name, EarthView.World.Graphic.SceneManager ref_sm) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valueref_sm = new BasePtr(ref_sm);
					list.Add("ref_sm", valueref_sm.PtrVal);
					Create("COctreeCameraProxy", list);
					if (!"EarthView.World.Graphic.OctreeCamera".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Graphic_COctreeCamera_getVisibility_Visibility_CAxisAlignedBox(IntPtr pNativeObject, IntPtr bound);

				public EarthView.World.Graphic.OctreeCamera.VISIBILITY GetVisibility(EarthView.World.Spatial.Math.AxisAlignedBox bound)
				{
					int ret=EarthView_World_Graphic_COctreeCamera_getVisibility_Visibility_CAxisAlignedBox(this.NativeObject, object.Equals(bound, null) ? IntPtr.Zero : bound.NativeObject);
					
					return (EarthView.World.Graphic.OctreeCamera.VISIBILITY)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_NoVirtual(IntPtr pNativeObject, IntPtr bound, ref EarthView.World.Graphic.FRUSTUMPLANE culledBy);

				public new bool IsVisible_NoVirtual(EarthView.World.Spatial.Math.AxisAlignedBox bound, ref EarthView.World.Graphic.FRUSTUMPLANE culledBy)
				{
					byte ret=EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_NoVirtual(this.NativeObject, object.Equals(bound, null) ? IntPtr.Zero : bound.NativeObject, ref culledBy);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(IntPtr pNativeObject, IntPtr bound, ref EarthView.World.Graphic.FRUSTUMPLANE culledBy);

				public override bool IsVisible(EarthView.World.Spatial.Math.AxisAlignedBox bound, ref EarthView.World.Graphic.FRUSTUMPLANE culledBy)
				{
					byte ret=EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(this.NativeObject, object.Equals(bound, null) ? IntPtr.Zero : bound.NativeObject, ref culledBy);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_NoVirtual(IntPtr pNativeObject, IntPtr bound);

				public new bool IsVisible_NoVirtual(EarthView.World.Spatial.Math.AxisAlignedBox bound)
				{
					byte ret=EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_NoVirtual(this.NativeObject, object.Equals(bound, null) ? IntPtr.Zero : bound.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox(IntPtr pNativeObject, IntPtr bound);

				public override bool IsVisible(EarthView.World.Spatial.Math.AxisAlignedBox bound)
				{
					byte ret=EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox(this.NativeObject, object.Equals(bound, null) ? IntPtr.Zero : bound.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeCamera_OperatorAssign_void_COctreeCamera(IntPtr pNativeObject, IntPtr rhs);

				public void OperatorAssign(EarthView.World.Graphic.OctreeCamera rhs)
				{
					EarthView_World_Graphic_COctreeCamera_OperatorAssign_void_COctreeCamera(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_NoVirtual(IntPtr pNativeObject, string newName);

				public new EarthView.World.Graphic.Camera Clone_NoVirtual(string newName)
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_NoVirtual(this.NativeObject, newName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Camera csObj = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CCamera");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Camera;
						csObj.BindNativeObject(__ptr, "CCamera");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString(IntPtr pNativeObject, string newName);

				public override EarthView.World.Graphic.Camera Clone(string newName)
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString(this.NativeObject, newName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Camera csObj = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CCamera");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Camera;
						csObj.BindNativeObject(__ptr, "CCamera");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_d.dll");
						private static bool csbLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_d.so");
						private static bool csbLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp_d.so");

					#else 
						private static bool bLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_d.dll");
						private static bool csbLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager.dll");
						private static bool csbLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp.dll");

					#elif Linux 
						private static bool bLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager.so");
						private static bool csbLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp.so");

					#else 
						private static bool bLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager.dll");
						private static bool csbLoadOctreeCamera = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeCamera", new OctreeCameraClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeCameraProxy", new OctreeCameraClassFactory());

				public OctreeCamera(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable(IntPtr pObject, getCameraRenderablePtr_CallBack_CCameraInternalRenderable pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void(IntPtr pObject, setWindowImpl_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(IntPtr pObject, getRayForwardIntersect_CallBack_Vector4List_CVector3_CVector3_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener(IntPtr pObject, addListener_CallBack_void_CCameraListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener(IntPtr pObject, removeListener_CallBack_void_CCameraListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4(IntPtr pObject, getAbsoluteProjectMatrix_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool(IntPtr pObject, isLockingToTarget_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode(IntPtr pObject, getLockTarget_CallBack_CSceneNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool(IntPtr pObject, isSlaveCamera_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera(IntPtr pObject, setLodCamera_CallBack_void_CCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera(IntPtr pObject, getLodCamera_CallBack_CCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real(IntPtr pObject, setWindow_CallBack_void_Real_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_resetWindow_void(IntPtr pObject, resetWindow_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool(IntPtr pObject, isWindowSet_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List(IntPtr pObject, forwardIntersect_CallBack_void_CPlane_Vector4List pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool(IntPtr pObject, setUseRenderingDistance_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool(IntPtr pObject, getUseRenderingDistance_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera(IntPtr pObject, synchroniseBaseSettingsWith_CallBack_void_CCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString(IntPtr pObject, clone_CallBack_CCamera_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree(IntPtr pObject, getHeading_CallBack_CDegree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree(IntPtr pObject, getTilt_CallBack_CDegree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree(IntPtr pObject, getLatitude_CallBack_CDegree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree(IntPtr pObject, getLongitude_CallBack_CDegree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64(IntPtr pObject, getAltitude_CallBack_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool(IntPtr pObject, isUnderGround_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64(IntPtr pObject, getCameraDistanceOfGround_CallBack_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64(IntPtr pObject, getAltitudeUnderCamera_CallBack_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport(IntPtr pObject, getGlobeViewport_CallBack_CViewport pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool(IntPtr pObject, hasChanged_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera(IntPtr pObject, getSquaredViewDepth_CallBack_Real_CCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr(IntPtr pObject, getMaterial_CallBack_CMaterialPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation(IntPtr pObject, getRenderOperation_CallBack_void_CRenderOperation pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4(IntPtr pObject, getWorldTransforms_CallBack_void_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLights_LightList(IntPtr pObject, getLights_CallBack_LightList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(IntPtr pObject, getFrustumRenderablePtr_CallBack_CFrustumInternalRenderable pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real(IntPtr pObject, calcProjectionParameters_CallBack_void_Real_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustum_void(IntPtr pObject, updateFrustum_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateView_void(IntPtr pObject, updateView_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void(IntPtr pObject, updateFrustumImpl_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void(IntPtr pObject, updateViewImpl_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void(IntPtr pObject, updateFrustumPlanes_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void(IntPtr pObject, updateFrustumPlanesImpl_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void(IntPtr pObject, updateWorldSpaceCorners_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void(IntPtr pObject, updateWorldSpaceCornersImpl_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateVertexData_void(IntPtr pObject, updateVertexData_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool(IntPtr pObject, isViewOutOfDate_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool(IntPtr pObject, isFrustumOutOfDate_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void(IntPtr pObject, invalidateFrustum_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_invalidateView_void(IntPtr pObject, invalidateView_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian(IntPtr pObject, setFOVy_CallBack_void_CRadian pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian(IntPtr pObject, getFOVy_CallBack_CRadian pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real(IntPtr pObject, setNearClipDistance_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real(IntPtr pObject, getNearClipDistance_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real(IntPtr pObject, setFarClipDistance_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real(IntPtr pObject, getFarClipDistance_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real(IntPtr pObject, setAspectRatio_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real(IntPtr pObject, getAspectRatio_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2(IntPtr pObject, setFrustumOffset_CallBack_void_CVector2 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real(IntPtr pObject, setFrustumOffset_CallBack_void_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real(IntPtr pObject, setFrustumOffset_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void(IntPtr pObject, setFrustumOffset_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2(IntPtr pObject, getFrustumOffset_CallBack_CVector2 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real(IntPtr pObject, setFocalLength_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void(IntPtr pObject, setFocalLength_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real(IntPtr pObject, getFocalLength_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real(IntPtr pObject, setFrustumExtents_CallBack_void_Real_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void(IntPtr pObject, resetFrustumExtents_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real(IntPtr pObject, getFrustumExtents_CallBack_void_Real_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4(IntPtr pObject, getProjectionMatrixRS_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4(IntPtr pObject, getProjectionMatrixWithRSDepth_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4(IntPtr pObject, getProjectionMatrix_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4(IntPtr pObject, getViewMatrix_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(IntPtr pObject, calcViewMatrixRelative_CallBack_void_CVector3_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(IntPtr pObject, setCustomViewMatrix_CallBack_void_ev_bool_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool(IntPtr pObject, setCustomViewMatrix_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool(IntPtr pObject, isCustomViewMatrixEnabled_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(IntPtr pObject, setCustomProjectionMatrix_CallBack_void_ev_bool_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool(IntPtr pObject, setCustomProjectionMatrix_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool(IntPtr pObject, isCustomProjectionMatrixEnabled_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane(IntPtr pObject, getFrustumPlanes_CallBack_CPlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16(IntPtr pObject, getFrustumPlane_CallBack_CPlane_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(IntPtr pObject, isVisible_CallBack_ev_bool_CAxisAlignedBox_FrustumPlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox(IntPtr pObject, isVisible_CallBack_ev_bool_CAxisAlignedBox pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane(IntPtr pObject, isVisible_CallBack_ev_bool_CSphere_FrustumPlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere(IntPtr pObject, isVisible_CallBack_ev_bool_CSphere pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane(IntPtr pObject, isVisible_CallBack_ev_bool_CVector3_FrustumPlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3(IntPtr pObject, isVisible_CallBack_ev_bool_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType(IntPtr pObject, setProjectionType_CallBack_void_ProjectionType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType(IntPtr pObject, getProjectionType_CallBack_ProjectionType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real(IntPtr pObject, setOrthoWindow_CallBack_void_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real(IntPtr pObject, setOrthoWindowHeight_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real(IntPtr pObject, setOrthoWindowWidth_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real(IntPtr pObject, getOrthoWindowHeight_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real(IntPtr pObject, getOrthoWindowWidth_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane(IntPtr pObject, enableReflection_CallBack_void_CPlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane(IntPtr pObject, enableReflection_CallBack_void_CMovablePlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_disableReflection_void(IntPtr pObject, disableReflection_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool(IntPtr pObject, isReflected_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4(IntPtr pObject, getReflectionMatrix_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane(IntPtr pObject, getReflectionPlane_CallBack_CPlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(IntPtr pObject, projectSphere_CallBack_ev_bool_CSphere_Real_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane(IntPtr pObject, enableCustomNearClipPlane_CallBack_void_CMovablePlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane(IntPtr pObject, enableCustomNearClipPlane_CallBack_void_CPlane pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void(IntPtr pObject, disableCustomNearClipPlane_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool(IntPtr pObject, isCustomNearClipPlaneEnabled_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3(IntPtr pObject, getPositionForViewUpdate_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion(IntPtr pObject, getOrientationForViewUpdate_CallBack_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(IntPtr pObject, getAnimableObjectPtr_CallBack_CMovableObjectInternalAnimableObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8(IntPtr pObject, getRenderQueueId_CallBack_ev_uint8 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory(IntPtr pObject, _notifyCreator_CallBack_void_CMovableObjectFactory pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory(IntPtr pObject, _getCreator_CallBack_CMovableObjectFactory pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager(IntPtr pObject, _notifyManager_CallBack_void_CSceneManager pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager(IntPtr pObject, _getManager_CallBack_CSceneManager pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString(IntPtr pObject, getMovableType_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode(IntPtr pObject, getParentNode_CallBack_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode(IntPtr pObject, getParentSceneNode_CallBack_CSceneNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool(IntPtr pObject, isParentTagPoint_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool(IntPtr pObject, _notifyAttached_CallBack_void_CNode_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode(IntPtr pObject, _notifyAttached_CallBack_void_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool(IntPtr pObject, isAttached_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_detachFromParent_void(IntPtr pObject, detachFromParent_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool(IntPtr pObject, isInScene_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyMoved_void(IntPtr pObject, _notifyMoved_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList(IntPtr pObject, _notifyLightsQueried_CallBack_void_LightList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener(IntPtr pObject, setLightQueriedListener_CallBack_void_CLightQueriedListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener(IntPtr pObject, getLightQueriedListener_CallBack_CLightQueriedListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32(IntPtr pObject, getLightListUpdated_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32(IntPtr pObject, setLightListUpdated_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera(IntPtr pObject, _notifyCurrentCamera_CallBack_void_CCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox(IntPtr pObject, getBoundingBox_CallBack_CAxisAlignedBox pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real(IntPtr pObject, getBoundingRadius_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool(IntPtr pObject, getWorldBoundingSphere_CallBack_CSphere_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere(IntPtr pObject, getWorldBoundingSphere_CallBack_CSphere pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue(IntPtr pObject, _updateRenderQueue_CallBack_void_CRenderQueue pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool(IntPtr pObject, getVisible_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool(IntPtr pObject, isVisible_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real(IntPtr pObject, setRenderingMaxDistance_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real(IntPtr pObject, getRenderingMaxDistance_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real(IntPtr pObject, setRenderingMinDistance_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real(IntPtr pObject, getRenderingMinDistance_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real(IntPtr pObject, setRenderingMinPixelSize_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real(IntPtr pObject, getRenderingMinPixelSize_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue(IntPtr pObject, setSelectionColour_CallBack_void_CColourValue pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector(IntPtr pObject, setSelected_CallBack_ev_bool_IntVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector(IntPtr pObject, getSelected_CallBack_IntVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(IntPtr pObject, selectBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(IntPtr pObject, selectBy_CallBack_ev_bool_CAxisAlignedBox_ev_bool_IntVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(IntPtr pObject, selectBy_CallBack_ev_bool_CSphere_ev_bool_IntVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(IntPtr pObject, selectComponentBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_renderSelection_void(IntPtr pObject, renderSelection_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_clearSelection_void(IntPtr pObject, clearSelection_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32(IntPtr pObject, startEditing_CallBack_ev_bool_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_endEditing_void(IntPtr pObject, endEditing_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox(IntPtr pObject, getEditBoundingBox_CallBack_CEditBoundingBox pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(IntPtr pObject, getSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(IntPtr pObject, setSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8(IntPtr pObject, setRenderQueueGroup_CallBack_void_ev_uint8 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(IntPtr pObject, setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8(IntPtr pObject, getRenderQueueGroup_CallBack_ev_uint8 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4(IntPtr pObject, _getParentNodeFullTransform_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32(IntPtr pObject, setQueryFlags_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32(IntPtr pObject, addQueryFlags_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32(IntPtr pObject, removeQueryFlags_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32(IntPtr pObject, getQueryFlags_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32(IntPtr pObject, setVisibilityFlags_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32(IntPtr pObject, addVisibilityFlags_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32(IntPtr pObject, removeVisibilityFlags_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32(IntPtr pObject, getVisibilityFlags_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener(IntPtr pObject, addListener_CallBack_void_CMovableObjectListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener(IntPtr pObject, removeListener_CallBack_void_CMovableObjectListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener(IntPtr pObject, existListener_CallBack_ev_bool_CMovableObjectListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32(IntPtr pObject, getListenerCount_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32(IntPtr pObject, getListener_CallBack_CMovableObjectListener_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_queryLights_LightList(IntPtr pObject, queryLights_CallBack_LightList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32(IntPtr pObject, getLightMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32(IntPtr pObject, setLightMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getLightList_LightList(IntPtr pObject, _getLightList_CallBack_LightList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool(IntPtr pObject, setCastShadows_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool(IntPtr pObject, getReceivesShadows_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32(IntPtr pObject, getTypeFlags_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool(IntPtr pObject, visitRenderables_CallBack_void_CVisitor_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor(IntPtr pObject, visitRenderables_CallBack_void_CVisitor pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool(IntPtr pObject, setDebugDisplayEnabled_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool(IntPtr pObject, isDebugDisplayEnabled_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool(IntPtr pObject, getCastShadows_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData(IntPtr pObject, getEdgeList_CallBack_CEdgeData pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool(IntPtr pObject, hasEdgeList_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(IntPtr pObject, getWorldBoundingBox_CallBack_CAxisAlignedBox_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox(IntPtr pObject, getWorldBoundingBox_CallBack_CAxisAlignedBox pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox(IntPtr pObject, getLightCapBounds_CallBack_CAxisAlignedBox pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(IntPtr pObject, getDarkCapBounds_CallBack_CAxisAlignedBox_CLight_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(IntPtr pObject, getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(IntPtr pObject, getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight(IntPtr pObject, getPointExtrusionDistance_CallBack_Real_CLight pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(IntPtr pObject, updateEdgeListLightFacing_CallBack_void_CEdgeData_CVector4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(IntPtr pObject, generateShadowVolume_CallBack_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(IntPtr pObject, extrudeBounds_CallBack_void_CAxisAlignedBox_CVector4_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getCameraRenderablePtr_CallBack_CCameraInternalRenderable = EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Function;
						GC.KeepAlive(m_getCameraRenderablePtr_CallBack_CCameraInternalRenderable);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable(this.NativeObject, m_getCameraRenderablePtr_CallBack_CCameraInternalRenderable);
						m_setWindowImpl_CallBack_void = EarthView_World_Graphic_CCamera_setWindowImpl_void_Function;
						GC.KeepAlive(m_setWindowImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void(this.NativeObject, m_setWindowImpl_CallBack_void);
						m_getRayForwardIntersect_CallBack_Vector4List_CVector3_CVector3_Real = EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Function;
						GC.KeepAlive(m_getRayForwardIntersect_CallBack_Vector4List_CVector3_CVector3_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(this.NativeObject, m_getRayForwardIntersect_CallBack_Vector4List_CVector3_CVector3_Real);
						m_addListener_CallBack_void_CCameraListener = EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CCameraListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener(this.NativeObject, m_addListener_CallBack_void_CCameraListener);
						m_removeListener_CallBack_void_CCameraListener = EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CCameraListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener(this.NativeObject, m_removeListener_CallBack_void_CCameraListener);
						m_getAbsoluteProjectMatrix_CallBack_CMatrix4 = EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Function;
						GC.KeepAlive(m_getAbsoluteProjectMatrix_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4(this.NativeObject, m_getAbsoluteProjectMatrix_CallBack_CMatrix4);
						m_isLockingToTarget_CallBack_ev_bool = EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Function;
						GC.KeepAlive(m_isLockingToTarget_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool(this.NativeObject, m_isLockingToTarget_CallBack_ev_bool);
						m_getLockTarget_CallBack_CSceneNode = EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Function;
						GC.KeepAlive(m_getLockTarget_CallBack_CSceneNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode(this.NativeObject, m_getLockTarget_CallBack_CSceneNode);
						m_isSlaveCamera_CallBack_ev_bool = EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Function;
						GC.KeepAlive(m_isSlaveCamera_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool(this.NativeObject, m_isSlaveCamera_CallBack_ev_bool);
						m_setLodCamera_CallBack_void_CCamera = EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Function;
						GC.KeepAlive(m_setLodCamera_CallBack_void_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera(this.NativeObject, m_setLodCamera_CallBack_void_CCamera);
						m_getLodCamera_CallBack_CCamera = EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Function;
						GC.KeepAlive(m_getLodCamera_CallBack_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera(this.NativeObject, m_getLodCamera_CallBack_CCamera);
						m_setWindow_CallBack_void_Real_Real_Real_Real = EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Function;
						GC.KeepAlive(m_setWindow_CallBack_void_Real_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real(this.NativeObject, m_setWindow_CallBack_void_Real_Real_Real_Real);
						m_resetWindow_CallBack_void = EarthView_World_Graphic_CCamera_resetWindow_void_Function;
						GC.KeepAlive(m_resetWindow_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_resetWindow_void(this.NativeObject, m_resetWindow_CallBack_void);
						m_isWindowSet_CallBack_ev_bool = EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Function;
						GC.KeepAlive(m_isWindowSet_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool(this.NativeObject, m_isWindowSet_CallBack_ev_bool);
						m_forwardIntersect_CallBack_void_CPlane_Vector4List = EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Function;
						GC.KeepAlive(m_forwardIntersect_CallBack_void_CPlane_Vector4List);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List(this.NativeObject, m_forwardIntersect_CallBack_void_CPlane_Vector4List);
						m_setUseRenderingDistance_CallBack_void_ev_bool = EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Function;
						GC.KeepAlive(m_setUseRenderingDistance_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool(this.NativeObject, m_setUseRenderingDistance_CallBack_void_ev_bool);
						m_getUseRenderingDistance_CallBack_ev_bool = EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Function;
						GC.KeepAlive(m_getUseRenderingDistance_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool(this.NativeObject, m_getUseRenderingDistance_CallBack_ev_bool);
						m_synchroniseBaseSettingsWith_CallBack_void_CCamera = EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Function;
						GC.KeepAlive(m_synchroniseBaseSettingsWith_CallBack_void_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera(this.NativeObject, m_synchroniseBaseSettingsWith_CallBack_void_CCamera);
						m_clone_CallBack_CCamera_EVString = EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Function;
						GC.KeepAlive(m_clone_CallBack_CCamera_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString(this.NativeObject, m_clone_CallBack_CCamera_EVString);
						m_getHeading_CallBack_CDegree = EarthView_World_Graphic_CCamera_getHeading_CDegree_Function;
						GC.KeepAlive(m_getHeading_CallBack_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree(this.NativeObject, m_getHeading_CallBack_CDegree);
						m_getTilt_CallBack_CDegree = EarthView_World_Graphic_CCamera_getTilt_CDegree_Function;
						GC.KeepAlive(m_getTilt_CallBack_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree(this.NativeObject, m_getTilt_CallBack_CDegree);
						m_getLatitude_CallBack_CDegree = EarthView_World_Graphic_CCamera_getLatitude_CDegree_Function;
						GC.KeepAlive(m_getLatitude_CallBack_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree(this.NativeObject, m_getLatitude_CallBack_CDegree);
						m_getLongitude_CallBack_CDegree = EarthView_World_Graphic_CCamera_getLongitude_CDegree_Function;
						GC.KeepAlive(m_getLongitude_CallBack_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree(this.NativeObject, m_getLongitude_CallBack_CDegree);
						m_getAltitude_CallBack_ev_real64 = EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Function;
						GC.KeepAlive(m_getAltitude_CallBack_ev_real64);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64(this.NativeObject, m_getAltitude_CallBack_ev_real64);
						m_isUnderGround_CallBack_ev_bool = EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Function;
						GC.KeepAlive(m_isUnderGround_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool(this.NativeObject, m_isUnderGround_CallBack_ev_bool);
						m_getCameraDistanceOfGround_CallBack_ev_real64 = EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Function;
						GC.KeepAlive(m_getCameraDistanceOfGround_CallBack_ev_real64);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64(this.NativeObject, m_getCameraDistanceOfGround_CallBack_ev_real64);
						m_getAltitudeUnderCamera_CallBack_ev_real64 = EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Function;
						GC.KeepAlive(m_getAltitudeUnderCamera_CallBack_ev_real64);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64(this.NativeObject, m_getAltitudeUnderCamera_CallBack_ev_real64);
						m_getGlobeViewport_CallBack_CViewport = EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Function;
						GC.KeepAlive(m_getGlobeViewport_CallBack_CViewport);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport(this.NativeObject, m_getGlobeViewport_CallBack_CViewport);
						m_hasChanged_CallBack_ev_bool = EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Function;
						GC.KeepAlive(m_hasChanged_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool(this.NativeObject, m_hasChanged_CallBack_ev_bool);
						m_getSquaredViewDepth_CallBack_Real_CCamera = EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Function;
						GC.KeepAlive(m_getSquaredViewDepth_CallBack_Real_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera(this.NativeObject, m_getSquaredViewDepth_CallBack_Real_CCamera);
						m_getMaterial_CallBack_CMaterialPtr = EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Function;
						GC.KeepAlive(m_getMaterial_CallBack_CMaterialPtr);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr(this.NativeObject, m_getMaterial_CallBack_CMaterialPtr);
						m_getRenderOperation_CallBack_void_CRenderOperation = EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Function;
						GC.KeepAlive(m_getRenderOperation_CallBack_void_CRenderOperation);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation(this.NativeObject, m_getRenderOperation_CallBack_void_CRenderOperation);
						m_getWorldTransforms_CallBack_void_CMatrix4 = EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Function;
						GC.KeepAlive(m_getWorldTransforms_CallBack_void_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4(this.NativeObject, m_getWorldTransforms_CallBack_void_CMatrix4);
						m_getLights_CallBack_LightList = EarthView_World_Graphic_CFrustum_getLights_LightList_Function;
						GC.KeepAlive(m_getLights_CallBack_LightList);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLights_LightList(this.NativeObject, m_getLights_CallBack_LightList);
						m_getFrustumRenderablePtr_CallBack_CFrustumInternalRenderable = EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Function;
						GC.KeepAlive(m_getFrustumRenderablePtr_CallBack_CFrustumInternalRenderable);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(this.NativeObject, m_getFrustumRenderablePtr_CallBack_CFrustumInternalRenderable);
						m_calcProjectionParameters_CallBack_void_Real_Real_Real_Real = EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Function;
						GC.KeepAlive(m_calcProjectionParameters_CallBack_void_Real_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real(this.NativeObject, m_calcProjectionParameters_CallBack_void_Real_Real_Real_Real);
						m_updateFrustum_CallBack_void = EarthView_World_Graphic_CFrustum_updateFrustum_void_Function;
						GC.KeepAlive(m_updateFrustum_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustum_void(this.NativeObject, m_updateFrustum_CallBack_void);
						m_updateView_CallBack_void = EarthView_World_Graphic_CFrustum_updateView_void_Function;
						GC.KeepAlive(m_updateView_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateView_void(this.NativeObject, m_updateView_CallBack_void);
						m_updateFrustumImpl_CallBack_void = EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Function;
						GC.KeepAlive(m_updateFrustumImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void(this.NativeObject, m_updateFrustumImpl_CallBack_void);
						m_updateViewImpl_CallBack_void = EarthView_World_Graphic_CFrustum_updateViewImpl_void_Function;
						GC.KeepAlive(m_updateViewImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void(this.NativeObject, m_updateViewImpl_CallBack_void);
						m_updateFrustumPlanes_CallBack_void = EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Function;
						GC.KeepAlive(m_updateFrustumPlanes_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void(this.NativeObject, m_updateFrustumPlanes_CallBack_void);
						m_updateFrustumPlanesImpl_CallBack_void = EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Function;
						GC.KeepAlive(m_updateFrustumPlanesImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void(this.NativeObject, m_updateFrustumPlanesImpl_CallBack_void);
						m_updateWorldSpaceCorners_CallBack_void = EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Function;
						GC.KeepAlive(m_updateWorldSpaceCorners_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void(this.NativeObject, m_updateWorldSpaceCorners_CallBack_void);
						m_updateWorldSpaceCornersImpl_CallBack_void = EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Function;
						GC.KeepAlive(m_updateWorldSpaceCornersImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void(this.NativeObject, m_updateWorldSpaceCornersImpl_CallBack_void);
						m_updateVertexData_CallBack_void = EarthView_World_Graphic_CFrustum_updateVertexData_void_Function;
						GC.KeepAlive(m_updateVertexData_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateVertexData_void(this.NativeObject, m_updateVertexData_CallBack_void);
						m_isViewOutOfDate_CallBack_ev_bool = EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Function;
						GC.KeepAlive(m_isViewOutOfDate_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool(this.NativeObject, m_isViewOutOfDate_CallBack_ev_bool);
						m_isFrustumOutOfDate_CallBack_ev_bool = EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Function;
						GC.KeepAlive(m_isFrustumOutOfDate_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool(this.NativeObject, m_isFrustumOutOfDate_CallBack_ev_bool);
						m_invalidateFrustum_CallBack_void = EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Function;
						GC.KeepAlive(m_invalidateFrustum_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void(this.NativeObject, m_invalidateFrustum_CallBack_void);
						m_invalidateView_CallBack_void = EarthView_World_Graphic_CFrustum_invalidateView_void_Function;
						GC.KeepAlive(m_invalidateView_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_invalidateView_void(this.NativeObject, m_invalidateView_CallBack_void);
						m_setFOVy_CallBack_void_CRadian = EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Function;
						GC.KeepAlive(m_setFOVy_CallBack_void_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian(this.NativeObject, m_setFOVy_CallBack_void_CRadian);
						m_getFOVy_CallBack_CRadian = EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Function;
						GC.KeepAlive(m_getFOVy_CallBack_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian(this.NativeObject, m_getFOVy_CallBack_CRadian);
						m_setNearClipDistance_CallBack_void_Real = EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Function;
						GC.KeepAlive(m_setNearClipDistance_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real(this.NativeObject, m_setNearClipDistance_CallBack_void_Real);
						m_getNearClipDistance_CallBack_Real = EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Function;
						GC.KeepAlive(m_getNearClipDistance_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real(this.NativeObject, m_getNearClipDistance_CallBack_Real);
						m_setFarClipDistance_CallBack_void_Real = EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Function;
						GC.KeepAlive(m_setFarClipDistance_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real(this.NativeObject, m_setFarClipDistance_CallBack_void_Real);
						m_getFarClipDistance_CallBack_Real = EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Function;
						GC.KeepAlive(m_getFarClipDistance_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real(this.NativeObject, m_getFarClipDistance_CallBack_Real);
						m_setAspectRatio_CallBack_void_Real = EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Function;
						GC.KeepAlive(m_setAspectRatio_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real(this.NativeObject, m_setAspectRatio_CallBack_void_Real);
						m_getAspectRatio_CallBack_Real = EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Function;
						GC.KeepAlive(m_getAspectRatio_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real(this.NativeObject, m_getAspectRatio_CallBack_Real);
						m_setFrustumOffset_CallBack_void_CVector2 = EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Function;
						GC.KeepAlive(m_setFrustumOffset_CallBack_void_CVector2);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2(this.NativeObject, m_setFrustumOffset_CallBack_void_CVector2);
						m_setFrustumOffset_CallBack_void_Real_Real = EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Function;
						GC.KeepAlive(m_setFrustumOffset_CallBack_void_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real(this.NativeObject, m_setFrustumOffset_CallBack_void_Real_Real);
						m_setFrustumOffset_CallBack_void_Real = EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Function;
						GC.KeepAlive(m_setFrustumOffset_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real(this.NativeObject, m_setFrustumOffset_CallBack_void_Real);
						m_setFrustumOffset_CallBack_void = EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Function;
						GC.KeepAlive(m_setFrustumOffset_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void(this.NativeObject, m_setFrustumOffset_CallBack_void);
						m_getFrustumOffset_CallBack_CVector2 = EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Function;
						GC.KeepAlive(m_getFrustumOffset_CallBack_CVector2);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2(this.NativeObject, m_getFrustumOffset_CallBack_CVector2);
						m_setFocalLength_CallBack_void_Real = EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Function;
						GC.KeepAlive(m_setFocalLength_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real(this.NativeObject, m_setFocalLength_CallBack_void_Real);
						m_setFocalLength_CallBack_void = EarthView_World_Graphic_CFrustum_setFocalLength_void_Function;
						GC.KeepAlive(m_setFocalLength_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void(this.NativeObject, m_setFocalLength_CallBack_void);
						m_getFocalLength_CallBack_Real = EarthView_World_Graphic_CFrustum_getFocalLength_Real_Function;
						GC.KeepAlive(m_getFocalLength_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real(this.NativeObject, m_getFocalLength_CallBack_Real);
						m_setFrustumExtents_CallBack_void_Real_Real_Real_Real = EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Function;
						GC.KeepAlive(m_setFrustumExtents_CallBack_void_Real_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real(this.NativeObject, m_setFrustumExtents_CallBack_void_Real_Real_Real_Real);
						m_resetFrustumExtents_CallBack_void = EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Function;
						GC.KeepAlive(m_resetFrustumExtents_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void(this.NativeObject, m_resetFrustumExtents_CallBack_void);
						m_getFrustumExtents_CallBack_void_Real_Real_Real_Real = EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Function;
						GC.KeepAlive(m_getFrustumExtents_CallBack_void_Real_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real(this.NativeObject, m_getFrustumExtents_CallBack_void_Real_Real_Real_Real);
						m_getProjectionMatrixRS_CallBack_CMatrix4 = EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Function;
						GC.KeepAlive(m_getProjectionMatrixRS_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4(this.NativeObject, m_getProjectionMatrixRS_CallBack_CMatrix4);
						m_getProjectionMatrixWithRSDepth_CallBack_CMatrix4 = EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Function;
						GC.KeepAlive(m_getProjectionMatrixWithRSDepth_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4(this.NativeObject, m_getProjectionMatrixWithRSDepth_CallBack_CMatrix4);
						m_getProjectionMatrix_CallBack_CMatrix4 = EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Function;
						GC.KeepAlive(m_getProjectionMatrix_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4(this.NativeObject, m_getProjectionMatrix_CallBack_CMatrix4);
						m_getViewMatrix_CallBack_CMatrix4 = EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Function;
						GC.KeepAlive(m_getViewMatrix_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4(this.NativeObject, m_getViewMatrix_CallBack_CMatrix4);
						m_calcViewMatrixRelative_CallBack_void_CVector3_CMatrix4 = EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Function;
						GC.KeepAlive(m_calcViewMatrixRelative_CallBack_void_CVector3_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(this.NativeObject, m_calcViewMatrixRelative_CallBack_void_CVector3_CMatrix4);
						m_setCustomViewMatrix_CallBack_void_ev_bool_CMatrix4 = EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Function;
						GC.KeepAlive(m_setCustomViewMatrix_CallBack_void_ev_bool_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(this.NativeObject, m_setCustomViewMatrix_CallBack_void_ev_bool_CMatrix4);
						m_setCustomViewMatrix_CallBack_void_ev_bool = EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Function;
						GC.KeepAlive(m_setCustomViewMatrix_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool(this.NativeObject, m_setCustomViewMatrix_CallBack_void_ev_bool);
						m_isCustomViewMatrixEnabled_CallBack_ev_bool = EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Function;
						GC.KeepAlive(m_isCustomViewMatrixEnabled_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool(this.NativeObject, m_isCustomViewMatrixEnabled_CallBack_ev_bool);
						m_setCustomProjectionMatrix_CallBack_void_ev_bool_CMatrix4 = EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Function;
						GC.KeepAlive(m_setCustomProjectionMatrix_CallBack_void_ev_bool_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(this.NativeObject, m_setCustomProjectionMatrix_CallBack_void_ev_bool_CMatrix4);
						m_setCustomProjectionMatrix_CallBack_void_ev_bool = EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Function;
						GC.KeepAlive(m_setCustomProjectionMatrix_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool(this.NativeObject, m_setCustomProjectionMatrix_CallBack_void_ev_bool);
						m_isCustomProjectionMatrixEnabled_CallBack_ev_bool = EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Function;
						GC.KeepAlive(m_isCustomProjectionMatrixEnabled_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool(this.NativeObject, m_isCustomProjectionMatrixEnabled_CallBack_ev_bool);
						m_getFrustumPlanes_CallBack_CPlane = EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Function;
						GC.KeepAlive(m_getFrustumPlanes_CallBack_CPlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane(this.NativeObject, m_getFrustumPlanes_CallBack_CPlane);
						m_getFrustumPlane_CallBack_CPlane_ev_uint16 = EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Function;
						GC.KeepAlive(m_getFrustumPlane_CallBack_CPlane_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16(this.NativeObject, m_getFrustumPlane_CallBack_CPlane_ev_uint16);
						m_isVisible_CallBack_ev_bool_CAxisAlignedBox_FrustumPlane = EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Function;
						GC.KeepAlive(m_isVisible_CallBack_ev_bool_CAxisAlignedBox_FrustumPlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(this.NativeObject, m_isVisible_CallBack_ev_bool_CAxisAlignedBox_FrustumPlane);
						m_isVisible_CallBack_ev_bool_CAxisAlignedBox = EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Function;
						GC.KeepAlive(m_isVisible_CallBack_ev_bool_CAxisAlignedBox);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox(this.NativeObject, m_isVisible_CallBack_ev_bool_CAxisAlignedBox);
						m_isVisible_CallBack_ev_bool_CSphere_FrustumPlane = EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Function;
						GC.KeepAlive(m_isVisible_CallBack_ev_bool_CSphere_FrustumPlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane(this.NativeObject, m_isVisible_CallBack_ev_bool_CSphere_FrustumPlane);
						m_isVisible_CallBack_ev_bool_CSphere = EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Function;
						GC.KeepAlive(m_isVisible_CallBack_ev_bool_CSphere);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere(this.NativeObject, m_isVisible_CallBack_ev_bool_CSphere);
						m_isVisible_CallBack_ev_bool_CVector3_FrustumPlane = EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Function;
						GC.KeepAlive(m_isVisible_CallBack_ev_bool_CVector3_FrustumPlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane(this.NativeObject, m_isVisible_CallBack_ev_bool_CVector3_FrustumPlane);
						m_isVisible_CallBack_ev_bool_CVector3 = EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Function;
						GC.KeepAlive(m_isVisible_CallBack_ev_bool_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3(this.NativeObject, m_isVisible_CallBack_ev_bool_CVector3);
						m_setProjectionType_CallBack_void_ProjectionType = EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Function;
						GC.KeepAlive(m_setProjectionType_CallBack_void_ProjectionType);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType(this.NativeObject, m_setProjectionType_CallBack_void_ProjectionType);
						m_getProjectionType_CallBack_ProjectionType = EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Function;
						GC.KeepAlive(m_getProjectionType_CallBack_ProjectionType);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType(this.NativeObject, m_getProjectionType_CallBack_ProjectionType);
						m_setOrthoWindow_CallBack_void_Real_Real = EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Function;
						GC.KeepAlive(m_setOrthoWindow_CallBack_void_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real(this.NativeObject, m_setOrthoWindow_CallBack_void_Real_Real);
						m_setOrthoWindowHeight_CallBack_void_Real = EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Function;
						GC.KeepAlive(m_setOrthoWindowHeight_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real(this.NativeObject, m_setOrthoWindowHeight_CallBack_void_Real);
						m_setOrthoWindowWidth_CallBack_void_Real = EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Function;
						GC.KeepAlive(m_setOrthoWindowWidth_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real(this.NativeObject, m_setOrthoWindowWidth_CallBack_void_Real);
						m_getOrthoWindowHeight_CallBack_Real = EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Function;
						GC.KeepAlive(m_getOrthoWindowHeight_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real(this.NativeObject, m_getOrthoWindowHeight_CallBack_Real);
						m_getOrthoWindowWidth_CallBack_Real = EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Function;
						GC.KeepAlive(m_getOrthoWindowWidth_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real(this.NativeObject, m_getOrthoWindowWidth_CallBack_Real);
						m_enableReflection_CallBack_void_CPlane = EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Function;
						GC.KeepAlive(m_enableReflection_CallBack_void_CPlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane(this.NativeObject, m_enableReflection_CallBack_void_CPlane);
						m_enableReflection_CallBack_void_CMovablePlane = EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Function;
						GC.KeepAlive(m_enableReflection_CallBack_void_CMovablePlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane(this.NativeObject, m_enableReflection_CallBack_void_CMovablePlane);
						m_disableReflection_CallBack_void = EarthView_World_Graphic_CFrustum_disableReflection_void_Function;
						GC.KeepAlive(m_disableReflection_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_disableReflection_void(this.NativeObject, m_disableReflection_CallBack_void);
						m_isReflected_CallBack_ev_bool = EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Function;
						GC.KeepAlive(m_isReflected_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool(this.NativeObject, m_isReflected_CallBack_ev_bool);
						m_getReflectionMatrix_CallBack_CMatrix4 = EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Function;
						GC.KeepAlive(m_getReflectionMatrix_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4(this.NativeObject, m_getReflectionMatrix_CallBack_CMatrix4);
						m_getReflectionPlane_CallBack_CPlane = EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Function;
						GC.KeepAlive(m_getReflectionPlane_CallBack_CPlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane(this.NativeObject, m_getReflectionPlane_CallBack_CPlane);
						m_projectSphere_CallBack_ev_bool_CSphere_Real_Real_Real_Real = EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Function;
						GC.KeepAlive(m_projectSphere_CallBack_ev_bool_CSphere_Real_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(this.NativeObject, m_projectSphere_CallBack_ev_bool_CSphere_Real_Real_Real_Real);
						m_enableCustomNearClipPlane_CallBack_void_CMovablePlane = EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Function;
						GC.KeepAlive(m_enableCustomNearClipPlane_CallBack_void_CMovablePlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane(this.NativeObject, m_enableCustomNearClipPlane_CallBack_void_CMovablePlane);
						m_enableCustomNearClipPlane_CallBack_void_CPlane = EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Function;
						GC.KeepAlive(m_enableCustomNearClipPlane_CallBack_void_CPlane);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane(this.NativeObject, m_enableCustomNearClipPlane_CallBack_void_CPlane);
						m_disableCustomNearClipPlane_CallBack_void = EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Function;
						GC.KeepAlive(m_disableCustomNearClipPlane_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void(this.NativeObject, m_disableCustomNearClipPlane_CallBack_void);
						m_isCustomNearClipPlaneEnabled_CallBack_ev_bool = EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Function;
						GC.KeepAlive(m_isCustomNearClipPlaneEnabled_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool(this.NativeObject, m_isCustomNearClipPlaneEnabled_CallBack_ev_bool);
						m_getPositionForViewUpdate_CallBack_CVector3 = EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Function;
						GC.KeepAlive(m_getPositionForViewUpdate_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3(this.NativeObject, m_getPositionForViewUpdate_CallBack_CVector3);
						m_getOrientationForViewUpdate_CallBack_CQuaternion = EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Function;
						GC.KeepAlive(m_getOrientationForViewUpdate_CallBack_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion(this.NativeObject, m_getOrientationForViewUpdate_CallBack_CQuaternion);
						m_getAnimableObjectPtr_CallBack_CMovableObjectInternalAnimableObject = EarthView_World_Graphic_CMovableObject_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Function;
						GC.KeepAlive(m_getAnimableObjectPtr_CallBack_CMovableObjectInternalAnimableObject);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(this.NativeObject, m_getAnimableObjectPtr_CallBack_CMovableObjectInternalAnimableObject);
						m_getRenderQueueId_CallBack_ev_uint8 = EarthView_World_Graphic_CMovableObject_getRenderQueueId_ev_uint8_Function;
						GC.KeepAlive(m_getRenderQueueId_CallBack_ev_uint8);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8(this.NativeObject, m_getRenderQueueId_CallBack_ev_uint8);
						m__notifyCreator_CallBack_void_CMovableObjectFactory = EarthView_World_Graphic_CMovableObject__notifyCreator_void_CMovableObjectFactory_Function;
						GC.KeepAlive(m__notifyCreator_CallBack_void_CMovableObjectFactory);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory(this.NativeObject, m__notifyCreator_CallBack_void_CMovableObjectFactory);
						m__getCreator_CallBack_CMovableObjectFactory = EarthView_World_Graphic_CMovableObject__getCreator_CMovableObjectFactory_Function;
						GC.KeepAlive(m__getCreator_CallBack_CMovableObjectFactory);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory(this.NativeObject, m__getCreator_CallBack_CMovableObjectFactory);
						m__notifyManager_CallBack_void_CSceneManager = EarthView_World_Graphic_CMovableObject__notifyManager_void_CSceneManager_Function;
						GC.KeepAlive(m__notifyManager_CallBack_void_CSceneManager);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager(this.NativeObject, m__notifyManager_CallBack_void_CSceneManager);
						m__getManager_CallBack_CSceneManager = EarthView_World_Graphic_CMovableObject__getManager_CSceneManager_Function;
						GC.KeepAlive(m__getManager_CallBack_CSceneManager);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager(this.NativeObject, m__getManager_CallBack_CSceneManager);
						m_getName_CallBack_EVString = EarthView_World_Graphic_CMovableObject_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_getMovableType_CallBack_EVString = EarthView_World_Graphic_CMovableObject_getMovableType_EVString_Function;
						GC.KeepAlive(m_getMovableType_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString(this.NativeObject, m_getMovableType_CallBack_EVString);
						m_getParentNode_CallBack_CNode = EarthView_World_Graphic_CMovableObject_getParentNode_CNode_Function;
						GC.KeepAlive(m_getParentNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode(this.NativeObject, m_getParentNode_CallBack_CNode);
						m_getParentSceneNode_CallBack_CSceneNode = EarthView_World_Graphic_CMovableObject_getParentSceneNode_CSceneNode_Function;
						GC.KeepAlive(m_getParentSceneNode_CallBack_CSceneNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode(this.NativeObject, m_getParentSceneNode_CallBack_CSceneNode);
						m_isParentTagPoint_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isParentTagPoint_ev_bool_Function;
						GC.KeepAlive(m_isParentTagPoint_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool(this.NativeObject, m_isParentTagPoint_CallBack_ev_bool);
						m__notifyAttached_CallBack_void_CNode_ev_bool = EarthView_World_Graphic_CMovableObject__notifyAttached_void_CNode_ev_bool_Function;
						GC.KeepAlive(m__notifyAttached_CallBack_void_CNode_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool(this.NativeObject, m__notifyAttached_CallBack_void_CNode_ev_bool);
						m__notifyAttached_CallBack_void_CNode = EarthView_World_Graphic_CMovableObject__notifyAttached_void_CNode_Function;
						GC.KeepAlive(m__notifyAttached_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode(this.NativeObject, m__notifyAttached_CallBack_void_CNode);
						m_isAttached_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isAttached_ev_bool_Function;
						GC.KeepAlive(m_isAttached_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool(this.NativeObject, m_isAttached_CallBack_ev_bool);
						m_detachFromParent_CallBack_void = EarthView_World_Graphic_CMovableObject_detachFromParent_void_Function;
						GC.KeepAlive(m_detachFromParent_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_detachFromParent_void(this.NativeObject, m_detachFromParent_CallBack_void);
						m_isInScene_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isInScene_ev_bool_Function;
						GC.KeepAlive(m_isInScene_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool(this.NativeObject, m_isInScene_CallBack_ev_bool);
						m__notifyMoved_CallBack_void = EarthView_World_Graphic_CMovableObject__notifyMoved_void_Function;
						GC.KeepAlive(m__notifyMoved_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyMoved_void(this.NativeObject, m__notifyMoved_CallBack_void);
						m__notifyLightsQueried_CallBack_void_LightList = EarthView_World_Graphic_CMovableObject__notifyLightsQueried_void_LightList_Function;
						GC.KeepAlive(m__notifyLightsQueried_CallBack_void_LightList);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList(this.NativeObject, m__notifyLightsQueried_CallBack_void_LightList);
						m_setLightQueriedListener_CallBack_void_CLightQueriedListener = EarthView_World_Graphic_CMovableObject_setLightQueriedListener_void_CLightQueriedListener_Function;
						GC.KeepAlive(m_setLightQueriedListener_CallBack_void_CLightQueriedListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener(this.NativeObject, m_setLightQueriedListener_CallBack_void_CLightQueriedListener);
						m_getLightQueriedListener_CallBack_CLightQueriedListener = EarthView_World_Graphic_CMovableObject_getLightQueriedListener_CLightQueriedListener_Function;
						GC.KeepAlive(m_getLightQueriedListener_CallBack_CLightQueriedListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener(this.NativeObject, m_getLightQueriedListener_CallBack_CLightQueriedListener);
						m_getLightListUpdated_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getLightListUpdated_ev_uint32_Function;
						GC.KeepAlive(m_getLightListUpdated_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32(this.NativeObject, m_getLightListUpdated_CallBack_ev_uint32);
						m_setLightListUpdated_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_setLightListUpdated_void_ev_uint32_Function;
						GC.KeepAlive(m_setLightListUpdated_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32(this.NativeObject, m_setLightListUpdated_CallBack_void_ev_uint32);
						m__notifyCurrentCamera_CallBack_void_CCamera = EarthView_World_Graphic_CMovableObject__notifyCurrentCamera_void_CCamera_Function;
						GC.KeepAlive(m__notifyCurrentCamera_CallBack_void_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera(this.NativeObject, m__notifyCurrentCamera_CallBack_void_CCamera);
						m_getBoundingBox_CallBack_CAxisAlignedBox = EarthView_World_Graphic_CMovableObject_getBoundingBox_CAxisAlignedBox_Function;
						GC.KeepAlive(m_getBoundingBox_CallBack_CAxisAlignedBox);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox(this.NativeObject, m_getBoundingBox_CallBack_CAxisAlignedBox);
						m_getBoundingRadius_CallBack_Real = EarthView_World_Graphic_CMovableObject_getBoundingRadius_Real_Function;
						GC.KeepAlive(m_getBoundingRadius_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real(this.NativeObject, m_getBoundingRadius_CallBack_Real);
						m_getWorldBoundingSphere_CallBack_CSphere_ev_bool = EarthView_World_Graphic_CMovableObject_getWorldBoundingSphere_CSphere_ev_bool_Function;
						GC.KeepAlive(m_getWorldBoundingSphere_CallBack_CSphere_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool(this.NativeObject, m_getWorldBoundingSphere_CallBack_CSphere_ev_bool);
						m_getWorldBoundingSphere_CallBack_CSphere = EarthView_World_Graphic_CMovableObject_getWorldBoundingSphere_CSphere_Function;
						GC.KeepAlive(m_getWorldBoundingSphere_CallBack_CSphere);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere(this.NativeObject, m_getWorldBoundingSphere_CallBack_CSphere);
						m__updateRenderQueue_CallBack_void_CRenderQueue = EarthView_World_Graphic_CMovableObject__updateRenderQueue_void_CRenderQueue_Function;
						GC.KeepAlive(m__updateRenderQueue_CallBack_void_CRenderQueue);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue(this.NativeObject, m__updateRenderQueue_CallBack_void_CRenderQueue);
						m_setVisible_CallBack_void_ev_bool = EarthView_World_Graphic_CMovableObject_setVisible_void_ev_bool_Function;
						GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
						m_getVisible_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_getVisible_ev_bool_Function;
						GC.KeepAlive(m_getVisible_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool(this.NativeObject, m_getVisible_CallBack_ev_bool);
						m_isVisible_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isVisible_ev_bool_Function;
						GC.KeepAlive(m_isVisible_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool(this.NativeObject, m_isVisible_CallBack_ev_bool);
						m_setRenderingMaxDistance_CallBack_void_Real = EarthView_World_Graphic_CMovableObject_setRenderingMaxDistance_void_Real_Function;
						GC.KeepAlive(m_setRenderingMaxDistance_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real(this.NativeObject, m_setRenderingMaxDistance_CallBack_void_Real);
						m_getRenderingMaxDistance_CallBack_Real = EarthView_World_Graphic_CMovableObject_getRenderingMaxDistance_Real_Function;
						GC.KeepAlive(m_getRenderingMaxDistance_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real(this.NativeObject, m_getRenderingMaxDistance_CallBack_Real);
						m_setRenderingMinDistance_CallBack_void_Real = EarthView_World_Graphic_CMovableObject_setRenderingMinDistance_void_Real_Function;
						GC.KeepAlive(m_setRenderingMinDistance_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real(this.NativeObject, m_setRenderingMinDistance_CallBack_void_Real);
						m_getRenderingMinDistance_CallBack_Real = EarthView_World_Graphic_CMovableObject_getRenderingMinDistance_Real_Function;
						GC.KeepAlive(m_getRenderingMinDistance_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real(this.NativeObject, m_getRenderingMinDistance_CallBack_Real);
						m_setRenderingMinPixelSize_CallBack_void_Real = EarthView_World_Graphic_CMovableObject_setRenderingMinPixelSize_void_Real_Function;
						GC.KeepAlive(m_setRenderingMinPixelSize_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real(this.NativeObject, m_setRenderingMinPixelSize_CallBack_void_Real);
						m_getRenderingMinPixelSize_CallBack_Real = EarthView_World_Graphic_CMovableObject_getRenderingMinPixelSize_Real_Function;
						GC.KeepAlive(m_getRenderingMinPixelSize_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real(this.NativeObject, m_getRenderingMinPixelSize_CallBack_Real);
						m_setSelectionColour_CallBack_void_CColourValue = EarthView_World_Graphic_CMovableObject_setSelectionColour_void_CColourValue_Function;
						GC.KeepAlive(m_setSelectionColour_CallBack_void_CColourValue);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue(this.NativeObject, m_setSelectionColour_CallBack_void_CColourValue);
						m_setSelected_CallBack_ev_bool_IntVector = EarthView_World_Graphic_CMovableObject_setSelected_ev_bool_IntVector_Function;
						GC.KeepAlive(m_setSelected_CallBack_ev_bool_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector(this.NativeObject, m_setSelected_CallBack_ev_bool_IntVector);
						m_getSelected_CallBack_IntVector = EarthView_World_Graphic_CMovableObject_getSelected_IntVector_Function;
						GC.KeepAlive(m_getSelected_CallBack_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector(this.NativeObject, m_getSelected_CallBack_IntVector);
						m_selectBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3 = EarthView_World_Graphic_CMovableObject_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Function;
						GC.KeepAlive(m_selectBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(this.NativeObject, m_selectBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3);
						m_selectBy_CallBack_ev_bool_CAxisAlignedBox_ev_bool_IntVector = EarthView_World_Graphic_CMovableObject_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Function;
						GC.KeepAlive(m_selectBy_CallBack_ev_bool_CAxisAlignedBox_ev_bool_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(this.NativeObject, m_selectBy_CallBack_ev_bool_CAxisAlignedBox_ev_bool_IntVector);
						m_selectBy_CallBack_ev_bool_CSphere_ev_bool_IntVector = EarthView_World_Graphic_CMovableObject_selectBy_ev_bool_CSphere_ev_bool_IntVector_Function;
						GC.KeepAlive(m_selectBy_CallBack_ev_bool_CSphere_ev_bool_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(this.NativeObject, m_selectBy_CallBack_ev_bool_CSphere_ev_bool_IntVector);
						m_selectComponentBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3 = EarthView_World_Graphic_CMovableObject_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Function;
						GC.KeepAlive(m_selectComponentBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.NativeObject, m_selectComponentBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3);
						m_renderSelection_CallBack_void = EarthView_World_Graphic_CMovableObject_renderSelection_void_Function;
						GC.KeepAlive(m_renderSelection_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_renderSelection_void(this.NativeObject, m_renderSelection_CallBack_void);
						m_clearSelection_CallBack_void = EarthView_World_Graphic_CMovableObject_clearSelection_void_Function;
						GC.KeepAlive(m_clearSelection_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_clearSelection_void(this.NativeObject, m_clearSelection_CallBack_void);
						m_startEditing_CallBack_ev_bool_ev_uint32 = EarthView_World_Graphic_CMovableObject_startEditing_ev_bool_ev_uint32_Function;
						GC.KeepAlive(m_startEditing_CallBack_ev_bool_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32(this.NativeObject, m_startEditing_CallBack_ev_bool_ev_uint32);
						m_endEditing_CallBack_void = EarthView_World_Graphic_CMovableObject_endEditing_void_Function;
						GC.KeepAlive(m_endEditing_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_endEditing_void(this.NativeObject, m_endEditing_CallBack_void);
						m_getEditBoundingBox_CallBack_CEditBoundingBox = EarthView_World_Graphic_CMovableObject_getEditBoundingBox_CEditBoundingBox_Function;
						GC.KeepAlive(m_getEditBoundingBox_CallBack_CEditBoundingBox);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox(this.NativeObject, m_getEditBoundingBox_CallBack_CEditBoundingBox);
						m_getSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4 = EarthView_World_Graphic_CMovableObject_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Function;
						GC.KeepAlive(m_getSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(this.NativeObject, m_getSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4);
						m_setSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4 = EarthView_World_Graphic_CMovableObject_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Function;
						GC.KeepAlive(m_setSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(this.NativeObject, m_setSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4);
						m_setRenderQueueGroup_CallBack_void_ev_uint8 = EarthView_World_Graphic_CMovableObject_setRenderQueueGroup_void_ev_uint8_Function;
						GC.KeepAlive(m_setRenderQueueGroup_CallBack_void_ev_uint8);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8(this.NativeObject, m_setRenderQueueGroup_CallBack_void_ev_uint8);
						m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16 = EarthView_World_Graphic_CMovableObject_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Function;
						GC.KeepAlive(m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(this.NativeObject, m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16);
						m_getRenderQueueGroup_CallBack_ev_uint8 = EarthView_World_Graphic_CMovableObject_getRenderQueueGroup_ev_uint8_Function;
						GC.KeepAlive(m_getRenderQueueGroup_CallBack_ev_uint8);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8(this.NativeObject, m_getRenderQueueGroup_CallBack_ev_uint8);
						m__getParentNodeFullTransform_CallBack_CMatrix4 = EarthView_World_Graphic_CMovableObject__getParentNodeFullTransform_CMatrix4_Function;
						GC.KeepAlive(m__getParentNodeFullTransform_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4(this.NativeObject, m__getParentNodeFullTransform_CallBack_CMatrix4);
						m_setQueryFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_setQueryFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32(this.NativeObject, m_setQueryFlags_CallBack_void_ev_uint32);
						m_addQueryFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_addQueryFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_addQueryFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32(this.NativeObject, m_addQueryFlags_CallBack_void_ev_uint32);
						m_removeQueryFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_removeQueryFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_removeQueryFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32(this.NativeObject, m_removeQueryFlags_CallBack_void_ev_uint32);
						m_getQueryFlags_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getQueryFlags_ev_uint32_Function;
						GC.KeepAlive(m_getQueryFlags_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32(this.NativeObject, m_getQueryFlags_CallBack_ev_uint32);
						m_setVisibilityFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_setVisibilityFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_setVisibilityFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32(this.NativeObject, m_setVisibilityFlags_CallBack_void_ev_uint32);
						m_addVisibilityFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_addVisibilityFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_addVisibilityFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32(this.NativeObject, m_addVisibilityFlags_CallBack_void_ev_uint32);
						m_removeVisibilityFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_removeVisibilityFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_removeVisibilityFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32(this.NativeObject, m_removeVisibilityFlags_CallBack_void_ev_uint32);
						m_getVisibilityFlags_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getVisibilityFlags_ev_uint32_Function;
						GC.KeepAlive(m_getVisibilityFlags_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32(this.NativeObject, m_getVisibilityFlags_CallBack_ev_uint32);
						m_addListener_CallBack_void_CMovableObjectListener = EarthView_World_Graphic_CMovableObject_addListener_void_CMovableObjectListener_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CMovableObjectListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener(this.NativeObject, m_addListener_CallBack_void_CMovableObjectListener);
						m_removeListener_CallBack_void_CMovableObjectListener = EarthView_World_Graphic_CMovableObject_removeListener_void_CMovableObjectListener_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CMovableObjectListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener(this.NativeObject, m_removeListener_CallBack_void_CMovableObjectListener);
						m_existListener_CallBack_ev_bool_CMovableObjectListener = EarthView_World_Graphic_CMovableObject_existListener_ev_bool_CMovableObjectListener_Function;
						GC.KeepAlive(m_existListener_CallBack_ev_bool_CMovableObjectListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener(this.NativeObject, m_existListener_CallBack_ev_bool_CMovableObjectListener);
						m_getListenerCount_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getListenerCount_ev_uint32_Function;
						GC.KeepAlive(m_getListenerCount_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32(this.NativeObject, m_getListenerCount_CallBack_ev_uint32);
						m_getListener_CallBack_CMovableObjectListener_ev_uint32 = EarthView_World_Graphic_CMovableObject_getListener_CMovableObjectListener_ev_uint32_Function;
						GC.KeepAlive(m_getListener_CallBack_CMovableObjectListener_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32(this.NativeObject, m_getListener_CallBack_CMovableObjectListener_ev_uint32);
						m_queryLights_CallBack_LightList = EarthView_World_Graphic_CMovableObject_queryLights_LightList_Function;
						GC.KeepAlive(m_queryLights_CallBack_LightList);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_queryLights_LightList(this.NativeObject, m_queryLights_CallBack_LightList);
						m_getLightMask_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getLightMask_ev_uint32_Function;
						GC.KeepAlive(m_getLightMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32(this.NativeObject, m_getLightMask_CallBack_ev_uint32);
						m_setLightMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_setLightMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setLightMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32(this.NativeObject, m_setLightMask_CallBack_void_ev_uint32);
						m__getLightList_CallBack_LightList = EarthView_World_Graphic_CMovableObject__getLightList_LightList_Function;
						GC.KeepAlive(m__getLightList_CallBack_LightList);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getLightList_LightList(this.NativeObject, m__getLightList_CallBack_LightList);
						m_setCastShadows_CallBack_void_ev_bool = EarthView_World_Graphic_CMovableObject_setCastShadows_void_ev_bool_Function;
						GC.KeepAlive(m_setCastShadows_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool(this.NativeObject, m_setCastShadows_CallBack_void_ev_bool);
						m_getReceivesShadows_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_getReceivesShadows_ev_bool_Function;
						GC.KeepAlive(m_getReceivesShadows_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool(this.NativeObject, m_getReceivesShadows_CallBack_ev_bool);
						m_getTypeFlags_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getTypeFlags_ev_uint32_Function;
						GC.KeepAlive(m_getTypeFlags_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32(this.NativeObject, m_getTypeFlags_CallBack_ev_uint32);
						m_visitRenderables_CallBack_void_CVisitor_ev_bool = EarthView_World_Graphic_CMovableObject_visitRenderables_void_CVisitor_ev_bool_Function;
						GC.KeepAlive(m_visitRenderables_CallBack_void_CVisitor_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool(this.NativeObject, m_visitRenderables_CallBack_void_CVisitor_ev_bool);
						m_visitRenderables_CallBack_void_CVisitor = EarthView_World_Graphic_CMovableObject_visitRenderables_void_CVisitor_Function;
						GC.KeepAlive(m_visitRenderables_CallBack_void_CVisitor);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor(this.NativeObject, m_visitRenderables_CallBack_void_CVisitor);
						m_setDebugDisplayEnabled_CallBack_void_ev_bool = EarthView_World_Graphic_CMovableObject_setDebugDisplayEnabled_void_ev_bool_Function;
						GC.KeepAlive(m_setDebugDisplayEnabled_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool(this.NativeObject, m_setDebugDisplayEnabled_CallBack_void_ev_bool);
						m_isDebugDisplayEnabled_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isDebugDisplayEnabled_ev_bool_Function;
						GC.KeepAlive(m_isDebugDisplayEnabled_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool(this.NativeObject, m_isDebugDisplayEnabled_CallBack_ev_bool);
						m_getCastShadows_CallBack_ev_bool = EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Function;
						GC.KeepAlive(m_getCastShadows_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool(this.NativeObject, m_getCastShadows_CallBack_ev_bool);
						m_getEdgeList_CallBack_CEdgeData = EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Function;
						GC.KeepAlive(m_getEdgeList_CallBack_CEdgeData);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData(this.NativeObject, m_getEdgeList_CallBack_CEdgeData);
						m_hasEdgeList_CallBack_ev_bool = EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Function;
						GC.KeepAlive(m_hasEdgeList_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool(this.NativeObject, m_hasEdgeList_CallBack_ev_bool);
						m_getWorldBoundingBox_CallBack_CAxisAlignedBox_ev_bool = EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Function;
						GC.KeepAlive(m_getWorldBoundingBox_CallBack_CAxisAlignedBox_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(this.NativeObject, m_getWorldBoundingBox_CallBack_CAxisAlignedBox_ev_bool);
						m_getWorldBoundingBox_CallBack_CAxisAlignedBox = EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Function;
						GC.KeepAlive(m_getWorldBoundingBox_CallBack_CAxisAlignedBox);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox(this.NativeObject, m_getWorldBoundingBox_CallBack_CAxisAlignedBox);
						m_getLightCapBounds_CallBack_CAxisAlignedBox = EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Function;
						GC.KeepAlive(m_getLightCapBounds_CallBack_CAxisAlignedBox);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox(this.NativeObject, m_getLightCapBounds_CallBack_CAxisAlignedBox);
						m_getDarkCapBounds_CallBack_CAxisAlignedBox_CLight_Real = EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Function;
						GC.KeepAlive(m_getDarkCapBounds_CallBack_CAxisAlignedBox_CLight_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(this.NativeObject, m_getDarkCapBounds_CallBack_CAxisAlignedBox_CLight_Real);
						m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32 = EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Function;
						GC.KeepAlive(m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.NativeObject, m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32);
						m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real = EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Function;
						GC.KeepAlive(m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.NativeObject, m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real);
						m_getPointExtrusionDistance_CallBack_Real_CLight = EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Function;
						GC.KeepAlive(m_getPointExtrusionDistance_CallBack_Real_CLight);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight(this.NativeObject, m_getPointExtrusionDistance_CallBack_Real_CLight);
						m_updateEdgeListLightFacing_CallBack_void_CEdgeData_CVector4 = EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Function;
						GC.KeepAlive(m_updateEdgeListLightFacing_CallBack_void_CEdgeData_CVector4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(this.NativeObject, m_updateEdgeListLightFacing_CallBack_void_CEdgeData_CVector4);
						m_generateShadowVolume_CallBack_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32 = EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Function;
						GC.KeepAlive(m_generateShadowVolume_CallBack_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.NativeObject, m_generateShadowVolume_CallBack_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32);
						m_extrudeBounds_CallBack_void_CAxisAlignedBox_CVector4_Real = EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Function;
						GC.KeepAlive(m_extrudeBounds_CallBack_void_CAxisAlignedBox_CVector4_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(this.NativeObject, m_extrudeBounds_CallBack_void_CAxisAlignedBox_CVector4_Real);
					}
				}
				public override EarthView.World.Graphic.Camera.CameraInternalRenderable GetCameraRenderablePtr()
				{
					return base.GetCameraRenderablePtr_NoVirtual();
				}
				protected override void SetWindowImpl()
				{
					base.SetWindowImpl_NoVirtual();
				}
				protected override EarthView.World.Spatial.Math.Vector4List GetRayForwardIntersect(EarthView.World.Spatial.Math.Vector3 anchor, EarthView.World.Spatial.Math.Vector3 dir, double planeOffset)
				{
					return base.GetRayForwardIntersect_NoVirtual(anchor,dir,planeOffset);
				}
				public override void AddListener(EarthView.World.Graphic.Camera.CameraListener ref_l)
				{
					base.AddListener_NoVirtual(ref_l);
				}
				public override void RemoveListener(EarthView.World.Graphic.Camera.CameraListener l)
				{
					base.RemoveListener_NoVirtual(l);
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetAbsoluteProjectMatrix()
				{
					return base.GetAbsoluteProjectMatrix_NoVirtual();
				}
				public override bool IsLockingToTarget()
				{
					return base.IsLockingToTarget_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneNode GetLockTarget()
				{
					return base.GetLockTarget_NoVirtual();
				}
				public override bool IsSlaveCamera()
				{
					return base.IsSlaveCamera_NoVirtual();
				}
				public override void SetLodCamera(EarthView.World.Graphic.Camera ref_lodCam)
				{
					base.SetLodCamera_NoVirtual(ref_lodCam);
				}
				public override EarthView.World.Graphic.Camera GetLodCamera()
				{
					return base.GetLodCamera_NoVirtual();
				}
				public override void SetWindow(double Left, double Top, double Right, double Bottom)
				{
					base.SetWindow_NoVirtual(Left,Top,Right,Bottom);
				}
				public override void ResetWindow()
				{
					base.ResetWindow_NoVirtual();
				}
				public override bool IsWindowSet()
				{
					return base.IsWindowSet_NoVirtual();
				}
				public override void ForwardIntersect(EarthView.World.Spatial.Math.Plane worldPlane, EarthView.World.Spatial.Math.Vector4List intersect3d)
				{
					base.ForwardIntersect_NoVirtual(worldPlane,intersect3d);
				}
				public override void SetUseRenderingDistance(bool use)
				{
					base.SetUseRenderingDistance_NoVirtual(use);
				}
				public override bool GetUseRenderingDistance()
				{
					return base.GetUseRenderingDistance_NoVirtual();
				}
				public override void SynchroniseBaseSettingsWith(EarthView.World.Graphic.Camera cam)
				{
					base.SynchroniseBaseSettingsWith_NoVirtual(cam);
				}
				public override EarthView.World.Spatial.Math.Degree GetHeading()
				{
					return base.GetHeading_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Degree GetTilt()
				{
					return base.GetTilt_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Degree GetLatitude()
				{
					return base.GetLatitude_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Degree GetLongitude()
				{
					return base.GetLongitude_NoVirtual();
				}
				public override double GetAltitude()
				{
					return base.GetAltitude_NoVirtual();
				}
				public override bool IsUnderGround()
				{
					return base.IsUnderGround_NoVirtual();
				}
				public override double GetCameraDistanceOfGround()
				{
					return base.GetCameraDistanceOfGround_NoVirtual();
				}
				public override double GetAltitudeUnderCamera()
				{
					return base.GetAltitudeUnderCamera_NoVirtual();
				}
				public override EarthView.World.Graphic.Viewport GetGlobeViewport()
				{
					return base.GetGlobeViewport_NoVirtual();
				}
				public override bool HasChanged()
				{
					return base.HasChanged_NoVirtual();
				}
				public override double GetSquaredViewDepth(EarthView.World.Graphic.Camera cam)
				{
					return base.GetSquaredViewDepth_NoVirtual(cam);
				}
				public override EarthView.World.Graphic.MaterialPtr GetMaterial()
				{
					return base.GetMaterial_NoVirtual();
				}
				public override void GetRenderOperation(ref EarthView.World.Graphic.RenderOperation op)
				{
					base.GetRenderOperation_NoVirtual(ref op);
				}
				public override void GetWorldTransforms(EarthView.World.Spatial.Math.Matrix4 xform)
				{
					base.GetWorldTransforms_NoVirtual(xform);
				}
				public override EarthView.World.Graphic.LightList GetLights()
				{
					return base.GetLights_NoVirtual();
				}
				public override EarthView.World.Graphic.Frustum.FrustumInternalRenderable GetFrustumRenderablePtr()
				{
					return base.GetFrustumRenderablePtr_NoVirtual();
				}
				protected override void CalcProjectionParameters(ref double left, ref double right, ref double bottom, ref double top)
				{
					base.CalcProjectionParameters_NoVirtual(ref left,ref right,ref bottom,ref top);
				}
				protected override void UpdateFrustum()
				{
					base.UpdateFrustum_NoVirtual();
				}
				protected override void UpdateView()
				{
					base.UpdateView_NoVirtual();
				}
				protected override void UpdateFrustumImpl()
				{
					base.UpdateFrustumImpl_NoVirtual();
				}
				protected override void UpdateViewImpl()
				{
					base.UpdateViewImpl_NoVirtual();
				}
				protected override void UpdateFrustumPlanes()
				{
					base.UpdateFrustumPlanes_NoVirtual();
				}
				protected override void UpdateFrustumPlanesImpl()
				{
					base.UpdateFrustumPlanesImpl_NoVirtual();
				}
				protected override void UpdateWorldSpaceCorners()
				{
					base.UpdateWorldSpaceCorners_NoVirtual();
				}
				protected override void UpdateWorldSpaceCornersImpl()
				{
					base.UpdateWorldSpaceCornersImpl_NoVirtual();
				}
				protected override void UpdateVertexData()
				{
					base.UpdateVertexData_NoVirtual();
				}
				protected override bool IsViewOutOfDate()
				{
					return base.IsViewOutOfDate_NoVirtual();
				}
				protected override bool IsFrustumOutOfDate()
				{
					return base.IsFrustumOutOfDate_NoVirtual();
				}
				protected override void InvalidateFrustum()
				{
					base.InvalidateFrustum_NoVirtual();
				}
				protected override void InvalidateView()
				{
					base.InvalidateView_NoVirtual();
				}
				public override void SetFOVy(EarthView.World.Spatial.Math.Radian fovy)
				{
					base.SetFOVy_NoVirtual(fovy);
				}
				public override EarthView.World.Spatial.Math.Radian GetFOVy()
				{
					return base.GetFOVy_NoVirtual();
				}
				public override void SetNearClipDistance(double nearDist)
				{
					base.SetNearClipDistance_NoVirtual(nearDist);
				}
				public override double GetNearClipDistance()
				{
					return base.GetNearClipDistance_NoVirtual();
				}
				public override void SetFarClipDistance(double farDist)
				{
					base.SetFarClipDistance_NoVirtual(farDist);
				}
				public override double GetFarClipDistance()
				{
					return base.GetFarClipDistance_NoVirtual();
				}
				public override void SetAspectRatio(double ratio)
				{
					base.SetAspectRatio_NoVirtual(ratio);
				}
				public override double GetAspectRatio()
				{
					return base.GetAspectRatio_NoVirtual();
				}
				public override void SetFrustumOffset(EarthView.World.Spatial.Math.Vector2 offset)
				{
					base.SetFrustumOffset_NoVirtual(offset);
				}
				public override void SetFrustumOffset(double horizontal, double vertical)
				{
					base.SetFrustumOffset_NoVirtual(horizontal,vertical);
				}
				public override void SetFrustumOffset(double horizontal)
				{
					base.SetFrustumOffset_NoVirtual(horizontal);
				}
				public override void SetFrustumOffset()
				{
					base.SetFrustumOffset_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector2 GetFrustumOffset()
				{
					return base.GetFrustumOffset_NoVirtual();
				}
				public override void SetFocalLength(double focalLength)
				{
					base.SetFocalLength_NoVirtual(focalLength);
				}
				public override void SetFocalLength()
				{
					base.SetFocalLength_NoVirtual();
				}
				public override double GetFocalLength()
				{
					return base.GetFocalLength_NoVirtual();
				}
				public override void SetFrustumExtents(double left, double right, double top, double bottom)
				{
					base.SetFrustumExtents_NoVirtual(left,right,top,bottom);
				}
				public override void ResetFrustumExtents()
				{
					base.ResetFrustumExtents_NoVirtual();
				}
				public override void GetFrustumExtents(ref double outleft, ref double outright, ref double outtop, ref double outbottom)
				{
					base.GetFrustumExtents_NoVirtual(ref outleft,ref outright,ref outtop,ref outbottom);
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetProjectionMatrixRS()
				{
					return base.GetProjectionMatrixRS_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetProjectionMatrixWithRSDepth()
				{
					return base.GetProjectionMatrixWithRSDepth_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetProjectionMatrix()
				{
					return base.GetProjectionMatrix_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetViewMatrix()
				{
					return base.GetViewMatrix_NoVirtual();
				}
				public override void CalcViewMatrixRelative(EarthView.World.Spatial.Math.Vector3 relPos, ref EarthView.World.Spatial.Math.Matrix4 matToUpdate)
				{
					base.CalcViewMatrixRelative_NoVirtual(relPos,ref matToUpdate);
				}
				public override void SetCustomViewMatrix(bool enable, EarthView.World.Spatial.Math.Matrix4 viewMatrix)
				{
					base.SetCustomViewMatrix_NoVirtual(enable,viewMatrix);
				}
				public override void SetCustomViewMatrix(bool enable)
				{
					base.SetCustomViewMatrix_NoVirtual(enable);
				}
				public override bool IsCustomViewMatrixEnabled()
				{
					return base.IsCustomViewMatrixEnabled_NoVirtual();
				}
				public override void SetCustomProjectionMatrix(bool enable, EarthView.World.Spatial.Math.Matrix4 projectionMatrix)
				{
					base.SetCustomProjectionMatrix_NoVirtual(enable,projectionMatrix);
				}
				public override void SetCustomProjectionMatrix(bool enable)
				{
					base.SetCustomProjectionMatrix_NoVirtual(enable);
				}
				public override bool IsCustomProjectionMatrixEnabled()
				{
					return base.IsCustomProjectionMatrixEnabled_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Plane GetFrustumPlanes()
				{
					return base.GetFrustumPlanes_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Plane GetFrustumPlane(ushort plane)
				{
					return base.GetFrustumPlane_NoVirtual(plane);
				}
				public override bool IsVisible(EarthView.World.Spatial.Math.Sphere bound, ref EarthView.World.Graphic.FRUSTUMPLANE culledBy)
				{
					return base.IsVisible_NoVirtual(bound,ref culledBy);
				}
				public override bool IsVisible(EarthView.World.Spatial.Math.Sphere bound)
				{
					return base.IsVisible_NoVirtual(bound);
				}
				public override bool IsVisible(EarthView.World.Spatial.Math.Vector3 vert, ref EarthView.World.Graphic.FRUSTUMPLANE culledBy)
				{
					return base.IsVisible_NoVirtual(vert,ref culledBy);
				}
				public override bool IsVisible(EarthView.World.Spatial.Math.Vector3 vert)
				{
					return base.IsVisible_NoVirtual(vert);
				}
				public override void SetProjectionType(EarthView.World.Graphic.PROJECTIONTYPE pt)
				{
					base.SetProjectionType_NoVirtual(pt);
				}
				public override EarthView.World.Graphic.PROJECTIONTYPE GetProjectionType()
				{
					return base.GetProjectionType_NoVirtual();
				}
				public override void SetOrthoWindow(double w, double h)
				{
					base.SetOrthoWindow_NoVirtual(w,h);
				}
				public override void SetOrthoWindowHeight(double h)
				{
					base.SetOrthoWindowHeight_NoVirtual(h);
				}
				public override void SetOrthoWindowWidth(double w)
				{
					base.SetOrthoWindowWidth_NoVirtual(w);
				}
				public override double GetOrthoWindowHeight()
				{
					return base.GetOrthoWindowHeight_NoVirtual();
				}
				public override double GetOrthoWindowWidth()
				{
					return base.GetOrthoWindowWidth_NoVirtual();
				}
				public override void EnableReflection(EarthView.World.Spatial.Math.Plane p)
				{
					base.EnableReflection_NoVirtual(p);
				}
				public override void EnableReflection(EarthView.World.Graphic.MovablePlane p)
				{
					base.EnableReflection_NoVirtual(p);
				}
				public override void DisableReflection()
				{
					base.DisableReflection_NoVirtual();
				}
				public override bool IsReflected()
				{
					return base.IsReflected_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetReflectionMatrix()
				{
					return base.GetReflectionMatrix_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Plane GetReflectionPlane()
				{
					return base.GetReflectionPlane_NoVirtual();
				}
				public override bool ProjectSphere(EarthView.World.Spatial.Math.Sphere sphere, IntPtr left, IntPtr top, IntPtr right, IntPtr bottom)
				{
					return base.ProjectSphere_NoVirtual(sphere,left,top,right,bottom);
				}
				public override void EnableCustomNearClipPlane(EarthView.World.Graphic.MovablePlane plane)
				{
					base.EnableCustomNearClipPlane_NoVirtual(plane);
				}
				public override void EnableCustomNearClipPlane(EarthView.World.Spatial.Math.Plane plane)
				{
					base.EnableCustomNearClipPlane_NoVirtual(plane);
				}
				public override void DisableCustomNearClipPlane()
				{
					base.DisableCustomNearClipPlane_NoVirtual();
				}
				public override bool IsCustomNearClipPlaneEnabled()
				{
					return base.IsCustomNearClipPlaneEnabled_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector3 GetPositionForViewUpdate()
				{
					return base.GetPositionForViewUpdate_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Quaternion GetOrientationForViewUpdate()
				{
					return base.GetOrientationForViewUpdate_NoVirtual();
				}
				public override EarthView.World.Graphic.MovableObject.MovableObjectInternalAnimableObject GetAnimableObjectPtr()
				{
					return base.GetAnimableObjectPtr_NoVirtual();
				}
				public override byte GetRenderQueueId()
				{
					return base.GetRenderQueueId_NoVirtual();
				}
				public override void _notifyCreator(EarthView.World.Graphic.MovableObjectFactory ref_fact)
				{
					base._notifyCreator_NoVirtual(ref_fact);
				}
				public override EarthView.World.Graphic.MovableObjectFactory _getCreator()
				{
					return base._getCreator_NoVirtual();
				}
				public override void _notifyManager(EarthView.World.Graphic.SceneManager ref_mgr)
				{
					base._notifyManager_NoVirtual(ref_mgr);
				}
				public override EarthView.World.Graphic.SceneManager _getManager()
				{
					return base._getManager_NoVirtual();
				}
				public override string GetName()
				{
					return base.GetName_NoVirtual();
				}
				public override string GetMovableType()
				{
					return base.GetMovableType_NoVirtual();
				}
				public override EarthView.World.Graphic.Node GetParentNode()
				{
					return base.GetParentNode_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneNode GetParentSceneNode()
				{
					return base.GetParentSceneNode_NoVirtual();
				}
				public override bool IsParentTagPoint()
				{
					return base.IsParentTagPoint_NoVirtual();
				}
				public override void _notifyAttached(EarthView.World.Graphic.Node ref_parent, bool isTagPoint)
				{
					base._notifyAttached_NoVirtual(ref_parent,isTagPoint);
				}
				public override void _notifyAttached(EarthView.World.Graphic.Node ref_parent)
				{
					base._notifyAttached_NoVirtual(ref_parent);
				}
				public override bool IsAttached()
				{
					return base.IsAttached_NoVirtual();
				}
				public override void DetachFromParent()
				{
					base.DetachFromParent_NoVirtual();
				}
				public override bool IsInScene()
				{
					return base.IsInScene_NoVirtual();
				}
				public override void _notifyMoved()
				{
					base._notifyMoved_NoVirtual();
				}
				public override void _notifyLightsQueried(EarthView.World.Graphic.LightList lightList)
				{
					base._notifyLightsQueried_NoVirtual(lightList);
				}
				public override void SetLightQueriedListener(EarthView.World.Graphic.MovableObject.LightQueriedListener listener)
				{
					base.SetLightQueriedListener_NoVirtual(listener);
				}
				public override EarthView.World.Graphic.MovableObject.LightQueriedListener GetLightQueriedListener()
				{
					return base.GetLightQueriedListener_NoVirtual();
				}
				public override uint GetLightListUpdated()
				{
					return base.GetLightListUpdated_NoVirtual();
				}
				public override void SetLightListUpdated(uint frame)
				{
					base.SetLightListUpdated_NoVirtual(frame);
				}
				public override void _notifyCurrentCamera(EarthView.World.Graphic.Camera ref_cam)
				{
					base._notifyCurrentCamera_NoVirtual(ref_cam);
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetBoundingBox()
				{
					return base.GetBoundingBox_NoVirtual();
				}
				public override double GetBoundingRadius()
				{
					return base.GetBoundingRadius_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Sphere GetWorldBoundingSphere(bool derive)
				{
					return base.GetWorldBoundingSphere_NoVirtual(derive);
				}
				public override EarthView.World.Spatial.Math.Sphere GetWorldBoundingSphere()
				{
					return base.GetWorldBoundingSphere_NoVirtual();
				}
				public override void _updateRenderQueue(EarthView.World.Graphic.RenderQueue queue)
				{
					base._updateRenderQueue_NoVirtual(queue);
				}
				public override void SetVisible(bool visible)
				{
					base.SetVisible_NoVirtual(visible);
				}
				public override bool GetVisible()
				{
					return base.GetVisible_NoVirtual();
				}
				public override bool IsVisible()
				{
					return base.IsVisible_NoVirtual();
				}
				public override void SetRenderingMaxDistance(double dist)
				{
					base.SetRenderingMaxDistance_NoVirtual(dist);
				}
				public override double GetRenderingMaxDistance()
				{
					return base.GetRenderingMaxDistance_NoVirtual();
				}
				public override void SetRenderingMinDistance(double dist)
				{
					base.SetRenderingMinDistance_NoVirtual(dist);
				}
				public override double GetRenderingMinDistance()
				{
					return base.GetRenderingMinDistance_NoVirtual();
				}
				public override void SetRenderingMinPixelSize(double pixelSize)
				{
					base.SetRenderingMinPixelSize_NoVirtual(pixelSize);
				}
				public override double GetRenderingMinPixelSize()
				{
					return base.GetRenderingMinPixelSize_NoVirtual();
				}
				public override void SetSelectionColour(EarthView.World.Graphic.ColourValue colour)
				{
					base.SetSelectionColour_NoVirtual(colour);
				}
				public override bool SetSelected(EarthView.World.Core.IntVector objIndics)
				{
					return base.SetSelected_NoVirtual(objIndics);
				}
				public override EarthView.World.Core.IntVector GetSelected()
				{
					return base.GetSelected_NoVirtual();
				}
				public override bool SelectBy(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, bool prepareToRenderSelection, ref int objIndex, ref  EarthView.World.Spatial.Math.Vector3 point)
				{
					return base.SelectBy_NoVirtual(ray,viewport,prepareToRenderSelection,ref objIndex,ref point);
				}
				public override bool SelectBy(EarthView.World.Spatial.Math.AxisAlignedBox aabb, bool prepareToRenderSelection, ref  EarthView.World.Core.IntVector indexVec)
				{
					return base.SelectBy_NoVirtual(aabb,prepareToRenderSelection,ref indexVec);
				}
				public override bool SelectBy(EarthView.World.Spatial.Math.Sphere sphere, bool prepareToRenderSelection, ref  EarthView.World.Core.IntVector indexVec)
				{
					return base.SelectBy_NoVirtual(sphere,prepareToRenderSelection,ref indexVec);
				}
				public override bool SelectComponentBy(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, bool prepareToRenderSelection, ref int objIndex, ref int submeshIndex, ref int instanceIndex, ref int segmentIndex, ref  EarthView.World.Spatial.Math.Vector3 point)
				{
					return base.SelectComponentBy_NoVirtual(ray,viewport,prepareToRenderSelection,ref objIndex,ref submeshIndex,ref instanceIndex,ref segmentIndex,ref point);
				}
				public override void RenderSelection()
				{
					base.RenderSelection_NoVirtual();
				}
				public override void ClearSelection()
				{
					base.ClearSelection_NoVirtual();
				}
				public override bool StartEditing(uint objectIndex)
				{
					return base.StartEditing_NoVirtual(objectIndex);
				}
				public override void EndEditing()
				{
					base.EndEditing_NoVirtual();
				}
				public override EarthView.World.Graphic.EditBoundingBox GetEditBoundingBox()
				{
					return base.GetEditBoundingBox_NoVirtual();
				}
				public override bool GetSelectedObjectWorldMatrix(uint objectIndex, ref EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					return base.GetSelectedObjectWorldMatrix_NoVirtual(objectIndex,ref matrix);
				}
				public override bool SetSelectedObjectWorldMatrix(uint objectIndex, EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					return base.SetSelectedObjectWorldMatrix_NoVirtual(objectIndex,matrix);
				}
				public override void SetRenderQueueGroup(byte queueID)
				{
					base.SetRenderQueueGroup_NoVirtual(queueID);
				}
				public override void SetRenderQueueGroupAndPriority(byte queueID, ushort priority)
				{
					base.SetRenderQueueGroupAndPriority_NoVirtual(queueID,priority);
				}
				public override byte GetRenderQueueGroup()
				{
					return base.GetRenderQueueGroup_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Matrix4 _getParentNodeFullTransform()
				{
					return base._getParentNodeFullTransform_NoVirtual();
				}
				public override void SetQueryFlags(uint flags)
				{
					base.SetQueryFlags_NoVirtual(flags);
				}
				public override void AddQueryFlags(uint flags)
				{
					base.AddQueryFlags_NoVirtual(flags);
				}
				public override void RemoveQueryFlags(uint flags)
				{
					base.RemoveQueryFlags_NoVirtual(flags);
				}
				public override uint GetQueryFlags()
				{
					return base.GetQueryFlags_NoVirtual();
				}
				public override void SetVisibilityFlags(uint flags)
				{
					base.SetVisibilityFlags_NoVirtual(flags);
				}
				public override void AddVisibilityFlags(uint flags)
				{
					base.AddVisibilityFlags_NoVirtual(flags);
				}
				public override void RemoveVisibilityFlags(uint flags)
				{
					base.RemoveVisibilityFlags_NoVirtual(flags);
				}
				public override uint GetVisibilityFlags()
				{
					return base.GetVisibilityFlags_NoVirtual();
				}
				public override void AddListener(EarthView.World.Graphic.MovableObject.MovableObjectListener ref_listener)
				{
					base.AddListener_NoVirtual(ref_listener);
				}
				public override void RemoveListener(EarthView.World.Graphic.MovableObject.MovableObjectListener listener)
				{
					base.RemoveListener_NoVirtual(listener);
				}
				public override bool ExistListener(EarthView.World.Graphic.MovableObject.MovableObjectListener listener)
				{
					return base.ExistListener_NoVirtual(listener);
				}
				public override uint GetListenerCount()
				{
					return base.GetListenerCount_NoVirtual();
				}
				public override EarthView.World.Graphic.MovableObject.MovableObjectListener GetListener(uint index)
				{
					return base.GetListener_NoVirtual(index);
				}
				public override EarthView.World.Graphic.LightList QueryLights()
				{
					return base.QueryLights_NoVirtual();
				}
				public override uint GetLightMask()
				{
					return base.GetLightMask_NoVirtual();
				}
				public override void SetLightMask(uint lightMask)
				{
					base.SetLightMask_NoVirtual(lightMask);
				}
				public override EarthView.World.Graphic.LightList _getLightList()
				{
					return base._getLightList_NoVirtual();
				}
				public override void SetCastShadows(bool enabled)
				{
					base.SetCastShadows_NoVirtual(enabled);
				}
				public override bool GetReceivesShadows()
				{
					return base.GetReceivesShadows_NoVirtual();
				}
				public override uint GetTypeFlags()
				{
					return base.GetTypeFlags_NoVirtual();
				}
				public override void VisitRenderables(EarthView.World.Graphic.Renderable.Visitor visitor, bool debugRenderables)
				{
					base.VisitRenderables_NoVirtual(visitor,debugRenderables);
				}
				public override void VisitRenderables(EarthView.World.Graphic.Renderable.Visitor visitor)
				{
					base.VisitRenderables_NoVirtual(visitor);
				}
				public override void SetDebugDisplayEnabled(bool enabled)
				{
					base.SetDebugDisplayEnabled_NoVirtual(enabled);
				}
				public override bool IsDebugDisplayEnabled()
				{
					return base.IsDebugDisplayEnabled_NoVirtual();
				}
				public override bool GetCastShadows()
				{
					return base.GetCastShadows_NoVirtual();
				}
				public override EarthView.World.Graphic.EdgeData GetEdgeList()
				{
					return base.GetEdgeList_NoVirtual();
				}
				public override bool HasEdgeList()
				{
					return base.HasEdgeList_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetWorldBoundingBox(bool derive)
				{
					return base.GetWorldBoundingBox_NoVirtual(derive);
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetWorldBoundingBox()
				{
					return base.GetWorldBoundingBox_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetLightCapBounds()
				{
					return base.GetLightCapBounds_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetDarkCapBounds(EarthView.World.Graphic.Light light, double dirLightExtrusionDist)
				{
					return base.GetDarkCapBounds_NoVirtual(light,dirLightExtrusionDist);
				}
				public override EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator GetShadowVolumeRenderableIterator(EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, EarthView.World.Graphic.Light light, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, bool extrudeVertices, double extrusionDistance, uint flags)
				{
					return base.GetShadowVolumeRenderableIterator_NoVirtual(shadowTechnique,light,indexBuffer,extrudeVertices,extrusionDistance,flags);
				}
				public override EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator GetShadowVolumeRenderableIterator(EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, EarthView.World.Graphic.Light light, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, bool extrudeVertices, double extrusionDistance)
				{
					return base.GetShadowVolumeRenderableIterator_NoVirtual(shadowTechnique,light,indexBuffer,extrudeVertices,extrusionDistance);
				}
				public override double GetPointExtrusionDistance(EarthView.World.Graphic.Light l)
				{
					return base.GetPointExtrusionDistance_NoVirtual(l);
				}
				protected override void UpdateEdgeListLightFacing(EarthView.World.Graphic.EdgeData edgeData, EarthView.World.Spatial.Math.Vector4 lightPos)
				{
					base.UpdateEdgeListLightFacing_NoVirtual(edgeData,lightPos);
				}
				protected override void GenerateShadowVolume(EarthView.World.Graphic.EdgeData edgeData, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, EarthView.World.Graphic.Light light, ref EarthView.World.Graphic.ShadowCaster.ShadowRenderableList shadowRenderables, uint flags)
				{
					base.GenerateShadowVolume_NoVirtual(edgeData,indexBuffer,light,ref shadowRenderables,flags);
				}
				protected override void ExtrudeBounds(ref EarthView.World.Spatial.Math.AxisAlignedBox box, EarthView.World.Spatial.Math.Vector4 lightPos, double extrudeDist)
				{
					base.ExtrudeBounds_NoVirtual(ref box,lightPos,extrudeDist);
				}
				public static OctreeCamera FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					OctreeCamera obj = baseObj as  OctreeCamera;
					if (object.Equals(obj, null))
					{
						obj = new OctreeCamera(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COctreeCamera");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OctreeCameraClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					OctreeCamera emptyInstance = new OctreeCamera(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
