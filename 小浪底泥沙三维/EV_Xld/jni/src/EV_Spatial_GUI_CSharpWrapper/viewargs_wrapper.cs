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
		namespace Spatial
		{
			/// <summary>
			/// 视图参数类
			/// 纯虚类                
			/// </summary>
			public class Iviewargs : EarthView.World.Core.BaseObject
			{
				public enum VIEWARGSTYPE
				{
								VAT_Unknown,
								VAT_Map,
								VAT_Scene
				
				}

				public Iviewargs() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("IViewArgsProxy", null);
					if (!"EarthView.World.Spatial.Iviewargs".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getType_CallBack_ViewArgsType();

				protected getType_CallBack_ViewArgsType m_getType_CallBack_ViewArgsType;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE GetType_NoVirtual()
				{
					int ret=EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE)ret;
					
				}

				protected  int EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Function()
				{
					EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE csret=GetType();
					
					return (int)csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_IViewArgs_getType_ViewArgsType(IntPtr pNativeObject);

				public virtual EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE GetType()
				{
					int ret=EarthView_World_Spatial_IViewArgs_getType_ViewArgsType(this.NativeObject);
					
					return (EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE)ret;
					
				}

				private EarthView.World.Spatial.Atlas.Ispatialcontrol controlField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_World_Spatial_IViewArgs_control(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_IViewArgs_control( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Spatial.Atlas.Ispatialcontrol Control
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Spatial_IViewArgs_control(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(controlField, null)){
							controlField.NativeObject = __ptr;
							return controlField;
						}
						EarthView.World.Spatial.Atlas.Ispatialcontrol csObj = new EarthView.World.Spatial.Atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialControl");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ispatialcontrol;
							csObj.BindNativeObject(__ptr, "ISpatialControl");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						controlField = value;
						Set_EarthView_World_Spatial_IViewArgs_control( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_d.dll");
						private static bool csbLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_d.so");
						private static bool csbLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

					#else 
						private static bool bLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_d.dll");
						private static bool csbLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadIviewargs = LoadDll.Load("EV_Spatial_GUI.dll");
						private static bool csbLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

					#elif Linux 
						private static bool bLoadIviewargs = LoadDll.Load("EV_Spatial_GUI.so");
						private static bool csbLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

					#else 
						private static bool bLoadIviewargs = LoadDll.Load("EV_Spatial_GUI.dll");
						private static bool csbLoadIviewargs = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::IViewArgs", new IviewargsClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::IViewArgsProxy", new IviewargsClassFactory());

				public Iviewargs(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType(IntPtr pObject, getType_CallBack_ViewArgsType pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getType_CallBack_ViewArgsType = EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Function;
						GC.KeepAlive(m_getType_CallBack_ViewArgsType);
						EV_RegisterCallback_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType(this.NativeObject, m_getType_CallBack_ViewArgsType);
					}
				}
				public static Iviewargs FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Iviewargs obj = baseObj as  Iviewargs;
					if (object.Equals(obj, null))
					{
						obj = new Iviewargs(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "IViewArgs");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class IviewargsClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Iviewargs emptyInstance = new Iviewargs(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class MapViewArgs : EarthView.World.Spatial.Iviewargs
			{
				public MapViewArgs() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CMapViewArgsProxy", null);
					if (!"EarthView.World.Spatial.MapViewArgs".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE GetType_NoVirtual()
				{
					int ret=EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType(IntPtr pNativeObject);

				public override EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE GetType()
				{
					int ret=EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType(this.NativeObject);
					
					return (EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE)ret;
					
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CMapViewArgs_centerX(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CMapViewArgs_centerX( IntPtr pObject, double value );

				public 				double CenterX
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CMapViewArgs_centerX(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CMapViewArgs_centerX(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CMapViewArgs_centerY(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CMapViewArgs_centerY( IntPtr pObject, double value );

				public 				double CenterY
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CMapViewArgs_centerY(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CMapViewArgs_centerY(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CMapViewArgs_heading(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CMapViewArgs_heading( IntPtr pObject, double value );

				public 				double Heading
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CMapViewArgs_heading(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CMapViewArgs_heading(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CMapViewArgs_scale(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CMapViewArgs_scale( IntPtr pObject, double value );

				public 				double Scale
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CMapViewArgs_scale(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CMapViewArgs_scale(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CMapViewArgs_minLat(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CMapViewArgs_minLat( IntPtr pObject, double value );

				public 				double MinLat
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CMapViewArgs_minLat(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CMapViewArgs_minLat(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CMapViewArgs_minLon(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CMapViewArgs_minLon( IntPtr pObject, double value );

				public 				double MinLon
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CMapViewArgs_minLon(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CMapViewArgs_minLon(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CMapViewArgs_maxLat(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CMapViewArgs_maxLat( IntPtr pObject, double value );

				public 				double MaxLat
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CMapViewArgs_maxLat(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CMapViewArgs_maxLat(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CMapViewArgs_maxLon(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CMapViewArgs_maxLon( IntPtr pObject, double value );

				public 				double MaxLon
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CMapViewArgs_maxLon(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CMapViewArgs_maxLon(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_d.dll");
						private static bool csbLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_d.so");
						private static bool csbLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

					#else 
						private static bool bLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_d.dll");
						private static bool csbLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI.dll");
						private static bool csbLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

					#elif Linux 
						private static bool bLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI.so");
						private static bool csbLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

					#else 
						private static bool bLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI.dll");
						private static bool csbLoadMapViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CMapViewArgs", new MapViewArgsClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CMapViewArgsProxy", new MapViewArgsClassFactory());

				public MapViewArgs(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType(IntPtr pObject, getType_CallBack_ViewArgsType pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getType_CallBack_ViewArgsType = EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Function;
						GC.KeepAlive(m_getType_CallBack_ViewArgsType);
						EV_RegisterCallback_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType(this.NativeObject, m_getType_CallBack_ViewArgsType);
					}
				}
				public static MapViewArgs FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MapViewArgs obj = baseObj as  MapViewArgs;
					if (object.Equals(obj, null))
					{
						obj = new MapViewArgs(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMapViewArgs");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MapViewArgsClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MapViewArgs emptyInstance = new MapViewArgs(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class SceneViewArgs : EarthView.World.Spatial.Iviewargs
			{
				public SceneViewArgs() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CSceneViewArgsProxy", null);
					if (!"EarthView.World.Spatial.SceneViewArgs".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE GetType_NoVirtual()
				{
					int ret=EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE)ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType(IntPtr pNativeObject);

				public override EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE GetType()
				{
					int ret=EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType(this.NativeObject);
					
					return (EarthView.World.Spatial.Iviewargs.VIEWARGSTYPE)ret;
					
				}

				private EarthView.World.Core.BaseObject cameraField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_World_Spatial_CSceneViewArgs_camera(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CSceneViewArgs_camera( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Core.BaseObject Camera
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Spatial_CSceneViewArgs_camera(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(cameraField, null)){
							cameraField.NativeObject = __ptr;
							return cameraField;
						}
						EarthView.World.Core.BaseObject csObj = new EarthView.World.Core.BaseObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CBaseObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.BaseObject;
							csObj.BindNativeObject(__ptr, "CBaseObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						cameraField = value;
						Set_EarthView_World_Spatial_CSceneViewArgs_camera( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CSceneViewArgs_altitude(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CSceneViewArgs_altitude( IntPtr pObject, double value );

				public 				double Altitude
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CSceneViewArgs_altitude(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CSceneViewArgs_altitude(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CSceneViewArgs_longtitude(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CSceneViewArgs_longtitude( IntPtr pObject, double value );

				public 				double Longtitude
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CSceneViewArgs_longtitude(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CSceneViewArgs_longtitude(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CSceneViewArgs_latitude(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CSceneViewArgs_latitude( IntPtr pObject, double value );

				public 				double Latitude
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CSceneViewArgs_latitude(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CSceneViewArgs_latitude(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CSceneViewArgs_heading(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CSceneViewArgs_heading( IntPtr pObject, double value );

				public 				double Heading
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CSceneViewArgs_heading(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CSceneViewArgs_heading(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CSceneViewArgs_tilt(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CSceneViewArgs_tilt( IntPtr pObject, double value );

				public 				double Tilt
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CSceneViewArgs_tilt(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CSceneViewArgs_tilt(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double Get_EarthView_World_Spatial_CSceneViewArgs_moditifAltitude(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CSceneViewArgs_moditifAltitude( IntPtr pObject, double value );

				public 				double ModitifAltitude
				{
					get
					{
						double ret=Get_EarthView_World_Spatial_CSceneViewArgs_moditifAltitude(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Spatial_CSceneViewArgs_moditifAltitude(this.NativeObject,value);
					}
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte Get_EarthView_World_Spatial_CSceneViewArgs_operationOver(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial_CSceneViewArgs_operationOver( IntPtr pObject, byte value );

				public 				bool OperationOver
				{
					get
					{
						byte ret=Get_EarthView_World_Spatial_CSceneViewArgs_operationOver(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					set
					{
						Set_EarthView_World_Spatial_CSceneViewArgs_operationOver(this.NativeObject,Convert.ToByte(value));
					}
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_d.dll");
						private static bool csbLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_d.so");
						private static bool csbLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

					#else 
						private static bool bLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_d.dll");
						private static bool csbLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI.dll");
						private static bool csbLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

					#elif Linux 
						private static bool bLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI.so");
						private static bool csbLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

					#else 
						private static bool bLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI.dll");
						private static bool csbLoadSceneViewArgs = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CSceneViewArgs", new SceneViewArgsClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CSceneViewArgsProxy", new SceneViewArgsClassFactory());

				public SceneViewArgs(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType(IntPtr pObject, getType_CallBack_ViewArgsType pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getType_CallBack_ViewArgsType = EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Function;
						GC.KeepAlive(m_getType_CallBack_ViewArgsType);
						EV_RegisterCallback_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType(this.NativeObject, m_getType_CallBack_ViewArgsType);
					}
				}
				public static SceneViewArgs FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					SceneViewArgs obj = baseObj as  SceneViewArgs;
					if (object.Equals(obj, null))
					{
						obj = new SceneViewArgs(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CSceneViewArgs");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class SceneViewArgsClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					SceneViewArgs emptyInstance = new SceneViewArgs(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
