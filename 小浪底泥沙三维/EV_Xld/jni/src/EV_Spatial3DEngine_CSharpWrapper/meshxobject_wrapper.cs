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
			namespace ModelManager
			{
				public class MeshxObject : EarthView.World.Spatial3D.ModelManager.LodObject
				{
					#if DEBUG 
						#if Windows 
							private static bool bLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadMeshxObject = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CMeshxObject", new MeshxObjectClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CMeshxObjectProxy", new MeshxObjectClassFactory());

					public MeshxObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool(IntPtr pObject, isAttached_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode(IntPtr pObject, getNode_CallBack_CNode pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode(IntPtr pObject, attachToNode_CallBack_ev_bool_CNode pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode(IntPtr pObject, detachFromNode_CallBack_CNode pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool(IntPtr pObject, applyScenePosition_CallBack_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_isAttached_CallBack_ev_bool = EarthView_World_Spatial3D_ModelManager_CLodObject_isAttached_ev_bool_Function;
							GC.KeepAlive(m_isAttached_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_isAttached_ev_bool(this.NativeObject, m_isAttached_CallBack_ev_bool);
							m_getNode_CallBack_CNode = EarthView_World_Spatial3D_ModelManager_CLodObject_getNode_CNode_Function;
							GC.KeepAlive(m_getNode_CallBack_CNode);
							EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_getNode_CNode(this.NativeObject, m_getNode_CallBack_CNode);
							m_attachToNode_CallBack_ev_bool_CNode = EarthView_World_Spatial3D_ModelManager_CLodObject_attachToNode_ev_bool_CNode_Function;
							GC.KeepAlive(m_attachToNode_CallBack_ev_bool_CNode);
							EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_attachToNode_ev_bool_CNode(this.NativeObject, m_attachToNode_CallBack_ev_bool_CNode);
							m_detachFromNode_CallBack_CNode = EarthView_World_Spatial3D_ModelManager_CLodObject_detachFromNode_CNode_Function;
							GC.KeepAlive(m_detachFromNode_CallBack_CNode);
							EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_detachFromNode_CNode(this.NativeObject, m_detachFromNode_CallBack_CNode);
							m_applyScenePosition_CallBack_ev_bool = EarthView_World_Spatial3D_ModelManager_CLodObject_applyScenePosition_ev_bool_Function;
							GC.KeepAlive(m_applyScenePosition_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxObject_applyScenePosition_ev_bool(this.NativeObject, m_applyScenePosition_CallBack_ev_bool);
						}
					}
					public override bool IsAttached()
					{
						return base.IsAttached_NoVirtual();
					}
					public override EarthView.World.Graphic.Node GetNode()
					{
						return base.GetNode_NoVirtual();
					}
					public override bool AttachToNode(EarthView.World.Graphic.Node n)
					{
						return base.AttachToNode_NoVirtual(n);
					}
					public override EarthView.World.Graphic.Node DetachFromNode()
					{
						return base.DetachFromNode_NoVirtual();
					}
					public override bool ApplyScenePosition()
					{
						return base.ApplyScenePosition_NoVirtual();
					}
					public static MeshxObject FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MeshxObject obj = baseObj as  MeshxObject;
						if (object.Equals(obj, null))
						{
							obj = new MeshxObject(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMeshxObject");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MeshxObjectClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MeshxObject emptyInstance = new MeshxObject(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
