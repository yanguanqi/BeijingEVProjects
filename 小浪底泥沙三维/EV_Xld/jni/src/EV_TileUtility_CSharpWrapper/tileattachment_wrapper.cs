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
			public class Itileattachmentptr : EarthView.World.Core.BaseObject
			{
				public Itileattachmentptr(EarthView.World.Spatial.Itileattachment instance) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinstance = new BasePtr(instance);
					list.Add("instance", valueinstance.PtrVal);
					if(!object.Equals(instance, null))
					{
					instance.NoFree = true;
					}
					Create("ITileAttachmentPtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public Itileattachmentptr() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("ITileAttachmentPtr",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadItileattachmentptr = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadItileattachmentptr = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadItileattachmentptr = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadItileattachmentptr = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileAttachmentPtr", new ItileattachmentptrClassFactory());

				public Itileattachmentptr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Itileattachmentptr FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Itileattachmentptr obj = baseObj as  Itileattachmentptr;
					if (object.Equals(obj, null))
					{
						obj = new Itileattachmentptr(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "ITileAttachmentPtr");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ItileattachmentptrClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Itileattachmentptr emptyInstance = new Itileattachmentptr(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary> 瓦片附属物 </summary>
			public class Itileattachment : EarthView.World.Core.BaseObject
			{
				public class LodParam : EarthView.World.Core.BaseObject
				{
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial_ITileAttachment_LodParam_tileLevel(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial_ITileAttachment_LodParam_tileLevel( IntPtr pObject, int value );

					public 					int TileLevel
					{
						get
						{
							int ret=Get_EarthView_World_Spatial_ITileAttachment_LodParam_tileLevel(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial_ITileAttachment_LodParam_tileLevel(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial_ITileAttachment_LodParam_cameraLevel(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial_ITileAttachment_LodParam_cameraLevel( IntPtr pObject, int value );

					public 					int CameraLevel
					{
						get
						{
							int ret=Get_EarthView_World_Spatial_ITileAttachment_LodParam_cameraLevel(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial_ITileAttachment_LodParam_cameraLevel(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong Get_EarthView_World_Spatial_ITileAttachment_LodParam_tileChildCount(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial_ITileAttachment_LodParam_tileChildCount( IntPtr pObject, ulong value );

					public 					ulong TileChildCount
					{
						get
						{
							ulong ret=Get_EarthView_World_Spatial_ITileAttachment_LodParam_tileChildCount(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial_ITileAttachment_LodParam_tileChildCount(this.NativeObject,value);
						}
					}

					///// <summary>相机是否在地下</summary>
					//ev_bool isUnderGround;
					public LodParam(int level, int camLevel, ulong childCount) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelevel = new BasePtr(level);
						list.Add("level", valuelevel.PtrVal);
						BasePtr valuecamLevel = new BasePtr(camLevel);
						list.Add("camLevel", valuecamLevel.PtrVal);
						BasePtr valuechildCount = new BasePtr(childCount);
						list.Add("childCount", valuechildCount.PtrVal);
						Create("LodParam", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadLodParam = LoadDll.Load("EV_TileUtility_d.dll");
							private static bool csbLoadLodParam = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLodParam = LoadDll.Load("EV_TileUtility_d.so");
							private static bool csbLoadLodParam = LoadDll.Load("EV_TileUtility_CSharp_d.so");

						#else 
							private static bool bLoadLodParam = LoadDll.Load("EV_TileUtility_d.dll");
							private static bool csbLoadLodParam = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLodParam = LoadDll.Load("EV_TileUtility.dll");
							private static bool csbLoadLodParam = LoadDll.Load("EV_TileUtility_CSharp.dll");

						#elif Linux 
							private static bool bLoadLodParam = LoadDll.Load("EV_TileUtility.so");
							private static bool csbLoadLodParam = LoadDll.Load("EV_TileUtility_CSharp.so");

						#else 
							private static bool bLoadLodParam = LoadDll.Load("EV_TileUtility.dll");
							private static bool csbLoadLodParam = LoadDll.Load("EV_TileUtility_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileAttachment::LodParam", new LodParamClassFactory());

					public LodParam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static LodParam FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LodParam obj = baseObj as  LodParam;
						if (object.Equals(obj, null))
						{
							obj = new LodParam(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "LodParam");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LodParamClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LodParam emptyInstance = new LodParam(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public Itileattachment() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("ITileAttachmentProxy", null);
					if (!"EarthView.World.Spatial.Itileattachment".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onTileShown_CallBack_void_LodParam(IntPtr param);

				protected onTileShown_CallBack_void_LodParam m_onTileShown_CallBack_void_LodParam;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_NoVirtual(IntPtr pNativeObject, IntPtr param);

				/// <summary>瓦片被显示(主线程)</summary>
				public virtual void OnTileShown_NoVirtual(EarthView.World.Spatial.Itileattachment.LodParam param)
				{
					EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_NoVirtual(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
				}

				protected  void EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Function(IntPtr param)
				{
					EarthView.World.Spatial.Itileattachment.LodParam csobj_param = new EarthView.World.Spatial.Itileattachment.LodParam(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_param.BindNativeObject(param,"LodParam");
					csobj_param.Delegate = true;
					IClassFactory csobj_paramClassFactory = GlobalClassFactoryMap.Get(csobj_param.GetCppInstanceTypeName());
					if (csobj_paramClassFactory != null)
					{
						csobj_param.Delegate = true;
						csobj_param = csobj_paramClassFactory.Create() as EarthView.World.Spatial.Itileattachment.LodParam;
						csobj_param.BindNativeObject(param, "LodParam");
						csobj_param.Delegate = true;
					}
					
					OnTileShown(csobj_param);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam(IntPtr pNativeObject, IntPtr param);

				/// <summary>瓦片被显示(主线程)</summary>
				public virtual void OnTileShown(EarthView.World.Spatial.Itileattachment.LodParam param)
				{
					EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onTileHid_CallBack_void_LodParam(IntPtr param);

				protected onTileHid_CallBack_void_LodParam m_onTileHid_CallBack_void_LodParam;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_NoVirtual(IntPtr pNativeObject, IntPtr param);

				/// <summary>瓦片被隐藏(主线程)</summary>
				public virtual void OnTileHid_NoVirtual(EarthView.World.Spatial.Itileattachment.LodParam param)
				{
					EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_NoVirtual(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
				}

				protected  void EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Function(IntPtr param)
				{
					EarthView.World.Spatial.Itileattachment.LodParam csobj_param = new EarthView.World.Spatial.Itileattachment.LodParam(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_param.BindNativeObject(param,"LodParam");
					csobj_param.Delegate = true;
					IClassFactory csobj_paramClassFactory = GlobalClassFactoryMap.Get(csobj_param.GetCppInstanceTypeName());
					if (csobj_paramClassFactory != null)
					{
						csobj_param.Delegate = true;
						csobj_param = csobj_paramClassFactory.Create() as EarthView.World.Spatial.Itileattachment.LodParam;
						csobj_param.BindNativeObject(param, "LodParam");
						csobj_param.Delegate = true;
					}
					
					OnTileHid(csobj_param);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam(IntPtr pNativeObject, IntPtr param);

				/// <summary>瓦片被隐藏(主线程)</summary>
				public virtual void OnTileHid(EarthView.World.Spatial.Itileattachment.LodParam param)
				{
					EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onDetachFromTile_CallBack_void();

				protected onDetachFromTile_CallBack_void m_onDetachFromTile_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>从瓦片解除绑定(主线程),
				/// 在这个函数被调用后，附属物不再受瓦片控制。
				/// 建议在其中做一些必要的清理工作</summary>
				public virtual void OnDetachFromTile_NoVirtual()
				{
					EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Function()
				{
					OnDetachFromTile();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void(IntPtr pNativeObject);

				/// <summary>从瓦片解除绑定(主线程),
				/// 在这个函数被调用后，附属物不再受瓦片控制。
				/// 建议在其中做一些必要的清理工作</summary>
				public virtual void OnDetachFromTile()
				{
					EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onTileDestroyed_CallBack_void();

				protected onTileDestroyed_CallBack_void m_onTileDestroyed_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>瓦片被销毁(主线程)，
				/// 此时瓦片一定是不可见的。</summary>
				public virtual void OnTileDestroyed_NoVirtual()
				{
					EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Function()
				{
					OnTileDestroyed();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void(IntPtr pNativeObject);

				/// <summary>瓦片被销毁(主线程)，
				/// 此时瓦片一定是不可见的。</summary>
				public virtual void OnTileDestroyed()
				{
					EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadItileattachment = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadItileattachment = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadItileattachment = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadItileattachment = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadItileattachment = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadItileattachment = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadItileattachment = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadItileattachment = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadItileattachment = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadItileattachment = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadItileattachment = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadItileattachment = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileAttachment", new ItileattachmentClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileAttachmentProxy", new ItileattachmentClassFactory());

				public Itileattachment(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam(IntPtr pObject, onTileShown_CallBack_void_LodParam pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam(IntPtr pObject, onTileHid_CallBack_void_LodParam pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void(IntPtr pObject, onDetachFromTile_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void(IntPtr pObject, onTileDestroyed_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_onTileShown_CallBack_void_LodParam = EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Function;
						GC.KeepAlive(m_onTileShown_CallBack_void_LodParam);
						EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam(this.NativeObject, m_onTileShown_CallBack_void_LodParam);
						m_onTileHid_CallBack_void_LodParam = EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Function;
						GC.KeepAlive(m_onTileHid_CallBack_void_LodParam);
						EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam(this.NativeObject, m_onTileHid_CallBack_void_LodParam);
						m_onDetachFromTile_CallBack_void = EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Function;
						GC.KeepAlive(m_onDetachFromTile_CallBack_void);
						EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void(this.NativeObject, m_onDetachFromTile_CallBack_void);
						m_onTileDestroyed_CallBack_void = EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Function;
						GC.KeepAlive(m_onTileDestroyed_CallBack_void);
						EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void(this.NativeObject, m_onTileDestroyed_CallBack_void);
					}
				}
				public static Itileattachment FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Itileattachment obj = baseObj as  Itileattachment;
					if (object.Equals(obj, null))
					{
						obj = new Itileattachment(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "ITileAttachment");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ItileattachmentClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Itileattachment emptyInstance = new Itileattachment(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
