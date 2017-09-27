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
		public class MeshOptimizeParams : EarthView.World.Core.BaseObject
		{
			public MeshOptimizeParams() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CMeshOptimizeParams",  null);
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_OperatorAssign_void_CMeshOptimizeParams(IntPtr pNativeObject, IntPtr EVparams);

			public void OperatorAssign(ref EarthView.MeshOptimize.MeshOptimizeParams EVparams)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_OperatorAssign_void_CMeshOptimizeParams(this.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
				
			}

			public enum EVTRIANGLEOPTIMIZETYPE
			{
						TOT_EdgeOptimize = 0,
						TOT_FaceOptimize
			
			}

			public enum EVTRIANGLEOPTIMIZEMETHOD
			{
						TOM_Proportion = 0,
						TOM_TriangleNum
			
			}

			[StructLayout( LayoutKind.Sequential )]
			public struct BOXSIZEWITHPROPORTION
			{
				public float triangleCountBoundary;
				public float optimizePersentLimit;
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleOptimizeType_void_EVTriangleOptimizeType(IntPtr pNativeObject, EarthView.MeshOptimize.MeshOptimizeParams.EVTRIANGLEOPTIMIZETYPE triOptimizeType);

			public void SetTriangleOptimizeType(EarthView.MeshOptimize.MeshOptimizeParams.EVTRIANGLEOPTIMIZETYPE triOptimizeType)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleOptimizeType_void_EVTriangleOptimizeType(this.NativeObject, triOptimizeType);
				
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
			private static extern int EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleOptimizeType_EVTriangleOptimizeType(IntPtr pNativeObject);

			public EarthView.MeshOptimize.MeshOptimizeParams.EVTRIANGLEOPTIMIZETYPE GetTriangleOptimizeType()
			{
				int ret=EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleOptimizeType_EVTriangleOptimizeType(this.NativeObject);
				
				return (EarthView.MeshOptimize.MeshOptimizeParams.EVTRIANGLEOPTIMIZETYPE)ret;
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleOptimizeMethod_void_EVTriangleOptimizeMethod(IntPtr pNativeObject, EarthView.MeshOptimize.MeshOptimizeParams.EVTRIANGLEOPTIMIZEMETHOD triOptimizeMethod);

			public void SetTriangleOptimizeMethod(EarthView.MeshOptimize.MeshOptimizeParams.EVTRIANGLEOPTIMIZEMETHOD triOptimizeMethod)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleOptimizeMethod_void_EVTriangleOptimizeMethod(this.NativeObject, triOptimizeMethod);
				
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
			private static extern int EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleOptimizeMethod_EVTriangleOptimizeMethod(IntPtr pNativeObject);

			public EarthView.MeshOptimize.MeshOptimizeParams.EVTRIANGLEOPTIMIZEMETHOD GetTriangleOptimizeMethod()
			{
				int ret=EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleOptimizeMethod_EVTriangleOptimizeMethod(this.NativeObject);
				
				return (EarthView.MeshOptimize.MeshOptimizeParams.EVTRIANGLEOPTIMIZEMETHOD)ret;
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setDefaultOptimizePersent_void_ev_real32(IntPtr pNativeObject, float defaultOptimizePersent);

			public void SetDefaultOptimizePersent(float defaultOptimizePersent)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setDefaultOptimizePersent_void_ev_real32(this.NativeObject, defaultOptimizePersent);
				
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
			private static extern float EarthView_MeshOptimize_CMeshOptimizeParams_getDefaultOptimizePersent_ev_real32(IntPtr pNativeObject);

			public float GetDefaultOptimizePersent()
			{
				float ret=EarthView_MeshOptimize_CMeshOptimizeParams_getDefaultOptimizePersent_ev_real32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setLineOptimizePersent_void_ev_real32(IntPtr pNativeObject, float lineOptimizePersent);

			public void SetLineOptimizePersent(float lineOptimizePersent)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setLineOptimizePersent_void_ev_real32(this.NativeObject, lineOptimizePersent);
				
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
			private static extern float EarthView_MeshOptimize_CMeshOptimizeParams_getLineOptimizePersent_ev_real32(IntPtr pNativeObject);

			public float GetLineOptimizePersent()
			{
				float ret=EarthView_MeshOptimize_CMeshOptimizeParams_getLineOptimizePersent_ev_real32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setSubmeshTrangleCountLowerLimit_void_ev_uint32(IntPtr pNativeObject, uint submeshTrangleCountLowerLimit);

			public void SetSubmeshTrangleCountLowerLimit(uint submeshTrangleCountLowerLimit)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setSubmeshTrangleCountLowerLimit_void_ev_uint32(this.NativeObject, submeshTrangleCountLowerLimit);
				
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
			private static extern uint EarthView_MeshOptimize_CMeshOptimizeParams_getSubmeshTrangleCountLowerLimit_ev_uint32(IntPtr pNativeObject);

			public uint GetSubmeshTrangleCountLowerLimit()
			{
				uint ret=EarthView_MeshOptimize_CMeshOptimizeParams_getSubmeshTrangleCountLowerLimit_ev_uint32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleRelationshipRebulid_void_ev_bool(IntPtr pNativeObject, byte triRelationshipRebulid);

			public void SetTriangleRelationshipRebulid(bool triRelationshipRebulid)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleRelationshipRebulid_void_ev_bool(this.NativeObject, Convert.ToByte(triRelationshipRebulid));
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleRelationshipRebulid_ev_bool(IntPtr pNativeObject);

			public bool GetTriangleRelationshipRebulid()
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleRelationshipRebulid_ev_bool(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setConvertToDDS_void_ev_bool(IntPtr pNativeObject, byte toDDS);

			public void SetConvertToDDS(bool toDDS)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setConvertToDDS_void_ev_bool(this.NativeObject, Convert.ToByte(toDDS));
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimizeParams_getConvertToDDS_ev_bool(IntPtr pNativeObject);

			public bool GetConvertToDDS()
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimizeParams_getConvertToDDS_ev_bool(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setBuildQuadtree_void_ev_bool(IntPtr pNativeObject, byte buildQuadTree);

			public void SetBuildQuadtree(bool buildQuadTree)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setBuildQuadtree_void_ev_bool(this.NativeObject, Convert.ToByte(buildQuadTree));
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimizeParams_getBuildQuadtree_ev_bool(IntPtr pNativeObject);

			public bool GetBuildQuadtree()
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimizeParams_getBuildQuadtree_ev_bool(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setCombineSubMesh_void_ev_bool(IntPtr pNativeObject, byte combineSubMesh);

			public void SetCombineSubMesh(bool combineSubMesh)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setCombineSubMesh_void_ev_bool(this.NativeObject, Convert.ToByte(combineSubMesh));
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimizeParams_getCombineSubMesh_ev_bool(IntPtr pNativeObject);

			public bool GetCombineSubMesh()
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimizeParams_getCombineSubMesh_ev_bool(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setUseDoubleSideLight_void_ev_bool(IntPtr pNativeObject, byte useDoubleSideLight);

			public void SetUseDoubleSideLight(bool useDoubleSideLight)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setUseDoubleSideLight_void_ev_bool(this.NativeObject, Convert.ToByte(useDoubleSideLight));
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimizeParams_getUseDoubleSideLight_ev_bool(IntPtr pNativeObject);

			public bool GetUseDoubleSideLight()
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimizeParams_getUseDoubleSideLight_ev_bool(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setMaxVertexCombineNormalAngle_void_ev_real32(IntPtr pNativeObject, float maxNormalAngle);

			public void SetMaxVertexCombineNormalAngle(float maxNormalAngle)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setMaxVertexCombineNormalAngle_void_ev_real32(this.NativeObject, maxNormalAngle);
				
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
			private static extern float EarthView_MeshOptimize_CMeshOptimizeParams_getMaxVertexCombineNormalAngle_ev_real32(IntPtr pNativeObject);

			public float GetMaxVertexCombineNormalAngle()
			{
				float ret=EarthView_MeshOptimize_CMeshOptimizeParams_getMaxVertexCombineNormalAngle_ev_real32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_toXml_void_CXmlElement(IntPtr pNativeObject, IntPtr paramElement);

			public void ToXml(ref EarthView.World.Core.XmlElement paramElement)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_toXml_void_CXmlElement(this.NativeObject, object.Equals(paramElement, null) ? IntPtr.Zero : paramElement.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_fromXml_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

			public void FromXml(EarthView.World.Core.XmlElement element)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_fromXml_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setEncodeTo7z_void_ev_bool(IntPtr pNativeObject, byte encodeTo7z);

			public void SetEncodeTo7z(bool encodeTo7z)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setEncodeTo7z_void_ev_bool(this.NativeObject, Convert.ToByte(encodeTo7z));
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimizeParams_getEncodeTo7z_ev_bool(IntPtr pNativeObject);

			public bool GetEncodeTo7z()
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimizeParams_getEncodeTo7z_ev_bool(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setSubmeshCountUpperLimit_void_ev_uint32(IntPtr pNativeObject, uint submeshCountUpperLimit);

			public void SetSubmeshCountUpperLimit(uint submeshCountUpperLimit)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setSubmeshCountUpperLimit_void_ev_uint32(this.NativeObject, submeshCountUpperLimit);
				
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
			private static extern uint EarthView_MeshOptimize_CMeshOptimizeParams_getSubmeshCountUpperLimit_ev_uint32(IntPtr pNativeObject);

			public uint GetSubmeshCountUpperLimit()
			{
				uint ret=EarthView_MeshOptimize_CMeshOptimizeParams_getSubmeshCountUpperLimit_ev_uint32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setDiscardTrangleCountLowerLimit_void_ev_real32(IntPtr pNativeObject, float discardTrangleCountLowerLimit);

			public void SetDiscardTrangleCountLowerLimit(float discardTrangleCountLowerLimit)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setDiscardTrangleCountLowerLimit_void_ev_real32(this.NativeObject, discardTrangleCountLowerLimit);
				
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
			private static extern float EarthView_MeshOptimize_CMeshOptimizeParams_getDiscardTrangleCountLowerLimit_ev_real32(IntPtr pNativeObject);

			public float GetDiscardTrangleCountLowerLimit()
			{
				float ret=EarthView_MeshOptimize_CMeshOptimizeParams_getDiscardTrangleCountLowerLimit_ev_real32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setOptimizeParamLimit_void_BoxSizeWithProportion(IntPtr pNativeObject, EarthView.MeshOptimize.MeshOptimizeParams.BOXSIZEWITHPROPORTION bigSubmeshOptimizeParam);

			public void SetOptimizeParamLimit(EarthView.MeshOptimize.MeshOptimizeParams.BOXSIZEWITHPROPORTION bigSubmeshOptimizeParam)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setOptimizeParamLimit_void_BoxSizeWithProportion(this.NativeObject, bigSubmeshOptimizeParam);
				
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
			private static extern EarthView.MeshOptimize.MeshOptimizeParams.BOXSIZEWITHPROPORTION EarthView_MeshOptimize_CMeshOptimizeParams_getOptimizeParamLimit_BoxSizeWithProportion(IntPtr pNativeObject);

			public EarthView.MeshOptimize.MeshOptimizeParams.BOXSIZEWITHPROPORTION GetOptimizeParamLimit()
			{
				EarthView.MeshOptimize.MeshOptimizeParams.BOXSIZEWITHPROPORTION ret=EarthView_MeshOptimize_CMeshOptimizeParams_getOptimizeParamLimit_BoxSizeWithProportion(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setTileVisibleMultiplier_void_ev_real32(IntPtr pNativeObject, float multiplier);

			public void SetTileVisibleMultiplier(float multiplier)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setTileVisibleMultiplier_void_ev_real32(this.NativeObject, multiplier);
				
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
			private static extern float EarthView_MeshOptimize_CMeshOptimizeParams_getTileVisibleMultiplier_ev_real32(IntPtr pNativeObject);

			public float GetTileVisibleMultiplier()
			{
				float ret=EarthView_MeshOptimize_CMeshOptimizeParams_getTileVisibleMultiplier_ev_real32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimizeParams_setUseShareMaterial_void_ev_bool(IntPtr pNativeObject, byte useShareMat);

			public void SetUseShareMaterial(bool useShareMat)
			{
				EarthView_MeshOptimize_CMeshOptimizeParams_setUseShareMaterial_void_ev_bool(this.NativeObject, Convert.ToByte(useShareMat));
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimizeParams_getUseShareMaterial_ev_bool(IntPtr pNativeObject);

			public bool GetUseShareMaterial()
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimizeParams_getUseShareMaterial_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimizeParams = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CMeshOptimizeParams", new MeshOptimizeParamsClassFactory());

			public MeshOptimizeParams(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static MeshOptimizeParams FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				MeshOptimizeParams obj = baseObj as  MeshOptimizeParams;
				if (object.Equals(obj, null))
				{
					obj = new MeshOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CMeshOptimizeParams");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class MeshOptimizeParamsClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				MeshOptimizeParams emptyInstance = new MeshOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class MeshOptimize : EarthView.World.Core.BaseObject
		{
			public MeshOptimize(EarthView.MeshOptimize.MeshOptimizeParams EVparams) : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				NameValuePairList list = new NameValuePairList();
				BasePtr valueEVparams = new BasePtr(EVparams);
				list.Add("EVparams", valueEVparams.PtrVal);
				Create("CMeshOptimize", list);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}
			[StructLayout( LayoutKind.Sequential )]
			public struct CNORMANDVERTEXINFO
			{
				public IntPtr faceNormal;
				public uint dstVertexIndex;
			}

			[StructLayout( LayoutKind.Sequential )]
			public struct CNORMALINFO
			{
				public IntPtr faceNormal;
				public IntPtr vertexNormal;
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_addVertex_void_float_float_float(IntPtr pNativeObject, float x, float y, float z);

			public void AddVertex(float x, float y, float z)
			{
				EarthView_MeshOptimize_CMeshOptimize_addVertex_void_float_float_float(this.NativeObject, x, y, z);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_addNormal_void_float_float_float(IntPtr pNativeObject, float x, float y, float z);

			public void AddNormal(float x, float y, float z)
			{
				EarthView_MeshOptimize_CMeshOptimize_addNormal_void_float_float_float(this.NativeObject, x, y, z);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_addTex_void_float_float(IntPtr pNativeObject, float u, float v);

			public void AddTex(float u, float v)
			{
				EarthView_MeshOptimize_CMeshOptimize_addTex_void_float_float(this.NativeObject, u, v);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_addColor_void_float_float_float_float(IntPtr pNativeObject, float r, float g, float b, float a);

			public void AddColor(float r, float g, float b, float a)
			{
				EarthView_MeshOptimize_CMeshOptimize_addColor_void_float_float_float_float(this.NativeObject, r, g, b, a);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_addFace_void_ev_uint32_ev_uint32_ev_uint32(IntPtr pNativeObject, uint v0, uint v1, uint v2);

			public void AddFace(uint v0, uint v1, uint v2)
			{
				EarthView_MeshOptimize_CMeshOptimize_addFace_void_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, v0, v1, v2);
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimize_optimize_ev_bool(IntPtr pNativeObject);

			public bool Optimize()
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimize_optimize_ev_bool(this.NativeObject);
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimize_vertex_is_valid_ev_bool_ev_uint32(IntPtr pNativeObject, uint vertexID);

			public bool Vertex_is_valid(uint vertexID)
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimize_vertex_is_valid_ev_bool_ev_uint32(this.NativeObject, vertexID);
				
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
			private static extern uint EarthView_MeshOptimize_CMeshOptimize_vertexCount_ev_uint32(IntPtr pNativeObject);

			public uint VertexCount()
			{
				uint ret=EarthView_MeshOptimize_CMeshOptimize_vertexCount_ev_uint32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_vertex_void_ev_uint32_float_float_float(IntPtr pNativeObject, uint i, ref float x, ref float y, ref float z);

			public void Vertex(uint i, ref float x, ref float y, ref float z)
			{
				EarthView_MeshOptimize_CMeshOptimize_vertex_void_ev_uint32_float_float_float(this.NativeObject, i, ref x, ref y, ref z);
				
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
			private static extern uint EarthView_MeshOptimize_CMeshOptimize_normalCount_ev_uint32(IntPtr pNativeObject);

			public uint NormalCount()
			{
				uint ret=EarthView_MeshOptimize_CMeshOptimize_normalCount_ev_uint32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_normal_void_ev_uint32_float_float_float(IntPtr pNativeObject, uint i, ref float x, ref float y, ref float z);

			public void Normal(uint i, ref float x, ref float y, ref float z)
			{
				EarthView_MeshOptimize_CMeshOptimize_normal_void_ev_uint32_float_float_float(this.NativeObject, i, ref x, ref y, ref z);
				
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
			private static extern uint EarthView_MeshOptimize_CMeshOptimize_texCount_ev_uint32(IntPtr pNativeObject);

			public uint TexCount()
			{
				uint ret=EarthView_MeshOptimize_CMeshOptimize_texCount_ev_uint32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_tex_void_ev_uint32_float_float(IntPtr pNativeObject, uint i, ref float u, ref float v);

			public void Tex(uint i, ref float u, ref float v)
			{
				EarthView_MeshOptimize_CMeshOptimize_tex_void_ev_uint32_float_float(this.NativeObject, i, ref u, ref v);
				
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
			private static extern byte EarthView_MeshOptimize_CMeshOptimize_face_is_valid_ev_bool_ev_uint32(IntPtr pNativeObject, uint faceID);

			public bool Face_is_valid(uint faceID)
			{
				byte ret=EarthView_MeshOptimize_CMeshOptimize_face_is_valid_ev_bool_ev_uint32(this.NativeObject, faceID);
				
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
			private static extern uint EarthView_MeshOptimize_CMeshOptimize_faceCount_ev_uint32(IntPtr pNativeObject);

			public uint FaceCount()
			{
				uint ret=EarthView_MeshOptimize_CMeshOptimize_faceCount_ev_uint32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_face_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pNativeObject, uint i, ref uint v0, ref uint v1, ref uint v2);

			public void Face(uint i, ref uint v0, ref uint v1, ref uint v2)
			{
				EarthView_MeshOptimize_CMeshOptimize_face_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, i, ref v0, ref v1, ref v2);
				
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
			private static extern uint EarthView_MeshOptimize_CMeshOptimize_colorCount_ev_uint32(IntPtr pNativeObject);

			public uint ColorCount()
			{
				uint ret=EarthView_MeshOptimize_CMeshOptimize_colorCount_ev_uint32(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_color_void_ev_uint32_float_float_float_float(IntPtr pNativeObject, uint i, ref float r, ref float g, ref float b, ref float a);

			public void Color(uint i, ref float r, ref float g, ref float b, ref float a)
			{
				EarthView_MeshOptimize_CMeshOptimize_color_void_ev_uint32_float_float_float_float(this.NativeObject, i, ref r, ref g, ref b, ref a);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_dispose_void(IntPtr pNativeObject);

			public void Dispose()
			{
				EarthView_MeshOptimize_CMeshOptimize_dispose_void(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_createStdModel_void(IntPtr pNativeObject);

			public void CreateStdModel()
			{
				EarthView_MeshOptimize_CMeshOptimize_createStdModel_void(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_initializeQSlim_void(IntPtr pNativeObject);

			public void InitializeQSlim()
			{
				EarthView_MeshOptimize_CMeshOptimize_initializeQSlim_void(this.NativeObject);
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_computeFaceNormal_void_ev_uint32_float_float_float_bool(IntPtr pNativeObject, uint f, ref float x, ref float y, ref float z, byte will_unitize);

			public void ComputeFaceNormal(uint f, ref float x, ref float y, ref float z, bool will_unitize)
			{
				EarthView_MeshOptimize_CMeshOptimize_computeFaceNormal_void_ev_uint32_float_float_float_bool(this.NativeObject, f, ref x, ref y, ref z, Convert.ToByte(will_unitize));
				
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
			private static extern void EarthView_MeshOptimize_CMeshOptimize_computeVertexNormal_void_ev_uint32_float_float_float(IntPtr pNativeObject, uint v, ref float x, ref float y, ref float z);

			public void ComputeVertexNormal(uint v, ref float x, ref float y, ref float z)
			{
				EarthView_MeshOptimize_CMeshOptimize_computeVertexNormal_void_ev_uint32_float_float_float(this.NativeObject, v, ref x, ref y, ref z);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimize = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CMeshOptimize", new MeshOptimizeClassFactory());

			public MeshOptimize(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static MeshOptimize FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				MeshOptimize obj = baseObj as  MeshOptimize;
				if (object.Equals(obj, null))
				{
					obj = new MeshOptimize(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CMeshOptimize");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class MeshOptimizeClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				MeshOptimize emptyInstance = new MeshOptimize(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

	}
}
