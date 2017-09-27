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
			namespace Atlas
			{
				public class LayerSelection3D : EarthView.World.Spatial.Atlas.Ilayerselection
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public LayerSelection3D() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CLayerSelection3DProxy", null);
						if (!"EarthView.World.Spatial3D.Atlas.LayerSelection3D".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取选择
					///</summary>
					///<returns>选择集指针</return>
					public new EarthView.World.Spatial.GeoDataset.Ifeatureselection GetSelection_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ifeatureselection csObj = new EarthView.World.Spatial.GeoDataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IFeatureSelection");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifeatureselection;
							csObj.BindNativeObject(__ptr, "IFeatureSelection");
							csObj.Delegate = true;
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
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection(IntPtr pNativeObject);

					///<summary>
					///获取选择
					///</summary>
					///<returns>选择集指针</return>
					public override EarthView.World.Spatial.GeoDataset.Ifeatureselection GetSelection()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ifeatureselection csObj = new EarthView.World.Spatial.GeoDataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IFeatureSelection");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifeatureselection;
							csObj.BindNativeObject(__ptr, "IFeatureSelection");
							csObj.Delegate = true;
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
					private static extern void EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelection_void_IFeatureSelection(IntPtr pNativeObject, IntPtr selection);

					///<summary>
					///设置选择
					///</summary>
					///<param name="selection">选择集</param>
					public void SetSelection(EarthView.World.Spatial.GeoDataset.Ifeatureselection selection)
					{
						EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelection_void_IFeatureSelection(this.NativeObject, object.Equals(selection, null) ? IntPtr.Zero : selection.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_d.dll");
							private static bool csbLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_d.so");
							private static bool csbLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

						#else 
							private static bool bLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_d.dll");
							private static bool csbLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D.dll");
							private static bool csbLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D.so");
							private static bool csbLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_CSharp.so");

						#else 
							private static bool bLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D.dll");
							private static bool csbLoadLayerSelection3D = LoadDll.Load("EV_Geometry3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLayerSelection3D", new LayerSelection3DClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLayerSelection3DProxy", new LayerSelection3DClassFactory());

					public LayerSelection3D(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection(IntPtr pObject, getSelection_CallBack_IFeatureSelection pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol(IntPtr pObject, getSelectionSymbol_CallBack_ISymbol pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol(IntPtr pObject, setSelectionSymbol_CallBack_void_ISymbol pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getSelection_CallBack_IFeatureSelection = EarthView_World_Spatial_Atlas_ILayerSelection_getSelection_IFeatureSelection_Function;
							GC.KeepAlive(m_getSelection_CallBack_IFeatureSelection);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection(this.NativeObject, m_getSelection_CallBack_IFeatureSelection);
							m_getSelectionSymbol_CallBack_ISymbol = EarthView_World_Spatial_Atlas_ILayerSelection_getSelectionSymbol_ISymbol_Function;
							GC.KeepAlive(m_getSelectionSymbol_CallBack_ISymbol);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol(this.NativeObject, m_getSelectionSymbol_CallBack_ISymbol);
							m_setSelectionSymbol_CallBack_void_ISymbol = EarthView_World_Spatial_Atlas_ILayerSelection_setSelectionSymbol_void_ISymbol_Function;
							GC.KeepAlive(m_setSelectionSymbol_CallBack_void_ISymbol);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol(this.NativeObject, m_setSelectionSymbol_CallBack_void_ISymbol);
						}
					}
					public override EarthView.World.Spatial.Display.Isymbol GetSelectionSymbol()
					{
						return base.GetSelectionSymbol_NoVirtual();
					}
					public override void SetSelectionSymbol(EarthView.World.Spatial.Display.Isymbol symbol)
					{
						base.SetSelectionSymbol_NoVirtual(symbol);
					}
					public static LayerSelection3D FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LayerSelection3D obj = baseObj as  LayerSelection3D;
						if (object.Equals(obj, null))
						{
							obj = new LayerSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLayerSelection3D");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LayerSelection3DClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LayerSelection3D emptyInstance = new LayerSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
