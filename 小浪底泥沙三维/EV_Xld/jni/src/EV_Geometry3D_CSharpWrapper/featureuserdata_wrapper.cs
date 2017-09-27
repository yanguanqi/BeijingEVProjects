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
			namespace GeoDataset
			{
			}
			namespace Kml
			{
			}
		}
		namespace Spatial3D
		{
			/// <summary>
			/// 用户数据记录
			/// </summary>
			public class FeatureUserData : EarthView.World.Graphic.MovableObject.UserData
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public FeatureUserData() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CFeatureUserDataProxy", null);
					if (!"EarthView.World.Spatial3D.FeatureUserData".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 复制用户数据
				/// </summary>
				public new EarthView.World.Graphic.MovableObject.UserData Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MovableObject.UserData csObj = new EarthView.World.Graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserData");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject.UserData;
						csObj.BindNativeObject(__ptr, "CUserData");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData(IntPtr pNativeObject);

				/// <summary>
				/// 复制用户数据
				/// </summary>
				public override EarthView.World.Graphic.MovableObject.UserData Clone()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MovableObject.UserData csObj = new EarthView.World.Graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserData");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject.UserData;
						csObj.BindNativeObject(__ptr, "CUserData");
					}
					return csObj;
					
				}

				private EarthView.World.Spatial3D.Atlas.Iglobelayer OwnerLayerField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_World_Spatial3D_CFeatureUserData_OwnerLayer(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial3D_CFeatureUserData_OwnerLayer( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Spatial3D.Atlas.Iglobelayer OwnerLayer
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Spatial3D_CFeatureUserData_OwnerLayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(OwnerLayerField, null)){
							OwnerLayerField.NativeObject = __ptr;
							return OwnerLayerField;
						}
						EarthView.World.Spatial3D.Atlas.Iglobelayer csObj = new EarthView.World.Spatial3D.Atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IGlobeLayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Iglobelayer;
							csObj.BindNativeObject(__ptr, "IGlobeLayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						OwnerLayerField = value;
						Set_EarthView_World_Spatial3D_CFeatureUserData_OwnerLayer( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				private EarthView.World.Core.IntVector IDsField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_World_Spatial3D_CFeatureUserData_IDs(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial3D_CFeatureUserData_IDs( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Core.IntVector IDs
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Spatial3D_CFeatureUserData_IDs(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(IDsField, null)){
							IDsField.NativeObject = __ptr;
							return IDsField;
						}
						EarthView.World.Core.IntVector csObj = new EarthView.World.Core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IntVector");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.IntVector;
							csObj.BindNativeObject(__ptr, "IntVector");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						IDsField = value;
						Set_EarthView_World_Spatial3D_CFeatureUserData_IDs( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadFeatureUserData = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadFeatureUserData = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadFeatureUserData = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CFeatureUserData", new FeatureUserDataClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CFeatureUserDataProxy", new FeatureUserDataClassFactory());

				public FeatureUserData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData(IntPtr pObject, clone_CallBack_CUserData pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_clone_CallBack_CUserData = EarthView_World_Graphic_CMovableObject_CUserData_clone_CUserData_Function;
						GC.KeepAlive(m_clone_CallBack_CUserData);
						EV_RegisterCallback_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData(this.NativeObject, m_clone_CallBack_CUserData);
					}
				}
				public static FeatureUserData FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					FeatureUserData obj = baseObj as  FeatureUserData;
					if (object.Equals(obj, null))
					{
						obj = new FeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CFeatureUserData");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class FeatureUserDataClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					FeatureUserData emptyInstance = new FeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class KmlFeatureUserData : EarthView.World.Spatial3D.FeatureUserData
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public KmlFeatureUserData() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CKmlFeatureUserDataProxy", null);
					if (!"EarthView.World.Spatial3D.KmlFeatureUserData".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 复制用户数据
				/// </summary>
				public new EarthView.World.Graphic.MovableObject.UserData Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MovableObject.UserData csObj = new EarthView.World.Graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserData");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject.UserData;
						csObj.BindNativeObject(__ptr, "CUserData");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData(IntPtr pNativeObject);

				/// <summary>
				/// 复制用户数据
				/// </summary>
				public override EarthView.World.Graphic.MovableObject.UserData Clone()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MovableObject.UserData csObj = new EarthView.World.Graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserData");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject.UserData;
						csObj.BindNativeObject(__ptr, "CUserData");
					}
					return csObj;
					
				}

				private EarthView.World.Spatial.Kml.GeoObjectExtension pGeoObjectExtensionField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_World_Spatial3D_CKmlFeatureUserData_pGeoObjectExtension(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial3D_CKmlFeatureUserData_pGeoObjectExtension( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Spatial.Kml.GeoObjectExtension PGeoObjectExtension
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Spatial3D_CKmlFeatureUserData_pGeoObjectExtension(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(pGeoObjectExtensionField, null)){
							pGeoObjectExtensionField.NativeObject = __ptr;
							return pGeoObjectExtensionField;
						}
						EarthView.World.Spatial.Kml.GeoObjectExtension csObj = new EarthView.World.Spatial.Kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGeoObjectExtension");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Kml.GeoObjectExtension;
							csObj.BindNativeObject(__ptr, "CGeoObjectExtension");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						pGeoObjectExtensionField = value;
						Set_EarthView_World_Spatial3D_CKmlFeatureUserData_pGeoObjectExtension( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlFeatureUserData = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CKmlFeatureUserData", new KmlFeatureUserDataClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CKmlFeatureUserDataProxy", new KmlFeatureUserDataClassFactory());

				public KmlFeatureUserData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData(IntPtr pObject, clone_CallBack_CUserData pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_clone_CallBack_CUserData = EarthView_World_Graphic_CMovableObject_CUserData_clone_CUserData_Function;
						GC.KeepAlive(m_clone_CallBack_CUserData);
						EV_RegisterCallback_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData(this.NativeObject, m_clone_CallBack_CUserData);
					}
				}
				public static KmlFeatureUserData FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					KmlFeatureUserData obj = baseObj as  KmlFeatureUserData;
					if (object.Equals(obj, null))
					{
						obj = new KmlFeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CKmlFeatureUserData");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class KmlFeatureUserDataClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					KmlFeatureUserData emptyInstance = new KmlFeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
