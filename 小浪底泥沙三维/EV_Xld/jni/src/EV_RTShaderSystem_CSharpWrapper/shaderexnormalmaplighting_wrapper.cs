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
			namespace Rtshadersystem
			{
				public class NormalMapLighting : EarthView.World.Graphic.Rtshadersystem.SubRenderState
				{
					public NormalMapLighting() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CNormalMapLightingProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.NormalMapLighting".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public new string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString(IntPtr pNativeObject);

					public override string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_NoVirtual(IntPtr pNativeObject);

					public new int GetExecutionOrder_NoVirtual()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_NoVirtual(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int(IntPtr pNativeObject);

					public override int GetExecutionOrder()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList);

					public new void UpdateGpuProgramsParams_NoVirtual(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList);

					public override void UpdateGpuProgramsParams(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_NoVirtual(IntPtr pNativeObject, IntPtr rhs);

					public new void CopyFrom_NoVirtual(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_NoVirtual(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState(IntPtr pNativeObject, IntPtr rhs);

					public override void CopyFrom(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(IntPtr pNativeObject, IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					public new bool PreAddToRenderState_NoVirtual(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(this.NativeObject, object.Equals(renderState, null) ? IntPtr.Zero : renderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pNativeObject, IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					public override bool PreAddToRenderState(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, object.Equals(renderState, null) ? IntPtr.Zero : renderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setTexCoordIndex_void_ev_uint32(IntPtr pNativeObject, uint index);

					public void SetTexCoordIndex(uint index)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setTexCoordIndex_void_ev_uint32(this.NativeObject, index);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getTexCoordIndex_ev_uint32(IntPtr pNativeObject);

					public uint GetTexCoordIndex()
					{
						uint ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getTexCoordIndex_ev_uint32(this.NativeObject);
						
						return ret;
						
					}

					private static string TypeField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_Type( );

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_Type( string value );

					public 					static string EVType
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_Type();
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							TypeField = value;
							Set_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_Type( value );
						}
					}

					public enum NORMALMAPSPACE
					{
										NMS_TANGENT,
										NMS_OBJECT
					
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapSpace_void_NormalMapSpace(IntPtr pNativeObject, EarthView.World.Graphic.Rtshadersystem.NormalMapLighting.NORMALMAPSPACE normalMapSpace);

					public void SetNormalMapSpace(EarthView.World.Graphic.Rtshadersystem.NormalMapLighting.NORMALMAPSPACE normalMapSpace)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapSpace_void_NormalMapSpace(this.NativeObject, normalMapSpace);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapSpace_NormalMapSpace(IntPtr pNativeObject);

					public EarthView.World.Graphic.Rtshadersystem.NormalMapLighting.NORMALMAPSPACE GetNormalMapSpace()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapSpace_NormalMapSpace(this.NativeObject);
						
						return (EarthView.World.Graphic.Rtshadersystem.NormalMapLighting.NORMALMAPSPACE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapTextureName_void_EVString(IntPtr pNativeObject, string textureName);

					public void SetNormalMapTextureName(string textureName)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapTextureName_void_EVString(this.NativeObject, textureName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapTextureName_EVString(IntPtr pNativeObject);

					public string GetNormalMapTextureName()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapTextureName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapFiltering_void_FilterOptions_FilterOptions_FilterOptions(IntPtr pNativeObject, EarthView.World.Graphic.FILTEROPTIONS minFilter, EarthView.World.Graphic.FILTEROPTIONS magFilter, EarthView.World.Graphic.FILTEROPTIONS mipFilter);

					public void SetNormalMapFiltering(EarthView.World.Graphic.FILTEROPTIONS minFilter, EarthView.World.Graphic.FILTEROPTIONS magFilter, EarthView.World.Graphic.FILTEROPTIONS mipFilter)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapFiltering_void_FilterOptions_FilterOptions_FilterOptions(this.NativeObject, minFilter, magFilter, mipFilter);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapFiltering_void_FilterOptions_FilterOptions_FilterOptions(IntPtr pNativeObject, ref EarthView.World.Graphic.FILTEROPTIONS minFilter, ref EarthView.World.Graphic.FILTEROPTIONS magFilter, ref EarthView.World.Graphic.FILTEROPTIONS mipFilter);

					public void GetNormalMapFiltering(ref EarthView.World.Graphic.FILTEROPTIONS minFilter, ref EarthView.World.Graphic.FILTEROPTIONS magFilter, ref EarthView.World.Graphic.FILTEROPTIONS mipFilter)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapFiltering_void_FilterOptions_FilterOptions_FilterOptions(this.NativeObject, ref minFilter, ref magFilter, ref mipFilter);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapAnisotropy_void_ev_uint32(IntPtr pNativeObject, uint anisotropy);

					public void SetNormalMapAnisotropy(uint anisotropy)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapAnisotropy_void_ev_uint32(this.NativeObject, anisotropy);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapAnisotropy_ev_uint32(IntPtr pNativeObject);

					public uint GetNormalMapAnisotropy()
					{
						uint ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapAnisotropy_ev_uint32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapMipBias_void_Real(IntPtr pNativeObject, double mipBias);

					public void SetNormalMapMipBias(double mipBias)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapMipBias_void_Real(this.NativeObject, mipBias);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapMipBias_Real(IntPtr pNativeObject);

					public double GetNormalMapMipBias()
					{
						double ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapMipBias_Real(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool ResolveParameters_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool ResolveParameters(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool ResolveDependencies_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool ResolveDependencies(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool AddFunctionInvocations_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool AddFunctionInvocations(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadNormalMapLighting = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting", new NormalMapLightingClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingProxy", new NormalMapLightingClassFactory());

					public NormalMapLighting(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int(IntPtr pObject, getExecutionOrder_CallBack_int pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState(IntPtr pObject, copyFrom_CallBack_void_CSubRenderState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet(IntPtr pObject, createCpuSubPrograms_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr pObject, updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pObject, preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet(IntPtr pObject, resolveParameters_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet(IntPtr pObject, resolveDependencies_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet(IntPtr pObject, addFunctionInvocations_CallBack_bool_CProgramSet pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_getExecutionOrder_CallBack_int = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Function;
							GC.KeepAlive(m_getExecutionOrder_CallBack_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int(this.NativeObject, m_getExecutionOrder_CallBack_int);
							m_copyFrom_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Function;
							GC.KeepAlive(m_copyFrom_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState(this.NativeObject, m_copyFrom_CallBack_void_CSubRenderState);
							m_createCpuSubPrograms_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Function;
							GC.KeepAlive(m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet(this.NativeObject, m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Function;
							GC.KeepAlive(m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(this.NativeObject, m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							m_resolveParameters_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveParameters_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet(this.NativeObject, m_resolveParameters_CallBack_bool_CProgramSet);
							m_resolveDependencies_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveDependencies_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet(this.NativeObject, m_resolveDependencies_CallBack_bool_CProgramSet);
							m_addFunctionInvocations_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Function;
							GC.KeepAlive(m_addFunctionInvocations_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet(this.NativeObject, m_addFunctionInvocations_CallBack_bool_CProgramSet);
						}
					}
					public override bool CreateCpuSubPrograms(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						return base.CreateCpuSubPrograms_NoVirtual(programSet);
					}
					public static NormalMapLighting FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						NormalMapLighting obj = baseObj as  NormalMapLighting;
						if (object.Equals(obj, null))
						{
							obj = new NormalMapLighting(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CNormalMapLighting");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class NormalMapLightingClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						NormalMapLighting emptyInstance = new NormalMapLighting(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class NormalMapLightingFactory : EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory
				{
					public NormalMapLightingFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CNormalMapLightingFactoryProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.NormalMapLightingFactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public new string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString(IntPtr pNativeObject);

					public override string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					public new EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					public new void WriteInstance_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					public override void WriteInstance(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_NoVirtual(IntPtr pNativeObject);

					protected new EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstanceImpl_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState(IntPtr pNativeObject);

					protected override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstanceImpl()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadNormalMapLightingFactory = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory", new NormalMapLightingFactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactoryProxy", new NormalMapLightingFactoryClassFactory());

					public NormalMapLightingFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState(IntPtr pObject, createInstance_CallBack_CSubRenderState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr pObject, createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(IntPtr pObject, createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(IntPtr pObject, createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState(IntPtr pObject, destroyInstance_CallBack_void_CSubRenderState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void(IntPtr pObject, destroyAllInstances_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr pObject, writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(IntPtr pObject, writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState(IntPtr pObject, createInstanceImpl_CallBack_CSubRenderState pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_createInstance_CallBack_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState(this.NativeObject, m_createInstance_CallBack_CSubRenderState);
							m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.NativeObject, m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator);
							m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(this.NativeObject, m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator);
							m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(this.NativeObject, m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator);
							m_destroyInstance_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Function;
							GC.KeepAlive(m_destroyInstance_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState(this.NativeObject, m_destroyInstance_CallBack_void_CSubRenderState);
							m_destroyAllInstances_CallBack_void = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Function;
							GC.KeepAlive(m_destroyAllInstances_CallBack_void);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void(this.NativeObject, m_destroyAllInstances_CallBack_void);
							m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(this.NativeObject, m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass);
							m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Function;
							GC.KeepAlive(m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(this.NativeObject, m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState);
							m_createInstanceImpl_CallBack_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Function;
							GC.KeepAlive(m_createInstanceImpl_CallBack_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState(this.NativeObject, m_createInstanceImpl_CallBack_CSubRenderState);
						}
					}
					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance()
					{
						return base.CreateInstance_NoVirtual();
					}
					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.TextureUnitState texState, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						return base.CreateInstance_NoVirtual(compiler,prop,texState,translator);
					}
					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateOrRetrieveInstance(EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						return base.CreateOrRetrieveInstance_NoVirtual(translator);
					}
					public override void DestroyInstance(EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState)
					{
						base.DestroyInstance_NoVirtual(subRenderState);
					}
					public override void DestroyAllInstances()
					{
						base.DestroyAllInstances_NoVirtual();
					}
					public override void WriteInstance(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.TextureUnitState srcTextureUnit, EarthView.World.Graphic.TextureUnitState dstTextureUnit)
					{
						base.WriteInstance_NoVirtual(ser,subRenderState,srcTextureUnit,dstTextureUnit);
					}
					public static NormalMapLightingFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						NormalMapLightingFactory obj = baseObj as  NormalMapLightingFactory;
						if (object.Equals(obj, null))
						{
							obj = new NormalMapLightingFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CNormalMapLightingFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class NormalMapLightingFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						NormalMapLightingFactory emptyInstance = new NormalMapLightingFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
