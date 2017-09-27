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
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				public class AtlasTreeEvent : EarthView.World.Core.Event
				{
					public enum ACTIONTYPE
					{
										ProjectFilePreLoaded,
										ProjectFilePostLoaded,
										EveryLayerProperty,
										KmlLayerProperty,
										FeatureProperty,
										ImageProperty,
										TerrainProperty,
										ClearProperty,
										EveryLayerDetail,
										KmlLayerDetial,
										FeatureDetail,
										ImageDetail,
										TerrainDetail,
										AmosphereDetail,
										KmlManage,
										ClearKmlManage,
										SceneDetail,
										MapDetail,
										AltitudeModeConfig,
										RefurbishModelLayer,
										SceneProperty,
										MapProperty,
										MapLayerRecord,
										SceneLayerRecord,
										HistoryImageToolbar,
										TerrainSettings,
										AtmosphereTree,
										LayerEditableChanged,
										LayerSelectableChanged
					
					}

					public class SceneDetailData : EarthView.World.Core.BaseObject
					{
						private EarthView.World.Spatial.Atlas.Iscene sceneField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneDetailData_scene(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneDetailData_scene( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Iscene Scene
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneDetailData_scene(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(sceneField, null)){
									sceneField.NativeObject = __ptr;
									return sceneField;
								}
								EarthView.World.Spatial.Atlas.Iscene csObj = new EarthView.World.Spatial.Atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "IScene");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Iscene;
									csObj.BindNativeObject(__ptr, "IScene");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								sceneField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneDetailData_scene( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						public SceneDetailData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("SceneDetailData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadSceneDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData", new SceneDetailDataClassFactory());

						public SceneDetailData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static SceneDetailData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							SceneDetailData obj = baseObj as  SceneDetailData;
							if (object.Equals(obj, null))
							{
								obj = new SceneDetailData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SceneDetailData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SceneDetailDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							SceneDetailData emptyInstance = new SceneDetailData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class ScenePropertyData : EarthView.World.Core.BaseObject
					{
						private EarthView.World.FrameWorkProxy.GroupStringinterfaceMap groupStringInterfaceField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_ScenePropertyData_groupStringInterface(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_ScenePropertyData_groupStringInterface( IntPtr pObject, IntPtr value );

						public 						EarthView.World.FrameWorkProxy.GroupStringinterfaceMap GroupStringInterface
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_ScenePropertyData_groupStringInterface(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(groupStringInterfaceField, null)){
									groupStringInterfaceField.NativeObject = __ptr;
									return groupStringInterfaceField;
								}
								EarthView.World.FrameWorkProxy.GroupStringinterfaceMap csObj = new EarthView.World.FrameWorkProxy.GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CGroupStringinterfaceMap");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.GroupStringinterfaceMap;
									csObj.BindNativeObject(__ptr, "CGroupStringinterfaceMap");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								groupStringInterfaceField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_ScenePropertyData_groupStringInterface( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						public ScenePropertyData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("ScenePropertyData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadScenePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData", new ScenePropertyDataClassFactory());

						public ScenePropertyData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static ScenePropertyData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							ScenePropertyData obj = baseObj as  ScenePropertyData;
							if (object.Equals(obj, null))
							{
								obj = new ScenePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "ScenePropertyData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class ScenePropertyDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							ScenePropertyData emptyInstance = new ScenePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class MapDetailData : EarthView.World.Core.BaseObject
					{
						private EarthView.World.Spatial.Atlas.Imap imapField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapDetailData_imap(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapDetailData_imap( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Imap Imap
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapDetailData_imap(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(imapField, null)){
									imapField.NativeObject = __ptr;
									return imapField;
								}
								EarthView.World.Spatial.Atlas.Imap csObj = new EarthView.World.Spatial.Atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "IMap");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Imap;
									csObj.BindNativeObject(__ptr, "IMap");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								imapField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapDetailData_imap( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						public MapDetailData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("MapDetailData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadMapDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData", new MapDetailDataClassFactory());

						public MapDetailData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static MapDetailData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							MapDetailData obj = baseObj as  MapDetailData;
							if (object.Equals(obj, null))
							{
								obj = new MapDetailData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "MapDetailData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class MapDetailDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							MapDetailData emptyInstance = new MapDetailData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class MapPropertyData : EarthView.World.Core.BaseObject
					{
						private EarthView.World.FrameWorkProxy.GroupStringinterfaceMap groupStringInterfaceField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapPropertyData_groupStringInterface(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapPropertyData_groupStringInterface( IntPtr pObject, IntPtr value );

						public 						EarthView.World.FrameWorkProxy.GroupStringinterfaceMap GroupStringInterface
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapPropertyData_groupStringInterface(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(groupStringInterfaceField, null)){
									groupStringInterfaceField.NativeObject = __ptr;
									return groupStringInterfaceField;
								}
								EarthView.World.FrameWorkProxy.GroupStringinterfaceMap csObj = new EarthView.World.FrameWorkProxy.GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CGroupStringinterfaceMap");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.GroupStringinterfaceMap;
									csObj.BindNativeObject(__ptr, "CGroupStringinterfaceMap");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								groupStringInterfaceField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapPropertyData_groupStringInterface( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						public MapPropertyData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("MapPropertyData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadMapPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData", new MapPropertyDataClassFactory());

						public MapPropertyData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static MapPropertyData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							MapPropertyData obj = baseObj as  MapPropertyData;
							if (object.Equals(obj, null))
							{
								obj = new MapPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "MapPropertyData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class MapPropertyDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							MapPropertyData emptyInstance = new MapPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class KmlManageData : EarthView.World.Core.BaseObject
					{
						public KmlManageData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("KmlManageData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						private string datasourceNameField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasourceName(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasourceName( IntPtr pObject, string value );

						public 						string DatasourceName
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasourceName(this.NativeObject);
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								datasourceNameField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasourceName( this.NativeObject,value );
							}
						}

						private string datasetNameField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasetName(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasetName( IntPtr pObject, string value );

						public 						string DatasetName
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasetName(this.NativeObject);
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								datasetNameField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasetName( this.NativeObject,value );
							}
						}

						private EarthView.World.Spatial.Atlas.Ilayer layerField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_layer(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_layer( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Ilayer Layer
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_layer(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(layerField, null)){
									layerField.NativeObject = __ptr;
									return layerField;
								}
								EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ILayer");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
									csObj.BindNativeObject(__ptr, "ILayer");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								layerField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_layer( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadKmlManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData", new KmlManageDataClassFactory());

						public KmlManageData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static KmlManageData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							KmlManageData obj = baseObj as  KmlManageData;
							if (object.Equals(obj, null))
							{
								obj = new KmlManageData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "KmlManageData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class KmlManageDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							KmlManageData emptyInstance = new KmlManageData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class LayerPropertyData : EarthView.World.Core.BaseObject
					{
						private EarthView.World.FrameWorkProxy.GroupStringinterfaceMap groupStringInterfaceField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerPropertyData_groupStringInterface(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerPropertyData_groupStringInterface( IntPtr pObject, IntPtr value );

						public 						EarthView.World.FrameWorkProxy.GroupStringinterfaceMap GroupStringInterface
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerPropertyData_groupStringInterface(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(groupStringInterfaceField, null)){
									groupStringInterfaceField.NativeObject = __ptr;
									return groupStringInterfaceField;
								}
								EarthView.World.FrameWorkProxy.GroupStringinterfaceMap csObj = new EarthView.World.FrameWorkProxy.GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CGroupStringinterfaceMap");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.GroupStringinterfaceMap;
									csObj.BindNativeObject(__ptr, "CGroupStringinterfaceMap");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								groupStringInterfaceField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerPropertyData_groupStringInterface( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						public LayerPropertyData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("LayerPropertyData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadLayerPropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData", new LayerPropertyDataClassFactory());

						public LayerPropertyData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static LayerPropertyData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							LayerPropertyData obj = baseObj as  LayerPropertyData;
							if (object.Equals(obj, null))
							{
								obj = new LayerPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "LayerPropertyData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class LayerPropertyDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							LayerPropertyData emptyInstance = new LayerPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class LayerDetailData : EarthView.World.Core.BaseObject
					{
						public LayerDetailData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("LayerDetailData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						private EarthView.World.Spatial.Atlas.Imap imapField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_imap(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_imap( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Imap Imap
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_imap(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(imapField, null)){
									imapField.NativeObject = __ptr;
									return imapField;
								}
								EarthView.World.Spatial.Atlas.Imap csObj = new EarthView.World.Spatial.Atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "IMap");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Imap;
									csObj.BindNativeObject(__ptr, "IMap");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								imapField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_imap( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Spatial.Atlas.Ilayer layerField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_layer(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_layer( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Ilayer Layer
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_layer(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(layerField, null)){
									layerField.NativeObject = __ptr;
									return layerField;
								}
								EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ILayer");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
									csObj.BindNativeObject(__ptr, "ILayer");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								layerField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_layer( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Spatial.Atlas.Ilayer parentLayerField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_parentLayer(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_parentLayer( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Ilayer ParentLayer
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_parentLayer(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(parentLayerField, null)){
									parentLayerField.NativeObject = __ptr;
									return parentLayerField;
								}
								EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ILayer");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
									csObj.BindNativeObject(__ptr, "ILayer");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								parentLayerField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_parentLayer( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadLayerDetailData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData", new LayerDetailDataClassFactory());

						public LayerDetailData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static LayerDetailData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							LayerDetailData obj = baseObj as  LayerDetailData;
							if (object.Equals(obj, null))
							{
								obj = new LayerDetailData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "LayerDetailData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class LayerDetailDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							LayerDetailData emptyInstance = new LayerDetailData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class MapLayerRecordData : EarthView.World.Core.BaseObject
					{
						public MapLayerRecordData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("MapLayerRecordData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						private EarthView.World.Spatial.Atlas.Ilayer layerField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapLayerRecordData_layer(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapLayerRecordData_layer( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Ilayer Layer
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapLayerRecordData_layer(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(layerField, null)){
									layerField.NativeObject = __ptr;
									return layerField;
								}
								EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ILayer");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
									csObj.BindNativeObject(__ptr, "ILayer");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								layerField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapLayerRecordData_layer( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadMapLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData", new MapLayerRecordDataClassFactory());

						public MapLayerRecordData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static MapLayerRecordData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							MapLayerRecordData obj = baseObj as  MapLayerRecordData;
							if (object.Equals(obj, null))
							{
								obj = new MapLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "MapLayerRecordData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class MapLayerRecordDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							MapLayerRecordData emptyInstance = new MapLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class SceneLayerRecordData : EarthView.World.Core.BaseObject
					{
						public SceneLayerRecordData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("SceneLayerRecordData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						private EarthView.World.Spatial.Atlas.Ilayer layerField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneLayerRecordData_layer(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneLayerRecordData_layer( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Ilayer Layer
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneLayerRecordData_layer(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(layerField, null)){
									layerField.NativeObject = __ptr;
									return layerField;
								}
								EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ILayer");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
									csObj.BindNativeObject(__ptr, "ILayer");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								layerField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneLayerRecordData_layer( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadSceneLayerRecordData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData", new SceneLayerRecordDataClassFactory());

						public SceneLayerRecordData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static SceneLayerRecordData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							SceneLayerRecordData obj = baseObj as  SceneLayerRecordData;
							if (object.Equals(obj, null))
							{
								obj = new SceneLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "SceneLayerRecordData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class SceneLayerRecordDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							SceneLayerRecordData emptyInstance = new SceneLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class TerrainSettingsData : EarthView.World.Core.BaseObject
					{
						private string sceneNameField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_TerrainSettingsData_sceneName(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_TerrainSettingsData_sceneName( IntPtr pObject, string value );

						public 						string SceneName
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_TerrainSettingsData_sceneName(this.NativeObject);
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								sceneNameField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_TerrainSettingsData_sceneName( this.NativeObject,value );
							}
						}

						public TerrainSettingsData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("TerrainSettingsData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadTerrainSettingsData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData", new TerrainSettingsDataClassFactory());

						public TerrainSettingsData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static TerrainSettingsData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							TerrainSettingsData obj = baseObj as  TerrainSettingsData;
							if (object.Equals(obj, null))
							{
								obj = new TerrainSettingsData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "TerrainSettingsData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class TerrainSettingsDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							TerrainSettingsData emptyInstance = new TerrainSettingsData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class AtmosphereTreeData : EarthView.World.Core.BaseObject
					{
						private string sceneNameField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_AtmosphereTreeData_sceneName(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_AtmosphereTreeData_sceneName( IntPtr pObject, string value );

						public 						string SceneName
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_AtmosphereTreeData_sceneName(this.NativeObject);
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								sceneNameField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_AtmosphereTreeData_sceneName( this.NativeObject,value );
							}
						}

						public AtmosphereTreeData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("AtmosphereTreeData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadAtmosphereTreeData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData", new AtmosphereTreeDataClassFactory());

						public AtmosphereTreeData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static AtmosphereTreeData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							AtmosphereTreeData obj = baseObj as  AtmosphereTreeData;
							if (object.Equals(obj, null))
							{
								obj = new AtmosphereTreeData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "AtmosphereTreeData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class AtmosphereTreeDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							AtmosphereTreeData emptyInstance = new AtmosphereTreeData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class HistoryImageData : EarthView.World.Core.BaseObject
					{
						private string sceneNameField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_HistoryImageData_sceneName(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_HistoryImageData_sceneName( IntPtr pObject, string value );

						public 						string SceneName
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_HistoryImageData_sceneName(this.NativeObject);
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								sceneNameField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_HistoryImageData_sceneName( this.NativeObject,value );
							}
						}

						public HistoryImageData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("HistoryImageData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadHistoryImageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData", new HistoryImageDataClassFactory());

						public HistoryImageData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static HistoryImageData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							HistoryImageData obj = baseObj as  HistoryImageData;
							if (object.Equals(obj, null))
							{
								obj = new HistoryImageData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "HistoryImageData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class HistoryImageDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							HistoryImageData emptyInstance = new HistoryImageData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class LayerEditableChangedData : EarthView.World.Core.BaseObject
					{
						public LayerEditableChangedData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("LayerEditableChangedData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						private EarthView.World.Spatial.Atlas.Ilayer layerField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerEditableChangedData_layer(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerEditableChangedData_layer( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Ilayer Layer
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerEditableChangedData_layer(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(layerField, null)){
									layerField.NativeObject = __ptr;
									return layerField;
								}
								EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ILayer");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
									csObj.BindNativeObject(__ptr, "ILayer");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								layerField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerEditableChangedData_layer( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadLayerEditableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData", new LayerEditableChangedDataClassFactory());

						public LayerEditableChangedData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static LayerEditableChangedData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							LayerEditableChangedData obj = baseObj as  LayerEditableChangedData;
							if (object.Equals(obj, null))
							{
								obj = new LayerEditableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "LayerEditableChangedData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class LayerEditableChangedDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							LayerEditableChangedData emptyInstance = new LayerEditableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class LayerSelectableChangedData : EarthView.World.Core.BaseObject
					{
						public LayerSelectableChangedData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("LayerSelectableChangedData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						private EarthView.World.Spatial.Atlas.Ilayer layerField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerSelectableChangedData_layer(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerSelectableChangedData_layer( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Atlas.Ilayer Layer
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerSelectableChangedData_layer(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(layerField, null)){
									layerField.NativeObject = __ptr;
									return layerField;
								}
								EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ILayer");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
									csObj.BindNativeObject(__ptr, "ILayer");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								layerField = value;
								Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerSelectableChangedData_layer( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadLayerSelectableChangedData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData", new LayerSelectableChangedDataClassFactory());

						public LayerSelectableChangedData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static LayerSelectableChangedData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							LayerSelectableChangedData obj = baseObj as  LayerSelectableChangedData;
							if (object.Equals(obj, null))
							{
								obj = new LayerSelectableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "LayerSelectableChangedData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class LayerSelectableChangedDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							LayerSelectableChangedData emptyInstance = new LayerSelectableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					/// <summary>
					/// 构造函数。
					/// </summary>
					/// <returns></returns>
					public AtlasTreeEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("AtlasTreeEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getActionType_ActionType(IntPtr pNativeObject);

					/// <summary>
					/// 获取操作的类型。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ACTIONTYPE GetActionType()
					{
						int ret=EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getActionType_ActionType(this.NativeObject);
						
						return (EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ACTIONTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerDetailData_LayerDetailData(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层【详细】信息的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData GetLayerDetailData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerDetailData_LayerDetailData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "LayerDetailData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData;
							csObj.BindNativeObject(__ptr, "LayerDetailData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerPropertyData_LayerPropertyData(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层【简略】信息的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData GetLayerPropertyData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerPropertyData_LayerPropertyData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "LayerPropertyData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData;
							csObj.BindNativeObject(__ptr, "LayerPropertyData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getKmlManageData_KmlManageData(IntPtr pNativeObject);

					/// <summary>
					/// 获取kml管理的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData GetKmlManageData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getKmlManageData_KmlManageData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "KmlManageData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData;
							csObj.BindNativeObject(__ptr, "KmlManageData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getSceneDetailData_SceneDetailData(IntPtr pNativeObject);

					/// <summary>
					/// 获取场景详细信息的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData GetSceneDetailData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getSceneDetailData_SceneDetailData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "SceneDetailData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData;
							csObj.BindNativeObject(__ptr, "SceneDetailData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getScenePropertyData_ScenePropertyData(IntPtr pNativeObject);

					/// <summary>
					/// 获取场景属性的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData GetScenePropertyData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getScenePropertyData_ScenePropertyData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ScenePropertyData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData;
							csObj.BindNativeObject(__ptr, "ScenePropertyData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapDetailData_MapDetailData(IntPtr pNativeObject);

					/// <summary>
					/// 获取地图详细信息的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData GetMapDetailData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapDetailData_MapDetailData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MapDetailData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData;
							csObj.BindNativeObject(__ptr, "MapDetailData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapPropertyData_MapPropertyData(IntPtr pNativeObject);

					/// <summary>
					/// 获取地图属性的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData GetMapPropertyData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapPropertyData_MapPropertyData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MapPropertyData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData;
							csObj.BindNativeObject(__ptr, "MapPropertyData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapLayerRecordData_MapLayerRecordData(IntPtr pNativeObject);

					/// <summary>
					/// 获取地图图层记录表的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData GetMapLayerRecordData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapLayerRecordData_MapLayerRecordData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MapLayerRecordData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData;
							csObj.BindNativeObject(__ptr, "MapLayerRecordData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getSceneLayerRecordData_SceneLayerRecordData(IntPtr pNativeObject);

					/// <summary>
					/// 获取场景图层记录表的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData GetSceneLayerRecordData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getSceneLayerRecordData_SceneLayerRecordData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "SceneLayerRecordData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData;
							csObj.BindNativeObject(__ptr, "SceneLayerRecordData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getHistoryImageData_HistoryImageData(IntPtr pNativeObject);

					/// <summary>
					/// 获取地图图层记录表的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData GetHistoryImageData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getHistoryImageData_HistoryImageData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "HistoryImageData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData;
							csObj.BindNativeObject(__ptr, "HistoryImageData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getTerrainSettingsData_TerrainSettingsData(IntPtr pNativeObject);

					/// <summary>
					/// 获取地形设置相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData GetTerrainSettingsData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getTerrainSettingsData_TerrainSettingsData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "TerrainSettingsData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData;
							csObj.BindNativeObject(__ptr, "TerrainSettingsData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getAtmosphereTreeData_AtmosphereTreeData(IntPtr pNativeObject);

					/// <summary>
					/// 获取自然环境树相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData GetAtmosphereTreeData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getAtmosphereTreeData_AtmosphereTreeData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "AtmosphereTreeData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData;
							csObj.BindNativeObject(__ptr, "AtmosphereTreeData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerEditableChangedData_LayerEditableChangedData(IntPtr pNativeObject);

					/// <summary>
					/// 获取自然环境树相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData GetLayerEditableChangedData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerEditableChangedData_LayerEditableChangedData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "LayerEditableChangedData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData;
							csObj.BindNativeObject(__ptr, "LayerEditableChangedData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerSelectableChangedData_LayerSelectableChangedData(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层“可选择”属性改变的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData GetLayerSelectableChangedData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerSelectableChangedData_LayerSelectableChangedData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "LayerSelectableChangedData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData;
							csObj.BindNativeObject(__ptr, "LayerSelectableChangedData");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_data_AtlasTreeEventData(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层“可编辑”属性改变的相关数据。
					/// </summary>
					/// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEventData Data()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_data_AtlasTreeEventData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEventData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEventData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "AtlasTreeEventData");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEventData;
							csObj.BindNativeObject(__ptr, "AtlasTreeEventData");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadAtlasTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent", new AtlasTreeEventClassFactory());

					public AtlasTreeEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static AtlasTreeEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AtlasTreeEvent obj = baseObj as  AtlasTreeEvent;
						if (object.Equals(obj, null))
						{
							obj = new AtlasTreeEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "AtlasTreeEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AtlasTreeEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AtlasTreeEvent emptyInstance = new AtlasTreeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
