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
			/// <summary>
			/// 优化功能类
			/// 主要用于功能的优化
			/// </summary>
			public class OptimisedUtil : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public OptimisedUtil() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("COptimisedUtilProxy", null);
					if (!"EarthView.World.Graphic.OptimisedUtil".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_COptimisedUtil_getImplementation_COptimisedUtil();

				/// <summary>
				/// 得到类的实现
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回指向EarthView::World::Graphic::COptimisedUtil类的指针</returns>
				public static EarthView.World.Graphic.OptimisedUtil GetImplementation()
				{
					IntPtr __ptr = EarthView_World_Graphic_COptimisedUtil_getImplementation_COptimisedUtil();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.OptimisedUtil csObj = new EarthView.World.Graphic.OptimisedUtil(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COptimisedUtil");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.OptimisedUtil;
						csObj.BindNativeObject(__ptr, "COptimisedUtil");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void softwareVertexSkinning_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(IntPtr srcPosPtr, IntPtr destPosPtr, IntPtr srcNormPtr, IntPtr destNormPtr, IntPtr blendWeightPtr, IntPtr blendIndexPtr, ref IntPtr[] blendMatrices, ulong srcPosStride, ulong destPosStride, ulong srcNormStride, ulong destNormStride, ulong blendWeightStride, ulong blendIndexStride, ulong numWeightsPerVertex, ulong numVertices);

				protected softwareVertexSkinning_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t m_softwareVertexSkinning_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t;

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
				private static extern void EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr srcPosPtr, IntPtr destPosPtr, IntPtr srcNormPtr, IntPtr destNormPtr, IntPtr blendWeightPtr, IntPtr blendIndexPtr, IntPtr[] blendMatrices, ulong srcPosStride, ulong destPosStride, ulong srcNormStride, ulong destNormStride, ulong blendWeightStride, ulong blendIndexStride, ulong numWeightsPerVertex, ulong numVertices);

				/// <summary>
				/// 顶点修饰
				/// </summary>
				/// <param name="srcPosPtr">来源位置的缓冲器</param>
				/// <param name="destPosPtr">目标位置的缓冲器</param>
				/// <param name="srcNormPtr">来源的法线的缓冲器</param>
				/// <param name="destNormPtr">目标的法线的缓冲器</param>
				/// <param name="blendWeightPtr">混合权重缓冲器</param>
				/// <param name="blendIndexPtr">混合索引缓冲器</param>
				/// <param name="blendMatrices">混合矩阵</param>
				/// <param name="srcPosStride">来源位置的跨度</param>
				/// <param name="destPosStride">目标位置的跨度</param>
				/// <param name="srcNormStride">来源法线的跨度</param>
				/// <param name="destNormStride">目标法线的跨度</param>
				/// <param name="blendWeightStride">混合权重的跨度</param>
				/// <param name="blendIndexStride">混合索引的跨度</param>
				/// <param name="numWeightsPerVertex">每个顶点的混合权重个数</param>
				/// <param name="numVertices">混合顶点个数</param>
				/// <returns></returns>
				public virtual void SoftwareVertexSkinning_NoVirtual(IntPtr srcPosPtr, IntPtr destPosPtr, IntPtr srcNormPtr, IntPtr destNormPtr, IntPtr blendWeightPtr, IntPtr blendIndexPtr, EarthView.World.Spatial.Math.Matrix4[] blendMatrices, ulong srcPosStride, ulong destPosStride, ulong srcNormStride, ulong destNormStride, ulong blendWeightStride, ulong blendIndexStride, ulong numWeightsPerVertex, ulong numVertices)
				{
					IntPtr[] ptrsblendMatrices = new IntPtr[blendMatrices.Length];
					for (int i = 0; i < blendMatrices.Length; i++)
					{
					ptrsblendMatrices[i]=blendMatrices[i].NativeObject;
					}
					
					EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_NoVirtual(this.NativeObject, srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, ptrsblendMatrices,srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
					
				}

				protected  void EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Function(IntPtr srcPosPtr, IntPtr destPosPtr, IntPtr srcNormPtr, IntPtr destNormPtr, IntPtr blendWeightPtr, IntPtr blendIndexPtr, ref IntPtr[] blendMatrices, ulong srcPosStride, ulong destPosStride, ulong srcNormStride, ulong destNormStride, ulong blendWeightStride, ulong blendIndexStride, ulong numWeightsPerVertex, ulong numVertices)
				{
					EarthView.World.Spatial.Math.Matrix4[] csObjsblendMatrices=new EarthView.World.Spatial.Math.Matrix4[blendMatrices.Length];
					for (int i = 0; i < blendMatrices.Length; i++)
					{
					EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(blendMatrices[i], "CMatrix4");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csObj.BindNativeObject(blendMatrices[i], "CMatrix4");
					}
					csObjsblendMatrices[i]=csObj;
					}
					
					SoftwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, csObjsblendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
					
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
				private static extern void EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(IntPtr pNativeObject, IntPtr srcPosPtr, IntPtr destPosPtr, IntPtr srcNormPtr, IntPtr destNormPtr, IntPtr blendWeightPtr, IntPtr blendIndexPtr, IntPtr[] blendMatrices, ulong srcPosStride, ulong destPosStride, ulong srcNormStride, ulong destNormStride, ulong blendWeightStride, ulong blendIndexStride, ulong numWeightsPerVertex, ulong numVertices);

				/// <summary>
				/// 顶点修饰
				/// </summary>
				/// <param name="srcPosPtr">来源位置的缓冲器</param>
				/// <param name="destPosPtr">目标位置的缓冲器</param>
				/// <param name="srcNormPtr">来源的法线的缓冲器</param>
				/// <param name="destNormPtr">目标的法线的缓冲器</param>
				/// <param name="blendWeightPtr">混合权重缓冲器</param>
				/// <param name="blendIndexPtr">混合索引缓冲器</param>
				/// <param name="blendMatrices">混合矩阵</param>
				/// <param name="srcPosStride">来源位置的跨度</param>
				/// <param name="destPosStride">目标位置的跨度</param>
				/// <param name="srcNormStride">来源法线的跨度</param>
				/// <param name="destNormStride">目标法线的跨度</param>
				/// <param name="blendWeightStride">混合权重的跨度</param>
				/// <param name="blendIndexStride">混合索引的跨度</param>
				/// <param name="numWeightsPerVertex">每个顶点的混合权重个数</param>
				/// <param name="numVertices">混合顶点个数</param>
				/// <returns></returns>
				public virtual void SoftwareVertexSkinning(IntPtr srcPosPtr, IntPtr destPosPtr, IntPtr srcNormPtr, IntPtr destNormPtr, IntPtr blendWeightPtr, IntPtr blendIndexPtr, EarthView.World.Spatial.Math.Matrix4[] blendMatrices, ulong srcPosStride, ulong destPosStride, ulong srcNormStride, ulong destNormStride, ulong blendWeightStride, ulong blendIndexStride, ulong numWeightsPerVertex, ulong numVertices)
				{
					IntPtr[] ptrsblendMatrices = new IntPtr[blendMatrices.Length];
					for (int i = 0; i < blendMatrices.Length; i++)
					{
					ptrsblendMatrices[i]=blendMatrices[i].NativeObject;
					}
					
					EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, ptrsblendMatrices,srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void softwareVertexMorph_CallBack_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(double t, IntPtr srcPos1, IntPtr srcPos2, IntPtr dstPos, ulong pos1VSize, ulong pos2VSize, ulong dstVSize, ulong numVertices, bool morphNormals);

				protected softwareVertexMorph_CallBack_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool m_softwareVertexMorph_CallBack_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool;

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
				private static extern void EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(IntPtr pNativeObject, double t, IntPtr srcPos1, IntPtr srcPos2, IntPtr dstPos, ulong pos1VSize, ulong pos2VSize, ulong dstVSize, ulong numVertices, byte morphNormals);

				/// <summary>
				/// 顶点变换
				/// </summary>
				/// <param name="t">起始位置与终点位置的距离</param>
				/// <param name="srcPos1">指向开始位置的缓冲器指针</param>
				/// <param name="srcPos2">指向结束位置的缓冲器指针</param>
				/// <param name="dstPos">指向目标位置的缓冲器指针</param>
				/// <param name="numVertices">变换顶点的个数</param>
				/// <returns></returns>
				public virtual void SoftwareVertexMorph_NoVirtual(double t, IntPtr srcPos1, IntPtr srcPos2, IntPtr dstPos, ulong pos1VSize, ulong pos2VSize, ulong dstVSize, ulong numVertices, bool morphNormals)
				{
					EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(this.NativeObject, t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, Convert.ToByte(morphNormals));
					
				}

				protected  void EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Function(double t, IntPtr srcPos1, IntPtr srcPos2, IntPtr dstPos, ulong pos1VSize, ulong pos2VSize, ulong dstVSize, ulong numVertices, bool morphNormals)
				{
					SoftwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
					
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
				private static extern void EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr pNativeObject, double t, IntPtr srcPos1, IntPtr srcPos2, IntPtr dstPos, ulong pos1VSize, ulong pos2VSize, ulong dstVSize, ulong numVertices, byte morphNormals);

				/// <summary>
				/// 顶点变换
				/// </summary>
				/// <param name="t">起始位置与终点位置的距离</param>
				/// <param name="srcPos1">指向开始位置的缓冲器指针</param>
				/// <param name="srcPos2">指向结束位置的缓冲器指针</param>
				/// <param name="dstPos">指向目标位置的缓冲器指针</param>
				/// <param name="numVertices">变换顶点的个数</param>
				/// <returns></returns>
				public virtual void SoftwareVertexMorph(double t, IntPtr srcPos1, IntPtr srcPos2, IntPtr dstPos, ulong pos1VSize, ulong pos2VSize, ulong dstVSize, ulong numVertices, bool morphNormals)
				{
					EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.NativeObject, t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, Convert.ToByte(morphNormals));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void concatenateAffineMatrices_CallBack_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t(IntPtr baseMatrix, IntPtr srcMatrices, IntPtr dstMatrices, ulong numMatrices);

				protected concatenateAffineMatrices_CallBack_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t m_concatenateAffineMatrices_CallBack_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t;

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
				private static extern void EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr baseMatrix, IntPtr srcMatrices, IntPtr dstMatrices, ulong numMatrices);

				/// <summary>
				/// 将一个仿射矩阵连接到一个仿射矩阵组阵列中
				/// </summary>
				/// <param name="baseMatrix">作为第一个操作数使用的矩阵</param>
				/// <param name="srcMatrices">作为第二个操作数使用的矩阵阵列</param>
				/// <param name="dstMatrices">存放矩阵连接结果的矩阵阵列</param>
				/// <param name="numMatrices">阵列中矩阵个数</param>
				/// <returns></returns>
				public virtual void ConcatenateAffineMatrices_NoVirtual(EarthView.World.Spatial.Math.Matrix4 baseMatrix, EarthView.World.Spatial.Math.Matrix4 srcMatrices, EarthView.World.Spatial.Math.Matrix4 dstMatrices, ulong numMatrices)
				{
					EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_NoVirtual(this.NativeObject, object.Equals(baseMatrix, null) ? IntPtr.Zero : baseMatrix.NativeObject, object.Equals(srcMatrices, null) ? IntPtr.Zero : srcMatrices.NativeObject, object.Equals(dstMatrices, null) ? IntPtr.Zero : dstMatrices.NativeObject, numMatrices);
					
				}

				protected  void EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Function(IntPtr baseMatrix, IntPtr srcMatrices, IntPtr dstMatrices, ulong numMatrices)
				{
					EarthView.World.Spatial.Math.Matrix4 csobj_baseMatrix = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_baseMatrix.BindNativeObject(baseMatrix,"CMatrix4");
					csobj_baseMatrix.Delegate = true;
					IClassFactory csobj_baseMatrixClassFactory = GlobalClassFactoryMap.Get(csobj_baseMatrix.GetCppInstanceTypeName());
					if (csobj_baseMatrixClassFactory != null)
					{
						csobj_baseMatrix.Delegate = true;
						csobj_baseMatrix = csobj_baseMatrixClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csobj_baseMatrix.BindNativeObject(baseMatrix, "CMatrix4");
						csobj_baseMatrix.Delegate = true;
					}
					EarthView.World.Spatial.Math.Matrix4 csobj_srcMatrices = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_srcMatrices.BindNativeObject(srcMatrices,"CMatrix4");
					csobj_srcMatrices.Delegate = true;
					IClassFactory csobj_srcMatricesClassFactory = GlobalClassFactoryMap.Get(csobj_srcMatrices.GetCppInstanceTypeName());
					if (csobj_srcMatricesClassFactory != null)
					{
						csobj_srcMatrices.Delegate = true;
						csobj_srcMatrices = csobj_srcMatricesClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csobj_srcMatrices.BindNativeObject(srcMatrices, "CMatrix4");
						csobj_srcMatrices.Delegate = true;
					}
					EarthView.World.Spatial.Math.Matrix4 csobj_dstMatrices = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_dstMatrices.BindNativeObject(dstMatrices,"CMatrix4");
					csobj_dstMatrices.Delegate = true;
					IClassFactory csobj_dstMatricesClassFactory = GlobalClassFactoryMap.Get(csobj_dstMatrices.GetCppInstanceTypeName());
					if (csobj_dstMatricesClassFactory != null)
					{
						csobj_dstMatrices.Delegate = true;
						csobj_dstMatrices = csobj_dstMatricesClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csobj_dstMatrices.BindNativeObject(dstMatrices, "CMatrix4");
						csobj_dstMatrices.Delegate = true;
					}
					
					ConcatenateAffineMatrices(csobj_baseMatrix, csobj_srcMatrices, csobj_dstMatrices, numMatrices);
					
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
				private static extern void EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t(IntPtr pNativeObject, IntPtr baseMatrix, IntPtr srcMatrices, IntPtr dstMatrices, ulong numMatrices);

				/// <summary>
				/// 将一个仿射矩阵连接到一个仿射矩阵组阵列中
				/// </summary>
				/// <param name="baseMatrix">作为第一个操作数使用的矩阵</param>
				/// <param name="srcMatrices">作为第二个操作数使用的矩阵阵列</param>
				/// <param name="dstMatrices">存放矩阵连接结果的矩阵阵列</param>
				/// <param name="numMatrices">阵列中矩阵个数</param>
				/// <returns></returns>
				public virtual void ConcatenateAffineMatrices(EarthView.World.Spatial.Math.Matrix4 baseMatrix, EarthView.World.Spatial.Math.Matrix4 srcMatrices, EarthView.World.Spatial.Math.Matrix4 dstMatrices, ulong numMatrices)
				{
					EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t(this.NativeObject, object.Equals(baseMatrix, null) ? IntPtr.Zero : baseMatrix.NativeObject, object.Equals(srcMatrices, null) ? IntPtr.Zero : srcMatrices.NativeObject, object.Equals(dstMatrices, null) ? IntPtr.Zero : dstMatrices.NativeObject, numMatrices);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void calculateFaceNormals_CallBack_void_ev_real32_CTriangle_CVector4_ev_size_t(IntPtr positions, IntPtr triangles, IntPtr faceNormals, ulong numTriangles);

				protected calculateFaceNormals_CallBack_void_ev_real32_CTriangle_CVector4_ev_size_t m_calculateFaceNormals_CallBack_void_ev_real32_CTriangle_CVector4_ev_size_t;

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
				private static extern void EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr positions, IntPtr triangles, IntPtr faceNormals, ulong numTriangles);

				/// <summary>
				/// 计算某一位置上三角形的平面的法线
				/// </summary>
				/// <param name="positions">，三角形的位置信息，指向三角形平面的指针（通过三角形顶点索引来找到平面）</param>
				/// <param name="triangles">需要计算平面法线的三角形</param>
				/// <param name="faceNormals">存放三角形平面法线的阵列</param>
				/// <param name="numTriangles">需要计算面法线的三角形的个数</param>
				/// <returns></returns>
				public virtual void CalculateFaceNormals_NoVirtual(IntPtr positions, EarthView.World.Graphic.EdgeData.Triangle triangles, EarthView.World.Spatial.Math.Vector4 faceNormals, ulong numTriangles)
				{
					EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_NoVirtual(this.NativeObject, positions, object.Equals(triangles, null) ? IntPtr.Zero : triangles.NativeObject, object.Equals(faceNormals, null) ? IntPtr.Zero : faceNormals.NativeObject, numTriangles);
					
				}

				protected  void EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Function(IntPtr positions, IntPtr triangles, IntPtr faceNormals, ulong numTriangles)
				{
					EarthView.World.Graphic.EdgeData.Triangle csobj_triangles = new EarthView.World.Graphic.EdgeData.Triangle(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_triangles.BindNativeObject(triangles,"CTriangle");
					csobj_triangles.Delegate = true;
					IClassFactory csobj_trianglesClassFactory = GlobalClassFactoryMap.Get(csobj_triangles.GetCppInstanceTypeName());
					if (csobj_trianglesClassFactory != null)
					{
						csobj_triangles.Delegate = true;
						csobj_triangles = csobj_trianglesClassFactory.Create() as EarthView.World.Graphic.EdgeData.Triangle;
						csobj_triangles.BindNativeObject(triangles, "CTriangle");
						csobj_triangles.Delegate = true;
					}
					EarthView.World.Spatial.Math.Vector4 csobj_faceNormals = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_faceNormals.BindNativeObject(faceNormals,"CVector4");
					csobj_faceNormals.Delegate = true;
					IClassFactory csobj_faceNormalsClassFactory = GlobalClassFactoryMap.Get(csobj_faceNormals.GetCppInstanceTypeName());
					if (csobj_faceNormalsClassFactory != null)
					{
						csobj_faceNormals.Delegate = true;
						csobj_faceNormals = csobj_faceNormalsClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csobj_faceNormals.BindNativeObject(faceNormals, "CVector4");
						csobj_faceNormals.Delegate = true;
					}
					
					CalculateFaceNormals(positions, csobj_triangles, csobj_faceNormals, numTriangles);
					
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
				private static extern void EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t(IntPtr pNativeObject, IntPtr positions, IntPtr triangles, IntPtr faceNormals, ulong numTriangles);

				/// <summary>
				/// 计算某一位置上三角形的平面的法线
				/// </summary>
				/// <param name="positions">，三角形的位置信息，指向三角形平面的指针（通过三角形顶点索引来找到平面）</param>
				/// <param name="triangles">需要计算平面法线的三角形</param>
				/// <param name="faceNormals">存放三角形平面法线的阵列</param>
				/// <param name="numTriangles">需要计算面法线的三角形的个数</param>
				/// <returns></returns>
				public virtual void CalculateFaceNormals(IntPtr positions, EarthView.World.Graphic.EdgeData.Triangle triangles, EarthView.World.Spatial.Math.Vector4 faceNormals, ulong numTriangles)
				{
					EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t(this.NativeObject, positions, object.Equals(triangles, null) ? IntPtr.Zero : triangles.NativeObject, object.Equals(faceNormals, null) ? IntPtr.Zero : faceNormals.NativeObject, numTriangles);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void calculateLightFacing_CallBack_void_CVector4_CVector4_ev_char_ev_size_t(IntPtr lightPos, IntPtr faceNormals, IntPtr lightFacings, ulong numFaces);

				protected calculateLightFacing_CallBack_void_CVector4_CVector4_ev_char_ev_size_t m_calculateLightFacing_CallBack_void_CVector4_CVector4_ev_char_ev_size_t;

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
				private static extern void EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr lightPos, IntPtr faceNormals, IntPtr lightFacings, ulong numFaces);

				/// <summary>
				/// 计算光源面上三角形平面的法线
				/// </summary>
				/// <param name="lightPos">光源的空间位置（光源位置是4D的，包括x、y、z（分别对应三维坐标）和w，w值为0.0f或者1.0f，w=0.0f，则光源为定向光源，w=1.0f，则光源是点光源）</param>
				/// <param name="faceNormals">三角形的面法线（面法线是单位正交向量加上到起点的距离）</param>
				/// <param name="lightFacings">存放光源面的信息标记阵列，如果面法线朝向光源则标记是true，否则标记是false</param>
				/// <param name="numFaces">需要计算的面法线的个数</param>
				/// <returns></returns>
				public virtual void CalculateLightFacing_NoVirtual(EarthView.World.Spatial.Math.Vector4 lightPos, EarthView.World.Spatial.Math.Vector4 faceNormals, IntPtr lightFacings, ulong numFaces)
				{
					EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_NoVirtual(this.NativeObject, object.Equals(lightPos, null) ? IntPtr.Zero : lightPos.NativeObject, object.Equals(faceNormals, null) ? IntPtr.Zero : faceNormals.NativeObject, lightFacings, numFaces);
					
				}

				protected  void EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Function(IntPtr lightPos, IntPtr faceNormals, IntPtr lightFacings, ulong numFaces)
				{
					EarthView.World.Spatial.Math.Vector4 csobj_lightPos = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_lightPos.BindNativeObject(lightPos,"CVector4");
					csobj_lightPos.Delegate = true;
					IClassFactory csobj_lightPosClassFactory = GlobalClassFactoryMap.Get(csobj_lightPos.GetCppInstanceTypeName());
					if (csobj_lightPosClassFactory != null)
					{
						csobj_lightPos.Delegate = true;
						csobj_lightPos = csobj_lightPosClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csobj_lightPos.BindNativeObject(lightPos, "CVector4");
						csobj_lightPos.Delegate = true;
					}
					EarthView.World.Spatial.Math.Vector4 csobj_faceNormals = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_faceNormals.BindNativeObject(faceNormals,"CVector4");
					csobj_faceNormals.Delegate = true;
					IClassFactory csobj_faceNormalsClassFactory = GlobalClassFactoryMap.Get(csobj_faceNormals.GetCppInstanceTypeName());
					if (csobj_faceNormalsClassFactory != null)
					{
						csobj_faceNormals.Delegate = true;
						csobj_faceNormals = csobj_faceNormalsClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csobj_faceNormals.BindNativeObject(faceNormals, "CVector4");
						csobj_faceNormals.Delegate = true;
					}
					
					CalculateLightFacing(csobj_lightPos, csobj_faceNormals, lightFacings, numFaces);
					
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
				private static extern void EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t(IntPtr pNativeObject, IntPtr lightPos, IntPtr faceNormals, IntPtr lightFacings, ulong numFaces);

				/// <summary>
				/// 计算光源面上三角形平面的法线
				/// </summary>
				/// <param name="lightPos">光源的空间位置（光源位置是4D的，包括x、y、z（分别对应三维坐标）和w，w值为0.0f或者1.0f，w=0.0f，则光源为定向光源，w=1.0f，则光源是点光源）</param>
				/// <param name="faceNormals">三角形的面法线（面法线是单位正交向量加上到起点的距离）</param>
				/// <param name="lightFacings">存放光源面的信息标记阵列，如果面法线朝向光源则标记是true，否则标记是false</param>
				/// <param name="numFaces">需要计算的面法线的个数</param>
				/// <returns></returns>
				public virtual void CalculateLightFacing(EarthView.World.Spatial.Math.Vector4 lightPos, EarthView.World.Spatial.Math.Vector4 faceNormals, IntPtr lightFacings, ulong numFaces)
				{
					EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t(this.NativeObject, object.Equals(lightPos, null) ? IntPtr.Zero : lightPos.NativeObject, object.Equals(faceNormals, null) ? IntPtr.Zero : faceNormals.NativeObject, lightFacings, numFaces);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void extrudeVertices_CallBack_void_CVector4_Real_ev_real32_ev_real32_ev_size_t(IntPtr lightPos, double extrudeDist, IntPtr srcPositions, IntPtr destPositions, ulong numVertices);

				protected extrudeVertices_CallBack_void_CVector4_Real_ev_real32_ev_real32_ev_size_t m_extrudeVertices_CallBack_void_CVector4_Real_ev_real32_ev_real32_ev_size_t;

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
				private static extern void EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr lightPos, double extrudeDist, IntPtr srcPositions, IntPtr destPositions, ulong numVertices);

				/// <summary>
				/// 在距离光源固定的距离处拉伸顶点
				/// </summary>
				/// <param name="lightPos">光源的空间位置（光源位置是4D的，包括x、y、z（分别对应三维坐标）和w，w值为0.0f或者1.0f，w=0.0f，则光源为定向光源，w=1.0f，则光源是点光源）</param>
				/// <param name="extrudeDist">拉伸距离</param>
				/// <param name="srcPositions">指向顶点来源位置缓冲器的指针</param>
				/// <param name="destPositions">指向顶点目标位置缓冲器的指针</param>
				/// <param name="numVertices">需要拉伸的顶点个数</param>
				/// <returns></returns>
				public virtual void ExtrudeVertices_NoVirtual(EarthView.World.Spatial.Math.Vector4 lightPos, double extrudeDist, IntPtr srcPositions, IntPtr destPositions, ulong numVertices)
				{
					EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_NoVirtual(this.NativeObject, object.Equals(lightPos, null) ? IntPtr.Zero : lightPos.NativeObject, extrudeDist, srcPositions, destPositions, numVertices);
					
				}

				protected  void EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Function(IntPtr lightPos, double extrudeDist, IntPtr srcPositions, IntPtr destPositions, ulong numVertices)
				{
					EarthView.World.Spatial.Math.Vector4 csobj_lightPos = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_lightPos.BindNativeObject(lightPos,"CVector4");
					csobj_lightPos.Delegate = true;
					IClassFactory csobj_lightPosClassFactory = GlobalClassFactoryMap.Get(csobj_lightPos.GetCppInstanceTypeName());
					if (csobj_lightPosClassFactory != null)
					{
						csobj_lightPos.Delegate = true;
						csobj_lightPos = csobj_lightPosClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csobj_lightPos.BindNativeObject(lightPos, "CVector4");
						csobj_lightPos.Delegate = true;
					}
					
					ExtrudeVertices(csobj_lightPos, extrudeDist, srcPositions, destPositions, numVertices);
					
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
				private static extern void EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t(IntPtr pNativeObject, IntPtr lightPos, double extrudeDist, IntPtr srcPositions, IntPtr destPositions, ulong numVertices);

				/// <summary>
				/// 在距离光源固定的距离处拉伸顶点
				/// </summary>
				/// <param name="lightPos">光源的空间位置（光源位置是4D的，包括x、y、z（分别对应三维坐标）和w，w值为0.0f或者1.0f，w=0.0f，则光源为定向光源，w=1.0f，则光源是点光源）</param>
				/// <param name="extrudeDist">拉伸距离</param>
				/// <param name="srcPositions">指向顶点来源位置缓冲器的指针</param>
				/// <param name="destPositions">指向顶点目标位置缓冲器的指针</param>
				/// <param name="numVertices">需要拉伸的顶点个数</param>
				/// <returns></returns>
				public virtual void ExtrudeVertices(EarthView.World.Spatial.Math.Vector4 lightPos, double extrudeDist, IntPtr srcPositions, IntPtr destPositions, ulong numVertices)
				{
					EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t(this.NativeObject, object.Equals(lightPos, null) ? IntPtr.Zero : lightPos.NativeObject, extrudeDist, srcPositions, destPositions, numVertices);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOptimisedUtil = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadOptimisedUtil = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOptimisedUtil = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadOptimisedUtil = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadOptimisedUtil = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadOptimisedUtil = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOptimisedUtil = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadOptimisedUtil = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadOptimisedUtil = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadOptimisedUtil = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadOptimisedUtil = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadOptimisedUtil = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::COptimisedUtil", new OptimisedUtilClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::COptimisedUtilProxy", new OptimisedUtilClassFactory());

				public OptimisedUtil(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(IntPtr pObject, softwareVertexSkinning_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr pObject, softwareVertexMorph_CallBack_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t(IntPtr pObject, concatenateAffineMatrices_CallBack_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t(IntPtr pObject, calculateFaceNormals_CallBack_void_ev_real32_CTriangle_CVector4_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t(IntPtr pObject, calculateLightFacing_CallBack_void_CVector4_CVector4_ev_char_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t(IntPtr pObject, extrudeVertices_CallBack_void_CVector4_Real_ev_real32_ev_real32_ev_size_t pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_softwareVertexSkinning_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t = EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_softwareVertexSkinning_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, m_softwareVertexSkinning_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t);
						m_softwareVertexMorph_CallBack_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool = EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Function;
						GC.KeepAlive(m_softwareVertexMorph_CallBack_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.NativeObject, m_softwareVertexMorph_CallBack_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						m_concatenateAffineMatrices_CallBack_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t = EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Function;
						GC.KeepAlive(m_concatenateAffineMatrices_CallBack_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t(this.NativeObject, m_concatenateAffineMatrices_CallBack_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t);
						m_calculateFaceNormals_CallBack_void_ev_real32_CTriangle_CVector4_ev_size_t = EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Function;
						GC.KeepAlive(m_calculateFaceNormals_CallBack_void_ev_real32_CTriangle_CVector4_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t(this.NativeObject, m_calculateFaceNormals_CallBack_void_ev_real32_CTriangle_CVector4_ev_size_t);
						m_calculateLightFacing_CallBack_void_CVector4_CVector4_ev_char_ev_size_t = EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Function;
						GC.KeepAlive(m_calculateLightFacing_CallBack_void_CVector4_CVector4_ev_char_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t(this.NativeObject, m_calculateLightFacing_CallBack_void_CVector4_CVector4_ev_char_ev_size_t);
						m_extrudeVertices_CallBack_void_CVector4_Real_ev_real32_ev_real32_ev_size_t = EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Function;
						GC.KeepAlive(m_extrudeVertices_CallBack_void_CVector4_Real_ev_real32_ev_real32_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t(this.NativeObject, m_extrudeVertices_CallBack_void_CVector4_Real_ev_real32_ev_real32_ev_size_t);
					}
				}
				public static OptimisedUtil FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					OptimisedUtil obj = baseObj as  OptimisedUtil;
					if (object.Equals(obj, null))
					{
						obj = new OptimisedUtil(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COptimisedUtil");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OptimisedUtilClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					OptimisedUtil emptyInstance = new OptimisedUtil(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
