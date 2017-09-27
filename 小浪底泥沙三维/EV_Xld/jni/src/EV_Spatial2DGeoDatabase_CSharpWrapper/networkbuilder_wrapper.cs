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
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				/// <summary>
				///联通策略枚举
				/// </summary>
				public enum EVCONNECTIVITYPOLICY
				{
								CT_ENDPIONT = 1,
								CT_ANYVERTEX = 2
				
				}

				/// <summary>
				///数据类型枚举
				/// </summary>
				public enum EVDATAVALUETYPE
				{
								VT_FIELD = 1,
								VT_CONSTANT = 2,
								VT_FUNCTION = 3
				
				}

				/// <summary>
				///函数类型
				/// </summary>
				public class ElevationSetting : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					///默认构造函数
					/// </summary>
					public ElevationSetting() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ElevationSetting",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					private string srcNameField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_srcName(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_srcName( IntPtr pObject, string value );

					public 					string SrcName
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_srcName(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							srcNameField = value;
							Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_srcName( this.NativeObject,value );
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_direction(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_direction( IntPtr pObject, int value );

					public 					int Direction
					{
						get
						{
							int ret=Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_direction(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_direction(this.NativeObject,value);
						}
					}

					private string fieldNameField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_fieldName(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_fieldName( IntPtr pObject, string value );

					public 					string FieldName
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_fieldName(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							fieldNameField = value;
							Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_fieldName( this.NativeObject,value );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_d.so");
							private static bool csbLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.so");

						#else 
							private static bool bLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase.so");
							private static bool csbLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.so");

						#else 
							private static bool bLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadElevationSetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::ElevationSetting", new ElevationSettingClassFactory());

					public ElevationSetting(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ElevationSetting FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ElevationSetting obj = baseObj as  ElevationSetting;
						if (object.Equals(obj, null))
						{
							obj = new ElevationSetting(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ElevationSetting");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ElevationSettingClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ElevationSetting emptyInstance = new ElevationSetting(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 网络数据集属性设置
				/// </summary>
				public class Naattributesetting : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					///默认构造函数
					/// </summary>
					public Naattributesetting() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CNAAttributeSetting",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					private string m_sourceNameField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_sourceName(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_sourceName( IntPtr pObject, string value );

					public 					string M_sourceName
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_sourceName(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							m_sourceNameField = value;
							Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_sourceName( this.NativeObject,value );
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_direction(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_direction( IntPtr pObject, int value );

					public 					int M_direction
					{
						get
						{
							int ret=Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_direction(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_direction(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_element(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_element( IntPtr pObject, int value );

					public 					int M_element
					{
						get
						{
							int ret=Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_element(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_element(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_type(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_type( IntPtr pObject, int value );

					public 					int M_type
					{
						get
						{
							int ret=Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_type(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_type(this.NativeObject,value);
						}
					}

					private string m_valueField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_value(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_value( IntPtr pObject, string value );

					public 					string M_value
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_value(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							m_valueField = value;
							Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_value( this.NativeObject,value );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_d.so");
							private static bool csbLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.so");

						#else 
							private static bool bLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase.so");
							private static bool csbLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.so");

						#else 
							private static bool bLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadNaattributesetting = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting", new NaattributesettingClassFactory());

					public Naattributesetting(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Naattributesetting FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Naattributesetting obj = baseObj as  Naattributesetting;
						if (object.Equals(obj, null))
						{
							obj = new Naattributesetting(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CNAAttributeSetting");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class NaattributesettingClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Naattributesetting emptyInstance = new Naattributesetting(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 网络数据集属性类
				/// </summary>
				public class Naattribute : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					///默认构造函数
					/// </summary>
					public Naattribute() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CNAAttribute",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置属性名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public void SetName(string name)
					{
						EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetName_void_EVString(this.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取属性名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回属性名</returns>
					public string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetDataType_void_EVDataType(IntPtr pNativeObject, EarthView.World.Core.Variant.EVDATATYPE type);

					/// <summary>
					/// 设置数据类型
					/// </summary>
					/// <param name="type">数据类型</param>
					/// <returns></returns>
					public void SetDataType(EarthView.World.Core.Variant.EVDATATYPE type)
					{
						EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetDataType_void_EVDataType(this.NativeObject, type);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetDataType_EVDataType(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数据类型</returns>
					public EarthView.World.Core.Variant.EVDATATYPE GetDataType()
					{
						int ret=EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetDataType_EVDataType(this.NativeObject);
						
						return (EarthView.World.Core.Variant.EVDATATYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetUsage_void_EVUsageType(IntPtr pNativeObject, EarthView.World.Spatial2D.GeoDataset.EVUSAGETYPE type);

					/// <summary>
					/// 设置单位
					/// </summary>
					/// <param name="type">单位</param>
					/// <returns></returns>
					public void SetUsage(EarthView.World.Spatial2D.GeoDataset.EVUSAGETYPE type)
					{
						EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetUsage_void_EVUsageType(this.NativeObject, type);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetUsage_EVUsageType(IntPtr pNativeObject);

					/// <summary>
					/// 获取用途
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回用途</returns>
					public EarthView.World.Spatial2D.GeoDataset.EVUSAGETYPE GetUsage()
					{
						int ret=EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetUsage_EVUsageType(this.NativeObject);
						
						return (EarthView.World.Spatial2D.GeoDataset.EVUSAGETYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetUnit_void_EVUnitType(IntPtr pNativeObject, EarthView.World.Spatial2D.GeoDataset.EVUNITTYPE unit);

					/// <summary>
					/// 设置单位
					/// </summary>
					/// <param name="type">单位</param>
					/// <returns></returns>
					public void SetUnit(EarthView.World.Spatial2D.GeoDataset.EVUNITTYPE unit)
					{
						EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetUnit_void_EVUnitType(this.NativeObject, unit);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetUnit_EVUnitType(IntPtr pNativeObject);

					/// <summary>
					/// 获取单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回单位</returns>
					public EarthView.World.Spatial2D.GeoDataset.EVUNITTYPE GetUnit()
					{
						int ret=EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetUnit_EVUnitType(this.NativeObject);
						
						return (EarthView.World.Spatial2D.GeoDataset.EVUNITTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetDefault_void_ev_bool(IntPtr pNativeObject, byte isDefault);

					/// <summary>
					/// 设置为是否默认
					/// </summary>
					/// <param name="isDefault">是否默认</param>
					/// <returns></returns>
					public void SetDefault(bool isDefault)
					{
						EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetDefault_void_ev_bool(this.NativeObject, Convert.ToByte(isDefault));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CNAAttribute_IsDefault_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否为默认
					/// </summary>
					/// <param name=""></param>
					/// <returns>若是返回true；否则返回false</returns>
					public bool IsDefault()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CNAAttribute_IsDefault_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetSettingCount_ev_int32(IntPtr pNativeObject);

					///ev_void AddSetting(const CNAAttributeSetting &setting);
					/// <summary>
					/// 获取设置数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数量</returns>
					public int GetSettingCount()
					{
						int ret=EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetSettingCount_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNAAttribute_ClearSetting_void(IntPtr pNativeObject);

					///CNAAttributeSetting* GetSettingRef(ev_uint32 idx);//by jiang 2013 08 04
					///ev_void RemoveSetting(ev_uint32 idx);
					/// <summary>
					/// 清空设置
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void ClearSetting()
					{
						EarthView_World_Spatial2D_GeoDataset_CNAAttribute_ClearSetting_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNAAttribute_AddSetting_void_CNAAttributeSetting(IntPtr pNativeObject, IntPtr setting);

					/// <summary>
					/// 添加设置
					/// </summary>
					public void AddSetting(EarthView.World.Spatial2D.GeoDataset.Naattributesetting setting)
					{
						EarthView_World_Spatial2D_GeoDataset_CNAAttribute_AddSetting_void_CNAAttributeSetting(this.NativeObject, object.Equals(setting, null) ? IntPtr.Zero : setting.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetSettingRef_CNAAttributeSetting_ev_uint32(IntPtr pNativeObject, uint idx);

					/// <summary>
					/// 获取设置
					/// </summary>
					public EarthView.World.Spatial2D.GeoDataset.Naattributesetting GetSettingRef(uint idx)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetSettingRef_CNAAttributeSetting_ev_uint32(this.NativeObject, idx);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.GeoDataset.Naattributesetting csObj = new EarthView.World.Spatial2D.GeoDataset.Naattributesetting(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CNAAttributeSetting");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.GeoDataset.Naattributesetting;
							csObj.BindNativeObject(__ptr, "CNAAttributeSetting");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_d.so");
							private static bool csbLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.so");

						#else 
							private static bool bLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase.so");
							private static bool csbLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.so");

						#else 
							private static bool bLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadNaattribute = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CNAAttribute", new NaattributeClassFactory());

					public Naattribute(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Naattribute FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Naattribute obj = baseObj as  Naattribute;
						if (object.Equals(obj, null))
						{
							obj = new Naattribute(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CNAAttribute");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class NaattributeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Naattribute emptyInstance = new Naattribute(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[StructLayout( LayoutKind.Sequential )]
				public struct CSPLITINFO
				{
					public IntPtr start;
					public IntPtr end;
					public IntPtr subEdge;
					public double ratio;
				}

				/// <summary>
				/// 网络数据集构建类
				/// </summary>
				public class NetworkDatasetBuilder : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_build_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 创建网络数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public bool Build()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_build_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_buildWithEndPointConnectivityPolicy_ev_bool(IntPtr pNativeObject);

					public bool BuildWithEndPointConnectivityPolicy()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_buildWithEndPointConnectivityPolicy_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_buildWithVertexConnectivityPolicy_ev_bool(IntPtr pNativeObject);

					public bool BuildWithVertexConnectivityPolicy()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_buildWithVertexConnectivityPolicy_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置网络数据集名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public void SetName(string name)
					{
						EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setName_void_EVString(this.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setSourceFeatureClass_void_IFeatureClass(IntPtr pNativeObject, IntPtr fc);

					/// <summary>
					/// 设置网络数据集源数据集
					/// </summary>
					/// <param name="fc">源数据集</param>
					/// <returns></returns>
					public void SetSourceFeatureClass(EarthView.World.Spatial.GeoDataset.Ifeatureclass fc)
					{
						EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setSourceFeatureClass_void_IFeatureClass(this.NativeObject, object.Equals(fc, null) ? IntPtr.Zero : fc.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addSourceFeatureClass_void_IFeatureClass(IntPtr pNativeObject, IntPtr fc);

					/// <summary>
					/// 添加参与构建的数据集
					/// </summary>
					/// <param name="fc">数据集</param>
					/// <returns></returns>
					public void AddSourceFeatureClass(EarthView.World.Spatial.GeoDataset.Ifeatureclass fc)
					{
						EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addSourceFeatureClass_void_IFeatureClass(this.NativeObject, object.Equals(fc, null) ? IntPtr.Zero : fc.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addConnectivityPolicy_void_EVString_EVConnectivityPolicy(IntPtr pNativeObject, string srcName, ref EarthView.World.Spatial2D.GeoDataset.EVCONNECTIVITYPOLICY policy);

					///ev_private:
					//// <summary>
					//// 添加连通性策略
					//// </summary>
					//// <param name="policy">连通性策略</param>
					//// <returns></returns>
					public void AddConnectivityPolicy(string srcName, EarthView.World.Spatial2D.GeoDataset.EVCONNECTIVITYPOLICY policy)
					{
						EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addConnectivityPolicy_void_EVString_EVConnectivityPolicy(this.NativeObject, srcName, ref policy);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addElevationSetting_void_ElevationSetting(IntPtr pNativeObject, IntPtr elevation);

					/// <summary>
					/// 添加高程设置
					/// </summary>
					/// <param name="elevation">高程设置</param>
					/// <returns></returns>
					public void AddElevationSetting(EarthView.World.Spatial2D.GeoDataset.ElevationSetting elevation)
					{
						EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addElevationSetting_void_ElevationSetting(this.NativeObject, object.Equals(elevation, null) ? IntPtr.Zero : elevation.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addTurnSource_void_EVString(IntPtr pNativeObject, string turn);

					/// <summary>
					/// 添加转弯策略数据源
					/// </summary>
					/// <param name="turn">转弯策略</param>
					/// <returns></returns>
					public void AddTurnSource(string turn)
					{
						EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addTurnSource_void_EVString(this.NativeObject, turn);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addAttribute_void_CNAAttribute(IntPtr pNativeObject, IntPtr attr);

					/// <summary>
					/// 添加属性
					/// </summary>
					/// <param name="attr">属性</param>
					/// <returns></returns>
					public void AddAttribute(EarthView.World.Spatial2D.GeoDataset.Naattribute attr)
					{
						EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addAttribute_void_CNAAttribute(this.NativeObject, object.Equals(attr, null) ? IntPtr.Zero : attr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setTolerance_void_ev_real64(IntPtr pNativeObject, ref double tolerance);

					///void setDirector(const EVgsNDSettingDirection &direct);
					//// <summary>
					//// 设置网络数据集创建过程中坐标点比较的误差容忍度
					//// </summary>
					//// <param name="tolerance">容忍度</param>
					//// <returns></returns>
					public void SetTolerance(double tolerance)
					{
						EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setTolerance_void_ev_real64(this.NativeObject, ref tolerance);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_getTolerance_ev_real64();

					/// <summary>
					/// 获取网络数据集创建过程中坐标点比较的误差容忍度
					/// </summary>
					/// <param name=""></param>
					/// <returns>容忍度</returns>
					public static double GetTolerance()
					{
						double ret=EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_getTolerance_ev_real64();
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_getFinishPercent_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取完成百分比
					/// </summary>
					/// <param name=""></param>
					/// <returns>完成百分比</returns>
					public double GetFinishPercent()
					{
						double ret=EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_getFinishPercent_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_d.so");
							private static bool csbLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.so");

						#else 
							private static bool bLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase.so");
							private static bool csbLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.so");

						#else 
							private static bool bLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadNetworkDatasetBuilder = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder", new NetworkDatasetBuilderClassFactory());

					public NetworkDatasetBuilder(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static NetworkDatasetBuilder FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						NetworkDatasetBuilder obj = baseObj as  NetworkDatasetBuilder;
						if (object.Equals(obj, null))
						{
							obj = new NetworkDatasetBuilder(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CNetworkDatasetBuilder");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class NetworkDatasetBuilderClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						NetworkDatasetBuilder emptyInstance = new NetworkDatasetBuilder(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
