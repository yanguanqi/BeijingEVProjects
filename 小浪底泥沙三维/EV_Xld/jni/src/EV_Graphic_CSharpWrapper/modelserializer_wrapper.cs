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
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			public class ModelSerializerListener : EarthView.World.Core.BaseObject
			{
				public ModelSerializerListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CModelSerializerListenerProxy", null);
					if (!"EarthView.World.Graphic.ModelSerializerListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void processMaterialName_CallBack_void_CMesh_EVString(IntPtr mesh, ref IntPtr name);

				protected processMaterialName_CallBack_void_CMesh_EVString m_processMaterialName_CallBack_void_CMesh_EVString;

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
				private static extern void EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_NoVirtual(IntPtr pNativeObject, IntPtr mesh, ref IntPtr name);

				public virtual void ProcessMaterialName_NoVirtual(EarthView.World.Graphic.Mesh mesh, ref string name)
				{
					IntPtr __ptrname=Marshal.StringToHGlobalAnsi(name);
					IntPtr pTmpname=__ptrname;
					
					EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_NoVirtual(this.NativeObject, object.Equals(mesh, null) ? IntPtr.Zero : mesh.NativeObject, ref __ptrname);
					
					 Marshal.FreeHGlobal(pTmpname);
					name= Marshal.PtrToStringAnsi(__ptrname);
					ClassFactory.FreeString(ref __ptrname);
					
				}

				protected  void EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Function(IntPtr mesh, ref IntPtr name)
				{
					EarthView.World.Graphic.Mesh csobj_mesh = new EarthView.World.Graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_mesh.BindNativeObject(mesh,"CMesh");
					csobj_mesh.Delegate = true;
					IClassFactory csobj_meshClassFactory = GlobalClassFactoryMap.Get(csobj_mesh.GetCppInstanceTypeName());
					if (csobj_meshClassFactory != null)
					{
						csobj_mesh.Delegate = true;
						csobj_mesh = csobj_meshClassFactory.Create() as EarthView.World.Graphic.Mesh;
						csobj_mesh.BindNativeObject(mesh, "CMesh");
						csobj_mesh.Delegate = true;
					}
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					ProcessMaterialName(csobj_mesh, ref strname);
					
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
				private static extern void EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString(IntPtr pNativeObject, IntPtr mesh, ref IntPtr name);

				public virtual void ProcessMaterialName(EarthView.World.Graphic.Mesh mesh, ref string name)
				{
					IntPtr __ptrname = Marshal.StringToHGlobalAnsi(name);
					IntPtr pTmpname = __ptrname;
					
					EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString(this.NativeObject, object.Equals(mesh, null) ? IntPtr.Zero : mesh.NativeObject, ref __ptrname);
					
					 Marshal.FreeHGlobal(pTmpname);
					name= Marshal.PtrToStringAnsi(__ptrname);
					ClassFactory.FreeString(ref __ptrname);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void processSkeletonName_CallBack_void_CMesh_EVString(IntPtr mesh, ref IntPtr name);

				protected processSkeletonName_CallBack_void_CMesh_EVString m_processSkeletonName_CallBack_void_CMesh_EVString;

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
				private static extern void EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_NoVirtual(IntPtr pNativeObject, IntPtr mesh, ref IntPtr name);

				public virtual void ProcessSkeletonName_NoVirtual(EarthView.World.Graphic.Mesh mesh, ref string name)
				{
					IntPtr __ptrname=Marshal.StringToHGlobalAnsi(name);
					IntPtr pTmpname=__ptrname;
					
					EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_NoVirtual(this.NativeObject, object.Equals(mesh, null) ? IntPtr.Zero : mesh.NativeObject, ref __ptrname);
					
					 Marshal.FreeHGlobal(pTmpname);
					name= Marshal.PtrToStringAnsi(__ptrname);
					ClassFactory.FreeString(ref __ptrname);
					
				}

				protected  void EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Function(IntPtr mesh, ref IntPtr name)
				{
					EarthView.World.Graphic.Mesh csobj_mesh = new EarthView.World.Graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_mesh.BindNativeObject(mesh,"CMesh");
					csobj_mesh.Delegate = true;
					IClassFactory csobj_meshClassFactory = GlobalClassFactoryMap.Get(csobj_mesh.GetCppInstanceTypeName());
					if (csobj_meshClassFactory != null)
					{
						csobj_mesh.Delegate = true;
						csobj_mesh = csobj_meshClassFactory.Create() as EarthView.World.Graphic.Mesh;
						csobj_mesh.BindNativeObject(mesh, "CMesh");
						csobj_mesh.Delegate = true;
					}
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					ProcessSkeletonName(csobj_mesh, ref strname);
					
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
				private static extern void EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString(IntPtr pNativeObject, IntPtr mesh, ref IntPtr name);

				public virtual void ProcessSkeletonName(EarthView.World.Graphic.Mesh mesh, ref string name)
				{
					IntPtr __ptrname = Marshal.StringToHGlobalAnsi(name);
					IntPtr pTmpname = __ptrname;
					
					EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString(this.NativeObject, object.Equals(mesh, null) ? IntPtr.Zero : mesh.NativeObject, ref __ptrname);
					
					 Marshal.FreeHGlobal(pTmpname);
					name= Marshal.PtrToStringAnsi(__ptrname);
					ClassFactory.FreeString(ref __ptrname);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadModelSerializerListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadModelSerializerListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadModelSerializerListener = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadModelSerializerListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadModelSerializerListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadModelSerializerListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadModelSerializerListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadModelSerializerListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadModelSerializerListener = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadModelSerializerListener = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadModelSerializerListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadModelSerializerListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CModelSerializerListener", new ModelSerializerListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CModelSerializerListenerProxy", new ModelSerializerListenerClassFactory());

				public ModelSerializerListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString(IntPtr pObject, processMaterialName_CallBack_void_CMesh_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString(IntPtr pObject, processSkeletonName_CallBack_void_CMesh_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_processMaterialName_CallBack_void_CMesh_EVString = EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Function;
						GC.KeepAlive(m_processMaterialName_CallBack_void_CMesh_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString(this.NativeObject, m_processMaterialName_CallBack_void_CMesh_EVString);
						m_processSkeletonName_CallBack_void_CMesh_EVString = EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Function;
						GC.KeepAlive(m_processSkeletonName_CallBack_void_CMesh_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString(this.NativeObject, m_processSkeletonName_CallBack_void_CMesh_EVString);
					}
				}
				public static ModelSerializerListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ModelSerializerListener obj = baseObj as  ModelSerializerListener;
					if (object.Equals(obj, null))
					{
						obj = new ModelSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CModelSerializerListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ModelSerializerListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ModelSerializerListener emptyInstance = new ModelSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ModelSerializer : EarthView.World.Graphic.Serializer
			{
				public ModelSerializer() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CModelSerializerProxy", null);
					if (!"EarthView.World.Graphic.ModelSerializer".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getFileExtension_CallBack_EVString();

				protected getFileExtension_CallBack_EVString m_getFileExtension_CallBack_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_NoVirtual(IntPtr pNativeObject);

				public virtual string GetFileExtension_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Function()
				{
					string csret=GetFileExtension();
					
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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString(IntPtr pNativeObject);

				public virtual string GetFileExtension()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void importMesh_CallBack_void_DataStreamPtr_CMesh_CommonStringPairList(IntPtr stream, IntPtr pMesh, IntPtr miscParams);

				protected importMesh_CallBack_void_DataStreamPtr_CMesh_CommonStringPairList m_importMesh_CallBack_void_DataStreamPtr_CMesh_CommonStringPairList;

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
				private static extern void EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_NoVirtual(IntPtr pNativeObject, IntPtr stream, IntPtr pMesh, IntPtr miscParams);

				public virtual void ImportMesh_NoVirtual(ref EarthView.World.Core.DataStreamPtr stream, EarthView.World.Graphic.Mesh pMesh, ref EarthView.World.Core.CommonStringPairList miscParams)
				{
					EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, object.Equals(pMesh, null) ? IntPtr.Zero : pMesh.NativeObject, object.Equals(miscParams, null) ? IntPtr.Zero : miscParams.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Function(IntPtr stream, IntPtr pMesh, IntPtr miscParams)
				{
					EarthView.World.Core.DataStreamPtr csobj_stream = new EarthView.World.Core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_stream.BindNativeObject(stream,"DataStreamPtr");
					csobj_stream.Delegate = true;
					IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
					if (csobj_streamClassFactory != null)
					{
						csobj_stream.Delegate = true;
						csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStreamPtr;
						csobj_stream.BindNativeObject(stream, "DataStreamPtr");
						csobj_stream.Delegate = true;
					}
					EarthView.World.Graphic.Mesh csobj_pMesh = new EarthView.World.Graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pMesh.BindNativeObject(pMesh,"CMesh");
					csobj_pMesh.Delegate = true;
					IClassFactory csobj_pMeshClassFactory = GlobalClassFactoryMap.Get(csobj_pMesh.GetCppInstanceTypeName());
					if (csobj_pMeshClassFactory != null)
					{
						csobj_pMesh.Delegate = true;
						csobj_pMesh = csobj_pMeshClassFactory.Create() as EarthView.World.Graphic.Mesh;
						csobj_pMesh.BindNativeObject(pMesh, "CMesh");
						csobj_pMesh.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_miscParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_miscParams.BindNativeObject(miscParams,"CommonStringPairList");
					csobj_miscParams.Delegate = true;
					IClassFactory csobj_miscParamsClassFactory = GlobalClassFactoryMap.Get(csobj_miscParams.GetCppInstanceTypeName());
					if (csobj_miscParamsClassFactory != null)
					{
						csobj_miscParams.Delegate = true;
						csobj_miscParams = csobj_miscParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_miscParams.BindNativeObject(miscParams, "CommonStringPairList");
						csobj_miscParams.Delegate = true;
					}
					
					ImportMesh(ref csobj_stream, csobj_pMesh, ref csobj_miscParams);
					
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
				private static extern void EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(IntPtr pNativeObject, IntPtr stream, IntPtr pMesh, IntPtr miscParams);

				public virtual void ImportMesh(ref EarthView.World.Core.DataStreamPtr stream, EarthView.World.Graphic.Mesh pMesh, ref EarthView.World.Core.CommonStringPairList miscParams)
				{
					EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, object.Equals(pMesh, null) ? IntPtr.Zero : pMesh.NativeObject, object.Equals(miscParams, null) ? IntPtr.Zero : miscParams.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void importMesh_CallBack_void_DataStreamPtr_CMesh(IntPtr stream, IntPtr pMesh);

				protected importMesh_CallBack_void_DataStreamPtr_CMesh m_importMesh_CallBack_void_DataStreamPtr_CMesh;

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
				private static extern void EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_NoVirtual(IntPtr pNativeObject, IntPtr stream, IntPtr pMesh);

				public virtual void ImportMesh_NoVirtual(ref EarthView.World.Core.DataStreamPtr stream, EarthView.World.Graphic.Mesh pMesh)
				{
					EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, object.Equals(pMesh, null) ? IntPtr.Zero : pMesh.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Function(IntPtr stream, IntPtr pMesh)
				{
					EarthView.World.Core.DataStreamPtr csobj_stream = new EarthView.World.Core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_stream.BindNativeObject(stream,"DataStreamPtr");
					csobj_stream.Delegate = true;
					IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
					if (csobj_streamClassFactory != null)
					{
						csobj_stream.Delegate = true;
						csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStreamPtr;
						csobj_stream.BindNativeObject(stream, "DataStreamPtr");
						csobj_stream.Delegate = true;
					}
					EarthView.World.Graphic.Mesh csobj_pMesh = new EarthView.World.Graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pMesh.BindNativeObject(pMesh,"CMesh");
					csobj_pMesh.Delegate = true;
					IClassFactory csobj_pMeshClassFactory = GlobalClassFactoryMap.Get(csobj_pMesh.GetCppInstanceTypeName());
					if (csobj_pMeshClassFactory != null)
					{
						csobj_pMesh.Delegate = true;
						csobj_pMesh = csobj_pMeshClassFactory.Create() as EarthView.World.Graphic.Mesh;
						csobj_pMesh.BindNativeObject(pMesh, "CMesh");
						csobj_pMesh.Delegate = true;
					}
					
					ImportMesh(ref csobj_stream, csobj_pMesh);
					
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
				private static extern void EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh(IntPtr pNativeObject, IntPtr stream, IntPtr pMesh);

				public virtual void ImportMesh(ref EarthView.World.Core.DataStreamPtr stream, EarthView.World.Graphic.Mesh pMesh)
				{
					EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, object.Equals(pMesh, null) ? IntPtr.Zero : pMesh.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CModelSerializer_setListener_void_CModelSerializerListener(IntPtr pNativeObject, IntPtr ref_listener);

				public void SetListener(EarthView.World.Graphic.ModelSerializerListener ref_listener)
				{
					EarthView_World_Graphic_CModelSerializer_setListener_void_CModelSerializerListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializer_getListener_CModelSerializerListener(IntPtr pNativeObject);

				public EarthView.World.Graphic.ModelSerializerListener GetListener()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializer_getListener_CModelSerializerListener(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ModelSerializerListener csObj = new EarthView.World.Graphic.ModelSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelSerializerListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ModelSerializerListener;
						csObj.BindNativeObject(__ptr, "CModelSerializerListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadModelSerializer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadModelSerializer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadModelSerializer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadModelSerializer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadModelSerializer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadModelSerializer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadModelSerializer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadModelSerializer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadModelSerializer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadModelSerializer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadModelSerializer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadModelSerializer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CModelSerializer", new ModelSerializerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CModelSerializerProxy", new ModelSerializerClassFactory());

				public ModelSerializer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString(IntPtr pObject, getFileExtension_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(IntPtr pObject, importMesh_CallBack_void_DataStreamPtr_CMesh_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh(IntPtr pObject, importMesh_CallBack_void_DataStreamPtr_CMesh pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void(IntPtr pObject, writeFileHeader_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(IntPtr pObject, writeChunkHeader_CallBack_void_ev_uint16_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr(IntPtr pObject, readFileHeader_CallBack_void_DataStreamPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr(IntPtr pObject, readChunk_CallBack_ev_uint16_DataStreamPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(IntPtr pObject, flipToLittleEndian_CallBack_void_void_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t(IntPtr pObject, flipToLittleEndian_CallBack_void_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(IntPtr pObject, flipFromLittleEndian_CallBack_void_void_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t(IntPtr pObject, flipFromLittleEndian_CallBack_void_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t(IntPtr pObject, flipEndian_CallBack_void_void_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t(IntPtr pObject, flipEndian_CallBack_void_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr(IntPtr pObject, determineEndianness_CallBack_void_DataStreamPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian(IntPtr pObject, determineEndianness_CallBack_void_Endian pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFileExtension_CallBack_EVString = EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Function;
						GC.KeepAlive(m_getFileExtension_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString(this.NativeObject, m_getFileExtension_CallBack_EVString);
						m_importMesh_CallBack_void_DataStreamPtr_CMesh_CommonStringPairList = EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Function;
						GC.KeepAlive(m_importMesh_CallBack_void_DataStreamPtr_CMesh_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(this.NativeObject, m_importMesh_CallBack_void_DataStreamPtr_CMesh_CommonStringPairList);
						m_importMesh_CallBack_void_DataStreamPtr_CMesh = EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Function;
						GC.KeepAlive(m_importMesh_CallBack_void_DataStreamPtr_CMesh);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh(this.NativeObject, m_importMesh_CallBack_void_DataStreamPtr_CMesh);
						m_writeFileHeader_CallBack_void = EarthView_World_Graphic_CSerializer_writeFileHeader_void_Function;
						GC.KeepAlive(m_writeFileHeader_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void(this.NativeObject, m_writeFileHeader_CallBack_void);
						m_writeChunkHeader_CallBack_void_ev_uint16_ev_size_t = EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Function;
						GC.KeepAlive(m_writeChunkHeader_CallBack_void_ev_uint16_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(this.NativeObject, m_writeChunkHeader_CallBack_void_ev_uint16_ev_size_t);
						m_readFileHeader_CallBack_void_DataStreamPtr = EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Function;
						GC.KeepAlive(m_readFileHeader_CallBack_void_DataStreamPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr(this.NativeObject, m_readFileHeader_CallBack_void_DataStreamPtr);
						m_readChunk_CallBack_ev_uint16_DataStreamPtr = EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Function;
						GC.KeepAlive(m_readChunk_CallBack_ev_uint16_DataStreamPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr(this.NativeObject, m_readChunk_CallBack_ev_uint16_DataStreamPtr);
						m_flipToLittleEndian_CallBack_void_void_ev_size_t_ev_size_t = EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_flipToLittleEndian_CallBack_void_void_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(this.NativeObject, m_flipToLittleEndian_CallBack_void_void_ev_size_t_ev_size_t);
						m_flipToLittleEndian_CallBack_void_void_ev_size_t = EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Function;
						GC.KeepAlive(m_flipToLittleEndian_CallBack_void_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t(this.NativeObject, m_flipToLittleEndian_CallBack_void_void_ev_size_t);
						m_flipFromLittleEndian_CallBack_void_void_ev_size_t_ev_size_t = EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_flipFromLittleEndian_CallBack_void_void_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(this.NativeObject, m_flipFromLittleEndian_CallBack_void_void_ev_size_t_ev_size_t);
						m_flipFromLittleEndian_CallBack_void_void_ev_size_t = EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Function;
						GC.KeepAlive(m_flipFromLittleEndian_CallBack_void_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t(this.NativeObject, m_flipFromLittleEndian_CallBack_void_void_ev_size_t);
						m_flipEndian_CallBack_void_void_ev_size_t_ev_size_t = EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_flipEndian_CallBack_void_void_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t(this.NativeObject, m_flipEndian_CallBack_void_void_ev_size_t_ev_size_t);
						m_flipEndian_CallBack_void_void_ev_size_t = EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Function;
						GC.KeepAlive(m_flipEndian_CallBack_void_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t(this.NativeObject, m_flipEndian_CallBack_void_void_ev_size_t);
						m_determineEndianness_CallBack_void_DataStreamPtr = EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Function;
						GC.KeepAlive(m_determineEndianness_CallBack_void_DataStreamPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr(this.NativeObject, m_determineEndianness_CallBack_void_DataStreamPtr);
						m_determineEndianness_CallBack_void_Endian = EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Function;
						GC.KeepAlive(m_determineEndianness_CallBack_void_Endian);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian(this.NativeObject, m_determineEndianness_CallBack_void_Endian);
					}
				}
				protected override void WriteFileHeader()
				{
					base.WriteFileHeader_NoVirtual();
				}
				protected override void WriteChunkHeader(ushort id, ulong size)
				{
					base.WriteChunkHeader_NoVirtual(id,size);
				}
				protected override void ReadFileHeader(EarthView.World.Core.DataStreamPtr stream)
				{
					base.ReadFileHeader_NoVirtual(stream);
				}
				protected override ushort ReadChunk(EarthView.World.Core.DataStreamPtr stream)
				{
					return base.ReadChunk_NoVirtual(stream);
				}
				protected override void FlipToLittleEndian(IntPtr pData, ulong size, ulong count)
				{
					base.FlipToLittleEndian_NoVirtual(pData,size,count);
				}
				protected override void FlipToLittleEndian(IntPtr pData, ulong size)
				{
					base.FlipToLittleEndian_NoVirtual(pData,size);
				}
				protected override void FlipFromLittleEndian(IntPtr pData, ulong size, ulong count)
				{
					base.FlipFromLittleEndian_NoVirtual(pData,size,count);
				}
				protected override void FlipFromLittleEndian(IntPtr pData, ulong size)
				{
					base.FlipFromLittleEndian_NoVirtual(pData,size);
				}
				protected override void FlipEndian(IntPtr pData, ulong size, ulong count)
				{
					base.FlipEndian_NoVirtual(pData,size,count);
				}
				protected override void FlipEndian(IntPtr pData, ulong size)
				{
					base.FlipEndian_NoVirtual(pData,size);
				}
				protected override void DetermineEndianness(EarthView.World.Core.DataStreamPtr stream)
				{
					base.DetermineEndianness_NoVirtual(stream);
				}
				protected override void DetermineEndianness(EarthView.World.Graphic.Serializer.ENDIAN requestedEndian)
				{
					base.DetermineEndianness_NoVirtual(requestedEndian);
				}
				public static ModelSerializer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ModelSerializer obj = baseObj as  ModelSerializer;
					if (object.Equals(obj, null))
					{
						obj = new ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CModelSerializer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ModelSerializerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ModelSerializer emptyInstance = new ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ModelSerializerFactory : EarthView.World.Core.BaseObject
			{
				public ModelSerializerFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CModelSerializerFactoryProxy", null);
					if (!"EarthView.World.Graphic.ModelSerializerFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getFileExtension_CallBack_EVString();

				protected getFileExtension_CallBack_EVString m_getFileExtension_CallBack_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_NoVirtual(IntPtr pNativeObject);

				public virtual string GetFileExtension_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Function()
				{
					string csret=GetFileExtension();
					
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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString(IntPtr pNativeObject);

				public virtual string GetFileExtension()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createInstance_CallBack_CModelSerializer();

				protected createInstance_CallBack_CModelSerializer m_createInstance_CallBack_CModelSerializer;

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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ModelSerializer CreateInstance_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ModelSerializer csObj = new EarthView.World.Graphic.ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelSerializer");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ModelSerializer;
						csObj.BindNativeObject(__ptr, "CModelSerializer");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Function()
				{
					EarthView.World.Graphic.ModelSerializer csret=CreateInstance();
					
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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ModelSerializer CreateInstance()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ModelSerializer csObj = new EarthView.World.Graphic.ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelSerializer");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ModelSerializer;
						csObj.BindNativeObject(__ptr, "CModelSerializer");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyInstance_CallBack_void_CModelSerializer(IntPtr pSerializer);

				protected destroyInstance_CallBack_void_CModelSerializer m_destroyInstance_CallBack_void_CModelSerializer;

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
				private static extern void EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_NoVirtual(IntPtr pNativeObject, IntPtr pSerializer);

				public virtual void DestroyInstance_NoVirtual(EarthView.World.Graphic.ModelSerializer pSerializer)
				{
					EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_NoVirtual(this.NativeObject, object.Equals(pSerializer, null) ? IntPtr.Zero : pSerializer.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Function(IntPtr pSerializer)
				{
					EarthView.World.Graphic.ModelSerializer csobj_pSerializer = new EarthView.World.Graphic.ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pSerializer.BindNativeObject(pSerializer,"CModelSerializer");
					csobj_pSerializer.Delegate = true;
					IClassFactory csobj_pSerializerClassFactory = GlobalClassFactoryMap.Get(csobj_pSerializer.GetCppInstanceTypeName());
					if (csobj_pSerializerClassFactory != null)
					{
						csobj_pSerializer.Delegate = true;
						csobj_pSerializer = csobj_pSerializerClassFactory.Create() as EarthView.World.Graphic.ModelSerializer;
						csobj_pSerializer.BindNativeObject(pSerializer, "CModelSerializer");
						csobj_pSerializer.Delegate = true;
					}
					
					DestroyInstance(csobj_pSerializer);
					
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
				private static extern void EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer(IntPtr pNativeObject, IntPtr pSerializer);

				public virtual void DestroyInstance(EarthView.World.Graphic.ModelSerializer pSerializer)
				{
					EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer(this.NativeObject, object.Equals(pSerializer, null) ? IntPtr.Zero : pSerializer.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadModelSerializerFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadModelSerializerFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadModelSerializerFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadModelSerializerFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CModelSerializerFactory", new ModelSerializerFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CModelSerializerFactoryProxy", new ModelSerializerFactoryClassFactory());

				public ModelSerializerFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString(IntPtr pObject, getFileExtension_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer(IntPtr pObject, createInstance_CallBack_CModelSerializer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer(IntPtr pObject, destroyInstance_CallBack_void_CModelSerializer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFileExtension_CallBack_EVString = EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Function;
						GC.KeepAlive(m_getFileExtension_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString(this.NativeObject, m_getFileExtension_CallBack_EVString);
						m_createInstance_CallBack_CModelSerializer = EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Function;
						GC.KeepAlive(m_createInstance_CallBack_CModelSerializer);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer(this.NativeObject, m_createInstance_CallBack_CModelSerializer);
						m_destroyInstance_CallBack_void_CModelSerializer = EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Function;
						GC.KeepAlive(m_destroyInstance_CallBack_void_CModelSerializer);
						EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer(this.NativeObject, m_destroyInstance_CallBack_void_CModelSerializer);
					}
				}
				public static ModelSerializerFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ModelSerializerFactory obj = baseObj as  ModelSerializerFactory;
					if (object.Equals(obj, null))
					{
						obj = new ModelSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CModelSerializerFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ModelSerializerFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ModelSerializerFactory emptyInstance = new ModelSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ModelSerializerFactoryEnum : EarthView.World.Core.BaseObject
			{
				public ModelSerializerFactoryEnum() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CModelSerializerFactoryEnum",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializerFactoryEnum_getSingleton_CModelSerializerFactoryEnum();

				/// <summary>
				/// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回单体类的引用</returns>
				public static EarthView.World.Graphic.ModelSerializerFactoryEnum GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializerFactoryEnum_getSingleton_CModelSerializerFactoryEnum();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ModelSerializerFactoryEnum csObj = new EarthView.World.Graphic.ModelSerializerFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelSerializerFactoryEnum");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ModelSerializerFactoryEnum;
						csObj.BindNativeObject(__ptr, "CModelSerializerFactoryEnum");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializerFactoryEnum_getSingletonPtr_CModelSerializerFactoryEnum();

				/// <summary>
				/// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回单体类的引用</returns>
				public static EarthView.World.Graphic.ModelSerializerFactoryEnum GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializerFactoryEnum_getSingletonPtr_CModelSerializerFactoryEnum();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ModelSerializerFactoryEnum csObj = new EarthView.World.Graphic.ModelSerializerFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelSerializerFactoryEnum");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ModelSerializerFactoryEnum;
						csObj.BindNativeObject(__ptr, "CModelSerializerFactoryEnum");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern byte EarthView_World_Graphic_CModelSerializerFactoryEnum_registerFactory_bool_CModelSerializerFactory(IntPtr pNativeObject, IntPtr ref_pFactory);

				public bool RegisterFactory(EarthView.World.Graphic.ModelSerializerFactory ref_pFactory)
				{
					byte ret=EarthView_World_Graphic_CModelSerializerFactoryEnum_registerFactory_bool_CModelSerializerFactory(this.NativeObject, object.Equals(ref_pFactory, null) ? IntPtr.Zero : ref_pFactory.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CModelSerializerFactoryEnum_getFactory_CModelSerializerFactory_EVString(IntPtr pNativeObject, string fileExt);

				public EarthView.World.Graphic.ModelSerializerFactory GetFactory(string fileExt)
				{
					IntPtr __ptr = EarthView_World_Graphic_CModelSerializerFactoryEnum_getFactory_CModelSerializerFactory_EVString(this.NativeObject, fileExt);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ModelSerializerFactory csObj = new EarthView.World.Graphic.ModelSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelSerializerFactory");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ModelSerializerFactory;
						csObj.BindNativeObject(__ptr, "CModelSerializerFactory");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadModelSerializerFactoryEnum = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CModelSerializerFactoryEnum", new ModelSerializerFactoryEnumClassFactory());

				public ModelSerializerFactoryEnum(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ModelSerializerFactoryEnum FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ModelSerializerFactoryEnum obj = baseObj as  ModelSerializerFactoryEnum;
					if (object.Equals(obj, null))
					{
						obj = new ModelSerializerFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CModelSerializerFactoryEnum");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ModelSerializerFactoryEnumClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ModelSerializerFactoryEnum emptyInstance = new ModelSerializerFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
