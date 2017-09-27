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
				public class Ffptexturing : EarthView.World.Graphic.Rtshadersystem.SubRenderState
				{
					public Ffptexturing() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CFFPTexturingProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.Ffptexturing".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public new string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_NoVirtual(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString(IntPtr pNativeObject);

					public override string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString(this.NativeObject);
						
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
					private static extern int EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_NoVirtual(IntPtr pNativeObject);

					public new int GetExecutionOrder_NoVirtual()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_NoVirtual(this.NativeObject);
						
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
					private static extern int EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int(IntPtr pNativeObject);

					public override int GetExecutionOrder()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList);

					public new void UpdateGpuProgramsParams_NoVirtual(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr pNativeObject, IntPtr rend, IntPtr pass, IntPtr source, IntPtr pLightList);

					public override void UpdateGpuProgramsParams(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(pLightList, null) ? IntPtr.Zero : pLightList.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_NoVirtual(IntPtr pNativeObject, IntPtr rhs);

					public new void CopyFrom_NoVirtual(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_NoVirtual(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState(IntPtr pNativeObject, IntPtr rhs);

					public override void CopyFrom(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(IntPtr pNativeObject, IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					public new bool PreAddToRenderState_NoVirtual(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(this.NativeObject, object.Equals(renderState, null) ? IntPtr.Zero : renderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pNativeObject, IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					public override bool PreAddToRenderState(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, object.Equals(renderState, null) ? IntPtr.Zero : renderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_Type( );

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
					private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_Type( string value );

					public 					static string EVType
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_Type();
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							TypeField = value;
							Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_Type( value );
						}
					}

					public class TextureUnitParams : EarthView.World.Core.BaseObject
					{
						public TextureUnitParams() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("TextureUnitParams",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						private EarthView.World.Graphic.TextureUnitState mTextureUnitStateField;
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
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureUnitState(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureUnitState( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.TextureUnitState MTextureUnitState
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureUnitState(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(mTextureUnitStateField, null)){
									mTextureUnitStateField.NativeObject = __ptr;
									return mTextureUnitStateField;
								}
								EarthView.World.Graphic.TextureUnitState csObj = new EarthView.World.Graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CTextureUnitState");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.TextureUnitState;
									csObj.BindNativeObject(__ptr, "CTextureUnitState");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								mTextureUnitStateField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureUnitState( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Graphic.Frustum mTextureProjectorField;
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
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureProjector(IntPtr pObject);

						public 						EarthView.World.Graphic.Frustum MTextureProjector
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureProjector(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(mTextureProjectorField, null)){
									mTextureProjectorField.NativeObject = __ptr;
									return mTextureProjectorField;
								}
								EarthView.World.Graphic.Frustum csObj = new EarthView.World.Graphic.Frustum(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CFrustum");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Frustum;
									csObj.BindNativeObject(__ptr, "CFrustum");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

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
						private static extern ushort Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerIndex(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerIndex( IntPtr pObject, ushort value );

						public 						ushort MTextureSamplerIndex
						{
							get
							{
								ushort ret=Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerIndex(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerIndex(this.NativeObject,value);
							}
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
						private static extern int Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerType(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerType( IntPtr pObject, int value );

						public 						int MTextureSamplerType
						{
							get
							{
								int ret=Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerType(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerType(this.NativeObject,value);
							}
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
						private static extern int Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInTextureCoordinateType(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInTextureCoordinateType( IntPtr pObject, int value );

						public 						int MVSInTextureCoordinateType
						{
							get
							{
								int ret=Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInTextureCoordinateType(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInTextureCoordinateType(this.NativeObject,value);
							}
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
						private static extern int Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutTextureCoordinateType(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutTextureCoordinateType( IntPtr pObject, int value );

						public 						int MVSOutTextureCoordinateType
						{
							get
							{
								int ret=Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutTextureCoordinateType(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutTextureCoordinateType(this.NativeObject,value);
							}
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
						private static extern int Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTexCoordCalcMethod(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTexCoordCalcMethod( IntPtr pObject, int value );

						public 						int MTexCoordCalcMethod
						{
							get
							{
								int ret=Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTexCoordCalcMethod(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTexCoordCalcMethod(this.NativeObject,value);
							}
						}

						private EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr mTextureMatrixField;
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
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureMatrix(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureMatrix( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr MTextureMatrix
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureMatrix(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(mTextureMatrixField, null)){
									mTextureMatrixField.NativeObject = __ptr;
									return mTextureMatrixField;
								}
								EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr csObj = new EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "UniformParameterPtr");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr;
									csObj.BindNativeObject(__ptr, "UniformParameterPtr");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								mTextureMatrixField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureMatrix( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr mTextureViewProjImageMatrixField;
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
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureViewProjImageMatrix(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureViewProjImageMatrix( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr MTextureViewProjImageMatrix
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureViewProjImageMatrix(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(mTextureViewProjImageMatrixField, null)){
									mTextureViewProjImageMatrixField.NativeObject = __ptr;
									return mTextureViewProjImageMatrixField;
								}
								EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr csObj = new EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "UniformParameterPtr");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr;
									csObj.BindNativeObject(__ptr, "UniformParameterPtr");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								mTextureViewProjImageMatrixField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureViewProjImageMatrix( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr mTextureSamplerField;
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
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSampler(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSampler( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr MTextureSampler
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSampler(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(mTextureSamplerField, null)){
									mTextureSamplerField.NativeObject = __ptr;
									return mTextureSamplerField;
								}
								EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr csObj = new EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "UniformParameterPtr");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.UniformParameterPtr;
									csObj.BindNativeObject(__ptr, "UniformParameterPtr");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								mTextureSamplerField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSampler( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Graphic.Rtshadersystem.ParameterPtr mVSInputTexCoordField;
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
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInputTexCoord(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInputTexCoord( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.Rtshadersystem.ParameterPtr MVSInputTexCoord
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInputTexCoord(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(mVSInputTexCoordField, null)){
									mVSInputTexCoordField.NativeObject = __ptr;
									return mVSInputTexCoordField;
								}
								EarthView.World.Graphic.Rtshadersystem.ParameterPtr csObj = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ParameterPtr");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
									csObj.BindNativeObject(__ptr, "ParameterPtr");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								mVSInputTexCoordField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInputTexCoord( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Graphic.Rtshadersystem.ParameterPtr mVSOutputTexCoordField;
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
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutputTexCoord(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutputTexCoord( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.Rtshadersystem.ParameterPtr MVSOutputTexCoord
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutputTexCoord(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(mVSOutputTexCoordField, null)){
									mVSOutputTexCoordField.NativeObject = __ptr;
									return mVSOutputTexCoordField;
								}
								EarthView.World.Graphic.Rtshadersystem.ParameterPtr csObj = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ParameterPtr");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
									csObj.BindNativeObject(__ptr, "ParameterPtr");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								mVSOutputTexCoordField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutputTexCoord( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Graphic.Rtshadersystem.ParameterPtr mPSInputTexCoordField;
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
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mPSInputTexCoord(IntPtr pObject);

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
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mPSInputTexCoord( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.Rtshadersystem.ParameterPtr MPSInputTexCoord
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mPSInputTexCoord(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(mPSInputTexCoordField, null)){
									mPSInputTexCoordField.NativeObject = __ptr;
									return mPSInputTexCoordField;
								}
								EarthView.World.Graphic.Rtshadersystem.ParameterPtr csObj = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ParameterPtr");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
									csObj.BindNativeObject(__ptr, "ParameterPtr");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								mPSInputTexCoordField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mPSInputTexCoord( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadTextureUnitParams = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams", new TextureUnitParamsClassFactory());

						public TextureUnitParams(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static TextureUnitParams FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							TextureUnitParams obj = baseObj as  TextureUnitParams;
							if (object.Equals(obj, null))
							{
								obj = new TextureUnitParams(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "TextureUnitParams");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class TextureUnitParamsClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							TextureUnitParams emptyInstance = new TextureUnitParams(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool ResolveParameters_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool ResolveParameters(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool ResolveDependencies_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool ResolveDependencies(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool AddFunctionInvocations_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool AddFunctionInvocations(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int(IntPtr textureUnitParams, IntPtr psMain, IntPtr texel, int groupOrder, ref int internalCounter);

					protected addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int m_addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_NoVirtual(IntPtr pNativeObject, IntPtr textureUnitParams, IntPtr psMain, IntPtr texel, int groupOrder, ref int internalCounter);

					protected virtual void AddPSSampleTexelInvocation_NoVirtual(EarthView.World.Graphic.Rtshadersystem.Ffptexturing.TextureUnitParams textureUnitParams, EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int groupOrder, ref int internalCounter)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_NoVirtual(this.NativeObject, object.Equals(textureUnitParams, null) ? IntPtr.Zero : textureUnitParams.NativeObject, object.Equals(psMain, null) ? IntPtr.Zero : psMain.NativeObject, object.Equals(texel, null) ? IntPtr.Zero : texel.NativeObject, groupOrder, ref internalCounter);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Function(IntPtr textureUnitParams, IntPtr psMain, IntPtr texel, int groupOrder, ref int internalCounter)
					{
						EarthView.World.Graphic.Rtshadersystem.Ffptexturing.TextureUnitParams csobj_textureUnitParams = new EarthView.World.Graphic.Rtshadersystem.Ffptexturing.TextureUnitParams(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_textureUnitParams.BindNativeObject(textureUnitParams,"TextureUnitParams");
						csobj_textureUnitParams.Delegate = true;
						IClassFactory csobj_textureUnitParamsClassFactory = GlobalClassFactoryMap.Get(csobj_textureUnitParams.GetCppInstanceTypeName());
						if (csobj_textureUnitParamsClassFactory != null)
						{
							csobj_textureUnitParams.Delegate = true;
							csobj_textureUnitParams = csobj_textureUnitParamsClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Ffptexturing.TextureUnitParams;
							csobj_textureUnitParams.BindNativeObject(textureUnitParams, "TextureUnitParams");
							csobj_textureUnitParams.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.Function csobj_psMain = new EarthView.World.Graphic.Rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_psMain.BindNativeObject(psMain,"CFunction");
						csobj_psMain.Delegate = true;
						IClassFactory csobj_psMainClassFactory = GlobalClassFactoryMap.Get(csobj_psMain.GetCppInstanceTypeName());
						if (csobj_psMainClassFactory != null)
						{
							csobj_psMain.Delegate = true;
							csobj_psMain = csobj_psMainClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Function;
							csobj_psMain.BindNativeObject(psMain, "CFunction");
							csobj_psMain.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.ParameterPtr csobj_texel = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_texel.BindNativeObject(texel,"ParameterPtr");
						csobj_texel.Delegate = true;
						IClassFactory csobj_texelClassFactory = GlobalClassFactoryMap.Get(csobj_texel.GetCppInstanceTypeName());
						if (csobj_texelClassFactory != null)
						{
							csobj_texel.Delegate = true;
							csobj_texel = csobj_texelClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
							csobj_texel.BindNativeObject(texel, "ParameterPtr");
							csobj_texel.Delegate = true;
						}
						
						AddPSSampleTexelInvocation(csobj_textureUnitParams, csobj_psMain, csobj_texel, groupOrder, ref internalCounter);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(IntPtr pNativeObject, IntPtr textureUnitParams, IntPtr psMain, IntPtr texel, int groupOrder, ref int internalCounter);

					protected virtual void AddPSSampleTexelInvocation(EarthView.World.Graphic.Rtshadersystem.Ffptexturing.TextureUnitParams textureUnitParams, EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int groupOrder, ref int internalCounter)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(this.NativeObject, object.Equals(textureUnitParams, null) ? IntPtr.Zero : textureUnitParams.NativeObject, object.Equals(psMain, null) ? IntPtr.Zero : psMain.NativeObject, object.Equals(texel, null) ? IntPtr.Zero : texel.NativeObject, groupOrder, ref internalCounter);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(IntPtr psMain, IntPtr arg, IntPtr texel, int samplerIndex, EarthView.World.Graphic.LAYERBLENDSOURCE blendSrc, IntPtr colourValue, double alphaValue, bool isAlphaArgument, int groupOrder, ref int internalCounter);

					protected addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int m_addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_NoVirtual(IntPtr pNativeObject, IntPtr psMain, IntPtr arg, IntPtr texel, int samplerIndex, EarthView.World.Graphic.LAYERBLENDSOURCE blendSrc, IntPtr colourValue, double alphaValue, byte isAlphaArgument, int groupOrder, ref int internalCounter);

					protected virtual void AddPSArgumentInvocations_NoVirtual(EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int samplerIndex, EarthView.World.Graphic.LAYERBLENDSOURCE blendSrc, EarthView.World.Graphic.ColourValue colourValue, double alphaValue, bool isAlphaArgument, int groupOrder, ref int internalCounter)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_NoVirtual(this.NativeObject, object.Equals(psMain, null) ? IntPtr.Zero : psMain.NativeObject, object.Equals(arg, null) ? IntPtr.Zero : arg.NativeObject, object.Equals(texel, null) ? IntPtr.Zero : texel.NativeObject, samplerIndex, blendSrc, object.Equals(colourValue, null) ? IntPtr.Zero : colourValue.NativeObject, alphaValue, Convert.ToByte(isAlphaArgument), groupOrder, ref internalCounter);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Function(IntPtr psMain, IntPtr arg, IntPtr texel, int samplerIndex, EarthView.World.Graphic.LAYERBLENDSOURCE blendSrc, IntPtr colourValue, double alphaValue, bool isAlphaArgument, int groupOrder, ref int internalCounter)
					{
						EarthView.World.Graphic.Rtshadersystem.Function csobj_psMain = new EarthView.World.Graphic.Rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_psMain.BindNativeObject(psMain,"CFunction");
						csobj_psMain.Delegate = true;
						IClassFactory csobj_psMainClassFactory = GlobalClassFactoryMap.Get(csobj_psMain.GetCppInstanceTypeName());
						if (csobj_psMainClassFactory != null)
						{
							csobj_psMain.Delegate = true;
							csobj_psMain = csobj_psMainClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Function;
							csobj_psMain.BindNativeObject(psMain, "CFunction");
							csobj_psMain.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.ParameterPtr csobj_arg = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_arg.BindNativeObject(arg,"ParameterPtr");
						IClassFactory csobj_argClassFactory = GlobalClassFactoryMap.Get(csobj_arg.GetCppInstanceTypeName());
						if (csobj_argClassFactory != null)
						{
							csobj_arg.Delegate = true;
							csobj_arg = csobj_argClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
							csobj_arg.BindNativeObject(arg, "ParameterPtr");
						}
						EarthView.World.Graphic.Rtshadersystem.ParameterPtr csobj_texel = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_texel.BindNativeObject(texel,"ParameterPtr");
						IClassFactory csobj_texelClassFactory = GlobalClassFactoryMap.Get(csobj_texel.GetCppInstanceTypeName());
						if (csobj_texelClassFactory != null)
						{
							csobj_texel.Delegate = true;
							csobj_texel = csobj_texelClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
							csobj_texel.BindNativeObject(texel, "ParameterPtr");
						}
						EarthView.World.Graphic.ColourValue csobj_colourValue = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_colourValue.BindNativeObject(colourValue,"CColourValue");
						csobj_colourValue.Delegate = true;
						IClassFactory csobj_colourValueClassFactory = GlobalClassFactoryMap.Get(csobj_colourValue.GetCppInstanceTypeName());
						if (csobj_colourValueClassFactory != null)
						{
							csobj_colourValue.Delegate = true;
							csobj_colourValue = csobj_colourValueClassFactory.Create() as EarthView.World.Graphic.ColourValue;
							csobj_colourValue.BindNativeObject(colourValue, "CColourValue");
							csobj_colourValue.Delegate = true;
						}
						
						AddPSArgumentInvocations(csobj_psMain, csobj_arg, csobj_texel, samplerIndex, blendSrc, csobj_colourValue, alphaValue, isAlphaArgument, groupOrder, ref internalCounter);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(IntPtr pNativeObject, IntPtr psMain, IntPtr arg, IntPtr texel, int samplerIndex, EarthView.World.Graphic.LAYERBLENDSOURCE blendSrc, IntPtr colourValue, double alphaValue, byte isAlphaArgument, int groupOrder, ref int internalCounter);

					protected virtual void AddPSArgumentInvocations(EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int samplerIndex, EarthView.World.Graphic.LAYERBLENDSOURCE blendSrc, EarthView.World.Graphic.ColourValue colourValue, double alphaValue, bool isAlphaArgument, int groupOrder, ref int internalCounter)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(this.NativeObject, object.Equals(psMain, null) ? IntPtr.Zero : psMain.NativeObject, object.Equals(arg, null) ? IntPtr.Zero : arg.NativeObject, object.Equals(texel, null) ? IntPtr.Zero : texel.NativeObject, samplerIndex, blendSrc, object.Equals(colourValue, null) ? IntPtr.Zero : colourValue.NativeObject, alphaValue, Convert.ToByte(isAlphaArgument), groupOrder, ref internalCounter);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(IntPtr psMain, IntPtr arg1, IntPtr arg2, IntPtr texel, int samplerIndex, IntPtr blendMode, int groupOrder, ref int internalCounter, int targetChannels);

					protected addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int m_addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int;

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_NoVirtual(IntPtr pNativeObject, IntPtr psMain, IntPtr arg1, IntPtr arg2, IntPtr texel, int samplerIndex, IntPtr blendMode, int groupOrder, ref int internalCounter, int targetChannels);

					protected virtual void AddPSBlendInvocations_NoVirtual(EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg1, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg2, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int samplerIndex, EarthView.World.Graphic.LayerBlendModeEx blendMode, int groupOrder, ref int internalCounter, int targetChannels)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_NoVirtual(this.NativeObject, object.Equals(psMain, null) ? IntPtr.Zero : psMain.NativeObject, object.Equals(arg1, null) ? IntPtr.Zero : arg1.NativeObject, object.Equals(arg2, null) ? IntPtr.Zero : arg2.NativeObject, object.Equals(texel, null) ? IntPtr.Zero : texel.NativeObject, samplerIndex, object.Equals(blendMode, null) ? IntPtr.Zero : blendMode.NativeObject, groupOrder, ref internalCounter, targetChannels);
						
					}

					protected  void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Function(IntPtr psMain, IntPtr arg1, IntPtr arg2, IntPtr texel, int samplerIndex, IntPtr blendMode, int groupOrder, ref int internalCounter, int targetChannels)
					{
						EarthView.World.Graphic.Rtshadersystem.Function csobj_psMain = new EarthView.World.Graphic.Rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_psMain.BindNativeObject(psMain,"CFunction");
						csobj_psMain.Delegate = true;
						IClassFactory csobj_psMainClassFactory = GlobalClassFactoryMap.Get(csobj_psMain.GetCppInstanceTypeName());
						if (csobj_psMainClassFactory != null)
						{
							csobj_psMain.Delegate = true;
							csobj_psMain = csobj_psMainClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Function;
							csobj_psMain.BindNativeObject(psMain, "CFunction");
							csobj_psMain.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.ParameterPtr csobj_arg1 = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_arg1.BindNativeObject(arg1,"ParameterPtr");
						IClassFactory csobj_arg1ClassFactory = GlobalClassFactoryMap.Get(csobj_arg1.GetCppInstanceTypeName());
						if (csobj_arg1ClassFactory != null)
						{
							csobj_arg1.Delegate = true;
							csobj_arg1 = csobj_arg1ClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
							csobj_arg1.BindNativeObject(arg1, "ParameterPtr");
						}
						EarthView.World.Graphic.Rtshadersystem.ParameterPtr csobj_arg2 = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_arg2.BindNativeObject(arg2,"ParameterPtr");
						IClassFactory csobj_arg2ClassFactory = GlobalClassFactoryMap.Get(csobj_arg2.GetCppInstanceTypeName());
						if (csobj_arg2ClassFactory != null)
						{
							csobj_arg2.Delegate = true;
							csobj_arg2 = csobj_arg2ClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
							csobj_arg2.BindNativeObject(arg2, "ParameterPtr");
						}
						EarthView.World.Graphic.Rtshadersystem.ParameterPtr csobj_texel = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_texel.BindNativeObject(texel,"ParameterPtr");
						IClassFactory csobj_texelClassFactory = GlobalClassFactoryMap.Get(csobj_texel.GetCppInstanceTypeName());
						if (csobj_texelClassFactory != null)
						{
							csobj_texel.Delegate = true;
							csobj_texel = csobj_texelClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
							csobj_texel.BindNativeObject(texel, "ParameterPtr");
						}
						EarthView.World.Graphic.LayerBlendModeEx csobj_blendMode = new EarthView.World.Graphic.LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_blendMode.BindNativeObject(blendMode,"CLayerBlendModeEx");
						csobj_blendMode.Delegate = true;
						IClassFactory csobj_blendModeClassFactory = GlobalClassFactoryMap.Get(csobj_blendMode.GetCppInstanceTypeName());
						if (csobj_blendModeClassFactory != null)
						{
							csobj_blendMode.Delegate = true;
							csobj_blendMode = csobj_blendModeClassFactory.Create() as EarthView.World.Graphic.LayerBlendModeEx;
							csobj_blendMode.BindNativeObject(blendMode, "CLayerBlendModeEx");
							csobj_blendMode.Delegate = true;
						}
						
						AddPSBlendInvocations(csobj_psMain, csobj_arg1, csobj_arg2, csobj_texel, samplerIndex, csobj_blendMode, groupOrder, ref internalCounter, targetChannels);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(IntPtr pNativeObject, IntPtr psMain, IntPtr arg1, IntPtr arg2, IntPtr texel, int samplerIndex, IntPtr blendMode, int groupOrder, ref int internalCounter, int targetChannels);

					protected virtual void AddPSBlendInvocations(EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg1, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg2, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int samplerIndex, EarthView.World.Graphic.LayerBlendModeEx blendMode, int groupOrder, ref int internalCounter, int targetChannels)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(this.NativeObject, object.Equals(psMain, null) ? IntPtr.Zero : psMain.NativeObject, object.Equals(arg1, null) ? IntPtr.Zero : arg1.NativeObject, object.Equals(arg2, null) ? IntPtr.Zero : arg2.NativeObject, object.Equals(texel, null) ? IntPtr.Zero : texel.NativeObject, samplerIndex, object.Equals(blendMode, null) ? IntPtr.Zero : blendMode.NativeObject, groupOrder, ref internalCounter, targetChannels);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isProcessingNeeded_CallBack_bool_CTextureUnitState(IntPtr texUnitState);

					protected isProcessingNeeded_CallBack_bool_CTextureUnitState m_isProcessingNeeded_CallBack_bool_CTextureUnitState;

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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_NoVirtual(IntPtr pNativeObject, IntPtr texUnitState);

					protected virtual bool IsProcessingNeeded_NoVirtual(EarthView.World.Graphic.TextureUnitState texUnitState)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_NoVirtual(this.NativeObject, object.Equals(texUnitState, null) ? IntPtr.Zero : texUnitState.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Function(IntPtr texUnitState)
					{
						EarthView.World.Graphic.TextureUnitState csobj_texUnitState = new EarthView.World.Graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_texUnitState.BindNativeObject(texUnitState,"CTextureUnitState");
						csobj_texUnitState.Delegate = true;
						IClassFactory csobj_texUnitStateClassFactory = GlobalClassFactoryMap.Get(csobj_texUnitState.GetCppInstanceTypeName());
						if (csobj_texUnitStateClassFactory != null)
						{
							csobj_texUnitState.Delegate = true;
							csobj_texUnitState = csobj_texUnitStateClassFactory.Create() as EarthView.World.Graphic.TextureUnitState;
							csobj_texUnitState.BindNativeObject(texUnitState, "CTextureUnitState");
							csobj_texUnitState.Delegate = true;
						}
						
						bool csret=IsProcessingNeeded(csobj_texUnitState);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState(IntPtr pNativeObject, IntPtr texUnitState);

					protected virtual bool IsProcessingNeeded(EarthView.World.Graphic.TextureUnitState texUnitState)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState(this.NativeObject, object.Equals(texUnitState, null) ? IntPtr.Zero : texUnitState.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadFfptexturing = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPTexturing", new FfptexturingClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPTexturingProxy", new FfptexturingClassFactory());

					public Ffptexturing(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(IntPtr pObject, addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(IntPtr pObject, addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(IntPtr pObject, addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState(IntPtr pObject, isProcessingNeeded_CallBack_bool_CTextureUnitState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int(IntPtr pObject, getExecutionOrder_CallBack_int pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState(IntPtr pObject, copyFrom_CallBack_void_CSubRenderState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet(IntPtr pObject, createCpuSubPrograms_CallBack_bool_CProgramSet pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr pObject, updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pObject, preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet(IntPtr pObject, resolveParameters_CallBack_bool_CProgramSet pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet(IntPtr pObject, resolveDependencies_CallBack_bool_CProgramSet pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet(IntPtr pObject, addFunctionInvocations_CallBack_bool_CProgramSet pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Function;
							GC.KeepAlive(m_addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(this.NativeObject, m_addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int);
							m_addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Function;
							GC.KeepAlive(m_addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(this.NativeObject, m_addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int);
							m_addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Function;
							GC.KeepAlive(m_addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(this.NativeObject, m_addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int);
							m_isProcessingNeeded_CallBack_bool_CTextureUnitState = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Function;
							GC.KeepAlive(m_isProcessingNeeded_CallBack_bool_CTextureUnitState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState(this.NativeObject, m_isProcessingNeeded_CallBack_bool_CTextureUnitState);
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_getExecutionOrder_CallBack_int = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Function;
							GC.KeepAlive(m_getExecutionOrder_CallBack_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int(this.NativeObject, m_getExecutionOrder_CallBack_int);
							m_copyFrom_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Function;
							GC.KeepAlive(m_copyFrom_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState(this.NativeObject, m_copyFrom_CallBack_void_CSubRenderState);
							m_createCpuSubPrograms_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Function;
							GC.KeepAlive(m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet(this.NativeObject, m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Function;
							GC.KeepAlive(m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(this.NativeObject, m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							m_resolveParameters_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveParameters_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet(this.NativeObject, m_resolveParameters_CallBack_bool_CProgramSet);
							m_resolveDependencies_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveDependencies_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet(this.NativeObject, m_resolveDependencies_CallBack_bool_CProgramSet);
							m_addFunctionInvocations_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Function;
							GC.KeepAlive(m_addFunctionInvocations_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet(this.NativeObject, m_addFunctionInvocations_CallBack_bool_CProgramSet);
						}
					}
					public override bool CreateCpuSubPrograms(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						return base.CreateCpuSubPrograms_NoVirtual(programSet);
					}
					public static Ffptexturing FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ffptexturing obj = baseObj as  Ffptexturing;
						if (object.Equals(obj, null))
						{
							obj = new Ffptexturing(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CFFPTexturing");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class FfptexturingClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ffptexturing emptyInstance = new Ffptexturing(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Ffptexturingfactory : EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory
				{
					public Ffptexturingfactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CFFPTexturingFactoryProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.Ffptexturingfactory".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public new string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_NoVirtual(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString(IntPtr pNativeObject);

					public override string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					public new EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					public new void WriteInstance_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					public override void WriteInstance(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_NoVirtual(IntPtr pNativeObject);

					protected new EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstanceImpl_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_NoVirtual(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState(IntPtr pNativeObject);

					protected override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstanceImpl()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState(this.NativeObject);
						
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
							private static bool bLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadFfptexturingfactory = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory", new FfptexturingfactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactoryProxy", new FfptexturingfactoryClassFactory());

					public Ffptexturingfactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState(IntPtr pObject, createInstance_CallBack_CSubRenderState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr pObject, createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(IntPtr pObject, createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(IntPtr pObject, createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState(IntPtr pObject, destroyInstance_CallBack_void_CSubRenderState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void(IntPtr pObject, destroyAllInstances_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr pObject, writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(IntPtr pObject, writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState(IntPtr pObject, createInstanceImpl_CallBack_CSubRenderState pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_createInstance_CallBack_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState(this.NativeObject, m_createInstance_CallBack_CSubRenderState);
							m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.NativeObject, m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator);
							m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(this.NativeObject, m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator);
							m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(this.NativeObject, m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator);
							m_destroyInstance_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Function;
							GC.KeepAlive(m_destroyInstance_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState(this.NativeObject, m_destroyInstance_CallBack_void_CSubRenderState);
							m_destroyAllInstances_CallBack_void = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Function;
							GC.KeepAlive(m_destroyAllInstances_CallBack_void);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void(this.NativeObject, m_destroyAllInstances_CallBack_void);
							m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(this.NativeObject, m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass);
							m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Function;
							GC.KeepAlive(m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(this.NativeObject, m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState);
							m_createInstanceImpl_CallBack_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Function;
							GC.KeepAlive(m_createInstanceImpl_CallBack_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState(this.NativeObject, m_createInstanceImpl_CallBack_CSubRenderState);
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
					public static Ffptexturingfactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ffptexturingfactory obj = baseObj as  Ffptexturingfactory;
						if (object.Equals(obj, null))
						{
							obj = new Ffptexturingfactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CFFPTexturingFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class FfptexturingfactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ffptexturingfactory emptyInstance = new Ffptexturingfactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
