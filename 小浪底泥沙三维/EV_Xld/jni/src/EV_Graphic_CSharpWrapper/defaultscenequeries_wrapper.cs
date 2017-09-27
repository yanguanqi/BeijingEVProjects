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
			public class DefaultIntersectionSceneQuery : EarthView.World.Graphic.IntersectionSceneQuery
			{
				public DefaultIntersectionSceneQuery(EarthView.World.Graphic.SceneManager ref_creator) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_creator = new BasePtr(ref_creator);
					list.Add("ref_creator", valueref_creator.PtrVal);
					Create("CDefaultIntersectionSceneQueryProxy", list);
					if (!"EarthView.World.Graphic.DefaultIntersectionSceneQuery".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

				public new void Execute_NoVirtual(EarthView.World.Graphic.IntersectionSceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(IntPtr pNativeObject, IntPtr listener);

				public override void Execute(EarthView.World.Graphic.IntersectionSceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultIntersectionSceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultIntersectionSceneQuery", new DefaultIntersectionSceneQueryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultIntersectionSceneQueryProxy", new DefaultIntersectionSceneQueryClassFactory());

				public DefaultIntersectionSceneQuery(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject_CMovableObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject_WorldFragment pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(IntPtr pObject, getListenerPtr_CallBack_CIntersectionSceneQueryInternalListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult(IntPtr pObject, execute_CallBack_IntersectionSceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(IntPtr pObject, execute_CallBack_void_CIntersectionSceneQueryListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(IntPtr pObject, getLastResults_CallBack_IntersectionSceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void(IntPtr pObject, clearResults_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32(IntPtr pObject, setQueryMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32(IntPtr pObject, getQueryMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32(IntPtr pObject, setQueryTypeMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32(IntPtr pObject, getQueryTypeMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType(IntPtr pObject, setWorldFragmentType_CallBack_void_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType(IntPtr pObject, getWorldFragmentType_CallBack_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(IntPtr pObject, getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_queryResult_CallBack_ev_bool_CMovableObject_CMovableObject = EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject_CMovableObject);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject_CMovableObject);
						m_queryResult_CallBack_ev_bool_CMovableObject_WorldFragment = EarthView_World_Graphic_CIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject_WorldFragment);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject_WorldFragment);
						m_getListenerPtr_CallBack_CIntersectionSceneQueryInternalListener = EarthView_World_Graphic_CIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Function;
						GC.KeepAlive(m_getListenerPtr_CallBack_CIntersectionSceneQueryInternalListener);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(this.NativeObject, m_getListenerPtr_CallBack_CIntersectionSceneQueryInternalListener);
						m_execute_CallBack_IntersectionSceneQueryResult = EarthView_World_Graphic_CIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Function;
						GC.KeepAlive(m_execute_CallBack_IntersectionSceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult(this.NativeObject, m_execute_CallBack_IntersectionSceneQueryResult);
						m_execute_CallBack_void_CIntersectionSceneQueryListener = EarthView_World_Graphic_CIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Function;
						GC.KeepAlive(m_execute_CallBack_void_CIntersectionSceneQueryListener);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(this.NativeObject, m_execute_CallBack_void_CIntersectionSceneQueryListener);
						m_getLastResults_CallBack_IntersectionSceneQueryResult = EarthView_World_Graphic_CIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Function;
						GC.KeepAlive(m_getLastResults_CallBack_IntersectionSceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(this.NativeObject, m_getLastResults_CallBack_IntersectionSceneQueryResult);
						m_clearResults_CallBack_void = EarthView_World_Graphic_CIntersectionSceneQuery_clearResults_void_Function;
						GC.KeepAlive(m_clearResults_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void(this.NativeObject, m_clearResults_CallBack_void);
						m_setQueryMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32(this.NativeObject, m_setQueryMask_CallBack_void_ev_uint32);
						m_getQueryMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32(this.NativeObject, m_getQueryMask_CallBack_ev_uint32);
						m_setQueryTypeMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryTypeMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32(this.NativeObject, m_setQueryTypeMask_CallBack_void_ev_uint32);
						m_getQueryTypeMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryTypeMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32(this.NativeObject, m_getQueryTypeMask_CallBack_ev_uint32);
						m_setWorldFragmentType_CallBack_void_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Function;
						GC.KeepAlive(m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType(this.NativeObject, m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						m_getWorldFragmentType_CallBack_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Function;
						GC.KeepAlive(m_getWorldFragmentType_CallBack_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType(this.NativeObject, m_getWorldFragmentType_CallBack_WorldFragmentType);
						m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet = EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Function;
						GC.KeepAlive(m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(this.NativeObject, m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
					}
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject first, EarthView.World.Graphic.MovableObject second)
				{
					return base.QueryResult_NoVirtual(first,second);
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject movable, EarthView.World.Graphic.SceneQuery.WorldFragment fragment)
				{
					return base.QueryResult_NoVirtual(movable,fragment);
				}
				public override EarthView.World.Graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener GetListenerPtr()
				{
					return base.GetListenerPtr_NoVirtual();
				}
				public override EarthView.World.Graphic.IntersectionSceneQueryResult Execute()
				{
					return base.Execute_NoVirtual();
				}
				public override EarthView.World.Graphic.IntersectionSceneQueryResult GetLastResults()
				{
					return base.GetLastResults_NoVirtual();
				}
				public override void ClearResults()
				{
					base.ClearResults_NoVirtual();
				}
				public override void SetQueryMask(uint mask)
				{
					base.SetQueryMask_NoVirtual(mask);
				}
				public override uint GetQueryMask()
				{
					return base.GetQueryMask_NoVirtual();
				}
				public override void SetQueryTypeMask(uint mask)
				{
					base.SetQueryTypeMask_NoVirtual(mask);
				}
				public override uint GetQueryTypeMask()
				{
					return base.GetQueryTypeMask_NoVirtual();
				}
				public override void SetWorldFragmentType(EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE wft)
				{
					base.SetWorldFragmentType_NoVirtual(wft);
				}
				public override EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE GetWorldFragmentType()
				{
					return base.GetWorldFragmentType_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneQuery.WorldFragmentTypeSet GetSupportedWorldFragmentTypes()
				{
					return base.GetSupportedWorldFragmentTypes_NoVirtual();
				}
				public static DefaultIntersectionSceneQuery FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultIntersectionSceneQuery obj = baseObj as  DefaultIntersectionSceneQuery;
					if (object.Equals(obj, null))
					{
						obj = new DefaultIntersectionSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultIntersectionSceneQuery");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultIntersectionSceneQueryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultIntersectionSceneQuery emptyInstance = new DefaultIntersectionSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DefaultRaySceneQuery : EarthView.World.Graphic.RaySceneQuery
			{
				public DefaultRaySceneQuery(EarthView.World.Graphic.SceneManager ref_creator) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_creator = new BasePtr(ref_creator);
					list.Add("ref_creator", valueref_creator.PtrVal);
					Create("CDefaultRaySceneQueryProxy", list);
					if (!"EarthView.World.Graphic.DefaultRaySceneQuery".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

				public new void Execute_NoVirtual(EarthView.World.Graphic.RaySceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener(IntPtr pNativeObject, IntPtr listener);

				public override void Execute(EarthView.World.Graphic.RaySceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultRaySceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultRaySceneQuery", new DefaultRaySceneQueryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultRaySceneQueryProxy", new DefaultRaySceneQueryClassFactory());

				public DefaultRaySceneQuery(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(IntPtr pObject, queryResult_CallBack_ev_bool_WorldFragment_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(IntPtr pObject, getListenerPtr_CallBack_CRaySceneQueryInternalListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay(IntPtr pObject, setRay_CallBack_void_CRay pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay(IntPtr pObject, getRay_CallBack_CRay pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(IntPtr pObject, setSortByDistance_CallBack_void_ev_bool_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool(IntPtr pObject, setSortByDistance_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool(IntPtr pObject, getSortByDistance_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16(IntPtr pObject, getMaxResults_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult(IntPtr pObject, execute_CallBack_RaySceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener(IntPtr pObject, execute_CallBack_void_CRaySceneQueryListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult(IntPtr pObject, getLastResults_CallBack_RaySceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void(IntPtr pObject, clearResults_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32(IntPtr pObject, setQueryMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32(IntPtr pObject, getQueryMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32(IntPtr pObject, setQueryTypeMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32(IntPtr pObject, getQueryTypeMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType(IntPtr pObject, setWorldFragmentType_CallBack_void_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType(IntPtr pObject, getWorldFragmentType_CallBack_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(IntPtr pObject, getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_queryResult_CallBack_ev_bool_CMovableObject_Real = EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject_Real);
						m_queryResult_CallBack_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2 = EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2);
						m_queryResult_CallBack_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2 = EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2);
						m_queryResult_CallBack_ev_bool_WorldFragment_Real = EarthView_World_Graphic_CRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_WorldFragment_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(this.NativeObject, m_queryResult_CallBack_ev_bool_WorldFragment_Real);
						m_getListenerPtr_CallBack_CRaySceneQueryInternalListener = EarthView_World_Graphic_CRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Function;
						GC.KeepAlive(m_getListenerPtr_CallBack_CRaySceneQueryInternalListener);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(this.NativeObject, m_getListenerPtr_CallBack_CRaySceneQueryInternalListener);
						m_setRay_CallBack_void_CRay = EarthView_World_Graphic_CRaySceneQuery_setRay_void_CRay_Function;
						GC.KeepAlive(m_setRay_CallBack_void_CRay);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay(this.NativeObject, m_setRay_CallBack_void_CRay);
						m_getRay_CallBack_CRay = EarthView_World_Graphic_CRaySceneQuery_getRay_CRay_Function;
						GC.KeepAlive(m_getRay_CallBack_CRay);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay(this.NativeObject, m_getRay_CallBack_CRay);
						m_setSortByDistance_CallBack_void_ev_bool_ev_uint16 = EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Function;
						GC.KeepAlive(m_setSortByDistance_CallBack_void_ev_bool_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(this.NativeObject, m_setSortByDistance_CallBack_void_ev_bool_ev_uint16);
						m_setSortByDistance_CallBack_void_ev_bool = EarthView_World_Graphic_CRaySceneQuery_setSortByDistance_void_ev_bool_Function;
						GC.KeepAlive(m_setSortByDistance_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool(this.NativeObject, m_setSortByDistance_CallBack_void_ev_bool);
						m_getSortByDistance_CallBack_ev_bool = EarthView_World_Graphic_CRaySceneQuery_getSortByDistance_ev_bool_Function;
						GC.KeepAlive(m_getSortByDistance_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool(this.NativeObject, m_getSortByDistance_CallBack_ev_bool);
						m_getMaxResults_CallBack_ev_uint16 = EarthView_World_Graphic_CRaySceneQuery_getMaxResults_ev_uint16_Function;
						GC.KeepAlive(m_getMaxResults_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16(this.NativeObject, m_getMaxResults_CallBack_ev_uint16);
						m_execute_CallBack_RaySceneQueryResult = EarthView_World_Graphic_CRaySceneQuery_execute_RaySceneQueryResult_Function;
						GC.KeepAlive(m_execute_CallBack_RaySceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult(this.NativeObject, m_execute_CallBack_RaySceneQueryResult);
						m_execute_CallBack_void_CRaySceneQueryListener = EarthView_World_Graphic_CRaySceneQuery_execute_void_CRaySceneQueryListener_Function;
						GC.KeepAlive(m_execute_CallBack_void_CRaySceneQueryListener);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener(this.NativeObject, m_execute_CallBack_void_CRaySceneQueryListener);
						m_getLastResults_CallBack_RaySceneQueryResult = EarthView_World_Graphic_CRaySceneQuery_getLastResults_RaySceneQueryResult_Function;
						GC.KeepAlive(m_getLastResults_CallBack_RaySceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult(this.NativeObject, m_getLastResults_CallBack_RaySceneQueryResult);
						m_clearResults_CallBack_void = EarthView_World_Graphic_CRaySceneQuery_clearResults_void_Function;
						GC.KeepAlive(m_clearResults_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void(this.NativeObject, m_clearResults_CallBack_void);
						m_setQueryMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32(this.NativeObject, m_setQueryMask_CallBack_void_ev_uint32);
						m_getQueryMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32(this.NativeObject, m_getQueryMask_CallBack_ev_uint32);
						m_setQueryTypeMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryTypeMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32(this.NativeObject, m_setQueryTypeMask_CallBack_void_ev_uint32);
						m_getQueryTypeMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryTypeMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32(this.NativeObject, m_getQueryTypeMask_CallBack_ev_uint32);
						m_setWorldFragmentType_CallBack_void_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Function;
						GC.KeepAlive(m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType(this.NativeObject, m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						m_getWorldFragmentType_CallBack_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Function;
						GC.KeepAlive(m_getWorldFragmentType_CallBack_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType(this.NativeObject, m_getWorldFragmentType_CallBack_WorldFragmentType);
						m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet = EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Function;
						GC.KeepAlive(m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(this.NativeObject, m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
					}
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject obj, double distance)
				{
					return base.QueryResult_NoVirtual(obj,distance);
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject obj, double distance, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex, ref EarthView.World.Spatial.Math.Vector3 point, ref EarthView.World.Spatial.Math.Vector2 pixelpoint)
				{
					return base.QueryResult_NoVirtual(obj,distance,objIndex,submeshIndex,instanceIndex,segmentIndex,ref point,ref pixelpoint);
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject obj, double distance, float e, byte c, ushort i, ushort r, ref EarthView.World.Graphic.ColourValue cv, ref EarthView.World.Spatial.Math.Vector3 point, ref EarthView.World.Spatial.Math.Vector2 pixelpoint)
				{
					return base.QueryResult_NoVirtual(obj,distance,e,c,i,r,ref cv,ref point,ref pixelpoint);
				}
				public override bool QueryResult(EarthView.World.Graphic.SceneQuery.WorldFragment fragment, double distance)
				{
					return base.QueryResult_NoVirtual(fragment,distance);
				}
				public override EarthView.World.Graphic.RaySceneQuery.RaySceneQueryInternalListener GetListenerPtr()
				{
					return base.GetListenerPtr_NoVirtual();
				}
				public override void SetRay(EarthView.World.Spatial.Math.Ray ray)
				{
					base.SetRay_NoVirtual(ray);
				}
				public override EarthView.World.Spatial.Math.Ray GetRay()
				{
					return base.GetRay_NoVirtual();
				}
				public override void SetSortByDistance(bool sort, ushort maxresults)
				{
					base.SetSortByDistance_NoVirtual(sort,maxresults);
				}
				public override void SetSortByDistance(bool sort)
				{
					base.SetSortByDistance_NoVirtual(sort);
				}
				public override bool GetSortByDistance()
				{
					return base.GetSortByDistance_NoVirtual();
				}
				public override ushort GetMaxResults()
				{
					return base.GetMaxResults_NoVirtual();
				}
				public override EarthView.World.Graphic.RaySceneQueryResult Execute()
				{
					return base.Execute_NoVirtual();
				}
				public override EarthView.World.Graphic.RaySceneQueryResult GetLastResults()
				{
					return base.GetLastResults_NoVirtual();
				}
				public override void ClearResults()
				{
					base.ClearResults_NoVirtual();
				}
				public override void SetQueryMask(uint mask)
				{
					base.SetQueryMask_NoVirtual(mask);
				}
				public override uint GetQueryMask()
				{
					return base.GetQueryMask_NoVirtual();
				}
				public override void SetQueryTypeMask(uint mask)
				{
					base.SetQueryTypeMask_NoVirtual(mask);
				}
				public override uint GetQueryTypeMask()
				{
					return base.GetQueryTypeMask_NoVirtual();
				}
				public override void SetWorldFragmentType(EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE wft)
				{
					base.SetWorldFragmentType_NoVirtual(wft);
				}
				public override EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE GetWorldFragmentType()
				{
					return base.GetWorldFragmentType_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneQuery.WorldFragmentTypeSet GetSupportedWorldFragmentTypes()
				{
					return base.GetSupportedWorldFragmentTypes_NoVirtual();
				}
				public static DefaultRaySceneQuery FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultRaySceneQuery obj = baseObj as  DefaultRaySceneQuery;
					if (object.Equals(obj, null))
					{
						obj = new DefaultRaySceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultRaySceneQuery");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultRaySceneQueryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultRaySceneQuery emptyInstance = new DefaultRaySceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DefaultSphereSceneQuery : EarthView.World.Graphic.SphereSceneQuery
			{
				public DefaultSphereSceneQuery(EarthView.World.Graphic.SceneManager ref_creator) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_creator = new BasePtr(ref_creator);
					list.Add("ref_creator", valueref_creator.PtrVal);
					Create("CDefaultSphereSceneQueryProxy", list);
					if (!"EarthView.World.Graphic.DefaultSphereSceneQuery".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

				public new void Execute_NoVirtual(EarthView.World.Graphic.SceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener(IntPtr pNativeObject, IntPtr listener);

				public override void Execute(EarthView.World.Graphic.SceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultSphereSceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultSphereSceneQuery", new DefaultSphereSceneQueryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultSphereSceneQueryProxy", new DefaultSphereSceneQueryClassFactory());

				public DefaultSphereSceneQuery(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult(IntPtr pObject, execute_CallBack_SceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener(IntPtr pObject, execute_CallBack_void_CSceneQueryListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult(IntPtr pObject, getLastResults_CallBack_SceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void(IntPtr pObject, clearResults_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject_IntVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment(IntPtr pObject, queryResult_CallBack_ev_bool_WorldFragment pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32(IntPtr pObject, setQueryMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32(IntPtr pObject, getQueryMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32(IntPtr pObject, setQueryTypeMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32(IntPtr pObject, getQueryTypeMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType(IntPtr pObject, setWorldFragmentType_CallBack_void_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType(IntPtr pObject, getWorldFragmentType_CallBack_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(IntPtr pObject, getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_execute_CallBack_SceneQueryResult = EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Function;
						GC.KeepAlive(m_execute_CallBack_SceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult(this.NativeObject, m_execute_CallBack_SceneQueryResult);
						m_execute_CallBack_void_CSceneQueryListener = EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Function;
						GC.KeepAlive(m_execute_CallBack_void_CSceneQueryListener);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener(this.NativeObject, m_execute_CallBack_void_CSceneQueryListener);
						m_getLastResults_CallBack_SceneQueryResult = EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Function;
						GC.KeepAlive(m_getLastResults_CallBack_SceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult(this.NativeObject, m_getLastResults_CallBack_SceneQueryResult);
						m_clearResults_CallBack_void = EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Function;
						GC.KeepAlive(m_clearResults_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void(this.NativeObject, m_clearResults_CallBack_void);
						m_queryResult_CallBack_ev_bool_CMovableObject = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject);
						m_queryResult_CallBack_ev_bool_CMovableObject_IntVector = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject_IntVector);
						m_queryResult_CallBack_ev_bool_WorldFragment = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_WorldFragment);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment(this.NativeObject, m_queryResult_CallBack_ev_bool_WorldFragment);
						m_setQueryMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32(this.NativeObject, m_setQueryMask_CallBack_void_ev_uint32);
						m_getQueryMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32(this.NativeObject, m_getQueryMask_CallBack_ev_uint32);
						m_setQueryTypeMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryTypeMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32(this.NativeObject, m_setQueryTypeMask_CallBack_void_ev_uint32);
						m_getQueryTypeMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryTypeMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32(this.NativeObject, m_getQueryTypeMask_CallBack_ev_uint32);
						m_setWorldFragmentType_CallBack_void_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Function;
						GC.KeepAlive(m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType(this.NativeObject, m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						m_getWorldFragmentType_CallBack_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Function;
						GC.KeepAlive(m_getWorldFragmentType_CallBack_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType(this.NativeObject, m_getWorldFragmentType_CallBack_WorldFragmentType);
						m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet = EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Function;
						GC.KeepAlive(m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(this.NativeObject, m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
					}
				}
				public override EarthView.World.Graphic.SceneQueryResult Execute()
				{
					return base.Execute_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneQueryResult GetLastResults()
				{
					return base.GetLastResults_NoVirtual();
				}
				public override void ClearResults()
				{
					base.ClearResults_NoVirtual();
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject first)
				{
					return base.QueryResult_NoVirtual(first);
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject first, ref EarthView.World.Core.IntVector indexVec)
				{
					return base.QueryResult_NoVirtual(first,ref indexVec);
				}
				public override bool QueryResult(EarthView.World.Graphic.SceneQuery.WorldFragment fragment)
				{
					return base.QueryResult_NoVirtual(fragment);
				}
				public override void SetQueryMask(uint mask)
				{
					base.SetQueryMask_NoVirtual(mask);
				}
				public override uint GetQueryMask()
				{
					return base.GetQueryMask_NoVirtual();
				}
				public override void SetQueryTypeMask(uint mask)
				{
					base.SetQueryTypeMask_NoVirtual(mask);
				}
				public override uint GetQueryTypeMask()
				{
					return base.GetQueryTypeMask_NoVirtual();
				}
				public override void SetWorldFragmentType(EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE wft)
				{
					base.SetWorldFragmentType_NoVirtual(wft);
				}
				public override EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE GetWorldFragmentType()
				{
					return base.GetWorldFragmentType_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneQuery.WorldFragmentTypeSet GetSupportedWorldFragmentTypes()
				{
					return base.GetSupportedWorldFragmentTypes_NoVirtual();
				}
				public static DefaultSphereSceneQuery FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultSphereSceneQuery obj = baseObj as  DefaultSphereSceneQuery;
					if (object.Equals(obj, null))
					{
						obj = new DefaultSphereSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultSphereSceneQuery");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultSphereSceneQueryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultSphereSceneQuery emptyInstance = new DefaultSphereSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DefaultPlaneBoundedVolumeListSceneQuery : EarthView.World.Graphic.PlaneBoundedVolumeListSceneQuery
			{
				public DefaultPlaneBoundedVolumeListSceneQuery(EarthView.World.Graphic.SceneManager ref_creator) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_creator = new BasePtr(ref_creator);
					list.Add("ref_creator", valueref_creator.PtrVal);
					Create("CDefaultPlaneBoundedVolumeListSceneQueryProxy", list);
					if (!"EarthView.World.Graphic.DefaultPlaneBoundedVolumeListSceneQuery".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

				public new void Execute_NoVirtual(EarthView.World.Graphic.SceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(IntPtr pNativeObject, IntPtr listener);

				public override void Execute(EarthView.World.Graphic.SceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultPlaneBoundedVolumeListSceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery", new DefaultPlaneBoundedVolumeListSceneQueryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQueryProxy", new DefaultPlaneBoundedVolumeListSceneQueryClassFactory());

				public DefaultPlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult(IntPtr pObject, execute_CallBack_SceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(IntPtr pObject, execute_CallBack_void_CSceneQueryListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult(IntPtr pObject, getLastResults_CallBack_SceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void(IntPtr pObject, clearResults_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject_IntVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment(IntPtr pObject, queryResult_CallBack_ev_bool_WorldFragment pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32(IntPtr pObject, setQueryMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32(IntPtr pObject, getQueryMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32(IntPtr pObject, setQueryTypeMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32(IntPtr pObject, getQueryTypeMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType(IntPtr pObject, setWorldFragmentType_CallBack_void_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType(IntPtr pObject, getWorldFragmentType_CallBack_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(IntPtr pObject, getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_execute_CallBack_SceneQueryResult = EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Function;
						GC.KeepAlive(m_execute_CallBack_SceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult(this.NativeObject, m_execute_CallBack_SceneQueryResult);
						m_execute_CallBack_void_CSceneQueryListener = EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Function;
						GC.KeepAlive(m_execute_CallBack_void_CSceneQueryListener);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(this.NativeObject, m_execute_CallBack_void_CSceneQueryListener);
						m_getLastResults_CallBack_SceneQueryResult = EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Function;
						GC.KeepAlive(m_getLastResults_CallBack_SceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult(this.NativeObject, m_getLastResults_CallBack_SceneQueryResult);
						m_clearResults_CallBack_void = EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Function;
						GC.KeepAlive(m_clearResults_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void(this.NativeObject, m_clearResults_CallBack_void);
						m_queryResult_CallBack_ev_bool_CMovableObject = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject);
						m_queryResult_CallBack_ev_bool_CMovableObject_IntVector = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject_IntVector);
						m_queryResult_CallBack_ev_bool_WorldFragment = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_WorldFragment);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment(this.NativeObject, m_queryResult_CallBack_ev_bool_WorldFragment);
						m_setQueryMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32(this.NativeObject, m_setQueryMask_CallBack_void_ev_uint32);
						m_getQueryMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32(this.NativeObject, m_getQueryMask_CallBack_ev_uint32);
						m_setQueryTypeMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryTypeMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32(this.NativeObject, m_setQueryTypeMask_CallBack_void_ev_uint32);
						m_getQueryTypeMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryTypeMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32(this.NativeObject, m_getQueryTypeMask_CallBack_ev_uint32);
						m_setWorldFragmentType_CallBack_void_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Function;
						GC.KeepAlive(m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType(this.NativeObject, m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						m_getWorldFragmentType_CallBack_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Function;
						GC.KeepAlive(m_getWorldFragmentType_CallBack_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType(this.NativeObject, m_getWorldFragmentType_CallBack_WorldFragmentType);
						m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet = EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Function;
						GC.KeepAlive(m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(this.NativeObject, m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
					}
				}
				public override EarthView.World.Graphic.SceneQueryResult Execute()
				{
					return base.Execute_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneQueryResult GetLastResults()
				{
					return base.GetLastResults_NoVirtual();
				}
				public override void ClearResults()
				{
					base.ClearResults_NoVirtual();
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject first)
				{
					return base.QueryResult_NoVirtual(first);
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject first, ref EarthView.World.Core.IntVector indexVec)
				{
					return base.QueryResult_NoVirtual(first,ref indexVec);
				}
				public override bool QueryResult(EarthView.World.Graphic.SceneQuery.WorldFragment fragment)
				{
					return base.QueryResult_NoVirtual(fragment);
				}
				public override void SetQueryMask(uint mask)
				{
					base.SetQueryMask_NoVirtual(mask);
				}
				public override uint GetQueryMask()
				{
					return base.GetQueryMask_NoVirtual();
				}
				public override void SetQueryTypeMask(uint mask)
				{
					base.SetQueryTypeMask_NoVirtual(mask);
				}
				public override uint GetQueryTypeMask()
				{
					return base.GetQueryTypeMask_NoVirtual();
				}
				public override void SetWorldFragmentType(EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE wft)
				{
					base.SetWorldFragmentType_NoVirtual(wft);
				}
				public override EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE GetWorldFragmentType()
				{
					return base.GetWorldFragmentType_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneQuery.WorldFragmentTypeSet GetSupportedWorldFragmentTypes()
				{
					return base.GetSupportedWorldFragmentTypes_NoVirtual();
				}
				public static DefaultPlaneBoundedVolumeListSceneQuery FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultPlaneBoundedVolumeListSceneQuery obj = baseObj as  DefaultPlaneBoundedVolumeListSceneQuery;
					if (object.Equals(obj, null))
					{
						obj = new DefaultPlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultPlaneBoundedVolumeListSceneQuery");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultPlaneBoundedVolumeListSceneQueryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultPlaneBoundedVolumeListSceneQuery emptyInstance = new DefaultPlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DefaultAxisAlignedBoxSceneQuery : EarthView.World.Graphic.AxisAlignedBoxSceneQuery
			{
				public DefaultAxisAlignedBoxSceneQuery(EarthView.World.Graphic.SceneManager ref_creator) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_creator = new BasePtr(ref_creator);
					list.Add("ref_creator", valueref_creator.PtrVal);
					Create("CDefaultAxisAlignedBoxSceneQueryProxy", list);
					if (!"EarthView.World.Graphic.DefaultAxisAlignedBoxSceneQuery".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

				public new void Execute_NoVirtual(EarthView.World.Graphic.SceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(IntPtr pNativeObject, IntPtr listener);

				public override void Execute(EarthView.World.Graphic.SceneQueryListener listener)
				{
					EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultAxisAlignedBoxSceneQuery = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery", new DefaultAxisAlignedBoxSceneQueryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQueryProxy", new DefaultAxisAlignedBoxSceneQueryClassFactory());

				public DefaultAxisAlignedBoxSceneQuery(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult(IntPtr pObject, execute_CallBack_SceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(IntPtr pObject, execute_CallBack_void_CSceneQueryListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult(IntPtr pObject, getLastResults_CallBack_SceneQueryResult pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void(IntPtr pObject, clearResults_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(IntPtr pObject, queryResult_CallBack_ev_bool_CMovableObject_IntVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment(IntPtr pObject, queryResult_CallBack_ev_bool_WorldFragment pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32(IntPtr pObject, setQueryMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32(IntPtr pObject, getQueryMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32(IntPtr pObject, setQueryTypeMask_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32(IntPtr pObject, getQueryTypeMask_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType(IntPtr pObject, setWorldFragmentType_CallBack_void_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType(IntPtr pObject, getWorldFragmentType_CallBack_WorldFragmentType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(IntPtr pObject, getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_execute_CallBack_SceneQueryResult = EarthView_World_Graphic_CRegionSceneQuery_execute_SceneQueryResult_Function;
						GC.KeepAlive(m_execute_CallBack_SceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult(this.NativeObject, m_execute_CallBack_SceneQueryResult);
						m_execute_CallBack_void_CSceneQueryListener = EarthView_World_Graphic_CRegionSceneQuery_execute_void_CSceneQueryListener_Function;
						GC.KeepAlive(m_execute_CallBack_void_CSceneQueryListener);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(this.NativeObject, m_execute_CallBack_void_CSceneQueryListener);
						m_getLastResults_CallBack_SceneQueryResult = EarthView_World_Graphic_CRegionSceneQuery_getLastResults_SceneQueryResult_Function;
						GC.KeepAlive(m_getLastResults_CallBack_SceneQueryResult);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult(this.NativeObject, m_getLastResults_CallBack_SceneQueryResult);
						m_clearResults_CallBack_void = EarthView_World_Graphic_CRegionSceneQuery_clearResults_void_Function;
						GC.KeepAlive(m_clearResults_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void(this.NativeObject, m_clearResults_CallBack_void);
						m_queryResult_CallBack_ev_bool_CMovableObject = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject);
						m_queryResult_CallBack_ev_bool_CMovableObject_IntVector = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_CMovableObject_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(this.NativeObject, m_queryResult_CallBack_ev_bool_CMovableObject_IntVector);
						m_queryResult_CallBack_ev_bool_WorldFragment = EarthView_World_Graphic_CRegionSceneQuery_queryResult_ev_bool_WorldFragment_Function;
						GC.KeepAlive(m_queryResult_CallBack_ev_bool_WorldFragment);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment(this.NativeObject, m_queryResult_CallBack_ev_bool_WorldFragment);
						m_setQueryMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32(this.NativeObject, m_setQueryMask_CallBack_void_ev_uint32);
						m_getQueryMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32(this.NativeObject, m_getQueryMask_CallBack_ev_uint32);
						m_setQueryTypeMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CSceneQuery_setQueryTypeMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryTypeMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32(this.NativeObject, m_setQueryTypeMask_CallBack_void_ev_uint32);
						m_getQueryTypeMask_CallBack_ev_uint32 = EarthView_World_Graphic_CSceneQuery_getQueryTypeMask_ev_uint32_Function;
						GC.KeepAlive(m_getQueryTypeMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32(this.NativeObject, m_getQueryTypeMask_CallBack_ev_uint32);
						m_setWorldFragmentType_CallBack_void_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_setWorldFragmentType_void_WorldFragmentType_Function;
						GC.KeepAlive(m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType(this.NativeObject, m_setWorldFragmentType_CallBack_void_WorldFragmentType);
						m_getWorldFragmentType_CallBack_WorldFragmentType = EarthView_World_Graphic_CSceneQuery_getWorldFragmentType_WorldFragmentType_Function;
						GC.KeepAlive(m_getWorldFragmentType_CallBack_WorldFragmentType);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType(this.NativeObject, m_getWorldFragmentType_CallBack_WorldFragmentType);
						m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet = EarthView_World_Graphic_CSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Function;
						GC.KeepAlive(m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(this.NativeObject, m_getSupportedWorldFragmentTypes_CallBack_WorldFragmentTypeSet);
					}
				}
				public override EarthView.World.Graphic.SceneQueryResult Execute()
				{
					return base.Execute_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneQueryResult GetLastResults()
				{
					return base.GetLastResults_NoVirtual();
				}
				public override void ClearResults()
				{
					base.ClearResults_NoVirtual();
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject first)
				{
					return base.QueryResult_NoVirtual(first);
				}
				public override bool QueryResult(EarthView.World.Graphic.MovableObject first, ref EarthView.World.Core.IntVector indexVec)
				{
					return base.QueryResult_NoVirtual(first,ref indexVec);
				}
				public override bool QueryResult(EarthView.World.Graphic.SceneQuery.WorldFragment fragment)
				{
					return base.QueryResult_NoVirtual(fragment);
				}
				public override void SetQueryMask(uint mask)
				{
					base.SetQueryMask_NoVirtual(mask);
				}
				public override uint GetQueryMask()
				{
					return base.GetQueryMask_NoVirtual();
				}
				public override void SetQueryTypeMask(uint mask)
				{
					base.SetQueryTypeMask_NoVirtual(mask);
				}
				public override uint GetQueryTypeMask()
				{
					return base.GetQueryTypeMask_NoVirtual();
				}
				public override void SetWorldFragmentType(EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE wft)
				{
					base.SetWorldFragmentType_NoVirtual(wft);
				}
				public override EarthView.World.Graphic.SceneQuery.WORLDFRAGMENTTYPE GetWorldFragmentType()
				{
					return base.GetWorldFragmentType_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneQuery.WorldFragmentTypeSet GetSupportedWorldFragmentTypes()
				{
					return base.GetSupportedWorldFragmentTypes_NoVirtual();
				}
				public static DefaultAxisAlignedBoxSceneQuery FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultAxisAlignedBoxSceneQuery obj = baseObj as  DefaultAxisAlignedBoxSceneQuery;
					if (object.Equals(obj, null))
					{
						obj = new DefaultAxisAlignedBoxSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultAxisAlignedBoxSceneQuery");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultAxisAlignedBoxSceneQueryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultAxisAlignedBoxSceneQuery emptyInstance = new DefaultAxisAlignedBoxSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
