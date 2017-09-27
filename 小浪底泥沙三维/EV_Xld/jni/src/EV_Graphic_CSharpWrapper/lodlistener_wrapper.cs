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
			public class MovableObjectLodChangedEvent : EarthView.World.Core.BaseObject
			{
				public MovableObjectLodChangedEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("MovableObjectLodChangedEvent",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				private EarthView.World.Graphic.MovableObject movableObjectField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_MovableObjectLodChangedEvent_movableObject(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_MovableObjectLodChangedEvent_movableObject( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.MovableObject MovableObject
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_MovableObjectLodChangedEvent_movableObject(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(movableObjectField, null)){
							movableObjectField.NativeObject = __ptr;
							return movableObjectField;
						}
						EarthView.World.Graphic.MovableObject csObj = new EarthView.World.Graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMovableObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject;
							csObj.BindNativeObject(__ptr, "CMovableObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						movableObjectField = value;
						Set_EarthView_World_Graphic_MovableObjectLodChangedEvent_movableObject( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Graphic.Camera cameraField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_MovableObjectLodChangedEvent_camera(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_MovableObjectLodChangedEvent_camera( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.Camera Camera
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_MovableObjectLodChangedEvent_camera(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(cameraField, null)){
							cameraField.NativeObject = __ptr;
							return cameraField;
						}
						EarthView.World.Graphic.Camera csObj = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCamera");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Camera;
							csObj.BindNativeObject(__ptr, "CCamera");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						cameraField = value;
						Set_EarthView_World_Graphic_MovableObjectLodChangedEvent_camera( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadMovableObjectLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::MovableObjectLodChangedEvent", new MovableObjectLodChangedEventClassFactory());

				public MovableObjectLodChangedEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static MovableObjectLodChangedEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MovableObjectLodChangedEvent obj = baseObj as  MovableObjectLodChangedEvent;
					if (object.Equals(obj, null))
					{
						obj = new MovableObjectLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "MovableObjectLodChangedEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MovableObjectLodChangedEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MovableObjectLodChangedEvent emptyInstance = new MovableObjectLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class EntityMeshLodChangedEvent : EarthView.World.Core.BaseObject
			{
				public EntityMeshLodChangedEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("EntityMeshLodChangedEvent",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				private EarthView.World.Graphic.Entity entityField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_entity(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_entity( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.Entity Entity
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_entity(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(entityField, null)){
							entityField.NativeObject = __ptr;
							return entityField;
						}
						EarthView.World.Graphic.Entity csObj = new EarthView.World.Graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEntity");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Entity;
							csObj.BindNativeObject(__ptr, "CEntity");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						entityField = value;
						Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_entity( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Graphic.Camera cameraField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_camera(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_camera( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.Camera Camera
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_camera(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(cameraField, null)){
							cameraField.NativeObject = __ptr;
							return cameraField;
						}
						EarthView.World.Graphic.Camera csObj = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCamera");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Camera;
							csObj.BindNativeObject(__ptr, "CCamera");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						cameraField = value;
						Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_camera( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
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
				private static extern double Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_lodValue(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_lodValue( IntPtr pObject, double value );

				public 				double LodValue
				{
					get
					{
						double ret=Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_lodValue(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_lodValue(this.NativeObject,value);
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
				private static extern ushort Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_previousLodIndex(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_previousLodIndex( IntPtr pObject, ushort value );

				public 				ushort PreviousLodIndex
				{
					get
					{
						ushort ret=Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_previousLodIndex(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_previousLodIndex(this.NativeObject,value);
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
				private static extern ushort Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_newLodIndex(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_newLodIndex( IntPtr pObject, ushort value );

				public 				ushort NewLodIndex
				{
					get
					{
						ushort ret=Get_EarthView_World_Graphic_EntityMeshLodChangedEvent_newLodIndex(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_EntityMeshLodChangedEvent_newLodIndex(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadEntityMeshLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EntityMeshLodChangedEvent", new EntityMeshLodChangedEventClassFactory());

				public EntityMeshLodChangedEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static EntityMeshLodChangedEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					EntityMeshLodChangedEvent obj = baseObj as  EntityMeshLodChangedEvent;
					if (object.Equals(obj, null))
					{
						obj = new EntityMeshLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "EntityMeshLodChangedEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class EntityMeshLodChangedEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					EntityMeshLodChangedEvent emptyInstance = new EntityMeshLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class EntityMaterialLodChangedEvent : EarthView.World.Core.BaseObject
			{
				public EntityMaterialLodChangedEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("EntityMaterialLodChangedEvent",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				private EarthView.World.Graphic.SubEntity subEntityField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_subEntity(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_subEntity( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.SubEntity SubEntity
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_subEntity(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(subEntityField, null)){
							subEntityField.NativeObject = __ptr;
							return subEntityField;
						}
						EarthView.World.Graphic.SubEntity csObj = new EarthView.World.Graphic.SubEntity(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubEntity");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SubEntity;
							csObj.BindNativeObject(__ptr, "CSubEntity");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						subEntityField = value;
						Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_subEntity( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Graphic.Camera cameraField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_camera(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_camera( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.Camera Camera
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_camera(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(cameraField, null)){
							cameraField.NativeObject = __ptr;
							return cameraField;
						}
						EarthView.World.Graphic.Camera csObj = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCamera");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Camera;
							csObj.BindNativeObject(__ptr, "CCamera");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						cameraField = value;
						Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_camera( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
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
				private static extern double Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_lodValue(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_lodValue( IntPtr pObject, double value );

				public 				double LodValue
				{
					get
					{
						double ret=Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_lodValue(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_lodValue(this.NativeObject,value);
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
				private static extern ushort Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_previousLodIndex(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_previousLodIndex( IntPtr pObject, ushort value );

				public 				ushort PreviousLodIndex
				{
					get
					{
						ushort ret=Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_previousLodIndex(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_previousLodIndex(this.NativeObject,value);
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
				private static extern ushort Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_newLodIndex(IntPtr pObject);

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
				private static extern void Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_newLodIndex( IntPtr pObject, ushort value );

				public 				ushort NewLodIndex
				{
					get
					{
						ushort ret=Get_EarthView_World_Graphic_EntityMaterialLodChangedEvent_newLodIndex(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_EntityMaterialLodChangedEvent_newLodIndex(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadEntityMaterialLodChangedEvent = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EntityMaterialLodChangedEvent", new EntityMaterialLodChangedEventClassFactory());

				public EntityMaterialLodChangedEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static EntityMaterialLodChangedEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					EntityMaterialLodChangedEvent obj = baseObj as  EntityMaterialLodChangedEvent;
					if (object.Equals(obj, null))
					{
						obj = new EntityMaterialLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "EntityMaterialLodChangedEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class EntityMaterialLodChangedEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					EntityMaterialLodChangedEvent emptyInstance = new EntityMaterialLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class LodListener : EarthView.World.Core.BaseObject
			{
				public LodListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLodListenerProxy", null);
					if (!"EarthView.World.Graphic.LodListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte prequeueMovableObjectLodChanged_CallBack_ev_bool_MovableObjectLodChangedEvent(IntPtr evt);

				protected prequeueMovableObjectLodChanged_CallBack_ev_bool_MovableObjectLodChangedEvent m_prequeueMovableObjectLodChanged_CallBack_ev_bool_MovableObjectLodChangedEvent;

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
				private static extern byte EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				public virtual bool PrequeueMovableObjectLodChanged_NoVirtual(EarthView.World.Graphic.MovableObjectLodChangedEvent evt)
				{
					byte ret=EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.MovableObjectLodChangedEvent csobj_evt = new EarthView.World.Graphic.MovableObjectLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"MovableObjectLodChangedEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.MovableObjectLodChangedEvent;
						csobj_evt.BindNativeObject(evt, "MovableObjectLodChangedEvent");
						csobj_evt.Delegate = true;
					}
					
					bool csret=PrequeueMovableObjectLodChanged(csobj_evt);
					
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
				private static extern byte EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent(IntPtr pNativeObject, IntPtr evt);

				public virtual bool PrequeueMovableObjectLodChanged(EarthView.World.Graphic.MovableObjectLodChangedEvent evt)
				{
					byte ret=EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postqueueMovableObjectLodChanged_CallBack_void_MovableObjectLodChangedEvent(IntPtr evt);

				protected postqueueMovableObjectLodChanged_CallBack_void_MovableObjectLodChangedEvent m_postqueueMovableObjectLodChanged_CallBack_void_MovableObjectLodChangedEvent;

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
				private static extern void EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				public virtual void PostqueueMovableObjectLodChanged_NoVirtual(EarthView.World.Graphic.MovableObjectLodChangedEvent evt)
				{
					EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.MovableObjectLodChangedEvent csobj_evt = new EarthView.World.Graphic.MovableObjectLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"MovableObjectLodChangedEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.MovableObjectLodChangedEvent;
						csobj_evt.BindNativeObject(evt, "MovableObjectLodChangedEvent");
						csobj_evt.Delegate = true;
					}
					
					PostqueueMovableObjectLodChanged(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent(IntPtr pNativeObject, IntPtr evt);

				public virtual void PostqueueMovableObjectLodChanged(EarthView.World.Graphic.MovableObjectLodChangedEvent evt)
				{
					EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte prequeueEntityMeshLodChanged_CallBack_ev_bool_EntityMeshLodChangedEvent(IntPtr evt);

				protected prequeueEntityMeshLodChanged_CallBack_ev_bool_EntityMeshLodChangedEvent m_prequeueEntityMeshLodChanged_CallBack_ev_bool_EntityMeshLodChangedEvent;

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
				private static extern byte EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				public virtual bool PrequeueEntityMeshLodChanged_NoVirtual(ref EarthView.World.Graphic.EntityMeshLodChangedEvent evt)
				{
					byte ret=EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.EntityMeshLodChangedEvent csobj_evt = new EarthView.World.Graphic.EntityMeshLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"EntityMeshLodChangedEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.EntityMeshLodChangedEvent;
						csobj_evt.BindNativeObject(evt, "EntityMeshLodChangedEvent");
						csobj_evt.Delegate = true;
					}
					
					bool csret=PrequeueEntityMeshLodChanged(ref csobj_evt);
					
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
				private static extern byte EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent(IntPtr pNativeObject, IntPtr evt);

				public virtual bool PrequeueEntityMeshLodChanged(ref EarthView.World.Graphic.EntityMeshLodChangedEvent evt)
				{
					byte ret=EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postqueueEntityMeshLodChanged_CallBack_void_EntityMeshLodChangedEvent(IntPtr evt);

				protected postqueueEntityMeshLodChanged_CallBack_void_EntityMeshLodChangedEvent m_postqueueEntityMeshLodChanged_CallBack_void_EntityMeshLodChangedEvent;

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
				private static extern void EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				public virtual void PostqueueEntityMeshLodChanged_NoVirtual(EarthView.World.Graphic.EntityMeshLodChangedEvent evt)
				{
					EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.EntityMeshLodChangedEvent csobj_evt = new EarthView.World.Graphic.EntityMeshLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"EntityMeshLodChangedEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.EntityMeshLodChangedEvent;
						csobj_evt.BindNativeObject(evt, "EntityMeshLodChangedEvent");
						csobj_evt.Delegate = true;
					}
					
					PostqueueEntityMeshLodChanged(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent(IntPtr pNativeObject, IntPtr evt);

				public virtual void PostqueueEntityMeshLodChanged(EarthView.World.Graphic.EntityMeshLodChangedEvent evt)
				{
					EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte prequeueEntityMaterialLodChanged_CallBack_ev_bool_EntityMaterialLodChangedEvent(IntPtr evt);

				protected prequeueEntityMaterialLodChanged_CallBack_ev_bool_EntityMaterialLodChangedEvent m_prequeueEntityMaterialLodChanged_CallBack_ev_bool_EntityMaterialLodChangedEvent;

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
				private static extern byte EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				public virtual bool PrequeueEntityMaterialLodChanged_NoVirtual(ref EarthView.World.Graphic.EntityMaterialLodChangedEvent evt)
				{
					byte ret=EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.EntityMaterialLodChangedEvent csobj_evt = new EarthView.World.Graphic.EntityMaterialLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"EntityMaterialLodChangedEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.EntityMaterialLodChangedEvent;
						csobj_evt.BindNativeObject(evt, "EntityMaterialLodChangedEvent");
						csobj_evt.Delegate = true;
					}
					
					bool csret=PrequeueEntityMaterialLodChanged(ref csobj_evt);
					
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
				private static extern byte EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent(IntPtr pNativeObject, IntPtr evt);

				public virtual bool PrequeueEntityMaterialLodChanged(ref EarthView.World.Graphic.EntityMaterialLodChangedEvent evt)
				{
					byte ret=EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postqueueEntityMaterialLodChanged_CallBack_void_EntityMaterialLodChangedEvent(IntPtr evt);

				protected postqueueEntityMaterialLodChanged_CallBack_void_EntityMaterialLodChangedEvent m_postqueueEntityMaterialLodChanged_CallBack_void_EntityMaterialLodChangedEvent;

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
				private static extern void EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_NoVirtual(IntPtr pNativeObject, IntPtr evt);

				public virtual void PostqueueEntityMaterialLodChanged_NoVirtual(EarthView.World.Graphic.EntityMaterialLodChangedEvent evt)
				{
					EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_NoVirtual(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Function(IntPtr evt)
				{
					EarthView.World.Graphic.EntityMaterialLodChangedEvent csobj_evt = new EarthView.World.Graphic.EntityMaterialLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_evt.BindNativeObject(evt,"EntityMaterialLodChangedEvent");
					csobj_evt.Delegate = true;
					IClassFactory csobj_evtClassFactory = GlobalClassFactoryMap.Get(csobj_evt.GetCppInstanceTypeName());
					if (csobj_evtClassFactory != null)
					{
						csobj_evt.Delegate = true;
						csobj_evt = csobj_evtClassFactory.Create() as EarthView.World.Graphic.EntityMaterialLodChangedEvent;
						csobj_evt.BindNativeObject(evt, "EntityMaterialLodChangedEvent");
						csobj_evt.Delegate = true;
					}
					
					PostqueueEntityMaterialLodChanged(csobj_evt);
					
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
				private static extern void EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent(IntPtr pNativeObject, IntPtr evt);

				public virtual void PostqueueEntityMaterialLodChanged(EarthView.World.Graphic.EntityMaterialLodChangedEvent evt)
				{
					EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent(this.NativeObject, object.Equals(evt, null) ? IntPtr.Zero : evt.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLodListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadLodListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLodListener = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadLodListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadLodListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadLodListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLodListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadLodListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadLodListener = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadLodListener = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadLodListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadLodListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CLodListener", new LodListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CLodListenerProxy", new LodListenerClassFactory());

				public LodListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent(IntPtr pObject, prequeueMovableObjectLodChanged_CallBack_ev_bool_MovableObjectLodChangedEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent(IntPtr pObject, postqueueMovableObjectLodChanged_CallBack_void_MovableObjectLodChangedEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent(IntPtr pObject, prequeueEntityMeshLodChanged_CallBack_ev_bool_EntityMeshLodChangedEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent(IntPtr pObject, postqueueEntityMeshLodChanged_CallBack_void_EntityMeshLodChangedEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent(IntPtr pObject, prequeueEntityMaterialLodChanged_CallBack_ev_bool_EntityMaterialLodChangedEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent(IntPtr pObject, postqueueEntityMaterialLodChanged_CallBack_void_EntityMaterialLodChangedEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_prequeueMovableObjectLodChanged_CallBack_ev_bool_MovableObjectLodChangedEvent = EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent_Function;
						GC.KeepAlive(m_prequeueMovableObjectLodChanged_CallBack_ev_bool_MovableObjectLodChangedEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueMovableObjectLodChanged_ev_bool_MovableObjectLodChangedEvent(this.NativeObject, m_prequeueMovableObjectLodChanged_CallBack_ev_bool_MovableObjectLodChangedEvent);
						m_postqueueMovableObjectLodChanged_CallBack_void_MovableObjectLodChangedEvent = EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent_Function;
						GC.KeepAlive(m_postqueueMovableObjectLodChanged_CallBack_void_MovableObjectLodChangedEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueMovableObjectLodChanged_void_MovableObjectLodChangedEvent(this.NativeObject, m_postqueueMovableObjectLodChanged_CallBack_void_MovableObjectLodChangedEvent);
						m_prequeueEntityMeshLodChanged_CallBack_ev_bool_EntityMeshLodChangedEvent = EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent_Function;
						GC.KeepAlive(m_prequeueEntityMeshLodChanged_CallBack_ev_bool_EntityMeshLodChangedEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMeshLodChanged_ev_bool_EntityMeshLodChangedEvent(this.NativeObject, m_prequeueEntityMeshLodChanged_CallBack_ev_bool_EntityMeshLodChangedEvent);
						m_postqueueEntityMeshLodChanged_CallBack_void_EntityMeshLodChangedEvent = EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent_Function;
						GC.KeepAlive(m_postqueueEntityMeshLodChanged_CallBack_void_EntityMeshLodChangedEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMeshLodChanged_void_EntityMeshLodChangedEvent(this.NativeObject, m_postqueueEntityMeshLodChanged_CallBack_void_EntityMeshLodChangedEvent);
						m_prequeueEntityMaterialLodChanged_CallBack_ev_bool_EntityMaterialLodChangedEvent = EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent_Function;
						GC.KeepAlive(m_prequeueEntityMaterialLodChanged_CallBack_ev_bool_EntityMaterialLodChangedEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CLodListener_prequeueEntityMaterialLodChanged_ev_bool_EntityMaterialLodChangedEvent(this.NativeObject, m_prequeueEntityMaterialLodChanged_CallBack_ev_bool_EntityMaterialLodChangedEvent);
						m_postqueueEntityMaterialLodChanged_CallBack_void_EntityMaterialLodChangedEvent = EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent_Function;
						GC.KeepAlive(m_postqueueEntityMaterialLodChanged_CallBack_void_EntityMaterialLodChangedEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CLodListener_postqueueEntityMaterialLodChanged_void_EntityMaterialLodChangedEvent(this.NativeObject, m_postqueueEntityMaterialLodChanged_CallBack_void_EntityMaterialLodChangedEvent);
					}
				}
				public static LodListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LodListener obj = baseObj as  LodListener;
					if (object.Equals(obj, null))
					{
						obj = new LodListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLodListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LodListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LodListener emptyInstance = new LodListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
