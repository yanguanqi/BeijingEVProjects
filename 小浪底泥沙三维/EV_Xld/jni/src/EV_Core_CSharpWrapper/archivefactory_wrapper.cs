/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			///<summary> Abstract factory class, archive codec plugins can register concrete
			///subclasses of this.
			///@remarks
			///All access to 'archives' (collections of files, compressed or
			///just folders, maybe even remote) is managed via the abstract
			///CArchive class. Plugins are expected to provide the
			///implementation for the actual codec itself, but because a
			///subclass of CArchive has to be created for every archive, a
			///factory class is required to create the appropriate subclass.
			///@par
			///So archive plugins create a subclass of CArchive AND a subclass
			///of CArchiveFactory which creates instances of the CArchive
			///subclass. See the 'Zip' and 'FileSystem' plugins for examples.
			///Each CArchive and CArchiveFactory subclass pair deal with a
			///single archive type (identified by a string).
			/// </summary>
			public class ArchiveFactory : EarthView.World.Core.AllocatedObject
			{
				public ArchiveFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CArchiveFactoryProxy", null);
					if (!"EarthView.World.Core.ArchiveFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getType_CallBack_EVString();

				protected getType_CallBack_EVString m_getType_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CArchiveFactory_getType_EVString_NoVirtual(IntPtr pNativeObject);

				public virtual string GetType_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Core_CArchiveFactory_getType_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Core_CArchiveFactory_getType_EVString_Function()
				{
					string csret=GetType();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CArchiveFactory_getType_EVString(IntPtr pNativeObject);

				public virtual string GetType()
				{
					IntPtr __ptr = EarthView_World_Core_CArchiveFactory_getType_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createInstance_CallBack_CArchive_EVString(ref IntPtr name);

				protected createInstance_CallBack_CArchive_EVString m_createInstance_CallBack_CArchive_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary> Creates a new object.</summary>
				/// <param>name= "name" Name of the object to create</param>
				/// <returns>return An object created by the factory. The type of the object depends on
				///the factory.</returns>
				public virtual EarthView.World.Core.Archive CreateInstance_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.Archive csObj = new EarthView.World.Core.Archive(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CArchive");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.Archive;
						csObj.BindNativeObject(__ptr, "CArchive");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					EarthView.World.Core.Archive csret=CreateInstance(strname);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString(IntPtr pNativeObject, string name);

				/// <summary> Creates a new object.</summary>
				/// <param>name= "name" Name of the object to create</param>
				/// <returns>return An object created by the factory. The type of the object depends on
				///the factory.</returns>
				public virtual EarthView.World.Core.Archive CreateInstance(string name)
				{
					IntPtr __ptr = EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.Archive csObj = new EarthView.World.Core.Archive(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CArchive");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.Archive;
						csObj.BindNativeObject(__ptr, "CArchive");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyInstance_CallBack_void_CArchive(IntPtr ptr);

				protected destroyInstance_CallBack_void_CArchive m_destroyInstance_CallBack_void_CArchive;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_NoVirtual(IntPtr pNativeObject, IntPtr ptr);

				/// <summary> Destroys an object which was created by this factory.</summary>
				/// <param> name  =" ptr" Pointer to the object to destroy </param>
				/// <returns></returns>
				public virtual void DestroyInstance_NoVirtual(EarthView.World.Core.Archive ptr)
				{
					EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_NoVirtual(this.NativeObject, object.Equals(ptr, null) ? IntPtr.Zero : ptr.NativeObject);
					
				}

				protected  void EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Function(IntPtr ptr)
				{
					EarthView.World.Core.Archive csobj_ptr = new EarthView.World.Core.Archive(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ptr.BindNativeObject(ptr,"CArchive");
					csobj_ptr.Delegate = true;
					IClassFactory csobj_ptrClassFactory = GlobalClassFactoryMap.Get(csobj_ptr.GetCppInstanceTypeName());
					if (csobj_ptrClassFactory != null)
					{
						csobj_ptr.Delegate = true;
						csobj_ptr = csobj_ptrClassFactory.Create() as EarthView.World.Core.Archive;
						csobj_ptr.BindNativeObject(ptr, "CArchive");
						csobj_ptr.Delegate = true;
					}
					
					DestroyInstance(csobj_ptr);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive(IntPtr pNativeObject, IntPtr ptr);

				/// <summary> Destroys an object which was created by this factory.</summary>
				/// <param> name  =" ptr" Pointer to the object to destroy </param>
				/// <returns></returns>
				public virtual void DestroyInstance(EarthView.World.Core.Archive ptr)
				{
					EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive(this.NativeObject, object.Equals(ptr, null) ? IntPtr.Zero : ptr.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadArchiveFactory = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadArchiveFactory = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadArchiveFactory = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadArchiveFactory = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadArchiveFactory = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadArchiveFactory = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadArchiveFactory = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadArchiveFactory = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadArchiveFactory = LoadDll.Load("EV_Core.so");
						private static bool csbLoadArchiveFactory = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadArchiveFactory = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadArchiveFactory = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveFactory", new ArchiveFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveFactoryProxy", new ArchiveFactoryClassFactory());

				public ArchiveFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString(IntPtr pObject, createInstance_CallBack_CArchive_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive(IntPtr pObject, destroyInstance_CallBack_void_CArchive pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getType_CallBack_EVString = EarthView_World_Core_CArchiveFactory_getType_EVString_Function;
						GC.KeepAlive(m_getType_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
						m_createInstance_CallBack_CArchive_EVString = EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Function;
						GC.KeepAlive(m_createInstance_CallBack_CArchive_EVString);
						EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString(this.NativeObject, m_createInstance_CallBack_CArchive_EVString);
						m_destroyInstance_CallBack_void_CArchive = EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Function;
						GC.KeepAlive(m_destroyInstance_CallBack_void_CArchive);
						EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive(this.NativeObject, m_destroyInstance_CallBack_void_CArchive);
					}
				}
				public static ArchiveFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ArchiveFactory obj = baseObj as  ArchiveFactory;
					if (object.Equals(obj, null))
					{
						obj = new ArchiveFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CArchiveFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ArchiveFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ArchiveFactory emptyInstance = new ArchiveFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
