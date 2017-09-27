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
			namespace Controls
			{
				public class GlobeAnimationControlPoint : EarthView.World.Core.BaseObject
				{
					private EarthView.World.Spatial.Math.Degree mlatitudeField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlatitude(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlatitude( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree Mlatitude
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlatitude(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mlatitudeField, null)){
								mlatitudeField.NativeObject = __ptr;
								return mlatitudeField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mlatitudeField = value;
							Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlatitude( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Degree mlongitudeField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlongitude(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlongitude( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree Mlongitude
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlongitude(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mlongitudeField, null)){
								mlongitudeField.NativeObject = __ptr;
								return mlongitudeField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mlongitudeField = value;
							Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mlongitude( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Degree mHeadingField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mHeading(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mHeading( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree MHeading
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mHeading(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mHeadingField, null)){
								mHeadingField.NativeObject = __ptr;
								return mHeadingField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mHeadingField = value;
							Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mHeading( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_maltitude(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_maltitude( IntPtr pObject, double value );

					public 					double Maltitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_maltitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_maltitude(this.NativeObject,value);
						}
					}

					private EarthView.World.Spatial.Math.Degree mtiltField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mtilt(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mtilt( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Degree Mtilt
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mtilt(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mtiltField, null)){
								mtiltField.NativeObject = __ptr;
								return mtiltField;
							}
							EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CDegree");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
								csObj.BindNativeObject(__ptr, "CDegree");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mtiltField = value;
							Set_EarthView_World_Spatial3D_Controls_CGlobeAnimationControlPoint_mtilt( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeAnimationControlPoint() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeAnimationControlPoint",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeAnimationControlPoint = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint", new GlobeAnimationControlPointClassFactory());

					public GlobeAnimationControlPoint(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeAnimationControlPoint FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeAnimationControlPoint obj = baseObj as  GlobeAnimationControlPoint;
						if (object.Equals(obj, null))
						{
							obj = new GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeAnimationControlPoint");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeAnimationControlPointClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeAnimationControlPoint emptyInstance = new GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class AnimationControlPointMap : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public AnimationControlPointMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAnimationControlPointMap",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_push_ev_bool_ev_real64_CGlobeAnimationControlPoint(IntPtr pNativeObject, ref double key, IntPtr val);

					/// <summary>
					/// 增加新键值
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns></returns>
					public bool Push(double key, EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint val)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_push_ev_bool_ev_real64_CGlobeAnimationControlPoint(this.NativeObject, ref key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_exist_ev_bool_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 根据指定的键，判断对应的值是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					public bool Exist(double key)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_exist_ev_bool_ev_real64(this.NativeObject, ref key);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_get_CGlobeAnimationControlPoint_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 根据指定的键，返回对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint Get(double key)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_get_CGlobeAnimationControlPoint_ev_real64(this.NativeObject, ref key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint csObj = new EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeAnimationControlPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint;
							csObj.BindNativeObject(__ptr, "CGlobeAnimationControlPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_erase_void_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 根据指定的键，删除值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					public void Erase(double key)
					{
						EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_erase_void_ev_real64(this.NativeObject, ref key);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器的长度
					/// </summary>
					/// <returns></returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空容器
					/// </summary>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <returns></returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CAnimationControlPointMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAnimationControlPointMap = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadAnimationControlPointMap = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAnimationControlPointMap = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadAnimationControlPointMap = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadAnimationControlPointMap = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadAnimationControlPointMap = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAnimationControlPointMap = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadAnimationControlPointMap = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadAnimationControlPointMap = LoadDll.Load("EV_GA.so");
							private static bool csbLoadAnimationControlPointMap = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadAnimationControlPointMap = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadAnimationControlPointMap = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CAnimationControlPointMap", new AnimationControlPointMapClassFactory());

					public AnimationControlPointMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static AnimationControlPointMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AnimationControlPointMap obj = baseObj as  AnimationControlPointMap;
						if (object.Equals(obj, null))
						{
							obj = new AnimationControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAnimationControlPointMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AnimationControlPointMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AnimationControlPointMap emptyInstance = new AnimationControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeAnimationPath : EarthView.World.Core.BaseObject
				{
					public enum LOOPMODE
					{
										lOOP = 0,
										NOLOOP = 1
					
					}

					///typedef EarthView::World::Core::map<ev_real64,EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint> ControlPoints;
					//// <summary>
					//// 构造函数
					//// </summary>
					//// <param name="loopMode">循环模式</param>
					//// <param name="radious">半径</param>
					//// <returns></returns>
					public GlobeAnimationPath(EarthView.World.Spatial3D.Controls.GlobeAnimationPath.LOOPMODE loopMode, double radious) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueloopMode = new BasePtr(loopMode);
						list.Add("loopMode", valueloopMode.PtrVal);
						BasePtr valueradious = new BasePtr(radious);
						list.Add("radious", valueradious.PtrVal);
						Create("CGlobeAnimationPath", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GlobeAnimationPath() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeAnimationPath",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空控制点
					/// </summary>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_insert_void_ev_real64_CGlobeAnimationControlPoint(IntPtr pNativeObject, double time, IntPtr controlPoint);

					/// <summary>
					/// 增加控制点
					/// </summary>
					/// <param name="time">时间</param>
					/// <param name="controlPoint">控制点</param>
					/// <returns></returns>
					public void Insert(double time, EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint controlPoint)
					{
						EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_insert_void_ev_real64_CGlobeAnimationControlPoint(this.NativeObject, time, object.Equals(controlPoint, null) ? IntPtr.Zero : controlPoint.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getFirstTime_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 取得第一个时间
					/// </summary>
					/// <returns></returns>
					public double GetFirstTime()
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getFirstTime_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getEndTime_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 取得最后一个时间
					/// </summary>
					/// <returns></returns>
					public double GetEndTime()
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getEndTime_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getPeriod_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 取得总时间段
					/// </summary>
					/// <returns></returns>
					public double GetPeriod()
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getPeriod_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getControlPointCount_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 取得控制点数目
					/// </summary>
					/// <returns></returns>
					public int GetControlPointCount()
					{
						int ret=EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getControlPointCount_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_setVelocity_void_ev_real64(IntPtr pNativeObject, double velocity);

					/// <summary>
					/// 设置速度
					/// </summary>
					/// <param name="velocity">速度</param>
					/// <returns></returns>
					public void SetVelocity(double velocity)
					{
						EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_setVelocity_void_ev_real64(this.NativeObject, velocity);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getVelocity_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取速度
					/// </summary>
					/// <returns></returns>
					public double GetVelocity()
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getVelocity_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getInterpolaterdControlPoint_CGlobeAnimationControlPoint_ev_real64_ev_bool(IntPtr pNativeObject, double time, byte isEven);

					/// <summary>
					/// 由时间获取插值点
					/// </summary>
					/// <param name="velocity">速度</param>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint GetInterpolaterdControlPoint(double time, bool isEven)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getInterpolaterdControlPoint_CGlobeAnimationControlPoint_ev_real64_ev_bool(this.NativeObject, time, Convert.ToByte(isEven));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint csObj = new EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeAnimationControlPoint");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeAnimationControlPoint;
							csObj.BindNativeObject(__ptr, "CGlobeAnimationControlPoint");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getControlPoints_CAnimationControlPointMap(IntPtr pNativeObject);

					/// <summary>
					/// 返回控制点集合
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Controls.AnimationControlPointMap GetControlPoints()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeAnimationPath_getControlPoints_CAnimationControlPointMap(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Controls.AnimationControlPointMap csObj = new EarthView.World.Spatial3D.Controls.AnimationControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAnimationControlPointMap");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.AnimationControlPointMap;
							csObj.BindNativeObject(__ptr, "CAnimationControlPointMap");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeAnimationPath = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeAnimationPath = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeAnimationPath = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeAnimationPath = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeAnimationPath = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeAnimationPath = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeAnimationPath = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeAnimationPath = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeAnimationPath = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeAnimationPath = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeAnimationPath = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeAnimationPath = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeAnimationPath", new GlobeAnimationPathClassFactory());

					public GlobeAnimationPath(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GlobeAnimationPath FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeAnimationPath obj = baseObj as  GlobeAnimationPath;
						if (object.Equals(obj, null))
						{
							obj = new GlobeAnimationPath(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeAnimationPath");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeAnimationPathClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeAnimationPath emptyInstance = new GlobeAnimationPath(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
