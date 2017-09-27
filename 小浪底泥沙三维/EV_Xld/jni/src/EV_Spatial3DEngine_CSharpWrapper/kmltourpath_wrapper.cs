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
		}
		namespace Spatial
		{
			namespace Kml
			{
			}
		}
		namespace Spatial3D
		{
			namespace KmlManager
			{
				/// <summary>
				/// kml飞行
				/// </summary>
				public class KmlFlyTo : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlFlyTo() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlFlyTo",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_OperatorEquals_ev_bool_CKmlFlyTo(IntPtr pNativeObject, IntPtr rhs);

					/// <summary>
					/// 重载==运算符
					/// </summary>
					/// <param name="rhs">比较的对象</param>
					/// <returns></returns>
					public 					static bool operator ==(EarthView.World.Spatial3D.KmlManager.KmlFlyTo mCKmlFlyTo,EarthView.World.Spatial3D.KmlManager.KmlFlyTo rhs)
					{
						byte ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_OperatorEquals_ev_bool_CKmlFlyTo(mCKmlFlyTo.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_OperatorNotEquals_ev_bool_CKmlFlyTo(IntPtr pNativeObject, IntPtr rhs);

					/// <summary>
					/// 重载！=运算符
					/// </summary>
					/// <param name="rhs">比较的对象</param>
					/// <returns></returns>
					public 					static bool operator !=(EarthView.World.Spatial3D.KmlManager.KmlFlyTo mCKmlFlyTo,EarthView.World.Spatial3D.KmlManager.KmlFlyTo rhs)
					{
						byte ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_OperatorNotEquals_ev_bool_CKmlFlyTo(mCKmlFlyTo.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mlatitude(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mlatitude( IntPtr pObject, double value );

					public 					double Mlatitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mlatitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mlatitude(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mlongitude(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mlongitude( IntPtr pObject, double value );

					public 					double Mlongitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mlongitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mlongitude(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mheading(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mheading( IntPtr pObject, double value );

					public 					double Mheading
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mheading(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mheading(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mtilt(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mtilt( IntPtr pObject, double value );

					public 					double Mtilt
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mtilt(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mtilt(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_maltitude(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_maltitude( IntPtr pObject, double value );

					public 					double Maltitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_maltitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_maltitude(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mmoditifAltitude(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mmoditifAltitude( IntPtr pObject, double value );

					public 					double MmoditifAltitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mmoditifAltitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mmoditifAltitude(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mdistance(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mdistance( IntPtr pObject, double value );

					public 					double Mdistance
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mdistance(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mdistance(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mneedStop(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mneedStop( IntPtr pObject, byte value );

					public 					bool MneedStop
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mneedStop(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mneedStop(this.NativeObject,Convert.ToByte(value));
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mtimeSpan(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mtimeSpan( IntPtr pObject, double value );

					public 					double MtimeSpan
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mtimeSpan(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_mtimeSpan(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_misWait(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_misWait( IntPtr pObject, byte value );

					public 					bool MisWait
					{
						get
						{
							byte ret=Get_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_misWait(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_KmlManager_CKmlFlyTo_misWait(this.NativeObject,Convert.ToByte(value));
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlFlyTo = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::KmlManager::CKmlFlyTo", new KmlFlyToClassFactory());

					public KmlFlyTo(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlFlyTo FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlFlyTo obj = baseObj as  KmlFlyTo;
						if (object.Equals(obj, null))
						{
							obj = new KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlFlyTo");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlFlyToClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlFlyTo emptyInstance = new KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// kml飞行集合
				/// </summary>
				public class KmlFlyToMap : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlFlyToMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlFlyToMap",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_push_ev_bool_ev_real64_CKmlFlyTo(IntPtr pNativeObject, ref double key, IntPtr val);

					/// <summary>
					/// 添加元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <param name="val">键值对的值</param>
					/// <returns>成功返回true，否则返回false</returns>
					public bool Push(double key, EarthView.World.Spatial3D.KmlManager.KmlFlyTo val)
					{
						byte ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_push_ev_bool_ev_real64_CKmlFlyTo(this.NativeObject, ref key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_exist_ev_bool_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 指定的键是否存在
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>存在返回true，否则返回false</returns>
					public bool Exist(double key)
					{
						byte ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_exist_ev_bool_ev_real64(this.NativeObject, ref key);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_get_CKmlFlyTo_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 获取元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回对应的值</returns>
					public EarthView.World.Spatial3D.KmlManager.KmlFlyTo Get(double key)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_get_CKmlFlyTo_ev_real64(this.NativeObject, ref key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.KmlManager.KmlFlyTo csObj = new EarthView.World.Spatial3D.KmlManager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlFlyTo");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlFlyTo;
							csObj.BindNativeObject(__ptr, "CKmlFlyTo");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_erase_void_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 删除元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns></returns>
					public void Erase(double key)
					{
						EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_erase_void_ev_real64(this.NativeObject, ref key);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <returns>返回元素的数量大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///返回容器是否为null
					/// </summary>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyToMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlFlyToMap = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::KmlManager::CKmlFlyToMap", new KmlFlyToMapClassFactory());

					public KmlFlyToMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlFlyToMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlFlyToMap obj = baseObj as  KmlFlyToMap;
						if (object.Equals(obj, null))
						{
							obj = new KmlFlyToMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlFlyToMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlFlyToMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlFlyToMap emptyInstance = new KmlFlyToMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlFlyToTimeMap : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlFlyToTimeMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlFlyToTimeMap",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_push_ev_bool_ev_real64_ev_real64(IntPtr pNativeObject, ref double key, ref double val);

					/// <summary>
					/// 添加元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <param name="val">键值对的值</param>
					/// <returns>成功返回true，否则返回false</returns>
					public bool Push(double key, ref double val)
					{
						byte ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_push_ev_bool_ev_real64_ev_real64(this.NativeObject, ref key, ref val);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_exist_ev_bool_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 指定的键是否存在
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>存在返回true，否则返回false</returns>
					public bool Exist(double key)
					{
						byte ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_exist_ev_bool_ev_real64(this.NativeObject, ref key);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_get_ev_real64_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 获取元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回对应的值</returns>
					public IntPtr Get(double key)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_get_ev_real64_ev_real64(this.NativeObject, ref key);
						
						return __ptr;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_erase_void_ev_real64(IntPtr pNativeObject, ref double key);

					/// <summary>
					/// 删除元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns></returns>
					public void Erase(double key)
					{
						EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_erase_void_ev_real64(this.NativeObject, ref key);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <returns>返回元素的数量大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///返回容器是否为null
					/// </summary>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Spatial3D_KmlManager_CKmlFlyToTimeMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlFlyToTimeMap = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::KmlManager::CKmlFlyToTimeMap", new KmlFlyToTimeMapClassFactory());

					public KmlFlyToTimeMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlFlyToTimeMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlFlyToTimeMap obj = baseObj as  KmlFlyToTimeMap;
						if (object.Equals(obj, null))
						{
							obj = new KmlFlyToTimeMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlFlyToTimeMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlFlyToTimeMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlFlyToTimeMap emptyInstance = new KmlFlyToTimeMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// kml飞行游览路径
				/// </summary>
				public class KmlTourPath : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlTourPath() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlTourPath",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlTourPath_initializeFlyToMap_void_CTour(IntPtr pNativeObject, IntPtr ref_tour);

					/// <summary>
					/// 初始化flyto容器
					/// </summary>
					/// <param name="tour">游览</param>
					/// <returns></returns>
					public void InitializeFlyToMap(EarthView.World.Spatial.Kml.Tour ref_tour)
					{
						EarthView_World_Spatial3D_KmlManager_CKmlTourPath_initializeFlyToMap_void_CTour(this.NativeObject, object.Equals(ref_tour, null) ? IntPtr.Zero : ref_tour.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlTourPath_initializeKmlTour_void_CTour(IntPtr pNativeObject, IntPtr ref_tour);

					/// <summary>
					/// 初始化kml游览
					/// </summary>
					/// <param name="tour">游览</param>
					/// <returns></returns>
					public void InitializeKmlTour(EarthView.World.Spatial.Kml.Tour ref_tour)
					{
						EarthView_World_Spatial3D_KmlManager_CKmlTourPath_initializeKmlTour_void_CTour(this.NativeObject, object.Equals(ref_tour, null) ? IntPtr.Zero : ref_tour.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getAltitude_ev_real64_EVAltitudeMode_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, EarthView.World.Spatial.Utility.EVALTITUDEMODE altitudeMode, double latitude, double longitude, double originalAltitude);

					/// <summary>
					/// 获取高程值
					/// </summary>
					/// <param name="altitudeMode">高程模式</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="originalAltitude">起始高度</param>
					/// <returns>返回高度值</returns>
					public double GetAltitude(EarthView.World.Spatial.Utility.EVALTITUDEMODE altitudeMode, double latitude, double longitude, double originalAltitude)
					{
						double ret=EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getAltitude_ev_real64_EVAltitudeMode_ev_real64_ev_real64_ev_real64(this.NativeObject, altitudeMode, latitude, longitude, originalAltitude);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlTourPath_setSceneManager_void_CSceneManager(IntPtr pNativeObject, IntPtr ref_sceneManager);

					/// <summary>
					/// 设置场景管理
					/// </summary>
					/// <param name="sceneManager">场景管理器</param>
					/// <returns></returns>
					public void SetSceneManager(EarthView.World.Graphic.SceneManager ref_sceneManager)
					{
						EarthView_World_Spatial3D_KmlManager_CKmlTourPath_setSceneManager_void_CSceneManager(this.NativeObject, object.Equals(ref_sceneManager, null) ? IntPtr.Zero : ref_sceneManager.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlTourPath_convertToKmlFlyTo_CKmlFlyTo_CFlyTo(IntPtr pNativeObject, IntPtr flyTo);

					/// <summary>
					/// 转换为flyto
					/// </summary>
					/// <param name="flyTo">flyto对象</param>
					/// <returns>返回对象</returns>
					public EarthView.World.Spatial3D.KmlManager.KmlFlyTo ConvertToKmlFlyTo(EarthView.World.Spatial.Kml.FlyTo flyTo)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlTourPath_convertToKmlFlyTo_CKmlFlyTo_CFlyTo(this.NativeObject, object.Equals(flyTo, null) ? IntPtr.Zero : flyTo.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.KmlManager.KmlFlyTo csObj = new EarthView.World.Spatial3D.KmlManager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlFlyTo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlFlyTo;
							csObj.BindNativeObject(__ptr, "CKmlFlyTo");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getInterpolaterdFlyTo_CKmlFlyTo_ev_real64(IntPtr pNativeObject, double time);

					/// <summary>
					/// 内插
					/// </summary>
					/// <param name="time">飞行的时间</param>
					/// <returns></returns>
					public EarthView.World.Spatial3D.KmlManager.KmlFlyTo GetInterpolaterdFlyTo(double time)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getInterpolaterdFlyTo_CKmlFlyTo_ev_real64(this.NativeObject, time);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.KmlManager.KmlFlyTo csObj = new EarthView.World.Spatial3D.KmlManager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlFlyTo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlFlyTo;
							csObj.BindNativeObject(__ptr, "CKmlFlyTo");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlTourPath_setFlyTo_void_CKmlFlyTo_CKmlFlyTo_CKmlFlyTo_ev_real64(IntPtr pNativeObject, IntPtr kmlFlyTo, IntPtr front, IntPtr back, double ratio);

					/// <summary>
					/// 设置flyto
					/// </summary>
					/// <param name="kmlFlyTo">flyto对象</param>
					/// <param name="front">上一个flyto对象</param>
					/// <param name="back">下一个flyto对象</param>
					/// <param name="ratio">速率</param>
					/// <returns></returns>
					public void SetFlyTo(ref EarthView.World.Spatial3D.KmlManager.KmlFlyTo kmlFlyTo, EarthView.World.Spatial3D.KmlManager.KmlFlyTo front, EarthView.World.Spatial3D.KmlManager.KmlFlyTo back, double ratio)
					{
						EarthView_World_Spatial3D_KmlManager_CKmlTourPath_setFlyTo_void_CKmlFlyTo_CKmlFlyTo_CKmlFlyTo_ev_real64(this.NativeObject, object.Equals(kmlFlyTo, null) ? IntPtr.Zero : kmlFlyTo.NativeObject, object.Equals(front, null) ? IntPtr.Zero : front.NativeObject, object.Equals(back, null) ? IntPtr.Zero : back.NativeObject, ratio);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlTourPath_calculateFlyTo_CKmlFlyTo_CKmlFlyTo_CKmlFlyTo_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr front, IntPtr back, double frontTime, double backTime, double currentTime);

					/// <summary>
					/// 计算flyto
					/// </summary>
					/// <param name="front">上一个flyto对象</param>
					/// <param name="back">下一个flyto对象</param>
					/// <param name="frontTime">开始时间</param>
					/// <param name="backTime">结束时间</param>
					/// <param name="currentTime">当前时间</param>
					/// <returns>返回飞行对象</returns>
					public EarthView.World.Spatial3D.KmlManager.KmlFlyTo CalculateFlyTo(EarthView.World.Spatial3D.KmlManager.KmlFlyTo front, EarthView.World.Spatial3D.KmlManager.KmlFlyTo back, double frontTime, double backTime, double currentTime)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlTourPath_calculateFlyTo_CKmlFlyTo_CKmlFlyTo_CKmlFlyTo_ev_real64_ev_real64_ev_real64(this.NativeObject, object.Equals(front, null) ? IntPtr.Zero : front.NativeObject, object.Equals(back, null) ? IntPtr.Zero : back.NativeObject, frontTime, backTime, currentTime);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.KmlManager.KmlFlyTo csObj = new EarthView.World.Spatial3D.KmlManager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlFlyTo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlFlyTo;
							csObj.BindNativeObject(__ptr, "CKmlFlyTo");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getTimeLength_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 返回时间长度
					/// </summary>
					/// <returns>返回时间长度</returns>
					public double GetTimeLength()
					{
						double ret=EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getTimeLength_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getFlyToNumber_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取flyto个数
					/// </summary>
					/// <returns>返回flyto的个数</returns>
					public int GetFlyToNumber()
					{
						int ret=EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getFlyToNumber_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlTourPath_addKmlFlyTo_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double timeSpan, double latitude, double longitude, double heading, double tilt, double alitude, double moditifAltiude, double distance);

					/// <summary>
					/// 获取飞行对象
					/// </summary>
					/// <param name="timeSpan">时间</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="heading">相机的heading角</param>
					/// <param name="tilt">相机的tilt角</param>
					/// <param name="alitude">高程</param>
					/// <param name="moditifAltiude">高程修正值</param>
					/// <param name="distance">距离</param>
					/// <returns></returns>
					public void AddKmlFlyTo(double timeSpan, double latitude, double longitude, double heading, double tilt, double alitude, double moditifAltiude, double distance)
					{
						EarthView_World_Spatial3D_KmlManager_CKmlTourPath_addKmlFlyTo_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, timeSpan, latitude, longitude, heading, tilt, alitude, moditifAltiude, distance);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getTour_CTour(IntPtr pNativeObject);

					/// <summary>
					/// 获取游览对象
					/// </summary>
					/// <returns>返回游览对象</returns>
					public EarthView.World.Spatial.Kml.Tour GetTour()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlTourPath_getTour_CTour(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Kml.Tour csObj = new EarthView.World.Spatial.Kml.Tour(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CTour");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Kml.Tour;
							csObj.BindNativeObject(__ptr, "CTour");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_KmlManager_CKmlTourPath_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除列表
					/// </summary>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial3D_KmlManager_CKmlTourPath_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlTourPath = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::KmlManager::CKmlTourPath", new KmlTourPathClassFactory());

					public KmlTourPath(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlTourPath FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlTourPath obj = baseObj as  KmlTourPath;
						if (object.Equals(obj, null))
						{
							obj = new KmlTourPath(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlTourPath");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlTourPathClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlTourPath emptyInstance = new KmlTourPath(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class KmlTourPathPtr : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public KmlTourPathPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlTourPathPtr",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 拷贝构造
					/// </summary>
					/// <returns></returns>
					public KmlTourPathPtr(EarthView.World.Spatial3D.KmlManager.KmlTourPath rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerep = new BasePtr(rep);
						list.Add("rep", valuerep.PtrVal);
						if(!object.Equals(rep, null))
						{
						rep.NoFree = true;
						}
						Create("CKmlTourPathPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 拷贝构造
					/// </summary>
					/// <returns></returns>
					public KmlTourPathPtr(EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr tp) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetp = new BasePtr(tp);
						list.Add("tp", valuetp.PtrVal);
						Create("CKmlTourPathPtr", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlTourPathPtr_get_CKmlTourPath(IntPtr pNativeObject);

					/// <summary>
					/// 获取对象
					/// </summary>
					/// <returns>返回游览路径</returns>
					public EarthView.World.Spatial3D.KmlManager.KmlTourPath Get()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlTourPathPtr_get_CKmlTourPath(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.KmlManager.KmlTourPath csObj = new EarthView.World.Spatial3D.KmlManager.KmlTourPath(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourPath");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlTourPath;
							csObj.BindNativeObject(__ptr, "CKmlTourPath");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlTourPathPtr_OperatorAssign_CKmlTourPathPtr_CKmlTourPathPtr(IntPtr pNativeObject, IntPtr r);

					/// <summary>
					/// 重载赋值运算符
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr OperatorAssign(EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr r)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlTourPathPtr_OperatorAssign_CKmlTourPathPtr_CKmlTourPathPtr(this.NativeObject, object.Equals(r, null) ? IntPtr.Zero : r.NativeObject);
						
						EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr csObj = new EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlTourPathPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlTourPathPtr;
							csObj.BindNativeObject(__ptr, "CKmlTourPathPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlTourPathPtr = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr", new KmlTourPathPtrClassFactory());

					public KmlTourPathPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlTourPathPtr FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlTourPathPtr obj = baseObj as  KmlTourPathPtr;
						if (object.Equals(obj, null))
						{
							obj = new KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlTourPathPtr");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlTourPathPtrClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlTourPathPtr emptyInstance = new KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
