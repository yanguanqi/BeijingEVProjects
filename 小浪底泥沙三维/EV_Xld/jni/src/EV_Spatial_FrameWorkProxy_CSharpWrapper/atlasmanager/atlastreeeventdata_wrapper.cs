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
				public class AtlasTreeEventData : EarthView.World.Core.BaseObject
				{

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
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_setType_void_ActionType(IntPtr pNativeObject, EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ACTIONTYPE t);

					/// <summary>
					/// 设置动作类型。
					/// </summary>
					/// <param name="t">动作类型。</param>
					/// <returns></returns>
					public void SetType(EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ACTIONTYPE t)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_setType_void_ActionType(this.NativeObject, t);
						
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
					private static extern int EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_getType_ActionType(IntPtr pNativeObject);

					/// <summary>
					/// 获取动作类型。
					/// </summary>
					/// <returns>动作类型。</returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ACTIONTYPE GetType()
					{
						int ret=EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_getType_ActionType(this.NativeObject);
						
						return (EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ACTIONTYPE)ret;
						
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData detialDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_detialData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_detialData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData DetialData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_detialData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(detialDataField, null)){
								detialDataField.NativeObject = __ptr;
								return detialDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "LayerDetailData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailData;
								csObj.BindNativeObject(__ptr, "LayerDetailData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							detialDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_detialData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData propertyDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_propertyData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_propertyData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData PropertyData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_propertyData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(propertyDataField, null)){
								propertyDataField.NativeObject = __ptr;
								return propertyDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "LayerPropertyData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyData;
								csObj.BindNativeObject(__ptr, "LayerPropertyData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							propertyDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_propertyData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData kmlManageDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_kmlManageData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_kmlManageData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData KmlManageData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_kmlManageData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(kmlManageDataField, null)){
								kmlManageDataField.NativeObject = __ptr;
								return kmlManageDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "KmlManageData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageData;
								csObj.BindNativeObject(__ptr, "KmlManageData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							kmlManageDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_kmlManageData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData sceneDetailDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneDetailData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneDetailData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData SceneDetailData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneDetailData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(sceneDetailDataField, null)){
								sceneDetailDataField.NativeObject = __ptr;
								return sceneDetailDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "SceneDetailData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailData;
								csObj.BindNativeObject(__ptr, "SceneDetailData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							sceneDetailDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneDetailData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData scenePropertyDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_scenePropertyData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_scenePropertyData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData ScenePropertyData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_scenePropertyData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(scenePropertyDataField, null)){
								scenePropertyDataField.NativeObject = __ptr;
								return scenePropertyDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "ScenePropertyData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyData;
								csObj.BindNativeObject(__ptr, "ScenePropertyData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							scenePropertyDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_scenePropertyData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData mapDetailDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapDetailData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapDetailData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData MapDetailData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapDetailData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mapDetailDataField, null)){
								mapDetailDataField.NativeObject = __ptr;
								return mapDetailDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "MapDetailData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailData;
								csObj.BindNativeObject(__ptr, "MapDetailData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mapDetailDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapDetailData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData mapPropertyDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapPropertyData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapPropertyData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData MapPropertyData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapPropertyData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mapPropertyDataField, null)){
								mapPropertyDataField.NativeObject = __ptr;
								return mapPropertyDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "MapPropertyData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyData;
								csObj.BindNativeObject(__ptr, "MapPropertyData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mapPropertyDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapPropertyData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData mapLayerRecordDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapLayerRecordData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapLayerRecordData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData MapLayerRecordData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapLayerRecordData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mapLayerRecordDataField, null)){
								mapLayerRecordDataField.NativeObject = __ptr;
								return mapLayerRecordDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "MapLayerRecordData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordData;
								csObj.BindNativeObject(__ptr, "MapLayerRecordData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mapLayerRecordDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapLayerRecordData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData sceneLayerRecordDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneLayerRecordData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneLayerRecordData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData SceneLayerRecordData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneLayerRecordData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(sceneLayerRecordDataField, null)){
								sceneLayerRecordDataField.NativeObject = __ptr;
								return sceneLayerRecordDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "SceneLayerRecordData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordData;
								csObj.BindNativeObject(__ptr, "SceneLayerRecordData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							sceneLayerRecordDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneLayerRecordData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData historyImageDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_historyImageData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_historyImageData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData HistoryImageData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_historyImageData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(historyImageDataField, null)){
								historyImageDataField.NativeObject = __ptr;
								return historyImageDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "HistoryImageData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageData;
								csObj.BindNativeObject(__ptr, "HistoryImageData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							historyImageDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_historyImageData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData terrainSettingsDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_terrainSettingsData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_terrainSettingsData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData TerrainSettingsData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_terrainSettingsData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(terrainSettingsDataField, null)){
								terrainSettingsDataField.NativeObject = __ptr;
								return terrainSettingsDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "TerrainSettingsData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsData;
								csObj.BindNativeObject(__ptr, "TerrainSettingsData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							terrainSettingsDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_terrainSettingsData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData atmosphereTreeDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_atmosphereTreeData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_atmosphereTreeData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData AtmosphereTreeData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_atmosphereTreeData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(atmosphereTreeDataField, null)){
								atmosphereTreeDataField.NativeObject = __ptr;
								return atmosphereTreeDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "AtmosphereTreeData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeData;
								csObj.BindNativeObject(__ptr, "AtmosphereTreeData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							atmosphereTreeDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_atmosphereTreeData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData editableDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_editableData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_editableData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData EditableData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_editableData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(editableDataField, null)){
								editableDataField.NativeObject = __ptr;
								return editableDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "LayerEditableChangedData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedData;
								csObj.BindNativeObject(__ptr, "LayerEditableChangedData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							editableDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_editableData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData selectableDataField;
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
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_selectableData(IntPtr pObject);

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
					private static extern void Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_selectableData( IntPtr pObject, IntPtr value );

					public 					EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData SelectableData
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_selectableData(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(selectableDataField, null)){
								selectableDataField.NativeObject = __ptr;
								return selectableDataField;
							}
							EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData csObj = new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "LayerSelectableChangedData");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedData;
								csObj.BindNativeObject(__ptr, "LayerSelectableChangedData");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							selectableDataField = value;
							Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_selectableData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					public AtlasTreeEventData() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("AtlasTreeEventData",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadAtlasTreeEventData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData", new AtlasTreeEventDataClassFactory());

					public AtlasTreeEventData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static AtlasTreeEventData FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AtlasTreeEventData obj = baseObj as  AtlasTreeEventData;
						if (object.Equals(obj, null))
						{
							obj = new AtlasTreeEventData(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "AtlasTreeEventData");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AtlasTreeEventDataClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AtlasTreeEventData emptyInstance = new AtlasTreeEventData(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
