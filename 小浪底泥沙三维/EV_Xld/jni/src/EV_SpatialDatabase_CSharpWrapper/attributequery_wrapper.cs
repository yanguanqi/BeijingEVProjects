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
				public class AttributeQuery : EarthView.World.Core.AllocatedObject
				{
					public AttributeQuery() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAttributeQuery",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_CAttributeQuery_Compile_ev_bool_IFields_ev_char(IntPtr pNativeObject, IntPtr pFields, byte[] pExpression);

					public bool Compile(EarthView.World.Spatial.GeoDataset.Ifields pFields, byte[] pExpression)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_CAttributeQuery_Compile_ev_bool_IFields_ev_char(this.NativeObject, object.Equals(pFields, null) ? IntPtr.Zero : pFields.NativeObject, pExpression);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_CAttributeQuery_Evaluate_ev_bool_IFeature(IntPtr pNativeObject, IntPtr pFeature);

					public bool Evaluate(EarthView.World.Spatial.GeoDataset.Ifeature pFeature)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_CAttributeQuery_Evaluate_ev_bool_IFeature(this.NativeObject, object.Equals(pFeature, null) ? IntPtr.Zero : pFeature.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_d.dll");
							private static bool csbLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_d.so");
							private static bool csbLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_CSharp_d.so");

						#else 
							private static bool bLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_d.dll");
							private static bool csbLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase.dll");
							private static bool csbLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase.so");
							private static bool csbLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_CSharp.so");

						#else 
							private static bool bLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase.dll");
							private static bool csbLoadAttributeQuery = LoadDll.Load("EV_SpatialDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CAttributeQuery", new AttributeQueryClassFactory());

					public AttributeQuery(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static AttributeQuery FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AttributeQuery obj = baseObj as  AttributeQuery;
						if (object.Equals(obj, null))
						{
							obj = new AttributeQuery(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAttributeQuery");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AttributeQueryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AttributeQuery emptyInstance = new AttributeQuery(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
