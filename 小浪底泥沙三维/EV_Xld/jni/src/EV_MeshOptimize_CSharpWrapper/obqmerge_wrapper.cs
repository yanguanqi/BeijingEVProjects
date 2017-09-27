/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace MeshOptimize
	{
		public class ObqQuadTreeParam : EarthView.World.Core.BaseObject
		{
			public ObqQuadTreeParam() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CObqQuadTreeParam",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqQuadTreeParam_setObqCountLowerLimit_void_ev_uint32(IntPtr pNativeObject, uint obqCountLowerLimit);

			public void SetObqCountLowerLimit(uint obqCountLowerLimit)
			{
				EarthView_MeshOptimize_CObqQuadTreeParam_setObqCountLowerLimit_void_ev_uint32(this.NativeObject, obqCountLowerLimit);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern uint EarthView_MeshOptimize_CObqQuadTreeParam_getObqCountLowerLimit_ev_uint32(IntPtr pNativeObject);

			public uint GetObqCountLowerLimit()
			{
				uint ret=EarthView_MeshOptimize_CObqQuadTreeParam_getObqCountLowerLimit_ev_uint32(this.NativeObject);
				
				return ret;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqQuadTreeParam_setMinDivideBoundsSize_void_ev_real32(IntPtr pNativeObject, float minDivideSize);

			public void SetMinDivideBoundsSize(float minDivideSize)
			{
				EarthView_MeshOptimize_CObqQuadTreeParam_setMinDivideBoundsSize_void_ev_real32(this.NativeObject, minDivideSize);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern float EarthView_MeshOptimize_CObqQuadTreeParam_getMinDivideBoundsSize_ev_real32(IntPtr pNativeObject);

			public float GetMinDivideBoundsSize()
			{
				float ret=EarthView_MeshOptimize_CObqQuadTreeParam_getMinDivideBoundsSize_ev_real32(this.NativeObject);
				
				return ret;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqQuadTreeParam_setMergeName_void_EVString(IntPtr pNativeObject, string mergeName);

			public void SetMergeName(string mergeName)
			{
				EarthView_MeshOptimize_CObqQuadTreeParam_setMergeName_void_EVString(this.NativeObject, mergeName);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CObqQuadTreeParam_getMergeName_EVString(IntPtr pNativeObject);

			public string GetMergeName()
			{
				IntPtr __ptr = EarthView_MeshOptimize_CObqQuadTreeParam_getMergeName_EVString(this.NativeObject);
				
				string ret = Marshal.PtrToStringAnsi(__ptr);
				ClassFactory.FreeString(ref __ptr);
				return ret;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CObqQuadTreeParam_getEncode7z_ev_bool(IntPtr pNativeObject);

			public bool GetEncode7z()
			{
				byte ret=EarthView_MeshOptimize_CObqQuadTreeParam_getEncode7z_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqQuadTreeParam_setTileVisibleMultiplier_void_ev_real32(IntPtr pNativeObject, float multiplier);

			public void SetTileVisibleMultiplier(float multiplier)
			{
				EarthView_MeshOptimize_CObqQuadTreeParam_setTileVisibleMultiplier_void_ev_real32(this.NativeObject, multiplier);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern float EarthView_MeshOptimize_CObqQuadTreeParam_getTileVisibleMultiplier_ev_real32(IntPtr pNativeObject);

			public float GetTileVisibleMultiplier()
			{
				float ret=EarthView_MeshOptimize_CObqQuadTreeParam_getTileVisibleMultiplier_ev_real32(this.NativeObject);
				
				return ret;
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqQuadTreeParam = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqQuadTreeParam", new ObqQuadTreeParamClassFactory());

			public ObqQuadTreeParam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static ObqQuadTreeParam FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				ObqQuadTreeParam obj = baseObj as  ObqQuadTreeParam;
				if (object.Equals(obj, null))
				{
					obj = new ObqQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CObqQuadTreeParam");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class ObqQuadTreeParamClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				ObqQuadTreeParam emptyInstance = new ObqQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class ObqMergeListener : EarthView.World.Core.BaseObject
		{
			public ObqMergeListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CObqMergeListenerProxy", null);
				if (!"EarthView.MeshOptimize.ObqMergeListener".Equals(((Object)this).GetType().ToString()))
				{
					this.SetCustomExtend(true);
				}
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}
			[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
			protected delegate void processMsg_CallBack_void_EVString(ref IntPtr msg);

			protected processMsg_CallBack_void_EVString m_processMsg_CallBack_void_EVString;

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_NoVirtual(IntPtr pNativeObject, string msg);

			public virtual void ProcessMsg_NoVirtual(string msg)
			{
				EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_NoVirtual(this.NativeObject, msg);
				
			}

			protected  void EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Function(ref IntPtr msg)
			{
				string strmsg= Marshal.PtrToStringAnsi(msg);
				ClassFactory.FreeString(ref msg);
				
				ProcessMsg(strmsg);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString(IntPtr pNativeObject, string msg);

			public virtual void ProcessMsg(string msg)
			{
				EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString(this.NativeObject, msg);
				
			}

			[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
			protected delegate void paused_CallBack_void();

			protected paused_CallBack_void m_paused_CallBack_void;

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeListener_paused_void_NoVirtual(IntPtr pNativeObject);

			public virtual void Paused_NoVirtual()
			{
				EarthView_MeshOptimize_CObqMergeListener_paused_void_NoVirtual(this.NativeObject);
				
			}

			protected  void EarthView_MeshOptimize_CObqMergeListener_paused_void_Function()
			{
				Paused();
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeListener_paused_void(IntPtr pNativeObject);

			public virtual void Paused()
			{
				EarthView_MeshOptimize_CObqMergeListener_paused_void(this.NativeObject);
				
			}

			[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
			protected delegate void finished_CallBack_void();

			protected finished_CallBack_void m_finished_CallBack_void;

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeListener_finished_void_NoVirtual(IntPtr pNativeObject);

			public virtual void Finished_NoVirtual()
			{
				EarthView_MeshOptimize_CObqMergeListener_finished_void_NoVirtual(this.NativeObject);
				
			}

			protected  void EarthView_MeshOptimize_CObqMergeListener_finished_void_Function()
			{
				Finished();
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeListener_finished_void(IntPtr pNativeObject);

			public virtual void Finished()
			{
				EarthView_MeshOptimize_CObqMergeListener_finished_void(this.NativeObject);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqMergeListener = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMergeListener", new ObqMergeListenerClassFactory());

			private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMergeListenerProxy", new ObqMergeListenerClassFactory());

			public ObqMergeListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			protected static extern void EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString(IntPtr pObject, processMsg_CallBack_void_EVString pCallback);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			protected static extern void EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_paused_void(IntPtr pObject, paused_CallBack_void pCallback);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			protected static extern void EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_finished_void(IntPtr pObject, finished_CallBack_void pCallback);

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
					m_processMsg_CallBack_void_EVString = EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Function;
					GC.KeepAlive(m_processMsg_CallBack_void_EVString);
					EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString(this.NativeObject, m_processMsg_CallBack_void_EVString);
					m_paused_CallBack_void = EarthView_MeshOptimize_CObqMergeListener_paused_void_Function;
					GC.KeepAlive(m_paused_CallBack_void);
					EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_paused_void(this.NativeObject, m_paused_CallBack_void);
					m_finished_CallBack_void = EarthView_MeshOptimize_CObqMergeListener_finished_void_Function;
					GC.KeepAlive(m_finished_CallBack_void);
					EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_finished_void(this.NativeObject, m_finished_CallBack_void);
				}
			}
			public static ObqMergeListener FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				ObqMergeListener obj = baseObj as  ObqMergeListener;
				if (object.Equals(obj, null))
				{
					obj = new ObqMergeListener(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CObqMergeListener");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class ObqMergeListenerClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				ObqMergeListener emptyInstance = new ObqMergeListener(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class ObqMergeInstanceData : BaseObject
		{
			public ObqMergeInstanceData() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CObqMergeInstanceData",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern double Get_EarthView_MeshOptimize_CObqMergeInstanceData_Lat(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CObqMergeInstanceData_Lat( IntPtr pObject, double value );

			public 			double Lat
			{
				get
				{
					double ret=Get_EarthView_MeshOptimize_CObqMergeInstanceData_Lat(this.NativeObject);
					
					return ret;
					
				}

				set
				{
					Set_EarthView_MeshOptimize_CObqMergeInstanceData_Lat(this.NativeObject,value);
				}
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern double Get_EarthView_MeshOptimize_CObqMergeInstanceData_Lon(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CObqMergeInstanceData_Lon( IntPtr pObject, double value );

			public 			double Lon
			{
				get
				{
					double ret=Get_EarthView_MeshOptimize_CObqMergeInstanceData_Lon(this.NativeObject);
					
					return ret;
					
				}

				set
				{
					Set_EarthView_MeshOptimize_CObqMergeInstanceData_Lon(this.NativeObject,value);
				}
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern double Get_EarthView_MeshOptimize_CObqMergeInstanceData_Alt(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CObqMergeInstanceData_Alt( IntPtr pObject, double value );

			public 			double Alt
			{
				get
				{
					double ret=Get_EarthView_MeshOptimize_CObqMergeInstanceData_Alt(this.NativeObject);
					
					return ret;
					
				}

				set
				{
					Set_EarthView_MeshOptimize_CObqMergeInstanceData_Alt(this.NativeObject,value);
				}
			}

			private EarthView.World.Spatial.Math.Matrix4 LocalTransField;
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr Get_EarthView_MeshOptimize_CObqMergeInstanceData_LocalTrans(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CObqMergeInstanceData_LocalTrans( IntPtr pObject, IntPtr value );

			public 			EarthView.World.Spatial.Math.Matrix4 LocalTrans
			{
				get
				{
					IntPtr __ptr = Get_EarthView_MeshOptimize_CObqMergeInstanceData_LocalTrans(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					if(!object.Equals(LocalTransField, null)){
						LocalTransField.NativeObject = __ptr;
						return LocalTransField;
					}
					EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMatrix4");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csObj.BindNativeObject(__ptr, "CMatrix4");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				set
				{
					LocalTransField = value;
					Set_EarthView_MeshOptimize_CObqMergeInstanceData_LocalTrans( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
				}
			}

			private string MeshxFilePathField;
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr Get_EarthView_MeshOptimize_CObqMergeInstanceData_MeshxFilePath(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CObqMergeInstanceData_MeshxFilePath( IntPtr pObject, string value );

			public 			string MeshxFilePath
			{
				get
				{
					IntPtr __ptr = Get_EarthView_MeshOptimize_CObqMergeInstanceData_MeshxFilePath(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				set
				{
					MeshxFilePathField = value;
					Set_EarthView_MeshOptimize_CObqMergeInstanceData_MeshxFilePath( this.NativeObject,value );
				}
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern uint Get_EarthView_MeshOptimize_CObqMergeInstanceData_EVID(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CObqMergeInstanceData_EVID( IntPtr pObject, uint value );

			public 			uint EVID
			{
				get
				{
					uint ret=Get_EarthView_MeshOptimize_CObqMergeInstanceData_EVID(this.NativeObject);
					
					return ret;
					
				}

				set
				{
					Set_EarthView_MeshOptimize_CObqMergeInstanceData_EVID(this.NativeObject,value);
				}
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqMergeInstanceData = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMergeInstanceData", new ObqMergeInstanceDataClassFactory());

			public ObqMergeInstanceData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static ObqMergeInstanceData FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				ObqMergeInstanceData obj = baseObj as  ObqMergeInstanceData;
				if (object.Equals(obj, null))
				{
					obj = new ObqMergeInstanceData(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CObqMergeInstanceData");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class ObqMergeInstanceDataClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				ObqMergeInstanceData emptyInstance = new ObqMergeInstanceData(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class ObqMergeInstanceDataList : EarthView.World.Core.AllocatedObject
		{
			public ObqMergeInstanceDataList() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CObqMergeInstanceDataList",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeInstanceDataList_push_back_void_CObqMergeInstanceData(IntPtr pNativeObject, IntPtr t);

			public void Push_back(EarthView.MeshOptimize.ObqMergeInstanceData t)
			{
				EarthView_MeshOptimize_CObqMergeInstanceDataList_push_back_void_CObqMergeInstanceData(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeInstanceDataList_push_front_void_CObqMergeInstanceData(IntPtr pNativeObject, IntPtr t);

			public void Push_front(EarthView.MeshOptimize.ObqMergeInstanceData t)
			{
				EarthView_MeshOptimize_CObqMergeInstanceDataList_push_front_void_CObqMergeInstanceData(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeInstanceDataList_pop_back_void(IntPtr pNativeObject);

			public void Pop_back()
			{
				EarthView_MeshOptimize_CObqMergeInstanceDataList_pop_back_void(this.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeInstanceDataList_pop_front_void(IntPtr pNativeObject);

			public void Pop_front()
			{
				EarthView_MeshOptimize_CObqMergeInstanceDataList_pop_front_void(this.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CObqMergeInstanceDataList_front_CObqMergeInstanceData(IntPtr pNativeObject);

			public EarthView.MeshOptimize.ObqMergeInstanceData Front()
			{
				IntPtr __ptr = EarthView_MeshOptimize_CObqMergeInstanceDataList_front_CObqMergeInstanceData(this.NativeObject);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.ObqMergeInstanceData csObj = new EarthView.MeshOptimize.ObqMergeInstanceData(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CObqMergeInstanceData");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.ObqMergeInstanceData;
					csObj.BindNativeObject(__ptr, "CObqMergeInstanceData");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CObqMergeInstanceDataList_back_CObqMergeInstanceData(IntPtr pNativeObject);

			public EarthView.MeshOptimize.ObqMergeInstanceData Back()
			{
				IntPtr __ptr = EarthView_MeshOptimize_CObqMergeInstanceDataList_back_CObqMergeInstanceData(this.NativeObject);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.ObqMergeInstanceData csObj = new EarthView.MeshOptimize.ObqMergeInstanceData(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CObqMergeInstanceData");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.ObqMergeInstanceData;
					csObj.BindNativeObject(__ptr, "CObqMergeInstanceData");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CObqMergeInstanceDataList_at_CObqMergeInstanceData_ev_uint32(IntPtr pNativeObject, uint pos);

			public EarthView.MeshOptimize.ObqMergeInstanceData At(uint pos)
			{
				IntPtr __ptr = EarthView_MeshOptimize_CObqMergeInstanceDataList_at_CObqMergeInstanceData_ev_uint32(this.NativeObject, pos);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.ObqMergeInstanceData csObj = new EarthView.MeshOptimize.ObqMergeInstanceData(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CObqMergeInstanceData");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.ObqMergeInstanceData;
					csObj.BindNativeObject(__ptr, "CObqMergeInstanceData");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeInstanceDataList_insert_void_ev_uint32_CObqMergeInstanceData(IntPtr pNativeObject, uint pos, IntPtr t);

			public void Insert(uint pos, EarthView.MeshOptimize.ObqMergeInstanceData t)
			{
				EarthView_MeshOptimize_CObqMergeInstanceDataList_insert_void_ev_uint32_CObqMergeInstanceData(this.NativeObject, pos, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeInstanceDataList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

			public void Remove(ulong pos)
			{
				EarthView_MeshOptimize_CObqMergeInstanceDataList_remove_void_ev_size_t(this.NativeObject, pos);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CObqMergeInstanceDataList_empty_ev_bool(IntPtr pNativeObject);

			public bool Empty()
			{
				byte ret=EarthView_MeshOptimize_CObqMergeInstanceDataList_empty_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern ulong EarthView_MeshOptimize_CObqMergeInstanceDataList_size_ev_size_t(IntPtr pNativeObject);

			public ulong Size()
			{
				ulong ret=EarthView_MeshOptimize_CObqMergeInstanceDataList_size_ev_size_t(this.NativeObject);
				
				return ret;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeInstanceDataList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

			public void Resize(ulong newSize)
			{
				EarthView_MeshOptimize_CObqMergeInstanceDataList_resize_void_ev_size_t(this.NativeObject, newSize);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMergeInstanceDataList_clear_void(IntPtr pNativeObject);

			public void Clear()
			{
				EarthView_MeshOptimize_CObqMergeInstanceDataList_clear_void(this.NativeObject);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqMergeInstanceDataList = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMergeInstanceDataList", new ObqMergeInstanceDataListClassFactory());

			public ObqMergeInstanceDataList(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static ObqMergeInstanceDataList FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				ObqMergeInstanceDataList obj = baseObj as  ObqMergeInstanceDataList;
				if (object.Equals(obj, null))
				{
					obj = new ObqMergeInstanceDataList(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CObqMergeInstanceDataList");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class ObqMergeInstanceDataListClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				ObqMergeInstanceDataList emptyInstance = new ObqMergeInstanceDataList(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class ObqMerge : EarthView.World.Core.BaseObject
		{
			public ObqMerge() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CObqMerge",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMerge_merge_void_EVString_OBQRecordInfoList_ev_bool(IntPtr pNativeObject, string srcFolder, IntPtr obqRecordInfoList, byte isAsyn);

			public void Merge(string srcFolder, EarthView.World.Spatial3D.ModelManager.Obqrecordinfolist obqRecordInfoList, bool isAsyn)
			{
				EarthView_MeshOptimize_CObqMerge_merge_void_EVString_OBQRecordInfoList_ev_bool(this.NativeObject, srcFolder, object.Equals(obqRecordInfoList, null) ? IntPtr.Zero : obqRecordInfoList.NativeObject, Convert.ToByte(isAsyn));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMerge_merge_void_EVString_CObqMergeInstanceDataList_ev_bool(IntPtr pNativeObject, string dstFolder, IntPtr dataList, byte isAsyn);

			public void Merge(string dstFolder, EarthView.MeshOptimize.ObqMergeInstanceDataList dataList, bool isAsyn)
			{
				EarthView_MeshOptimize_CObqMerge_merge_void_EVString_CObqMergeInstanceDataList_ev_bool(this.NativeObject, dstFolder, object.Equals(dataList, null) ? IntPtr.Zero : dataList.NativeObject, Convert.ToByte(isAsyn));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMerge_merge_void_CStringArray_EVString_EVString_ev_bool(IntPtr pNativeObject, IntPtr folders, string desFolder, string mergeName, byte isAsyn);

			public void Merge(ref EarthView.World.Core.StringArray folders, string desFolder, string mergeName, bool isAsyn)
			{
				EarthView_MeshOptimize_CObqMerge_merge_void_CStringArray_EVString_EVString_ev_bool(this.NativeObject, object.Equals(folders, null) ? IntPtr.Zero : folders.NativeObject, desFolder, mergeName, Convert.ToByte(isAsyn));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMerge_setParam_void_CObqQuadTreeParam(IntPtr pNativeObject, IntPtr param);

			public void SetParam(ref EarthView.MeshOptimize.ObqQuadTreeParam param)
			{
				EarthView_MeshOptimize_CObqMerge_setParam_void_CObqQuadTreeParam(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CObqMerge_getParam_CObqQuadTreeParam(IntPtr pNativeObject);

			public EarthView.MeshOptimize.ObqQuadTreeParam GetParam()
			{
				IntPtr __ptr = EarthView_MeshOptimize_CObqMerge_getParam_CObqQuadTreeParam(this.NativeObject);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.ObqQuadTreeParam csObj = new EarthView.MeshOptimize.ObqQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CObqQuadTreeParam");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.ObqQuadTreeParam;
					csObj.BindNativeObject(__ptr, "CObqQuadTreeParam");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CObqMerge_getCopyParam_CObqQuadTreeParam(IntPtr pNativeObject);

			public EarthView.MeshOptimize.ObqQuadTreeParam GetCopyParam()
			{
				IntPtr __ptr = EarthView_MeshOptimize_CObqMerge_getCopyParam_CObqQuadTreeParam(this.NativeObject);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.ObqQuadTreeParam csObj = new EarthView.MeshOptimize.ObqQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CObqQuadTreeParam");
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.ObqQuadTreeParam;
					csObj.BindNativeObject(__ptr, "CObqQuadTreeParam");
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMerge_addListener_void_CObqMergeListener(IntPtr pNativeObject, IntPtr observer);

			public void AddListener(EarthView.MeshOptimize.ObqMergeListener observer)
			{
				EarthView_MeshOptimize_CObqMerge_addListener_void_CObqMergeListener(this.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMerge_removeListener_void_CObqMergeListener(IntPtr pNativeObject, IntPtr observer);

			public void RemoveListener(EarthView.MeshOptimize.ObqMergeListener observer)
			{
				EarthView_MeshOptimize_CObqMerge_removeListener_void_CObqMergeListener(this.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CObqMerge_addMeshxInstance_void_CObqMergeInstanceData(IntPtr pNativeObject, IntPtr instanceData);

			public void AddMeshxInstance(EarthView.MeshOptimize.ObqMergeInstanceData instanceData)
			{
				EarthView_MeshOptimize_CObqMerge_addMeshxInstance_void_CObqMergeInstanceData(this.NativeObject, object.Equals(instanceData, null) ? IntPtr.Zero : instanceData.NativeObject);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadObqMerge = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqMerge = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadObqMerge = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadObqMerge = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadObqMerge = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadObqMerge = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadObqMerge = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqMerge = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadObqMerge = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadObqMerge = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadObqMerge = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadObqMerge = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMerge", new ObqMergeClassFactory());

			public ObqMerge(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static ObqMerge FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				ObqMerge obj = baseObj as  ObqMerge;
				if (object.Equals(obj, null))
				{
					obj = new ObqMerge(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CObqMerge");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class ObqMergeClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				ObqMerge emptyInstance = new ObqMerge(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

	}
}
