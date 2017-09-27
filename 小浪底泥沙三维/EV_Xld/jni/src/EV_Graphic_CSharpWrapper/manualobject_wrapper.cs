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
			/// 手动创建对象类
			/// 此类提供简单的接口供用户创建对象，可以在程序中定义你绘制的信息。
			/// </summary>
			public class ManualObject : EarthView.World.Graphic.MovableObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				public ManualObject(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					Create("CManualObjectProxy", list);
					if (!"EarthView.World.Graphic.ManualObject".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void clear_CallBack_void();

				protected clear_CallBack_void m_clear_CallBack_void;

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
				private static extern void EarthView_World_Graphic_CManualObject_clear_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 清除对象所有内容
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void Clear_NoVirtual()
				{
					EarthView_World_Graphic_CManualObject_clear_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_clear_void_Function()
				{
					Clear();
					
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
				private static extern void EarthView_World_Graphic_CManualObject_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清除对象所有内容
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void Clear()
				{
					EarthView_World_Graphic_CManualObject_clear_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void estimateVertexCount_CallBack_void_ev_size_t(ulong vcount);

				protected estimateVertexCount_CallBack_void_ev_size_t m_estimateVertexCount_CallBack_void_ev_size_t;

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
				private static extern void EarthView_World_Graphic_CManualObject_estimateVertexCount_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong vcount);

				/// <summary>
				/// 预先估计顶点数量
				/// 为了避免内存分配的浪费
				/// </summary>
				/// <param name="vcount">顶点数量</param>
				/// <returns></returns>
				public virtual void EstimateVertexCount_NoVirtual(ulong vcount)
				{
					EarthView_World_Graphic_CManualObject_estimateVertexCount_void_ev_size_t_NoVirtual(this.NativeObject, vcount);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_estimateVertexCount_void_ev_size_t_Function(ulong vcount)
				{
					EstimateVertexCount(vcount);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_estimateVertexCount_void_ev_size_t(IntPtr pNativeObject, ulong vcount);

				/// <summary>
				/// 预先估计顶点数量
				/// 为了避免内存分配的浪费
				/// </summary>
				/// <param name="vcount">顶点数量</param>
				/// <returns></returns>
				public virtual void EstimateVertexCount(ulong vcount)
				{
					EarthView_World_Graphic_CManualObject_estimateVertexCount_void_ev_size_t(this.NativeObject, vcount);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void estimateIndexCount_CallBack_void_ev_size_t(ulong icount);

				protected estimateIndexCount_CallBack_void_ev_size_t m_estimateIndexCount_CallBack_void_ev_size_t;

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
				private static extern void EarthView_World_Graphic_CManualObject_estimateIndexCount_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong icount);

				/// <summary>
				/// 预先估计索引顶点数量
				/// 需要渲染顶点时，我们可以通过索引，重复使用某个顶点
				/// </summary>
				/// <param name="icount">索引数量</param>
				/// <returns></returns>
				public virtual void EstimateIndexCount_NoVirtual(ulong icount)
				{
					EarthView_World_Graphic_CManualObject_estimateIndexCount_void_ev_size_t_NoVirtual(this.NativeObject, icount);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_estimateIndexCount_void_ev_size_t_Function(ulong icount)
				{
					EstimateIndexCount(icount);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_estimateIndexCount_void_ev_size_t(IntPtr pNativeObject, ulong icount);

				/// <summary>
				/// 预先估计索引顶点数量
				/// 需要渲染顶点时，我们可以通过索引，重复使用某个顶点
				/// </summary>
				/// <param name="icount">索引数量</param>
				/// <returns></returns>
				public virtual void EstimateIndexCount(ulong icount)
				{
					EarthView_World_Graphic_CManualObject_estimateIndexCount_void_ev_size_t(this.NativeObject, icount);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void begin_CallBack_void_EVString_OperationType_EVString(ref IntPtr materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType, ref IntPtr groupName);

				protected begin_CallBack_void_EVString_OperationType_EVString m_begin_CallBack_void_EVString_OperationType_EVString;

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
				private static extern void EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_EVString_NoVirtual(IntPtr pNativeObject, string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType, string groupName);

				/// <summary>
				/// 开始定义对象的一部分
				/// 每次使用这个方法，就渲染新划分的部分。
				/// </summary>
				/// <param name="materialName">渲染对象这部分材质的名称</param>
				/// <param name="opType">使用的渲染类型</param>
				/// <param name="groupName">组名</param>
				/// <returns></returns>
				public virtual void Begin_NoVirtual(string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType, string groupName)
				{
					EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_EVString_NoVirtual(this.NativeObject, materialName, opType, groupName);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_EVString_Function(ref IntPtr materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType, ref IntPtr groupName)
				{
					string strmaterialName= Marshal.PtrToStringAnsi(materialName);
					ClassFactory.FreeString(ref materialName);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					Begin(strmaterialName,opType, strgroupName);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_EVString(IntPtr pNativeObject, string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType, string groupName);

				/// <summary>
				/// 开始定义对象的一部分
				/// 每次使用这个方法，就渲染新划分的部分。
				/// </summary>
				/// <param name="materialName">渲染对象这部分材质的名称</param>
				/// <param name="opType">使用的渲染类型</param>
				/// <param name="groupName">组名</param>
				/// <returns></returns>
				public virtual void Begin(string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType, string groupName)
				{
					EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_EVString(this.NativeObject, materialName, opType, groupName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void begin_CallBack_void_EVString_OperationType(ref IntPtr materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType);

				protected begin_CallBack_void_EVString_OperationType m_begin_CallBack_void_EVString_OperationType;

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
				private static extern void EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_NoVirtual(IntPtr pNativeObject, string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType);

				public virtual void Begin_NoVirtual(string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType)
				{
					EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_NoVirtual(this.NativeObject, materialName, opType);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_Function(ref IntPtr materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType)
				{
					string strmaterialName= Marshal.PtrToStringAnsi(materialName);
					ClassFactory.FreeString(ref materialName);
					
					Begin(strmaterialName,opType);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType(IntPtr pNativeObject, string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType);

				public virtual void Begin(string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType)
				{
					EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType(this.NativeObject, materialName, opType);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void begin_CallBack_void_EVString(ref IntPtr materialName);

				protected begin_CallBack_void_EVString m_begin_CallBack_void_EVString;

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
				private static extern void EarthView_World_Graphic_CManualObject_begin_void_EVString_NoVirtual(IntPtr pNativeObject, string materialName);

				public virtual void Begin_NoVirtual(string materialName)
				{
					EarthView_World_Graphic_CManualObject_begin_void_EVString_NoVirtual(this.NativeObject, materialName);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_begin_void_EVString_Function(ref IntPtr materialName)
				{
					string strmaterialName= Marshal.PtrToStringAnsi(materialName);
					ClassFactory.FreeString(ref materialName);
					
					Begin(strmaterialName);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_begin_void_EVString(IntPtr pNativeObject, string materialName);

				public virtual void Begin(string materialName)
				{
					EarthView_World_Graphic_CManualObject_begin_void_EVString(this.NativeObject, materialName);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setDynamic_CallBack_void_ev_bool(bool dyn);

				protected setDynamic_CallBack_void_ev_bool m_setDynamic_CallBack_void_ev_bool;

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
				private static extern void EarthView_World_Graphic_CManualObject_setDynamic_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte dyn);

				/// <summary>
				/// 设置缓冲区是否与Dynamic改造信息匹配
				/// </summary>
				/// <param name="dyn">是否合适</param>
				/// <returns></returns>
				public virtual void SetDynamic_NoVirtual(bool dyn)
				{
					EarthView_World_Graphic_CManualObject_setDynamic_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(dyn));
					
				}

				protected  void EarthView_World_Graphic_CManualObject_setDynamic_void_ev_bool_Function(bool dyn)
				{
					SetDynamic(dyn);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setDynamic_void_ev_bool(IntPtr pNativeObject, byte dyn);

				/// <summary>
				/// 设置缓冲区是否与Dynamic改造信息匹配
				/// </summary>
				/// <param name="dyn">是否合适</param>
				/// <returns></returns>
				public virtual void SetDynamic(bool dyn)
				{
					EarthView_World_Graphic_CManualObject_setDynamic_void_ev_bool(this.NativeObject, Convert.ToByte(dyn));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getDynamic_CallBack_ev_bool();

				protected getDynamic_CallBack_ev_bool m_getDynamic_CallBack_ev_bool;

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
				private static extern byte EarthView_World_Graphic_CManualObject_getDynamic_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 判断缓冲区是否与Dynamic改造信息匹配
				/// </summary>
				/// <param name=""></param>
				/// <returns>合适返回true，否则返回false</returns>
				public virtual bool GetDynamic_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CManualObject_getDynamic_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CManualObject_getDynamic_ev_bool_Function()
				{
					bool csret=GetDynamic();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_getDynamic_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断缓冲区是否与Dynamic改造信息匹配
				/// </summary>
				/// <param name=""></param>
				/// <returns>合适返回true，否则返回false</returns>
				public virtual bool GetDynamic()
				{
					byte ret=EarthView_World_Graphic_CManualObject_getDynamic_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void beginUpdate_CallBack_void_ev_size_t(ulong sectionIndex);

				protected beginUpdate_CallBack_void_ev_size_t m_beginUpdate_CallBack_void_ev_size_t;

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
				private static extern void EarthView_World_Graphic_CManualObject_beginUpdate_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong sectionIndex);

				/// <summary>
				/// 更新对象渲染的那一部分
				/// </summary>
				/// <param name="sectionIndex">索引你要更新的那部分，第一次启动进程为0，第二次为1，以此递增</param>
				/// <returns></returns>
				public virtual void BeginUpdate_NoVirtual(ulong sectionIndex)
				{
					EarthView_World_Graphic_CManualObject_beginUpdate_void_ev_size_t_NoVirtual(this.NativeObject, sectionIndex);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_beginUpdate_void_ev_size_t_Function(ulong sectionIndex)
				{
					BeginUpdate(sectionIndex);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_beginUpdate_void_ev_size_t(IntPtr pNativeObject, ulong sectionIndex);

				/// <summary>
				/// 更新对象渲染的那一部分
				/// </summary>
				/// <param name="sectionIndex">索引你要更新的那部分，第一次启动进程为0，第二次为1，以此递增</param>
				/// <returns></returns>
				public virtual void BeginUpdate(ulong sectionIndex)
				{
					EarthView_World_Graphic_CManualObject_beginUpdate_void_ev_size_t(this.NativeObject, sectionIndex);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void position_CallBack_void_CVector3(IntPtr pos);

				protected position_CallBack_void_CVector3 m_position_CallBack_void_CVector3;

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
				private static extern void EarthView_World_Graphic_CManualObject_position_void_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr pos);

				/// <summary>
				/// 添加顶点位置信息，同时创建一个新的顶点
				/// </summary>
				/// <param name="pos">三维矢量</param>
				/// <returns></returns>
				public virtual void Position_NoVirtual(EarthView.World.Spatial.Math.Vector3 pos)
				{
					EarthView_World_Graphic_CManualObject_position_void_CVector3_NoVirtual(this.NativeObject, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_position_void_CVector3_Function(IntPtr pos)
				{
					EarthView.World.Spatial.Math.Vector3 csobj_pos = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pos.BindNativeObject(pos,"CVector3");
					csobj_pos.Delegate = true;
					IClassFactory csobj_posClassFactory = GlobalClassFactoryMap.Get(csobj_pos.GetCppInstanceTypeName());
					if (csobj_posClassFactory != null)
					{
						csobj_pos.Delegate = true;
						csobj_pos = csobj_posClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_pos.BindNativeObject(pos, "CVector3");
						csobj_pos.Delegate = true;
					}
					
					Position(csobj_pos);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_position_void_CVector3(IntPtr pNativeObject, IntPtr pos);

				/// <summary>
				/// 添加顶点位置信息，同时创建一个新的顶点
				/// </summary>
				/// <param name="pos">三维矢量</param>
				/// <returns></returns>
				public virtual void Position(EarthView.World.Spatial.Math.Vector3 pos)
				{
					EarthView_World_Graphic_CManualObject_position_void_CVector3(this.NativeObject, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void position_CallBack_void_Real_Real_Real(double x, double y, double z);

				protected position_CallBack_void_Real_Real_Real m_position_CallBack_void_Real_Real_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_position_void_Real_Real_Real_NoVirtual(IntPtr pNativeObject, double x, double y, double z);

				/// <summary>
				/// 添加顶点位置信息，同时创建一个新的顶点
				/// </summary>
				/// <param name="x">x值</param>
				/// <param name="y">y值</param>
				/// <param name="z">z值</param>
				/// <returns></returns>
				public virtual void Position_NoVirtual(double x, double y, double z)
				{
					EarthView_World_Graphic_CManualObject_position_void_Real_Real_Real_NoVirtual(this.NativeObject, x, y, z);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_position_void_Real_Real_Real_Function(double x, double y, double z)
				{
					Position(x, y, z);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_position_void_Real_Real_Real(IntPtr pNativeObject, double x, double y, double z);

				/// <summary>
				/// 添加顶点位置信息，同时创建一个新的顶点
				/// </summary>
				/// <param name="x">x值</param>
				/// <param name="y">y值</param>
				/// <param name="z">z值</param>
				/// <returns></returns>
				public virtual void Position(double x, double y, double z)
				{
					EarthView_World_Graphic_CManualObject_position_void_Real_Real_Real(this.NativeObject, x, y, z);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void normal_CallBack_void_CVector3(IntPtr norm);

				protected normal_CallBack_void_CVector3 m_normal_CallBack_void_CVector3;

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
				private static extern void EarthView_World_Graphic_CManualObject_normal_void_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr norm);

				/// <summary>
				/// 为当前顶点定义法线                
				/// </summary>
				/// <param name="norm">三维矢量</param>
				/// <returns></returns>
				public virtual void Normal_NoVirtual(EarthView.World.Spatial.Math.Vector3 norm)
				{
					EarthView_World_Graphic_CManualObject_normal_void_CVector3_NoVirtual(this.NativeObject, object.Equals(norm, null) ? IntPtr.Zero : norm.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_normal_void_CVector3_Function(IntPtr norm)
				{
					EarthView.World.Spatial.Math.Vector3 csobj_norm = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_norm.BindNativeObject(norm,"CVector3");
					csobj_norm.Delegate = true;
					IClassFactory csobj_normClassFactory = GlobalClassFactoryMap.Get(csobj_norm.GetCppInstanceTypeName());
					if (csobj_normClassFactory != null)
					{
						csobj_norm.Delegate = true;
						csobj_norm = csobj_normClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_norm.BindNativeObject(norm, "CVector3");
						csobj_norm.Delegate = true;
					}
					
					Normal(csobj_norm);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_normal_void_CVector3(IntPtr pNativeObject, IntPtr norm);

				/// <summary>
				/// 为当前顶点定义法线                
				/// </summary>
				/// <param name="norm">三维矢量</param>
				/// <returns></returns>
				public virtual void Normal(EarthView.World.Spatial.Math.Vector3 norm)
				{
					EarthView_World_Graphic_CManualObject_normal_void_CVector3(this.NativeObject, object.Equals(norm, null) ? IntPtr.Zero : norm.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void normal_CallBack_void_Real_Real_Real(double x, double y, double z);

				protected normal_CallBack_void_Real_Real_Real m_normal_CallBack_void_Real_Real_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_normal_void_Real_Real_Real_NoVirtual(IntPtr pNativeObject, double x, double y, double z);

				/// <summary>
				/// 为当前顶点定义法线                
				/// </summary>
				/// <param name="x">x值</param>
				/// <param name="y">y值</param>
				/// <param name="z">z值</param>
				/// <returns></returns>
				public virtual void Normal_NoVirtual(double x, double y, double z)
				{
					EarthView_World_Graphic_CManualObject_normal_void_Real_Real_Real_NoVirtual(this.NativeObject, x, y, z);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_normal_void_Real_Real_Real_Function(double x, double y, double z)
				{
					Normal(x, y, z);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_normal_void_Real_Real_Real(IntPtr pNativeObject, double x, double y, double z);

				/// <summary>
				/// 为当前顶点定义法线                
				/// </summary>
				/// <param name="x">x值</param>
				/// <param name="y">y值</param>
				/// <param name="z">z值</param>
				/// <returns></returns>
				public virtual void Normal(double x, double y, double z)
				{
					EarthView_World_Graphic_CManualObject_normal_void_Real_Real_Real(this.NativeObject, x, y, z);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void tangent_CallBack_void_CVector3(IntPtr tan);

				protected tangent_CallBack_void_CVector3 m_tangent_CallBack_void_CVector3;

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
				private static extern void EarthView_World_Graphic_CManualObject_tangent_void_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr tan);

				/// <summary>
				/// 为当前顶点添加切线                
				/// </summary>
				/// <param name="norm">三维矢量</param>
				/// <returns></returns>
				public virtual void Tangent_NoVirtual(EarthView.World.Spatial.Math.Vector3 tan)
				{
					EarthView_World_Graphic_CManualObject_tangent_void_CVector3_NoVirtual(this.NativeObject, object.Equals(tan, null) ? IntPtr.Zero : tan.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_tangent_void_CVector3_Function(IntPtr tan)
				{
					EarthView.World.Spatial.Math.Vector3 csobj_tan = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_tan.BindNativeObject(tan,"CVector3");
					csobj_tan.Delegate = true;
					IClassFactory csobj_tanClassFactory = GlobalClassFactoryMap.Get(csobj_tan.GetCppInstanceTypeName());
					if (csobj_tanClassFactory != null)
					{
						csobj_tan.Delegate = true;
						csobj_tan = csobj_tanClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_tan.BindNativeObject(tan, "CVector3");
						csobj_tan.Delegate = true;
					}
					
					Tangent(csobj_tan);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_tangent_void_CVector3(IntPtr pNativeObject, IntPtr tan);

				/// <summary>
				/// 为当前顶点添加切线                
				/// </summary>
				/// <param name="norm">三维矢量</param>
				/// <returns></returns>
				public virtual void Tangent(EarthView.World.Spatial.Math.Vector3 tan)
				{
					EarthView_World_Graphic_CManualObject_tangent_void_CVector3(this.NativeObject, object.Equals(tan, null) ? IntPtr.Zero : tan.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void tangent_CallBack_void_Real_Real_Real(double x, double y, double z);

				protected tangent_CallBack_void_Real_Real_Real m_tangent_CallBack_void_Real_Real_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_tangent_void_Real_Real_Real_NoVirtual(IntPtr pNativeObject, double x, double y, double z);

				/// <summary>
				/// 为当前顶点添加切线                
				/// </summary>
				/// <param name="x">x值</param>
				/// <param name="y">y值</param>
				/// <param name="z">z值</param>
				/// <returns></returns>
				public virtual void Tangent_NoVirtual(double x, double y, double z)
				{
					EarthView_World_Graphic_CManualObject_tangent_void_Real_Real_Real_NoVirtual(this.NativeObject, x, y, z);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_tangent_void_Real_Real_Real_Function(double x, double y, double z)
				{
					Tangent(x, y, z);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_tangent_void_Real_Real_Real(IntPtr pNativeObject, double x, double y, double z);

				/// <summary>
				/// 为当前顶点添加切线                
				/// </summary>
				/// <param name="x">x值</param>
				/// <param name="y">y值</param>
				/// <param name="z">z值</param>
				/// <returns></returns>
				public virtual void Tangent(double x, double y, double z)
				{
					EarthView_World_Graphic_CManualObject_tangent_void_Real_Real_Real(this.NativeObject, x, y, z);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void textureCoord_CallBack_void_Real(double u);

				protected textureCoord_CallBack_void_Real m_textureCoord_CallBack_void_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_NoVirtual(IntPtr pNativeObject, double u);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="u"></param>
				/// <returns></returns>
				public virtual void TextureCoord_NoVirtual(double u)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_Real_NoVirtual(this.NativeObject, u);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Function(double u)
				{
					TextureCoord(u);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_Real(IntPtr pNativeObject, double u);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="u"></param>
				/// <returns></returns>
				public virtual void TextureCoord(double u)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_Real(this.NativeObject, u);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void textureCoord_CallBack_void_Real_Real(double u, double v);

				protected textureCoord_CallBack_void_Real_Real m_textureCoord_CallBack_void_Real_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_NoVirtual(IntPtr pNativeObject, double u, double v);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="u"></param>
				/// <param name="v"></param>
				/// <returns></returns>
				public virtual void TextureCoord_NoVirtual(double u, double v)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_NoVirtual(this.NativeObject, u, v);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Function(double u, double v)
				{
					TextureCoord(u, v);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real(IntPtr pNativeObject, double u, double v);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="u"></param>
				/// <param name="v"></param>
				/// <returns></returns>
				public virtual void TextureCoord(double u, double v)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real(this.NativeObject, u, v);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void textureCoord_CallBack_void_Real_Real_Real(double u, double v, double w);

				protected textureCoord_CallBack_void_Real_Real_Real m_textureCoord_CallBack_void_Real_Real_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_NoVirtual(IntPtr pNativeObject, double u, double v, double w);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="u"></param>
				/// <param name="v"></param>
				/// <param name="w"></param>
				/// <returns></returns>
				public virtual void TextureCoord_NoVirtual(double u, double v, double w)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_NoVirtual(this.NativeObject, u, v, w);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Function(double u, double v, double w)
				{
					TextureCoord(u, v, w);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real(IntPtr pNativeObject, double u, double v, double w);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="u"></param>
				/// <param name="v"></param>
				/// <param name="w"></param>
				/// <returns></returns>
				public virtual void TextureCoord(double u, double v, double w)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real(this.NativeObject, u, v, w);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void textureCoord_CallBack_void_Real_Real_Real_Real(double x, double y, double z, double w);

				protected textureCoord_CallBack_void_Real_Real_Real_Real m_textureCoord_CallBack_void_Real_Real_Real_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Real_NoVirtual(IntPtr pNativeObject, double x, double y, double z, double w);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="x"></param>
				/// <param name="y"></param>
				/// <param name="z"></param>
				/// <param name="w"></param>
				/// <returns></returns>
				public virtual void TextureCoord_NoVirtual(double x, double y, double z, double w)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Real_NoVirtual(this.NativeObject, x, y, z, w);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Real_Function(double x, double y, double z, double w)
				{
					TextureCoord(x, y, z, w);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Real(IntPtr pNativeObject, double x, double y, double z, double w);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="x"></param>
				/// <param name="y"></param>
				/// <param name="z"></param>
				/// <param name="w"></param>
				/// <returns></returns>
				public virtual void TextureCoord(double x, double y, double z, double w)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Real(this.NativeObject, x, y, z, w);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void textureCoord_CallBack_void_CVector2(IntPtr uv);

				protected textureCoord_CallBack_void_CVector2 m_textureCoord_CallBack_void_CVector2;

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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector2_NoVirtual(IntPtr pNativeObject, IntPtr uv);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="uv">二维矢量</param>
				/// <returns></returns>
				public virtual void TextureCoord_NoVirtual(EarthView.World.Spatial.Math.Vector2 uv)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_CVector2_NoVirtual(this.NativeObject, object.Equals(uv, null) ? IntPtr.Zero : uv.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector2_Function(IntPtr uv)
				{
					EarthView.World.Spatial.Math.Vector2 csobj_uv = new EarthView.World.Spatial.Math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_uv.BindNativeObject(uv,"CVector2");
					csobj_uv.Delegate = true;
					IClassFactory csobj_uvClassFactory = GlobalClassFactoryMap.Get(csobj_uv.GetCppInstanceTypeName());
					if (csobj_uvClassFactory != null)
					{
						csobj_uv.Delegate = true;
						csobj_uv = csobj_uvClassFactory.Create() as EarthView.World.Spatial.Math.Vector2;
						csobj_uv.BindNativeObject(uv, "CVector2");
						csobj_uv.Delegate = true;
					}
					
					TextureCoord(csobj_uv);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector2(IntPtr pNativeObject, IntPtr uv);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="uv">二维矢量</param>
				/// <returns></returns>
				public virtual void TextureCoord(EarthView.World.Spatial.Math.Vector2 uv)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_CVector2(this.NativeObject, object.Equals(uv, null) ? IntPtr.Zero : uv.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void textureCoord_CallBack_void_CVector3(IntPtr uvw);

				protected textureCoord_CallBack_void_CVector3 m_textureCoord_CallBack_void_CVector3;

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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr uvw);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="uvw">三维矢量</param>
				/// <returns></returns>
				public virtual void TextureCoord_NoVirtual(EarthView.World.Spatial.Math.Vector3 uvw)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_CVector3_NoVirtual(this.NativeObject, object.Equals(uvw, null) ? IntPtr.Zero : uvw.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector3_Function(IntPtr uvw)
				{
					EarthView.World.Spatial.Math.Vector3 csobj_uvw = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_uvw.BindNativeObject(uvw,"CVector3");
					csobj_uvw.Delegate = true;
					IClassFactory csobj_uvwClassFactory = GlobalClassFactoryMap.Get(csobj_uvw.GetCppInstanceTypeName());
					if (csobj_uvwClassFactory != null)
					{
						csobj_uvw.Delegate = true;
						csobj_uvw = csobj_uvwClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_uvw.BindNativeObject(uvw, "CVector3");
						csobj_uvw.Delegate = true;
					}
					
					TextureCoord(csobj_uvw);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector3(IntPtr pNativeObject, IntPtr uvw);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="uvw">三维矢量</param>
				/// <returns></returns>
				public virtual void TextureCoord(EarthView.World.Spatial.Math.Vector3 uvw)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_CVector3(this.NativeObject, object.Equals(uvw, null) ? IntPtr.Zero : uvw.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void textureCoord_CallBack_void_CVector4(IntPtr xyzw);

				protected textureCoord_CallBack_void_CVector4 m_textureCoord_CallBack_void_CVector4;

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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector4_NoVirtual(IntPtr pNativeObject, IntPtr xyzw);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="xyzw">四维矢量</param>
				/// <returns></returns>
				public virtual void TextureCoord_NoVirtual(EarthView.World.Spatial.Math.Vector4 xyzw)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_CVector4_NoVirtual(this.NativeObject, object.Equals(xyzw, null) ? IntPtr.Zero : xyzw.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector4_Function(IntPtr xyzw)
				{
					EarthView.World.Spatial.Math.Vector4 csobj_xyzw = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_xyzw.BindNativeObject(xyzw,"CVector4");
					csobj_xyzw.Delegate = true;
					IClassFactory csobj_xyzwClassFactory = GlobalClassFactoryMap.Get(csobj_xyzw.GetCppInstanceTypeName());
					if (csobj_xyzwClassFactory != null)
					{
						csobj_xyzw.Delegate = true;
						csobj_xyzw = csobj_xyzwClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csobj_xyzw.BindNativeObject(xyzw, "CVector4");
						csobj_xyzw.Delegate = true;
					}
					
					TextureCoord(csobj_xyzw);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_textureCoord_void_CVector4(IntPtr pNativeObject, IntPtr xyzw);

				/// <summary>
				/// 为当前顶点添加纹理坐标
				/// 根据需求，可以是一维到三维的
				/// </summary>
				/// <param name="xyzw">四维矢量</param>
				/// <returns></returns>
				public virtual void TextureCoord(EarthView.World.Spatial.Math.Vector4 xyzw)
				{
					EarthView_World_Graphic_CManualObject_textureCoord_void_CVector4(this.NativeObject, object.Equals(xyzw, null) ? IntPtr.Zero : xyzw.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void colour_CallBack_void_CColourValue(IntPtr col);

				protected colour_CallBack_void_CColourValue m_colour_CallBack_void_CColourValue;

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
				private static extern void EarthView_World_Graphic_CManualObject_colour_void_CColourValue_NoVirtual(IntPtr pNativeObject, IntPtr col);

				/// <summary>
				/// 为顶点添加颜色
				/// </summary>
				/// <param name="col">颜色</param>
				/// <returns></returns>
				public virtual void Colour_NoVirtual(EarthView.World.Graphic.ColourValue col)
				{
					EarthView_World_Graphic_CManualObject_colour_void_CColourValue_NoVirtual(this.NativeObject, object.Equals(col, null) ? IntPtr.Zero : col.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_colour_void_CColourValue_Function(IntPtr col)
				{
					EarthView.World.Graphic.ColourValue csobj_col = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_col.BindNativeObject(col,"CColourValue");
					csobj_col.Delegate = true;
					IClassFactory csobj_colClassFactory = GlobalClassFactoryMap.Get(csobj_col.GetCppInstanceTypeName());
					if (csobj_colClassFactory != null)
					{
						csobj_col.Delegate = true;
						csobj_col = csobj_colClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csobj_col.BindNativeObject(col, "CColourValue");
						csobj_col.Delegate = true;
					}
					
					Colour(csobj_col);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_colour_void_CColourValue(IntPtr pNativeObject, IntPtr col);

				/// <summary>
				/// 为顶点添加颜色
				/// </summary>
				/// <param name="col">颜色</param>
				/// <returns></returns>
				public virtual void Colour(EarthView.World.Graphic.ColourValue col)
				{
					EarthView_World_Graphic_CManualObject_colour_void_CColourValue(this.NativeObject, object.Equals(col, null) ? IntPtr.Zero : col.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void colour_CallBack_void_Real_Real_Real_Real(double r, double g, double b, double a);

				protected colour_CallBack_void_Real_Real_Real_Real m_colour_CallBack_void_Real_Real_Real_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Real_NoVirtual(IntPtr pNativeObject, double r, double g, double b, double a);

				/// <summary>
				/// 为顶点添加颜色
				/// </summary>
				/// <param name="r"></param>
				/// <param name="g"></param>
				/// <param name="b"></param>
				/// <param name="a">默认为1.0f</param>
				/// <returns></returns>
				public virtual void Colour_NoVirtual(double r, double g, double b, double a)
				{
					EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Real_NoVirtual(this.NativeObject, r, g, b, a);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Real_Function(double r, double g, double b, double a)
				{
					Colour(r, g, b, a);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Real(IntPtr pNativeObject, double r, double g, double b, double a);

				/// <summary>
				/// 为顶点添加颜色
				/// </summary>
				/// <param name="r"></param>
				/// <param name="g"></param>
				/// <param name="b"></param>
				/// <param name="a">默认为1.0f</param>
				/// <returns></returns>
				public virtual void Colour(double r, double g, double b, double a)
				{
					EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Real(this.NativeObject, r, g, b, a);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void colour_CallBack_void_Real_Real_Real(double r, double g, double b);

				protected colour_CallBack_void_Real_Real_Real m_colour_CallBack_void_Real_Real_Real;

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
				private static extern void EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_NoVirtual(IntPtr pNativeObject, double r, double g, double b);

				public virtual void Colour_NoVirtual(double r, double g, double b)
				{
					EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_NoVirtual(this.NativeObject, r, g, b);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Function(double r, double g, double b)
				{
					Colour(r, g, b);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real(IntPtr pNativeObject, double r, double g, double b);

				public virtual void Colour(double r, double g, double b)
				{
					EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real(this.NativeObject, r, g, b);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void index_CallBack_void_ev_uint32(uint idx);

				protected index_CallBack_void_ev_uint32 m_index_CallBack_void_ev_uint32;

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
				private static extern void EarthView_World_Graphic_CManualObject_index_void_ev_uint32_NoVirtual(IntPtr pNativeObject, uint idx);

				public virtual void Index_NoVirtual(uint idx)
				{
					EarthView_World_Graphic_CManualObject_index_void_ev_uint32_NoVirtual(this.NativeObject, idx);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_index_void_ev_uint32_Function(uint idx)
				{
					Index(idx);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_index_void_ev_uint32(IntPtr pNativeObject, uint idx);

				public virtual void Index(uint idx)
				{
					EarthView_World_Graphic_CManualObject_index_void_ev_uint32(this.NativeObject, idx);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void triangle_CallBack_void_ev_uint32_ev_uint32_ev_uint32(uint i1, uint i2, uint i3);

				protected triangle_CallBack_void_ev_uint32_ev_uint32_ev_uint32 m_triangle_CallBack_void_ev_uint32_ev_uint32_ev_uint32;

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
				private static extern void EarthView_World_Graphic_CManualObject_triangle_void_ev_uint32_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, uint i1, uint i2, uint i3);

				public virtual void Triangle_NoVirtual(uint i1, uint i2, uint i3)
				{
					EarthView_World_Graphic_CManualObject_triangle_void_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, i1, i2, i3);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_triangle_void_ev_uint32_ev_uint32_ev_uint32_Function(uint i1, uint i2, uint i3)
				{
					Triangle(i1, i2, i3);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_triangle_void_ev_uint32_ev_uint32_ev_uint32(IntPtr pNativeObject, uint i1, uint i2, uint i3);

				public virtual void Triangle(uint i1, uint i2, uint i3)
				{
					EarthView_World_Graphic_CManualObject_triangle_void_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, i1, i2, i3);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void quad_CallBack_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(uint i1, uint i2, uint i3, uint i4);

				protected quad_CallBack_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32 m_quad_CallBack_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32;

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
				private static extern void EarthView_World_Graphic_CManualObject_quad_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, uint i1, uint i2, uint i3, uint i4);

				public virtual void Quad_NoVirtual(uint i1, uint i2, uint i3, uint i4)
				{
					EarthView_World_Graphic_CManualObject_quad_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, i1, i2, i3, i4);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_quad_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Function(uint i1, uint i2, uint i3, uint i4)
				{
					Quad(i1, i2, i3, i4);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_quad_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pNativeObject, uint i1, uint i2, uint i3, uint i4);

				public virtual void Quad(uint i1, uint i2, uint i3, uint i4)
				{
					EarthView_World_Graphic_CManualObject_quad_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, i1, i2, i3, i4);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong getCurrentVertexCount_CallBack_size_t();

				protected getCurrentVertexCount_CallBack_size_t m_getCurrentVertexCount_CallBack_size_t;

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
				private static extern ulong EarthView_World_Graphic_CManualObject_getCurrentVertexCount_size_t_NoVirtual(IntPtr pNativeObject);

				public virtual ulong GetCurrentVertexCount_NoVirtual()
				{
					ulong ret=EarthView_World_Graphic_CManualObject_getCurrentVertexCount_size_t_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CManualObject_getCurrentVertexCount_size_t_Function()
				{
					ulong csret=GetCurrentVertexCount();
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CManualObject_getCurrentVertexCount_size_t(IntPtr pNativeObject);

				public virtual ulong GetCurrentVertexCount()
				{
					ulong ret=EarthView_World_Graphic_CManualObject_getCurrentVertexCount_size_t(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong getCurrentIndexCount_CallBack_size_t();

				protected getCurrentIndexCount_CallBack_size_t m_getCurrentIndexCount_CallBack_size_t;

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
				private static extern ulong EarthView_World_Graphic_CManualObject_getCurrentIndexCount_size_t_NoVirtual(IntPtr pNativeObject);

				public virtual ulong GetCurrentIndexCount_NoVirtual()
				{
					ulong ret=EarthView_World_Graphic_CManualObject_getCurrentIndexCount_size_t_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CManualObject_getCurrentIndexCount_size_t_Function()
				{
					ulong csret=GetCurrentIndexCount();
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CManualObject_getCurrentIndexCount_size_t(IntPtr pNativeObject);

				public virtual ulong GetCurrentIndexCount()
				{
					ulong ret=EarthView_World_Graphic_CManualObject_getCurrentIndexCount_size_t(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr end_CallBack_CManualObjectSection();

				protected end_CallBack_CManualObjectSection m_end_CallBack_CManualObjectSection;

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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_end_CManualObjectSection_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ManualObject.ManualObjectSection End_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_end_CManualObjectSection_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ManualObject.ManualObjectSection csObj = new EarthView.World.Graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CManualObjectSection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ManualObject.ManualObjectSection;
						csObj.BindNativeObject(__ptr, "CManualObjectSection");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CManualObject_end_CManualObjectSection_Function()
				{
					EarthView.World.Graphic.ManualObject.ManualObjectSection csret=End();
					
					if (!object.Equals(csret, null))
					{
					    csret.Delegate = true;
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_end_CManualObjectSection(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ManualObject.ManualObjectSection End()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_end_CManualObjectSection(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ManualObject.ManualObjectSection csObj = new EarthView.World.Graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CManualObjectSection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ManualObject.ManualObjectSection;
						csObj.BindNativeObject(__ptr, "CManualObjectSection");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setMaterialName_CallBack_void_ev_size_t_EVString_EVString(ulong subindex, ref IntPtr name, ref IntPtr group);

				protected setMaterialName_CallBack_void_ev_size_t_EVString_EVString m_setMaterialName_CallBack_void_ev_size_t_EVString_EVString;

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
				private static extern void EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_EVString_NoVirtual(IntPtr pNativeObject, ulong subindex, string name, string group);

				public virtual void SetMaterialName_NoVirtual(ulong subindex, string name, string group)
				{
					EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_EVString_NoVirtual(this.NativeObject, subindex, name, group);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_EVString_Function(ulong subindex, ref IntPtr name, ref IntPtr group)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					SetMaterialName(subindex, strname,strgroup);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_EVString(IntPtr pNativeObject, ulong subindex, string name, string group);

				public virtual void SetMaterialName(ulong subindex, string name, string group)
				{
					EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_EVString(this.NativeObject, subindex, name, group);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setMaterialName_CallBack_void_ev_size_t_EVString(ulong subindex, ref IntPtr name);

				protected setMaterialName_CallBack_void_ev_size_t_EVString m_setMaterialName_CallBack_void_ev_size_t_EVString;

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
				private static extern void EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_NoVirtual(IntPtr pNativeObject, ulong subindex, string name);

				public virtual void SetMaterialName_NoVirtual(ulong subindex, string name)
				{
					EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_NoVirtual(this.NativeObject, subindex, name);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_Function(ulong subindex, ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					SetMaterialName(subindex, strname);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString(IntPtr pNativeObject, ulong subindex, string name);

				public virtual void SetMaterialName(ulong subindex, string name)
				{
					EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString(this.NativeObject, subindex, name);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr convertToMesh_CallBack_CMeshPtr_EVString_EVString(ref IntPtr meshName, ref IntPtr groupName);

				protected convertToMesh_CallBack_CMeshPtr_EVString_EVString m_convertToMesh_CallBack_CMeshPtr_EVString_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_EVString_NoVirtual(IntPtr pNativeObject, string meshName, string groupName);

				public virtual EarthView.World.Graphic.MeshPtr ConvertToMesh_NoVirtual(string meshName, string groupName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_EVString_NoVirtual(this.NativeObject, meshName, groupName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MeshPtr csObj = new EarthView.World.Graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshPtr;
						csObj.BindNativeObject(__ptr, "CMeshPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_EVString_Function(ref IntPtr meshName, ref IntPtr groupName)
				{
					string strmeshName= Marshal.PtrToStringAnsi(meshName);
					ClassFactory.FreeString(ref meshName);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=ConvertToMesh(strmeshName,strgroupName);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_EVString(IntPtr pNativeObject, string meshName, string groupName);

				public virtual EarthView.World.Graphic.MeshPtr ConvertToMesh(string meshName, string groupName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_EVString(this.NativeObject, meshName, groupName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MeshPtr csObj = new EarthView.World.Graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshPtr;
						csObj.BindNativeObject(__ptr, "CMeshPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr convertToMesh_CallBack_CMeshPtr_EVString(ref IntPtr meshName);

				protected convertToMesh_CallBack_CMeshPtr_EVString m_convertToMesh_CallBack_CMeshPtr_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_NoVirtual(IntPtr pNativeObject, string meshName);

				public virtual EarthView.World.Graphic.MeshPtr ConvertToMesh_NoVirtual(string meshName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_NoVirtual(this.NativeObject, meshName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MeshPtr csObj = new EarthView.World.Graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshPtr;
						csObj.BindNativeObject(__ptr, "CMeshPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_Function(ref IntPtr meshName)
				{
					string strmeshName= Marshal.PtrToStringAnsi(meshName);
					ClassFactory.FreeString(ref meshName);
					
					EarthView.World.Graphic.MeshPtr csret=ConvertToMesh(strmeshName);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString(IntPtr pNativeObject, string meshName);

				public virtual EarthView.World.Graphic.MeshPtr ConvertToMesh(string meshName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString(this.NativeObject, meshName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MeshPtr csObj = new EarthView.World.Graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshPtr;
						csObj.BindNativeObject(__ptr, "CMeshPtr");
					}
					return csObj;
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setUseIdentityProjection_void_ev_bool(IntPtr pNativeObject, byte useIdentityProjection);

				public void SetUseIdentityProjection(bool useIdentityProjection)
				{
					EarthView_World_Graphic_CManualObject_setUseIdentityProjection_void_ev_bool(this.NativeObject, Convert.ToByte(useIdentityProjection));
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_getUseIdentityProjection_ev_bool(IntPtr pNativeObject);

				public bool GetUseIdentityProjection()
				{
					byte ret=EarthView_World_Graphic_CManualObject_getUseIdentityProjection_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setUseIdentityView_void_ev_bool(IntPtr pNativeObject, byte useIdentityView);

				public void SetUseIdentityView(bool useIdentityView)
				{
					EarthView_World_Graphic_CManualObject_setUseIdentityView_void_ev_bool(this.NativeObject, Convert.ToByte(useIdentityView));
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_getUseIdentityView_ev_bool(IntPtr pNativeObject);

				public bool GetUseIdentityView()
				{
					byte ret=EarthView_World_Graphic_CManualObject_getUseIdentityView_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setBoundingBox_void_CAxisAlignedBox(IntPtr pNativeObject, IntPtr box);

				public void SetBoundingBox(EarthView.World.Spatial.Math.AxisAlignedBox box)
				{
					EarthView_World_Graphic_CManualObject_setBoundingBox_void_CAxisAlignedBox(this.NativeObject, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getSection_CManualObjectSection_ev_uint32(IntPtr pNativeObject, uint index);

				public EarthView.World.Graphic.ManualObject.ManualObjectSection GetSection(uint index)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getSection_CManualObjectSection_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ManualObject.ManualObjectSection csObj = new EarthView.World.Graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CManualObjectSection");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ManualObject.ManualObjectSection;
						csObj.BindNativeObject(__ptr, "CManualObjectSection");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern uint EarthView_World_Graphic_CManualObject_getNumSections_ev_uint32(IntPtr pNativeObject);

				public uint GetNumSections()
				{
					uint ret=EarthView_World_Graphic_CManualObject_getNumSections_ev_uint32(this.NativeObject);
					
					return ret;
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setKeepDeclarationOrder_void_ev_bool(IntPtr pNativeObject, byte keepOrder);

				public void SetKeepDeclarationOrder(bool keepOrder)
				{
					EarthView_World_Graphic_CManualObject_setKeepDeclarationOrder_void_ev_bool(this.NativeObject, Convert.ToByte(keepOrder));
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_getKeepDeclarationOrder_ev_bool(IntPtr pNativeObject);

				public bool GetKeepDeclarationOrder()
				{
					byte ret=EarthView_World_Graphic_CManualObject_getKeepDeclarationOrder_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setSelectionColour_void_CColourValue_NoVirtual(IntPtr pNativeObject, IntPtr colour);

				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				public new void SetSelectionColour_NoVirtual(EarthView.World.Graphic.ColourValue colour)
				{
					EarthView_World_Graphic_CManualObject_setSelectionColour_void_CColourValue_NoVirtual(this.NativeObject, object.Equals(colour, null) ? IntPtr.Zero : colour.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_setSelectionColour_void_CColourValue(IntPtr pNativeObject, IntPtr colour);

				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				public override void SetSelectionColour(EarthView.World.Graphic.ColourValue colour)
				{
					EarthView_World_Graphic_CManualObject_setSelectionColour_void_CColourValue(this.NativeObject, object.Equals(colour, null) ? IntPtr.Zero : colour.NativeObject);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr ray, IntPtr viewport, byte prepareToRenderSelection, ref int objIndex, IntPtr point);

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				public new bool SelectBy_NoVirtual(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, bool prepareToRenderSelection, ref int objIndex, ref  EarthView.World.Spatial.Math.Vector3 point)
				{
					byte ret=EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(this.NativeObject, object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject, Convert.ToByte(prepareToRenderSelection), ref objIndex, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(IntPtr pNativeObject, IntPtr ray, IntPtr viewport, byte prepareToRenderSelection, ref int objIndex, IntPtr point);

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				public override bool SelectBy(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, bool prepareToRenderSelection, ref int objIndex, ref  EarthView.World.Spatial.Math.Vector3 point)
				{
					byte ret=EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(this.NativeObject, object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject, Convert.ToByte(prepareToRenderSelection), ref objIndex, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(IntPtr pNativeObject, IntPtr aabb, byte prepareToRenderSelection, IntPtr indexVec);

				/// <summary>
				/// 盒选择
				/// </summary>
				/// <param name="aabb">盒</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="indexVec">选中的对象序号的集合</param>
				/// <returns>true:物体包围盒与指定盒相交;false:不相交</returns>
				public new bool SelectBy_NoVirtual(EarthView.World.Spatial.Math.AxisAlignedBox aabb, bool prepareToRenderSelection, ref  EarthView.World.Core.IntVector indexVec)
				{
					byte ret=EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(this.NativeObject, object.Equals(aabb, null) ? IntPtr.Zero : aabb.NativeObject, Convert.ToByte(prepareToRenderSelection), object.Equals(indexVec, null) ? IntPtr.Zero : indexVec.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(IntPtr pNativeObject, IntPtr aabb, byte prepareToRenderSelection, IntPtr indexVec);

				/// <summary>
				/// 盒选择
				/// </summary>
				/// <param name="aabb">盒</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="indexVec">选中的对象序号的集合</param>
				/// <returns>true:物体包围盒与指定盒相交;false:不相交</returns>
				public override bool SelectBy(EarthView.World.Spatial.Math.AxisAlignedBox aabb, bool prepareToRenderSelection, ref  EarthView.World.Core.IntVector indexVec)
				{
					byte ret=EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(this.NativeObject, object.Equals(aabb, null) ? IntPtr.Zero : aabb.NativeObject, Convert.ToByte(prepareToRenderSelection), object.Equals(indexVec, null) ? IntPtr.Zero : indexVec.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CSphere_ev_bool_IntVector_NoVirtual(IntPtr pNativeObject, IntPtr sphere, byte prepareToRenderSelection, IntPtr indexVec);

				/// <summary>
				/// 球选择
				/// </summary>
				/// <param name="sphere">球</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="indexVec">选中的对象序号的集合</param>
				/// <returns>true:物体包围盒与指定球相交;false:不相交</returns>
				public new bool SelectBy_NoVirtual(EarthView.World.Spatial.Math.Sphere sphere, bool prepareToRenderSelection, ref  EarthView.World.Core.IntVector indexVec)
				{
					byte ret=EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CSphere_ev_bool_IntVector_NoVirtual(this.NativeObject, object.Equals(sphere, null) ? IntPtr.Zero : sphere.NativeObject, Convert.ToByte(prepareToRenderSelection), object.Equals(indexVec, null) ? IntPtr.Zero : indexVec.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CSphere_ev_bool_IntVector(IntPtr pNativeObject, IntPtr sphere, byte prepareToRenderSelection, IntPtr indexVec);

				/// <summary>
				/// 球选择
				/// </summary>
				/// <param name="sphere">球</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="indexVec">选中的对象序号的集合</param>
				/// <returns>true:物体包围盒与指定球相交;false:不相交</returns>
				public override bool SelectBy(EarthView.World.Spatial.Math.Sphere sphere, bool prepareToRenderSelection, ref  EarthView.World.Core.IntVector indexVec)
				{
					byte ret=EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CSphere_ev_bool_IntVector(this.NativeObject, object.Equals(sphere, null) ? IntPtr.Zero : sphere.NativeObject, Convert.ToByte(prepareToRenderSelection), object.Equals(indexVec, null) ? IntPtr.Zero : indexVec.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr ray, IntPtr viewport, byte prepareToRenderSelection, ref int objIndex, ref int submeshIndex, ref int instanceIndex, ref int segmentIndex, IntPtr point);

				/// <summary>
				/// 选择组件
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="objIndex">物体序号</param>
				/// <param name="submeshIndex">submesh序号</param>
				/// <param name="instanceIndex">instance序号</param>
				/// <param name="segmentIndex">索引分段序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:组件与射线相交;false:不相交</returns>
				public new bool SelectComponentBy_NoVirtual(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, bool prepareToRenderSelection, ref int objIndex, ref int submeshIndex, ref int instanceIndex, ref int segmentIndex, ref  EarthView.World.Spatial.Math.Vector3 point)
				{
					byte ret=EarthView_World_Graphic_CManualObject_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.NativeObject, object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject, Convert.ToByte(prepareToRenderSelection), ref objIndex, ref submeshIndex, ref instanceIndex, ref segmentIndex, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(IntPtr pNativeObject, IntPtr ray, IntPtr viewport, byte prepareToRenderSelection, ref int objIndex, ref int submeshIndex, ref int instanceIndex, ref int segmentIndex, IntPtr point);

				/// <summary>
				/// 选择组件
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="objIndex">物体序号</param>
				/// <param name="submeshIndex">submesh序号</param>
				/// <param name="instanceIndex">instance序号</param>
				/// <param name="segmentIndex">索引分段序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:组件与射线相交;false:不相交</returns>
				public override bool SelectComponentBy(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, bool prepareToRenderSelection, ref int objIndex, ref int submeshIndex, ref int instanceIndex, ref int segmentIndex, ref  EarthView.World.Spatial.Math.Vector3 point)
				{
					byte ret=EarthView_World_Graphic_CManualObject_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.NativeObject, object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject, Convert.ToByte(prepareToRenderSelection), ref objIndex, ref submeshIndex, ref instanceIndex, ref segmentIndex, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_renderSelection_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 绘制选择对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void RenderSelection_NoVirtual()
				{
					EarthView_World_Graphic_CManualObject_renderSelection_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_renderSelection_void(IntPtr pNativeObject);

				/// <summary>
				/// 绘制选择对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void RenderSelection()
				{
					EarthView_World_Graphic_CManualObject_renderSelection_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_clearSelection_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 清除选择
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void ClearSelection_NoVirtual()
				{
					EarthView_World_Graphic_CManualObject_clearSelection_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_clearSelection_void(IntPtr pNativeObject);

				/// <summary>
				/// 清除选择
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void ClearSelection()
				{
					EarthView_World_Graphic_CManualObject_clearSelection_void(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getMovableType_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取移动对象类型的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>名称</returns>
				public new string GetMovableType_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getMovableType_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getMovableType_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取移动对象类型的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>名称</returns>
				public override string GetMovableType()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getMovableType_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getBoundingBox_CAxisAlignedBox_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得限制的边框盒
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
				public new EarthView.World.Spatial.Math.AxisAlignedBox GetBoundingBox_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getBoundingBox_CAxisAlignedBox_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.AxisAlignedBox csObj = new EarthView.World.Spatial.Math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.AxisAlignedBox;
						csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getBoundingBox_CAxisAlignedBox(IntPtr pNativeObject);

				/// <summary>
				/// 获得限制的边框盒
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetBoundingBox()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getBoundingBox_CAxisAlignedBox(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.AxisAlignedBox csObj = new EarthView.World.Spatial.Math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.AxisAlignedBox;
						csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern double EarthView_World_Graphic_CManualObject_getBoundingRadius_Real_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得限制范围
				/// </summary>
				/// <param name=""></param>
				/// <returns>范围</returns>
				public new double GetBoundingRadius_NoVirtual()
				{
					double ret=EarthView_World_Graphic_CManualObject_getBoundingRadius_Real_NoVirtual(this.NativeObject);
					
					return ret;
					
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
				private static extern double EarthView_World_Graphic_CManualObject_getBoundingRadius_Real(IntPtr pNativeObject);

				/// <summary>
				/// 获得限制范围
				/// </summary>
				/// <param name=""></param>
				/// <returns>范围</returns>
				public override double GetBoundingRadius()
				{
					double ret=EarthView_World_Graphic_CManualObject_getBoundingRadius_Real(this.NativeObject);
					
					return ret;
					
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
				private static extern void EarthView_World_Graphic_CManualObject__updateRenderQueue_void_CRenderQueue_NoVirtual(IntPtr pNativeObject, IntPtr queue);

				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				/// <returns></returns>
				public new void _updateRenderQueue_NoVirtual(EarthView.World.Graphic.RenderQueue queue)
				{
					EarthView_World_Graphic_CManualObject__updateRenderQueue_void_CRenderQueue_NoVirtual(this.NativeObject, object.Equals(queue, null) ? IntPtr.Zero : queue.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CManualObject__updateRenderQueue_void_CRenderQueue(IntPtr pNativeObject, IntPtr queue);

				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				/// <returns></returns>
				public override void _updateRenderQueue(EarthView.World.Graphic.RenderQueue queue)
				{
					EarthView_World_Graphic_CManualObject__updateRenderQueue_void_CRenderQueue(this.NativeObject, object.Equals(queue, null) ? IntPtr.Zero : queue.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getEdgeList_CEdgeData_NoVirtual(IntPtr pNativeObject);

				/// <summary>                
				/// 获得边列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new EarthView.World.Graphic.EdgeData GetEdgeList_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getEdgeList_CEdgeData_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.EdgeData csObj = new EarthView.World.Graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEdgeData");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.EdgeData;
						csObj.BindNativeObject(__ptr, "CEdgeData");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getEdgeList_CEdgeData(IntPtr pNativeObject);

				/// <summary>                
				/// 获得边列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override EarthView.World.Graphic.EdgeData GetEdgeList()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getEdgeList_CEdgeData(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.EdgeData csObj = new EarthView.World.Graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEdgeData");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.EdgeData;
						csObj.BindNativeObject(__ptr, "CEdgeData");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_hasEdgeList_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 是否存在边列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new bool HasEdgeList_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CManualObject_hasEdgeList_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CManualObject_hasEdgeList_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否存在边列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override bool HasEdgeList()
				{
					byte ret=EarthView_World_Graphic_CManualObject_hasEdgeList_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, IntPtr light, IntPtr indexBuffer, byte extrudeVertices, double extrusionDist, uint flags);

				/// <summary>
				/// 获取阴影锥渲染对象的迭代器
				/// </summary>
				/// <param name="shadowTechnique">阴影技术</param>
				/// <param name="light">光源</param>
				/// <param name="indexBuffer">索引</param>
				/// <param name="extrudeVertices">为真，在软件中挤压顶点后面的体积成为三维实体</param>
				/// <param name="extrusionDist">距离</param>
				/// <param name="flags">标识</param>
				/// <returns></returns>
				public new EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator GetShadowVolumeRenderableIterator_NoVirtual(EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, EarthView.World.Graphic.Light light, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, bool extrudeVertices, double extrusionDist, uint flags)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(this.NativeObject, shadowTechnique, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(indexBuffer, null) ? IntPtr.Zero : indexBuffer.NativeObject, Convert.ToByte(extrudeVertices), extrusionDist, flags);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator csObj = new EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ShadowRenderableListIterator");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator;
						csObj.BindNativeObject(__ptr, "ShadowRenderableListIterator");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(IntPtr pNativeObject, EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, IntPtr light, IntPtr indexBuffer, byte extrudeVertices, double extrusionDist, uint flags);

				/// <summary>
				/// 获取阴影锥渲染对象的迭代器
				/// </summary>
				/// <param name="shadowTechnique">阴影技术</param>
				/// <param name="light">光源</param>
				/// <param name="indexBuffer">索引</param>
				/// <param name="extrudeVertices">为真，在软件中挤压顶点后面的体积成为三维实体</param>
				/// <param name="extrusionDist">距离</param>
				/// <param name="flags">标识</param>
				/// <returns></returns>
				public override EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator GetShadowVolumeRenderableIterator(EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, EarthView.World.Graphic.Light light, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, bool extrudeVertices, double extrusionDist, uint flags)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.NativeObject, shadowTechnique, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(indexBuffer, null) ? IntPtr.Zero : indexBuffer.NativeObject, Convert.ToByte(extrudeVertices), extrusionDist, flags);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator csObj = new EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ShadowRenderableListIterator");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator;
						csObj.BindNativeObject(__ptr, "ShadowRenderableListIterator");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, IntPtr light, IntPtr indexBuffer, byte extrudeVertices, double extrusionDist);

				public new EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator GetShadowVolumeRenderableIterator_NoVirtual(EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, EarthView.World.Graphic.Light light, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, bool extrudeVertices, double extrusionDist)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(this.NativeObject, shadowTechnique, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(indexBuffer, null) ? IntPtr.Zero : indexBuffer.NativeObject, Convert.ToByte(extrudeVertices), extrusionDist);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator csObj = new EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ShadowRenderableListIterator");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator;
						csObj.BindNativeObject(__ptr, "ShadowRenderableListIterator");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(IntPtr pNativeObject, EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, IntPtr light, IntPtr indexBuffer, byte extrudeVertices, double extrusionDist);

				public override EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator GetShadowVolumeRenderableIterator(EarthView.World.Graphic.SHADOWTECHNIQUE shadowTechnique, EarthView.World.Graphic.Light light, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, bool extrudeVertices, double extrusionDist)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.NativeObject, shadowTechnique, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(indexBuffer, null) ? IntPtr.Zero : indexBuffer.NativeObject, Convert.ToByte(extrudeVertices), extrusionDist);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator csObj = new EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ShadowRenderableListIterator");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ShadowCaster.ShadowRenderableListIterator;
						csObj.BindNativeObject(__ptr, "ShadowRenderableListIterator");
					}
					return csObj;
					
				}

				public class ManualObjectSection : EarthView.World.Graphic.Renderable
				{
					public ManualObjectSection(EarthView.World.Graphic.ManualObject parent, string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType, string groupName) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueparent = new BasePtr(parent);
						list.Add("parent", valueparent.PtrVal);
						BasePtr valuematerialName = new BasePtr(materialName);
						list.Add("materialName", valuematerialName.PtrVal);
						BasePtr valueopType = new BasePtr(opType);
						list.Add("opType", valueopType.PtrVal);
						BasePtr valuegroupName = new BasePtr(groupName);
						list.Add("groupName", valuegroupName.PtrVal);
						Create("CManualObjectSectionProxy", list);
						if (!"EarthView.World.Graphic.ManualObject+ManualObjectSection".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public ManualObjectSection(EarthView.World.Graphic.ManualObject parent, string materialName, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE opType) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueparent = new BasePtr(parent);
						list.Add("parent", valueparent.PtrVal);
						BasePtr valuematerialName = new BasePtr(materialName);
						list.Add("materialName", valuematerialName.PtrVal);
						BasePtr valueopType = new BasePtr(opType);
						list.Add("opType", valueopType.PtrVal);
						Create("CManualObjectSectionProxy", list);
						if (!"EarthView.World.Graphic.ManualObject+ManualObjectSection".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderOperation_CRenderOperation(IntPtr pNativeObject);

					public EarthView.World.Graphic.RenderOperation GetRenderOperation()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderOperation_CRenderOperation(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderOperation csObj = new EarthView.World.Graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderOperation");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderOperation;
							csObj.BindNativeObject(__ptr, "CRenderOperation");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterialName_EVString(IntPtr pNativeObject);

					public string GetMaterialName()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterialName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterialGroup_EVString(IntPtr pNativeObject);

					public string GetMaterialGroup()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterialGroup_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern void EarthView_World_Graphic_CManualObject_CManualObjectSection_setMaterialName_void_EVString_EVString(IntPtr pNativeObject, string name, string groupName);

					public void SetMaterialName(string name, string groupName)
					{
						EarthView_World_Graphic_CManualObject_CManualObjectSection_setMaterialName_void_EVString_EVString(this.NativeObject, name, groupName);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_CManualObjectSection_setMaterialName_void_EVString(IntPtr pNativeObject, string name);

					public void SetMaterialName(string name)
					{
						EarthView_World_Graphic_CManualObject_CManualObjectSection_setMaterialName_void_EVString(this.NativeObject, name);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_CManualObjectSection_setMaterial_void_CMaterialPtr(IntPtr pNativeObject, IntPtr material);

					public void SetMaterial(EarthView.World.Graphic.MaterialPtr material)
					{
						EarthView_World_Graphic_CManualObject_CManualObjectSection_setMaterial_void_CMaterialPtr(this.NativeObject, object.Equals(material, null) ? IntPtr.Zero : material.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_CManualObjectSection_set32BitIndices_void_ev_bool(IntPtr pNativeObject, byte n32);

					public void Set32BitIndices(bool n32)
					{
						EarthView_World_Graphic_CManualObject_CManualObjectSection_set32BitIndices_void_ev_bool(this.NativeObject, Convert.ToByte(n32));
						
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
					private static extern byte EarthView_World_Graphic_CManualObject_CManualObjectSection_get32BitIndices_ev_bool(IntPtr pNativeObject);

					public bool Get32BitIndices()
					{
						byte ret=EarthView_World_Graphic_CManualObject_CManualObjectSection_get32BitIndices_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterial_CMaterialPtr_NoVirtual(IntPtr pNativeObject);

					public new EarthView.World.Graphic.MaterialPtr GetMaterial_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterial_CMaterialPtr_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.MaterialPtr csObj = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMaterialPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
							csObj.BindNativeObject(__ptr, "CMaterialPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterial_CMaterialPtr(IntPtr pNativeObject);

					public override EarthView.World.Graphic.MaterialPtr GetMaterial()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterial_CMaterialPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.MaterialPtr csObj = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMaterialPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
							csObj.BindNativeObject(__ptr, "CMaterialPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderOperation_void_CRenderOperation_NoVirtual(IntPtr pNativeObject, IntPtr op);

					public new void GetRenderOperation_NoVirtual(ref EarthView.World.Graphic.RenderOperation op)
					{
						EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderOperation_void_CRenderOperation_NoVirtual(this.NativeObject, object.Equals(op, null) ? IntPtr.Zero : op.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderOperation_void_CRenderOperation(IntPtr pNativeObject, IntPtr op);

					public override void GetRenderOperation(ref EarthView.World.Graphic.RenderOperation op)
					{
						EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderOperation_void_CRenderOperation(this.NativeObject, object.Equals(op, null) ? IntPtr.Zero : op.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_CManualObjectSection_getWorldTransforms_void_CMatrix4_NoVirtual(IntPtr pNativeObject, IntPtr xform);

					public new void GetWorldTransforms_NoVirtual(EarthView.World.Spatial.Math.Matrix4 xform)
					{
						EarthView_World_Graphic_CManualObject_CManualObjectSection_getWorldTransforms_void_CMatrix4_NoVirtual(this.NativeObject, object.Equals(xform, null) ? IntPtr.Zero : xform.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_CManualObjectSection_getWorldTransforms_void_CMatrix4(IntPtr pNativeObject, IntPtr xform);

					public override void GetWorldTransforms(EarthView.World.Spatial.Math.Matrix4 xform)
					{
						EarthView_World_Graphic_CManualObject_CManualObjectSection_getWorldTransforms_void_CMatrix4(this.NativeObject, object.Equals(xform, null) ? IntPtr.Zero : xform.NativeObject);
						
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
					private static extern double EarthView_World_Graphic_CManualObject_CManualObjectSection_getSquaredViewDepth_Real_CCamera_NoVirtual(IntPtr pNativeObject, IntPtr cam);

					public new double GetSquaredViewDepth_NoVirtual(EarthView.World.Graphic.Camera cam)
					{
						double ret=EarthView_World_Graphic_CManualObject_CManualObjectSection_getSquaredViewDepth_Real_CCamera_NoVirtual(this.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject);
						
						return ret;
						
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
					private static extern double EarthView_World_Graphic_CManualObject_CManualObjectSection_getSquaredViewDepth_Real_CCamera(IntPtr pNativeObject, IntPtr cam);

					public override double GetSquaredViewDepth(EarthView.World.Graphic.Camera cam)
					{
						double ret=EarthView_World_Graphic_CManualObject_CManualObjectSection_getSquaredViewDepth_Real_CCamera(this.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject);
						
						return ret;
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getLights_LightList_NoVirtual(IntPtr pNativeObject);

					public new EarthView.World.Graphic.LightList GetLights_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getLights_LightList_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.LightList csObj = new EarthView.World.Graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "LightList");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.LightList;
							csObj.BindNativeObject(__ptr, "LightList");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getLights_LightList(IntPtr pNativeObject);

					public override EarthView.World.Graphic.LightList GetLights()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getLights_LightList(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.LightList csObj = new EarthView.World.Graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "LightList");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.LightList;
							csObj.BindNativeObject(__ptr, "LightList");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte selectBy_CallBack_ev_bool_CRay_CViewport_CVector3(IntPtr ray, IntPtr viewport, IntPtr point);

					protected selectBy_CallBack_ev_bool_CRay_CViewport_CVector3 m_selectBy_CallBack_ev_bool_CRay_CViewport_CVector3;

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
					private static extern byte EarthView_World_Graphic_CManualObject_CManualObjectSection_selectBy_ev_bool_CRay_CViewport_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr ray, IntPtr viewport, IntPtr point);

					/// <summary>
					/// 射线选择
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="viewport">所在视口</param>
					/// <param name="point">交点</param>
					/// <returns>true:与射线相交;false:不相交</returns>
					public virtual bool SelectBy_NoVirtual(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, ref  EarthView.World.Spatial.Math.Vector3 point)
					{
						byte ret=EarthView_World_Graphic_CManualObject_CManualObjectSection_selectBy_ev_bool_CRay_CViewport_CVector3_NoVirtual(this.NativeObject, object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_CManualObject_CManualObjectSection_selectBy_ev_bool_CRay_CViewport_CVector3_Function(IntPtr ray, IntPtr viewport, IntPtr point)
					{
						EarthView.World.Spatial.Math.Ray csobj_ray = new EarthView.World.Spatial.Math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ray.BindNativeObject(ray,"CRay");
						csobj_ray.Delegate = true;
						IClassFactory csobj_rayClassFactory = GlobalClassFactoryMap.Get(csobj_ray.GetCppInstanceTypeName());
						if (csobj_rayClassFactory != null)
						{
							csobj_ray.Delegate = true;
							csobj_ray = csobj_rayClassFactory.Create() as EarthView.World.Spatial.Math.Ray;
							csobj_ray.BindNativeObject(ray, "CRay");
							csobj_ray.Delegate = true;
						}
						EarthView.World.Graphic.Viewport csobj_viewport = new EarthView.World.Graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_viewport.BindNativeObject(viewport,"CViewport");
						csobj_viewport.Delegate = true;
						IClassFactory csobj_viewportClassFactory = GlobalClassFactoryMap.Get(csobj_viewport.GetCppInstanceTypeName());
						if (csobj_viewportClassFactory != null)
						{
							csobj_viewport.Delegate = true;
							csobj_viewport = csobj_viewportClassFactory.Create() as EarthView.World.Graphic.Viewport;
							csobj_viewport.BindNativeObject(viewport, "CViewport");
							csobj_viewport.Delegate = true;
						}
						EarthView.World.Spatial.Math.Vector3 csobj_point = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_point.BindNativeObject(point,"CVector3");
						csobj_point.Delegate = true;
						IClassFactory csobj_pointClassFactory = GlobalClassFactoryMap.Get(csobj_point.GetCppInstanceTypeName());
						if (csobj_pointClassFactory != null)
						{
							csobj_point.Delegate = true;
							csobj_point = csobj_pointClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csobj_point.BindNativeObject(point, "CVector3");
							csobj_point.Delegate = true;
						}
						
						bool csret=SelectBy(csobj_ray, csobj_viewport, ref csobj_point);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Graphic_CManualObject_CManualObjectSection_selectBy_ev_bool_CRay_CViewport_CVector3(IntPtr pNativeObject, IntPtr ray, IntPtr viewport, IntPtr point);

					/// <summary>
					/// 射线选择
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="viewport">所在视口</param>
					/// <param name="point">交点</param>
					/// <returns>true:与射线相交;false:不相交</returns>
					public virtual bool SelectBy(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, ref  EarthView.World.Spatial.Math.Vector3 point)
					{
						byte ret=EarthView_World_Graphic_CManualObject_CManualObjectSection_selectBy_ev_bool_CRay_CViewport_CVector3(this.NativeObject, object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getMovableObject_CMovableObject_NoVirtual(IntPtr pNativeObject);

					public new EarthView.World.Graphic.MovableObject GetMovableObject_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getMovableObject_CMovableObject_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.MovableObject csObj = new EarthView.World.Graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMovableObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject;
							csObj.BindNativeObject(__ptr, "CMovableObject");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_CManualObjectSection_getMovableObject_CMovableObject(IntPtr pNativeObject);

					public override EarthView.World.Graphic.MovableObject GetMovableObject()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_CManualObjectSection_getMovableObject_CMovableObject(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.MovableObject csObj = new EarthView.World.Graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMovableObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject;
							csObj.BindNativeObject(__ptr, "CMovableObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadManualObjectSection = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadManualObjectSection = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadManualObjectSection = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadManualObjectSection = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadManualObjectSection = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadManualObjectSection = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadManualObjectSection = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadManualObjectSection = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadManualObjectSection = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadManualObjectSection = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadManualObjectSection = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadManualObjectSection = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObject::CManualObjectSection", new ManualObjectSectionClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObject::CManualObjectSectionProxy", new ManualObjectSectionClassFactory());

					public ManualObjectSection(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_selectBy_ev_bool_CRay_CViewport_CVector3(IntPtr pObject, selectBy_CallBack_ev_bool_CRay_CViewport_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterial_CMaterialPtr(IntPtr pObject, getMaterial_CallBack_CMaterialPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getTechnique_CTechnique(IntPtr pObject, getTechnique_CallBack_CTechnique pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderOperation_void_CRenderOperation(IntPtr pObject, getRenderOperation_CallBack_void_CRenderOperation pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_preRender_ev_bool_CSceneManager_CRenderSystem(IntPtr pObject, preRender_CallBack_ev_bool_CSceneManager_CRenderSystem pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_postRender_void_CSceneManager_CRenderSystem(IntPtr pObject, postRender_CallBack_void_CSceneManager_CRenderSystem pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getWorldTransforms_void_CMatrix4(IntPtr pObject, getWorldTransforms_CallBack_void_CMatrix4 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getNumWorldTransforms_ev_uint16(IntPtr pObject, getNumWorldTransforms_CallBack_ev_uint16 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getSquaredViewDepth_Real_CCamera(IntPtr pObject, getSquaredViewDepth_CallBack_Real_CCamera pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getLights_LightList(IntPtr pObject, getLights_CallBack_LightList pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getCastsShadows_ev_bool(IntPtr pObject, getCastsShadows_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(IntPtr pObject, _updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_setPolygonModeOverrideable_void_ev_bool(IntPtr pObject, setPolygonModeOverrideable_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getPolygonModeOverrideable_ev_bool(IntPtr pObject, getPolygonModeOverrideable_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_setCustomAmbient_void_CColourValue(IntPtr pObject, setCustomAmbient_CallBack_void_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getCustomAmbient_CColourValue(IntPtr pObject, getCustomAmbient_CallBack_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getCustomAmbientEnabled_bool(IntPtr pObject, getCustomAmbientEnabled_CallBack_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_setCustomAmbientEnabled_void_ev_bool(IntPtr pObject, setCustomAmbientEnabled_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getMovableObject_CMovableObject(IntPtr pObject, getMovableObject_CallBack_CMovableObject pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_addListener_void_CRenderableListener(IntPtr pObject, addListener_CallBack_void_CRenderableListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_removeListener_void_CRenderableListener(IntPtr pObject, removeListener_CallBack_void_CRenderableListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_existListener_ev_bool_CRenderableListener(IntPtr pObject, existListener_CallBack_ev_bool_CRenderableListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getListenerCount_ev_uint32(IntPtr pObject, getListenerCount_CallBack_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getListener_CRenderableListener_ev_uint32(IntPtr pObject, getListener_CallBack_CRenderableListener_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderSystemData_CRenderSystemData(IntPtr pObject, getRenderSystemData_CallBack_CRenderSystemData pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_setRenderSystemData_void_CRenderSystemData(IntPtr pObject, setRenderSystemData_CallBack_void_CRenderSystemData pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_selectBy_CallBack_ev_bool_CRay_CViewport_CVector3 = EarthView_World_Graphic_CManualObject_CManualObjectSection_selectBy_ev_bool_CRay_CViewport_CVector3_Function;
							GC.KeepAlive(m_selectBy_CallBack_ev_bool_CRay_CViewport_CVector3);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_selectBy_ev_bool_CRay_CViewport_CVector3(this.NativeObject, m_selectBy_CallBack_ev_bool_CRay_CViewport_CVector3);
							m_getMaterial_CallBack_CMaterialPtr = EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Function;
							GC.KeepAlive(m_getMaterial_CallBack_CMaterialPtr);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getMaterial_CMaterialPtr(this.NativeObject, m_getMaterial_CallBack_CMaterialPtr);
							m_getTechnique_CallBack_CTechnique = EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Function;
							GC.KeepAlive(m_getTechnique_CallBack_CTechnique);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getTechnique_CTechnique(this.NativeObject, m_getTechnique_CallBack_CTechnique);
							m_getRenderOperation_CallBack_void_CRenderOperation = EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Function;
							GC.KeepAlive(m_getRenderOperation_CallBack_void_CRenderOperation);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderOperation_void_CRenderOperation(this.NativeObject, m_getRenderOperation_CallBack_void_CRenderOperation);
							m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem = EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Function;
							GC.KeepAlive(m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_preRender_ev_bool_CSceneManager_CRenderSystem(this.NativeObject, m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem);
							m_postRender_CallBack_void_CSceneManager_CRenderSystem = EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Function;
							GC.KeepAlive(m_postRender_CallBack_void_CSceneManager_CRenderSystem);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_postRender_void_CSceneManager_CRenderSystem(this.NativeObject, m_postRender_CallBack_void_CSceneManager_CRenderSystem);
							m_getWorldTransforms_CallBack_void_CMatrix4 = EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Function;
							GC.KeepAlive(m_getWorldTransforms_CallBack_void_CMatrix4);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getWorldTransforms_void_CMatrix4(this.NativeObject, m_getWorldTransforms_CallBack_void_CMatrix4);
							m_getNumWorldTransforms_CallBack_ev_uint16 = EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Function;
							GC.KeepAlive(m_getNumWorldTransforms_CallBack_ev_uint16);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getNumWorldTransforms_ev_uint16(this.NativeObject, m_getNumWorldTransforms_CallBack_ev_uint16);
							m_getSquaredViewDepth_CallBack_Real_CCamera = EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Function;
							GC.KeepAlive(m_getSquaredViewDepth_CallBack_Real_CCamera);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getSquaredViewDepth_Real_CCamera(this.NativeObject, m_getSquaredViewDepth_CallBack_Real_CCamera);
							m_getLights_CallBack_LightList = EarthView_World_Graphic_CRenderable_getLights_LightList_Function;
							GC.KeepAlive(m_getLights_CallBack_LightList);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getLights_LightList(this.NativeObject, m_getLights_CallBack_LightList);
							m_getCastsShadows_CallBack_ev_bool = EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Function;
							GC.KeepAlive(m_getCastsShadows_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getCastsShadows_ev_bool(this.NativeObject, m_getCastsShadows_CallBack_ev_bool);
							m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters = EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Function;
							GC.KeepAlive(m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(this.NativeObject, m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters);
							m_setPolygonModeOverrideable_CallBack_void_ev_bool = EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Function;
							GC.KeepAlive(m_setPolygonModeOverrideable_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_setPolygonModeOverrideable_void_ev_bool(this.NativeObject, m_setPolygonModeOverrideable_CallBack_void_ev_bool);
							m_getPolygonModeOverrideable_CallBack_ev_bool = EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Function;
							GC.KeepAlive(m_getPolygonModeOverrideable_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getPolygonModeOverrideable_ev_bool(this.NativeObject, m_getPolygonModeOverrideable_CallBack_ev_bool);
							m_setCustomAmbient_CallBack_void_CColourValue = EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Function;
							GC.KeepAlive(m_setCustomAmbient_CallBack_void_CColourValue);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_setCustomAmbient_void_CColourValue(this.NativeObject, m_setCustomAmbient_CallBack_void_CColourValue);
							m_getCustomAmbient_CallBack_CColourValue = EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Function;
							GC.KeepAlive(m_getCustomAmbient_CallBack_CColourValue);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getCustomAmbient_CColourValue(this.NativeObject, m_getCustomAmbient_CallBack_CColourValue);
							m_getCustomAmbientEnabled_CallBack_bool = EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Function;
							GC.KeepAlive(m_getCustomAmbientEnabled_CallBack_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getCustomAmbientEnabled_bool(this.NativeObject, m_getCustomAmbientEnabled_CallBack_bool);
							m_setCustomAmbientEnabled_CallBack_void_ev_bool = EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Function;
							GC.KeepAlive(m_setCustomAmbientEnabled_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_setCustomAmbientEnabled_void_ev_bool(this.NativeObject, m_setCustomAmbientEnabled_CallBack_void_ev_bool);
							m_getMovableObject_CallBack_CMovableObject = EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Function;
							GC.KeepAlive(m_getMovableObject_CallBack_CMovableObject);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getMovableObject_CMovableObject(this.NativeObject, m_getMovableObject_CallBack_CMovableObject);
							m_addListener_CallBack_void_CRenderableListener = EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Function;
							GC.KeepAlive(m_addListener_CallBack_void_CRenderableListener);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_addListener_void_CRenderableListener(this.NativeObject, m_addListener_CallBack_void_CRenderableListener);
							m_removeListener_CallBack_void_CRenderableListener = EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Function;
							GC.KeepAlive(m_removeListener_CallBack_void_CRenderableListener);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_removeListener_void_CRenderableListener(this.NativeObject, m_removeListener_CallBack_void_CRenderableListener);
							m_existListener_CallBack_ev_bool_CRenderableListener = EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Function;
							GC.KeepAlive(m_existListener_CallBack_ev_bool_CRenderableListener);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_existListener_ev_bool_CRenderableListener(this.NativeObject, m_existListener_CallBack_ev_bool_CRenderableListener);
							m_getListenerCount_CallBack_ev_uint32 = EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Function;
							GC.KeepAlive(m_getListenerCount_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getListenerCount_ev_uint32(this.NativeObject, m_getListenerCount_CallBack_ev_uint32);
							m_getListener_CallBack_CRenderableListener_ev_uint32 = EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Function;
							GC.KeepAlive(m_getListener_CallBack_CRenderableListener_ev_uint32);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getListener_CRenderableListener_ev_uint32(this.NativeObject, m_getListener_CallBack_CRenderableListener_ev_uint32);
							m_getRenderSystemData_CallBack_CRenderSystemData = EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Function;
							GC.KeepAlive(m_getRenderSystemData_CallBack_CRenderSystemData);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_getRenderSystemData_CRenderSystemData(this.NativeObject, m_getRenderSystemData_CallBack_CRenderSystemData);
							m_setRenderSystemData_CallBack_void_CRenderSystemData = EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Function;
							GC.KeepAlive(m_setRenderSystemData_CallBack_void_CRenderSystemData);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_CManualObjectSection_setRenderSystemData_void_CRenderSystemData(this.NativeObject, m_setRenderSystemData_CallBack_void_CRenderSystemData);
						}
					}
					public override EarthView.World.Graphic.Technique GetTechnique()
					{
						return base.GetTechnique_NoVirtual();
					}
					public override bool PreRender(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys)
					{
						return base.PreRender_NoVirtual(sm,rsys);
					}
					public override void PostRender(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys)
					{
						base.PostRender_NoVirtual(sm,rsys);
					}
					public override ushort GetNumWorldTransforms()
					{
						return base.GetNumWorldTransforms_NoVirtual();
					}
					public override bool GetCastsShadows()
					{
						return base.GetCastsShadows_NoVirtual();
					}
					public override void _updateCustomGpuParameter(EarthView.World.Graphic.GpuProgramParameters.AutoConstantEntry constantEntry, EarthView.World.Graphic.GpuProgramParameters EVparams)
					{
						base._updateCustomGpuParameter_NoVirtual(constantEntry,EVparams);
					}
					public override void SetPolygonModeOverrideable(bool EVoverride)
					{
						base.SetPolygonModeOverrideable_NoVirtual(EVoverride);
					}
					public override bool GetPolygonModeOverrideable()
					{
						return base.GetPolygonModeOverrideable_NoVirtual();
					}
					public override void SetCustomAmbient(EarthView.World.Graphic.ColourValue ambient)
					{
						base.SetCustomAmbient_NoVirtual(ambient);
					}
					public override EarthView.World.Graphic.ColourValue GetCustomAmbient()
					{
						return base.GetCustomAmbient_NoVirtual();
					}
					public override bool GetCustomAmbientEnabled()
					{
						return base.GetCustomAmbientEnabled_NoVirtual();
					}
					public override void SetCustomAmbientEnabled(bool enabled)
					{
						base.SetCustomAmbientEnabled_NoVirtual(enabled);
					}
					public override void AddListener(EarthView.World.Graphic.Renderable.RenderableListener ref_listener)
					{
						base.AddListener_NoVirtual(ref_listener);
					}
					public override void RemoveListener(EarthView.World.Graphic.Renderable.RenderableListener listener)
					{
						base.RemoveListener_NoVirtual(listener);
					}
					public override bool ExistListener(EarthView.World.Graphic.Renderable.RenderableListener listener)
					{
						return base.ExistListener_NoVirtual(listener);
					}
					public override uint GetListenerCount()
					{
						return base.GetListenerCount_NoVirtual();
					}
					public override EarthView.World.Graphic.Renderable.RenderableListener GetListener(uint index)
					{
						return base.GetListener_NoVirtual(index);
					}
					public override EarthView.World.Graphic.Renderable.RenderSystemData GetRenderSystemData()
					{
						return base.GetRenderSystemData_NoVirtual();
					}
					public override void SetRenderSystemData(EarthView.World.Graphic.Renderable.RenderSystemData ref_val)
					{
						base.SetRenderSystemData_NoVirtual(ref_val);
					}
					public static ManualObjectSection FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ManualObjectSection obj = baseObj as  ManualObjectSection;
						if (object.Equals(obj, null))
						{
							obj = new ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CManualObjectSection");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ManualObjectSectionClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ManualObjectSection emptyInstance = new ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ManualObjectSectionShadowRenderable : EarthView.World.Graphic.ShadowRenderable
				{
					public ManualObjectSectionShadowRenderable(EarthView.World.Graphic.ManualObject parent, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, EarthView.World.Graphic.VertexData vertexData, bool createSeparateLightCap, bool isLightCap) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueparent = new BasePtr(parent);
						list.Add("parent", valueparent.PtrVal);
						BasePtr valueindexBuffer = new BasePtr(indexBuffer);
						list.Add("indexBuffer", valueindexBuffer.PtrVal);
						BasePtr valuevertexData = new BasePtr(vertexData);
						list.Add("vertexData", valuevertexData.PtrVal);
						BasePtr valuecreateSeparateLightCap = new BasePtr(createSeparateLightCap);
						list.Add("createSeparateLightCap", valuecreateSeparateLightCap.PtrVal);
						BasePtr valueisLightCap = new BasePtr(isLightCap);
						list.Add("isLightCap", valueisLightCap.PtrVal);
						Create("ManualObjectSectionShadowRenderableProxy", list);
						if (!"EarthView.World.Graphic.ManualObject+ManualObjectSectionShadowRenderable".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public ManualObjectSectionShadowRenderable(EarthView.World.Graphic.ManualObject parent, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, EarthView.World.Graphic.VertexData vertexData, bool createSeparateLightCap) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueparent = new BasePtr(parent);
						list.Add("parent", valueparent.PtrVal);
						BasePtr valueindexBuffer = new BasePtr(indexBuffer);
						list.Add("indexBuffer", valueindexBuffer.PtrVal);
						BasePtr valuevertexData = new BasePtr(vertexData);
						list.Add("vertexData", valuevertexData.PtrVal);
						BasePtr valuecreateSeparateLightCap = new BasePtr(createSeparateLightCap);
						list.Add("createSeparateLightCap", valuecreateSeparateLightCap.PtrVal);
						Create("ManualObjectSectionShadowRenderableProxy", list);
						if (!"EarthView.World.Graphic.ManualObject+ManualObjectSectionShadowRenderable".Equals(((Object)this).GetType().ToString()))
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
					private static extern void EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(IntPtr pNativeObject, IntPtr xform);

					public new void GetWorldTransforms_NoVirtual(EarthView.World.Spatial.Math.Matrix4 xform)
					{
						EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(this.NativeObject, object.Equals(xform, null) ? IntPtr.Zero : xform.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getWorldTransforms_void_CMatrix4(IntPtr pNativeObject, IntPtr xform);

					public override void GetWorldTransforms(EarthView.World.Spatial.Math.Matrix4 xform)
					{
						EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getWorldTransforms_void_CMatrix4(this.NativeObject, object.Equals(xform, null) ? IntPtr.Zero : xform.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getPositionBuffer_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.HardwareVertexBufferSharedPtr GetPositionBuffer()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getPositionBuffer_CHardwareVertexBufferSharedPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
							csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getWBuffer_CHardwareVertexBufferSharedPtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.HardwareVertexBufferSharedPtr GetWBuffer()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getWBuffer_CHardwareVertexBufferSharedPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
							csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
						}
						return csObj;
						
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
					private static extern void EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_NoVirtual(IntPtr pNativeObject, IntPtr indexBuffer);

					public new void RebindIndexBuffer_NoVirtual(EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer)
					{
						EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_NoVirtual(this.NativeObject, object.Equals(indexBuffer, null) ? IntPtr.Zero : indexBuffer.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr(IntPtr pNativeObject, IntPtr indexBuffer);

					public override void RebindIndexBuffer(EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer)
					{
						EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr(this.NativeObject, object.Equals(indexBuffer, null) ? IntPtr.Zero : indexBuffer.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadManualObjectSectionShadowRenderable = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObject::ManualObjectSectionShadowRenderable", new ManualObjectSectionShadowRenderableClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObject::ManualObjectSectionShadowRenderableProxy", new ManualObjectSectionShadowRenderableClassFactory());

					public ManualObjectSectionShadowRenderable(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_isVisible_ev_bool(IntPtr pObject, isVisible_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr(IntPtr pObject, rebindIndexBuffer_CallBack_void_CHardwareIndexBufferSharedPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getMaterial_CMaterialPtr(IntPtr pObject, getMaterial_CallBack_CMaterialPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getTechnique_CTechnique(IntPtr pObject, getTechnique_CallBack_CTechnique pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getRenderOperation_void_CRenderOperation(IntPtr pObject, getRenderOperation_CallBack_void_CRenderOperation pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(IntPtr pObject, preRender_CallBack_ev_bool_CSceneManager_CRenderSystem pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_postRender_void_CSceneManager_CRenderSystem(IntPtr pObject, postRender_CallBack_void_CSceneManager_CRenderSystem pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getWorldTransforms_void_CMatrix4(IntPtr pObject, getWorldTransforms_CallBack_void_CMatrix4 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getNumWorldTransforms_ev_uint16(IntPtr pObject, getNumWorldTransforms_CallBack_ev_uint16 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getSquaredViewDepth_Real_CCamera(IntPtr pObject, getSquaredViewDepth_CallBack_Real_CCamera pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getLights_LightList(IntPtr pObject, getLights_CallBack_LightList pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getCastsShadows_ev_bool(IntPtr pObject, getCastsShadows_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(IntPtr pObject, _updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_setPolygonModeOverrideable_void_ev_bool(IntPtr pObject, setPolygonModeOverrideable_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getPolygonModeOverrideable_ev_bool(IntPtr pObject, getPolygonModeOverrideable_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_setCustomAmbient_void_CColourValue(IntPtr pObject, setCustomAmbient_CallBack_void_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getCustomAmbient_CColourValue(IntPtr pObject, getCustomAmbient_CallBack_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getCustomAmbientEnabled_bool(IntPtr pObject, getCustomAmbientEnabled_CallBack_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_setCustomAmbientEnabled_void_ev_bool(IntPtr pObject, setCustomAmbientEnabled_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getMovableObject_CMovableObject(IntPtr pObject, getMovableObject_CallBack_CMovableObject pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_addListener_void_CRenderableListener(IntPtr pObject, addListener_CallBack_void_CRenderableListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_removeListener_void_CRenderableListener(IntPtr pObject, removeListener_CallBack_void_CRenderableListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_existListener_ev_bool_CRenderableListener(IntPtr pObject, existListener_CallBack_ev_bool_CRenderableListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getListenerCount_ev_uint32(IntPtr pObject, getListenerCount_CallBack_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getListener_CRenderableListener_ev_uint32(IntPtr pObject, getListener_CallBack_CRenderableListener_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getRenderSystemData_CRenderSystemData(IntPtr pObject, getRenderSystemData_CallBack_CRenderSystemData pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_setRenderSystemData_void_CRenderSystemData(IntPtr pObject, setRenderSystemData_CallBack_void_CRenderSystemData pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_isVisible_CallBack_ev_bool = EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Function;
							GC.KeepAlive(m_isVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_isVisible_ev_bool(this.NativeObject, m_isVisible_CallBack_ev_bool);
							m_rebindIndexBuffer_CallBack_void_CHardwareIndexBufferSharedPtr = EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Function;
							GC.KeepAlive(m_rebindIndexBuffer_CallBack_void_CHardwareIndexBufferSharedPtr);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr(this.NativeObject, m_rebindIndexBuffer_CallBack_void_CHardwareIndexBufferSharedPtr);
							m_getMaterial_CallBack_CMaterialPtr = EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Function;
							GC.KeepAlive(m_getMaterial_CallBack_CMaterialPtr);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getMaterial_CMaterialPtr(this.NativeObject, m_getMaterial_CallBack_CMaterialPtr);
							m_getTechnique_CallBack_CTechnique = EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Function;
							GC.KeepAlive(m_getTechnique_CallBack_CTechnique);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getTechnique_CTechnique(this.NativeObject, m_getTechnique_CallBack_CTechnique);
							m_getRenderOperation_CallBack_void_CRenderOperation = EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Function;
							GC.KeepAlive(m_getRenderOperation_CallBack_void_CRenderOperation);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getRenderOperation_void_CRenderOperation(this.NativeObject, m_getRenderOperation_CallBack_void_CRenderOperation);
							m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem = EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Function;
							GC.KeepAlive(m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(this.NativeObject, m_preRender_CallBack_ev_bool_CSceneManager_CRenderSystem);
							m_postRender_CallBack_void_CSceneManager_CRenderSystem = EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Function;
							GC.KeepAlive(m_postRender_CallBack_void_CSceneManager_CRenderSystem);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_postRender_void_CSceneManager_CRenderSystem(this.NativeObject, m_postRender_CallBack_void_CSceneManager_CRenderSystem);
							m_getWorldTransforms_CallBack_void_CMatrix4 = EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Function;
							GC.KeepAlive(m_getWorldTransforms_CallBack_void_CMatrix4);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getWorldTransforms_void_CMatrix4(this.NativeObject, m_getWorldTransforms_CallBack_void_CMatrix4);
							m_getNumWorldTransforms_CallBack_ev_uint16 = EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Function;
							GC.KeepAlive(m_getNumWorldTransforms_CallBack_ev_uint16);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getNumWorldTransforms_ev_uint16(this.NativeObject, m_getNumWorldTransforms_CallBack_ev_uint16);
							m_getSquaredViewDepth_CallBack_Real_CCamera = EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Function;
							GC.KeepAlive(m_getSquaredViewDepth_CallBack_Real_CCamera);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getSquaredViewDepth_Real_CCamera(this.NativeObject, m_getSquaredViewDepth_CallBack_Real_CCamera);
							m_getLights_CallBack_LightList = EarthView_World_Graphic_CRenderable_getLights_LightList_Function;
							GC.KeepAlive(m_getLights_CallBack_LightList);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getLights_LightList(this.NativeObject, m_getLights_CallBack_LightList);
							m_getCastsShadows_CallBack_ev_bool = EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Function;
							GC.KeepAlive(m_getCastsShadows_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getCastsShadows_ev_bool(this.NativeObject, m_getCastsShadows_CallBack_ev_bool);
							m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters = EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Function;
							GC.KeepAlive(m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(this.NativeObject, m__updateCustomGpuParameter_CallBack_void_CAutoConstantEntry_CGpuProgramParameters);
							m_setPolygonModeOverrideable_CallBack_void_ev_bool = EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Function;
							GC.KeepAlive(m_setPolygonModeOverrideable_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_setPolygonModeOverrideable_void_ev_bool(this.NativeObject, m_setPolygonModeOverrideable_CallBack_void_ev_bool);
							m_getPolygonModeOverrideable_CallBack_ev_bool = EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Function;
							GC.KeepAlive(m_getPolygonModeOverrideable_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getPolygonModeOverrideable_ev_bool(this.NativeObject, m_getPolygonModeOverrideable_CallBack_ev_bool);
							m_setCustomAmbient_CallBack_void_CColourValue = EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Function;
							GC.KeepAlive(m_setCustomAmbient_CallBack_void_CColourValue);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_setCustomAmbient_void_CColourValue(this.NativeObject, m_setCustomAmbient_CallBack_void_CColourValue);
							m_getCustomAmbient_CallBack_CColourValue = EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Function;
							GC.KeepAlive(m_getCustomAmbient_CallBack_CColourValue);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getCustomAmbient_CColourValue(this.NativeObject, m_getCustomAmbient_CallBack_CColourValue);
							m_getCustomAmbientEnabled_CallBack_bool = EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Function;
							GC.KeepAlive(m_getCustomAmbientEnabled_CallBack_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getCustomAmbientEnabled_bool(this.NativeObject, m_getCustomAmbientEnabled_CallBack_bool);
							m_setCustomAmbientEnabled_CallBack_void_ev_bool = EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Function;
							GC.KeepAlive(m_setCustomAmbientEnabled_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_setCustomAmbientEnabled_void_ev_bool(this.NativeObject, m_setCustomAmbientEnabled_CallBack_void_ev_bool);
							m_getMovableObject_CallBack_CMovableObject = EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Function;
							GC.KeepAlive(m_getMovableObject_CallBack_CMovableObject);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getMovableObject_CMovableObject(this.NativeObject, m_getMovableObject_CallBack_CMovableObject);
							m_addListener_CallBack_void_CRenderableListener = EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Function;
							GC.KeepAlive(m_addListener_CallBack_void_CRenderableListener);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_addListener_void_CRenderableListener(this.NativeObject, m_addListener_CallBack_void_CRenderableListener);
							m_removeListener_CallBack_void_CRenderableListener = EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Function;
							GC.KeepAlive(m_removeListener_CallBack_void_CRenderableListener);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_removeListener_void_CRenderableListener(this.NativeObject, m_removeListener_CallBack_void_CRenderableListener);
							m_existListener_CallBack_ev_bool_CRenderableListener = EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Function;
							GC.KeepAlive(m_existListener_CallBack_ev_bool_CRenderableListener);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_existListener_ev_bool_CRenderableListener(this.NativeObject, m_existListener_CallBack_ev_bool_CRenderableListener);
							m_getListenerCount_CallBack_ev_uint32 = EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Function;
							GC.KeepAlive(m_getListenerCount_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getListenerCount_ev_uint32(this.NativeObject, m_getListenerCount_CallBack_ev_uint32);
							m_getListener_CallBack_CRenderableListener_ev_uint32 = EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Function;
							GC.KeepAlive(m_getListener_CallBack_CRenderableListener_ev_uint32);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getListener_CRenderableListener_ev_uint32(this.NativeObject, m_getListener_CallBack_CRenderableListener_ev_uint32);
							m_getRenderSystemData_CallBack_CRenderSystemData = EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Function;
							GC.KeepAlive(m_getRenderSystemData_CallBack_CRenderSystemData);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_getRenderSystemData_CRenderSystemData(this.NativeObject, m_getRenderSystemData_CallBack_CRenderSystemData);
							m_setRenderSystemData_CallBack_void_CRenderSystemData = EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Function;
							GC.KeepAlive(m_setRenderSystemData_CallBack_void_CRenderSystemData);
							EV_RegisterCallback_EarthView_World_Graphic_CManualObject_ManualObjectSectionShadowRenderable_setRenderSystemData_void_CRenderSystemData(this.NativeObject, m_setRenderSystemData_CallBack_void_CRenderSystemData);
						}
					}
					public override bool IsVisible()
					{
						return base.IsVisible_NoVirtual();
					}
					public override EarthView.World.Graphic.MaterialPtr GetMaterial()
					{
						return base.GetMaterial_NoVirtual();
					}
					public override EarthView.World.Graphic.Technique GetTechnique()
					{
						return base.GetTechnique_NoVirtual();
					}
					public override void GetRenderOperation(ref EarthView.World.Graphic.RenderOperation op)
					{
						base.GetRenderOperation_NoVirtual(ref op);
					}
					public override bool PreRender(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys)
					{
						return base.PreRender_NoVirtual(sm,rsys);
					}
					public override void PostRender(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.RenderSystem rsys)
					{
						base.PostRender_NoVirtual(sm,rsys);
					}
					public override ushort GetNumWorldTransforms()
					{
						return base.GetNumWorldTransforms_NoVirtual();
					}
					public override double GetSquaredViewDepth(EarthView.World.Graphic.Camera cam)
					{
						return base.GetSquaredViewDepth_NoVirtual(cam);
					}
					public override EarthView.World.Graphic.LightList GetLights()
					{
						return base.GetLights_NoVirtual();
					}
					public override bool GetCastsShadows()
					{
						return base.GetCastsShadows_NoVirtual();
					}
					public override void _updateCustomGpuParameter(EarthView.World.Graphic.GpuProgramParameters.AutoConstantEntry constantEntry, EarthView.World.Graphic.GpuProgramParameters EVparams)
					{
						base._updateCustomGpuParameter_NoVirtual(constantEntry,EVparams);
					}
					public override void SetPolygonModeOverrideable(bool EVoverride)
					{
						base.SetPolygonModeOverrideable_NoVirtual(EVoverride);
					}
					public override bool GetPolygonModeOverrideable()
					{
						return base.GetPolygonModeOverrideable_NoVirtual();
					}
					public override void SetCustomAmbient(EarthView.World.Graphic.ColourValue ambient)
					{
						base.SetCustomAmbient_NoVirtual(ambient);
					}
					public override EarthView.World.Graphic.ColourValue GetCustomAmbient()
					{
						return base.GetCustomAmbient_NoVirtual();
					}
					public override bool GetCustomAmbientEnabled()
					{
						return base.GetCustomAmbientEnabled_NoVirtual();
					}
					public override void SetCustomAmbientEnabled(bool enabled)
					{
						base.SetCustomAmbientEnabled_NoVirtual(enabled);
					}
					public override EarthView.World.Graphic.MovableObject GetMovableObject()
					{
						return base.GetMovableObject_NoVirtual();
					}
					public override void AddListener(EarthView.World.Graphic.Renderable.RenderableListener ref_listener)
					{
						base.AddListener_NoVirtual(ref_listener);
					}
					public override void RemoveListener(EarthView.World.Graphic.Renderable.RenderableListener listener)
					{
						base.RemoveListener_NoVirtual(listener);
					}
					public override bool ExistListener(EarthView.World.Graphic.Renderable.RenderableListener listener)
					{
						return base.ExistListener_NoVirtual(listener);
					}
					public override uint GetListenerCount()
					{
						return base.GetListenerCount_NoVirtual();
					}
					public override EarthView.World.Graphic.Renderable.RenderableListener GetListener(uint index)
					{
						return base.GetListener_NoVirtual(index);
					}
					public override EarthView.World.Graphic.Renderable.RenderSystemData GetRenderSystemData()
					{
						return base.GetRenderSystemData_NoVirtual();
					}
					public override void SetRenderSystemData(EarthView.World.Graphic.Renderable.RenderSystemData ref_val)
					{
						base.SetRenderSystemData_NoVirtual(ref_val);
					}
					public static ManualObjectSectionShadowRenderable FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ManualObjectSectionShadowRenderable obj = baseObj as  ManualObjectSectionShadowRenderable;
						if (object.Equals(obj, null))
						{
							obj = new ManualObjectSectionShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ManualObjectSectionShadowRenderable");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ManualObjectSectionShadowRenderableClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ManualObjectSectionShadowRenderable emptyInstance = new ManualObjectSectionShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SectionList : EarthView.World.Core.BaseObject
				{
					public SectionList() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("SectionList",  null);
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
					private static extern void EarthView_World_Graphic_CManualObject_SectionList_push_back_void_CManualObjectSection(IntPtr pNativeObject, ref IntPtr ref_t);

					public void Push_back(EarthView.World.Graphic.ManualObject.ManualObjectSection ref_t)
					{
						EarthView_World_Graphic_CManualObject_SectionList_push_back_void_CManualObjectSection(this.NativeObject, ref ref_t.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_SectionList_pop_back_void(IntPtr pNativeObject);

					public void Pop_back()
					{
						EarthView_World_Graphic_CManualObject_SectionList_pop_back_void(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_SectionList_front_CManualObjectSection(IntPtr pNativeObject);

					public EarthView.World.Graphic.ManualObject.ManualObjectSection Front()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_SectionList_front_CManualObjectSection(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ManualObject.ManualObjectSection csObj = new EarthView.World.Graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualObjectSection");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ManualObject.ManualObjectSection;
							csObj.BindNativeObject(__ptr, "CManualObjectSection");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_SectionList_back_CManualObjectSection(IntPtr pNativeObject);

					public EarthView.World.Graphic.ManualObject.ManualObjectSection Back()
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_SectionList_back_CManualObjectSection(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ManualObject.ManualObjectSection csObj = new EarthView.World.Graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualObjectSection");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ManualObject.ManualObjectSection;
							csObj.BindNativeObject(__ptr, "CManualObjectSection");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_World_Graphic_CManualObject_SectionList_insert_void_ev_uint32_CManualObjectSection(IntPtr pNativeObject, uint pos, ref IntPtr ref_t);

					public void Insert(uint pos, EarthView.World.Graphic.ManualObject.ManualObjectSection ref_t)
					{
						EarthView_World_Graphic_CManualObject_SectionList_insert_void_ev_uint32_CManualObjectSection(this.NativeObject, pos, ref ref_t.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_SectionList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					public void Remove(ulong pos)
					{
						EarthView_World_Graphic_CManualObject_SectionList_remove_void_ev_size_t(this.NativeObject, pos);
						
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
					private static extern byte EarthView_World_Graphic_CManualObject_SectionList_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CManualObject_SectionList_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Graphic_CManualObject_SectionList_at_CManualObjectSection_ev_size_t(IntPtr pNativeObject, ulong n);

					public EarthView.World.Graphic.ManualObject.ManualObjectSection At(ulong n)
					{
						IntPtr __ptr = EarthView_World_Graphic_CManualObject_SectionList_at_CManualObjectSection_ev_size_t(this.NativeObject, n);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ManualObject.ManualObjectSection csObj = new EarthView.World.Graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualObjectSection");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ManualObject.ManualObjectSection;
							csObj.BindNativeObject(__ptr, "CManualObjectSection");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern ulong EarthView_World_Graphic_CManualObject_SectionList_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CManualObject_SectionList_size_ev_size_t(this.NativeObject);
						
						return ret;
						
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
					private static extern void EarthView_World_Graphic_CManualObject_SectionList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					public void Resize(ulong newSize)
					{
						EarthView_World_Graphic_CManualObject_SectionList_resize_void_ev_size_t(this.NativeObject, newSize);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_SectionList_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					public void Reserve(ulong count)
					{
						EarthView_World_Graphic_CManualObject_SectionList_reserve_void_ev_size_t(this.NativeObject, count);
						
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
					private static extern void EarthView_World_Graphic_CManualObject_SectionList_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_CManualObject_SectionList_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSectionList = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadSectionList = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSectionList = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadSectionList = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadSectionList = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadSectionList = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSectionList = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadSectionList = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadSectionList = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadSectionList = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadSectionList = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadSectionList = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObject::SectionList", new SectionListClassFactory());

					public SectionList(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SectionList FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SectionList obj = baseObj as  SectionList;
						if (object.Equals(obj, null))
						{
							obj = new SectionList(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "SectionList");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SectionListClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SectionList emptyInstance = new SectionList(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
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
				private static extern void EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr visitor, byte debugRenderables);

				/// <summary>
				/// 访问可渲染的物体
				/// </summary>
				/// <param name="visitor">访问者</param>
				/// <param name="debugRenderables">是否调试可渲染的物体,默认为false</param>
				/// <returns></returns>
				public new void VisitRenderables_NoVirtual(EarthView.World.Graphic.Renderable.Visitor visitor, bool debugRenderables)
				{
					EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor_ev_bool_NoVirtual(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject, Convert.ToByte(debugRenderables));
					
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
				private static extern void EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor_ev_bool(IntPtr pNativeObject, IntPtr visitor, byte debugRenderables);

				/// <summary>
				/// 访问可渲染的物体
				/// </summary>
				/// <param name="visitor">访问者</param>
				/// <param name="debugRenderables">是否调试可渲染的物体,默认为false</param>
				/// <returns></returns>
				public override void VisitRenderables(EarthView.World.Graphic.Renderable.Visitor visitor, bool debugRenderables)
				{
					EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor_ev_bool(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject, Convert.ToByte(debugRenderables));
					
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
				private static extern void EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor_NoVirtual(IntPtr pNativeObject, IntPtr visitor);

				public new void VisitRenderables_NoVirtual(EarthView.World.Graphic.Renderable.Visitor visitor)
				{
					EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor_NoVirtual(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor(IntPtr pNativeObject, IntPtr visitor);

				public override void VisitRenderables(EarthView.World.Graphic.Renderable.Visitor visitor)
				{
					EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void resetTempAreas_CallBack_void();

				protected resetTempAreas_CallBack_void m_resetTempAreas_CallBack_void;

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
				private static extern void EarthView_World_Graphic_CManualObject_resetTempAreas_void_NoVirtual(IntPtr pNativeObject);

				protected virtual void ResetTempAreas_NoVirtual()
				{
					EarthView_World_Graphic_CManualObject_resetTempAreas_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_resetTempAreas_void_Function()
				{
					ResetTempAreas();
					
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
				private static extern void EarthView_World_Graphic_CManualObject_resetTempAreas_void(IntPtr pNativeObject);

				protected virtual void ResetTempAreas()
				{
					EarthView_World_Graphic_CManualObject_resetTempAreas_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void resizeTempVertexBufferIfNeeded_CallBack_void_ev_size_t(ulong numVerts);

				protected resizeTempVertexBufferIfNeeded_CallBack_void_ev_size_t m_resizeTempVertexBufferIfNeeded_CallBack_void_ev_size_t;

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
				private static extern void EarthView_World_Graphic_CManualObject_resizeTempVertexBufferIfNeeded_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong numVerts);

				protected virtual void ResizeTempVertexBufferIfNeeded_NoVirtual(ulong numVerts)
				{
					EarthView_World_Graphic_CManualObject_resizeTempVertexBufferIfNeeded_void_ev_size_t_NoVirtual(this.NativeObject, numVerts);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_resizeTempVertexBufferIfNeeded_void_ev_size_t_Function(ulong numVerts)
				{
					ResizeTempVertexBufferIfNeeded(numVerts);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_resizeTempVertexBufferIfNeeded_void_ev_size_t(IntPtr pNativeObject, ulong numVerts);

				protected virtual void ResizeTempVertexBufferIfNeeded(ulong numVerts)
				{
					EarthView_World_Graphic_CManualObject_resizeTempVertexBufferIfNeeded_void_ev_size_t(this.NativeObject, numVerts);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void resizeTempIndexBufferIfNeeded_CallBack_void_ev_size_t(ulong numInds);

				protected resizeTempIndexBufferIfNeeded_CallBack_void_ev_size_t m_resizeTempIndexBufferIfNeeded_CallBack_void_ev_size_t;

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
				private static extern void EarthView_World_Graphic_CManualObject_resizeTempIndexBufferIfNeeded_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong numInds);

				protected virtual void ResizeTempIndexBufferIfNeeded_NoVirtual(ulong numInds)
				{
					EarthView_World_Graphic_CManualObject_resizeTempIndexBufferIfNeeded_void_ev_size_t_NoVirtual(this.NativeObject, numInds);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_resizeTempIndexBufferIfNeeded_void_ev_size_t_Function(ulong numInds)
				{
					ResizeTempIndexBufferIfNeeded(numInds);
					
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
				private static extern void EarthView_World_Graphic_CManualObject_resizeTempIndexBufferIfNeeded_void_ev_size_t(IntPtr pNativeObject, ulong numInds);

				protected virtual void ResizeTempIndexBufferIfNeeded(ulong numInds)
				{
					EarthView_World_Graphic_CManualObject_resizeTempIndexBufferIfNeeded_void_ev_size_t(this.NativeObject, numInds);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void copyTempVertexToBuffer_CallBack_void();

				protected copyTempVertexToBuffer_CallBack_void m_copyTempVertexToBuffer_CallBack_void;

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
				private static extern void EarthView_World_Graphic_CManualObject_copyTempVertexToBuffer_void_NoVirtual(IntPtr pNativeObject);

				protected virtual void CopyTempVertexToBuffer_NoVirtual()
				{
					EarthView_World_Graphic_CManualObject_copyTempVertexToBuffer_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CManualObject_copyTempVertexToBuffer_void_Function()
				{
					CopyTempVertexToBuffer();
					
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
				private static extern void EarthView_World_Graphic_CManualObject_copyTempVertexToBuffer_void(IntPtr pNativeObject);

				protected virtual void CopyTempVertexToBuffer()
				{
					EarthView_World_Graphic_CManualObject_copyTempVertexToBuffer_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadManualObject = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadManualObject = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadManualObject = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadManualObject = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadManualObject = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadManualObject = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadManualObject = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadManualObject = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadManualObject = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadManualObject = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadManualObject = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadManualObject = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObject", new ManualObjectClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObjectProxy", new ManualObjectClassFactory());

				public ManualObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_clear_void(IntPtr pObject, clear_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_estimateVertexCount_void_ev_size_t(IntPtr pObject, estimateVertexCount_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_estimateIndexCount_void_ev_size_t(IntPtr pObject, estimateIndexCount_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_EVString(IntPtr pObject, begin_CallBack_void_EVString_OperationType_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType(IntPtr pObject, begin_CallBack_void_EVString_OperationType pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_begin_void_EVString(IntPtr pObject, begin_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setDynamic_void_ev_bool(IntPtr pObject, setDynamic_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getDynamic_ev_bool(IntPtr pObject, getDynamic_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_beginUpdate_void_ev_size_t(IntPtr pObject, beginUpdate_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_position_void_CVector3(IntPtr pObject, position_CallBack_void_CVector3 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_position_void_Real_Real_Real(IntPtr pObject, position_CallBack_void_Real_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_normal_void_CVector3(IntPtr pObject, normal_CallBack_void_CVector3 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_normal_void_Real_Real_Real(IntPtr pObject, normal_CallBack_void_Real_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_tangent_void_CVector3(IntPtr pObject, tangent_CallBack_void_CVector3 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_tangent_void_Real_Real_Real(IntPtr pObject, tangent_CallBack_void_Real_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_Real(IntPtr pObject, textureCoord_CallBack_void_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real(IntPtr pObject, textureCoord_CallBack_void_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real(IntPtr pObject, textureCoord_CallBack_void_Real_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Real(IntPtr pObject, textureCoord_CallBack_void_Real_Real_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_CVector2(IntPtr pObject, textureCoord_CallBack_void_CVector2 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_CVector3(IntPtr pObject, textureCoord_CallBack_void_CVector3 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_CVector4(IntPtr pObject, textureCoord_CallBack_void_CVector4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_colour_void_CColourValue(IntPtr pObject, colour_CallBack_void_CColourValue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Real(IntPtr pObject, colour_CallBack_void_Real_Real_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real(IntPtr pObject, colour_CallBack_void_Real_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_index_void_ev_uint32(IntPtr pObject, index_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_triangle_void_ev_uint32_ev_uint32_ev_uint32(IntPtr pObject, triangle_CallBack_void_ev_uint32_ev_uint32_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_quad_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(IntPtr pObject, quad_CallBack_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getCurrentVertexCount_size_t(IntPtr pObject, getCurrentVertexCount_CallBack_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getCurrentIndexCount_size_t(IntPtr pObject, getCurrentIndexCount_CallBack_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_end_CManualObjectSection(IntPtr pObject, end_CallBack_CManualObjectSection pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_EVString(IntPtr pObject, setMaterialName_CallBack_void_ev_size_t_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString(IntPtr pObject, setMaterialName_CallBack_void_ev_size_t_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_EVString(IntPtr pObject, convertToMesh_CallBack_CMeshPtr_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString(IntPtr pObject, convertToMesh_CallBack_CMeshPtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_resetTempAreas_void(IntPtr pObject, resetTempAreas_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_resizeTempVertexBufferIfNeeded_void_ev_size_t(IntPtr pObject, resizeTempVertexBufferIfNeeded_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_resizeTempIndexBufferIfNeeded_void_ev_size_t(IntPtr pObject, resizeTempIndexBufferIfNeeded_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_copyTempVertexToBuffer_void(IntPtr pObject, copyTempVertexToBuffer_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(IntPtr pObject, getAnimableObjectPtr_CallBack_CMovableObjectInternalAnimableObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderQueueId_ev_uint8(IntPtr pObject, getRenderQueueId_CallBack_ev_uint8 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyCreator_void_CMovableObjectFactory(IntPtr pObject, _notifyCreator_CallBack_void_CMovableObjectFactory pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__getCreator_CMovableObjectFactory(IntPtr pObject, _getCreator_CallBack_CMovableObjectFactory pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyManager_void_CSceneManager(IntPtr pObject, _notifyManager_CallBack_void_CSceneManager pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__getManager_CSceneManager(IntPtr pObject, _getManager_CallBack_CSceneManager pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getMovableType_EVString(IntPtr pObject, getMovableType_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getParentNode_CNode(IntPtr pObject, getParentNode_CallBack_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getParentSceneNode_CSceneNode(IntPtr pObject, getParentSceneNode_CallBack_CSceneNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isParentTagPoint_ev_bool(IntPtr pObject, isParentTagPoint_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyAttached_void_CNode_ev_bool(IntPtr pObject, _notifyAttached_CallBack_void_CNode_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyAttached_void_CNode(IntPtr pObject, _notifyAttached_CallBack_void_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isAttached_ev_bool(IntPtr pObject, isAttached_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_detachFromParent_void(IntPtr pObject, detachFromParent_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isInScene_ev_bool(IntPtr pObject, isInScene_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyMoved_void(IntPtr pObject, _notifyMoved_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyLightsQueried_void_LightList(IntPtr pObject, _notifyLightsQueried_CallBack_void_LightList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setLightQueriedListener_void_CLightQueriedListener(IntPtr pObject, setLightQueriedListener_CallBack_void_CLightQueriedListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getLightQueriedListener_CLightQueriedListener(IntPtr pObject, getLightQueriedListener_CallBack_CLightQueriedListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getLightListUpdated_ev_uint32(IntPtr pObject, getLightListUpdated_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setLightListUpdated_void_ev_uint32(IntPtr pObject, setLightListUpdated_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyCurrentCamera_void_CCamera(IntPtr pObject, _notifyCurrentCamera_CallBack_void_CCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getBoundingBox_CAxisAlignedBox(IntPtr pObject, getBoundingBox_CallBack_CAxisAlignedBox pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getBoundingRadius_Real(IntPtr pObject, getBoundingRadius_CallBack_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getWorldBoundingSphere_CSphere_ev_bool(IntPtr pObject, getWorldBoundingSphere_CallBack_CSphere_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getWorldBoundingSphere_CSphere(IntPtr pObject, getWorldBoundingSphere_CallBack_CSphere pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__updateRenderQueue_void_CRenderQueue(IntPtr pObject, _updateRenderQueue_CallBack_void_CRenderQueue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getVisible_ev_bool(IntPtr pObject, getVisible_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isVisible_ev_bool(IntPtr pObject, isVisible_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderingMaxDistance_void_Real(IntPtr pObject, setRenderingMaxDistance_CallBack_void_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderingMaxDistance_Real(IntPtr pObject, getRenderingMaxDistance_CallBack_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderingMinDistance_void_Real(IntPtr pObject, setRenderingMinDistance_CallBack_void_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderingMinDistance_Real(IntPtr pObject, getRenderingMinDistance_CallBack_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderingMinPixelSize_void_Real(IntPtr pObject, setRenderingMinPixelSize_CallBack_void_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderingMinPixelSize_Real(IntPtr pObject, getRenderingMinPixelSize_CallBack_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setSelectionColour_void_CColourValue(IntPtr pObject, setSelectionColour_CallBack_void_CColourValue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setSelected_ev_bool_IntVector(IntPtr pObject, setSelected_CallBack_ev_bool_IntVector pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getSelected_IntVector(IntPtr pObject, getSelected_CallBack_IntVector pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(IntPtr pObject, selectBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(IntPtr pObject, selectBy_CallBack_ev_bool_CAxisAlignedBox_ev_bool_IntVector pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CSphere_ev_bool_IntVector(IntPtr pObject, selectBy_CallBack_ev_bool_CSphere_ev_bool_IntVector pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(IntPtr pObject, selectComponentBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_renderSelection_void(IntPtr pObject, renderSelection_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_clearSelection_void(IntPtr pObject, clearSelection_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_startEditing_ev_bool_ev_uint32(IntPtr pObject, startEditing_CallBack_ev_bool_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_endEditing_void(IntPtr pObject, endEditing_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getEditBoundingBox_CEditBoundingBox(IntPtr pObject, getEditBoundingBox_CallBack_CEditBoundingBox pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(IntPtr pObject, getSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(IntPtr pObject, setSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderQueueGroup_void_ev_uint8(IntPtr pObject, setRenderQueueGroup_CallBack_void_ev_uint8 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(IntPtr pObject, setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderQueueGroup_ev_uint8(IntPtr pObject, getRenderQueueGroup_CallBack_ev_uint8 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__getParentNodeFullTransform_CMatrix4(IntPtr pObject, _getParentNodeFullTransform_CallBack_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setQueryFlags_void_ev_uint32(IntPtr pObject, setQueryFlags_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_addQueryFlags_void_ev_uint32(IntPtr pObject, addQueryFlags_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_removeQueryFlags_void_ev_uint32(IntPtr pObject, removeQueryFlags_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getQueryFlags_ev_uint32(IntPtr pObject, getQueryFlags_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setVisibilityFlags_void_ev_uint32(IntPtr pObject, setVisibilityFlags_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_addVisibilityFlags_void_ev_uint32(IntPtr pObject, addVisibilityFlags_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_removeVisibilityFlags_void_ev_uint32(IntPtr pObject, removeVisibilityFlags_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getVisibilityFlags_ev_uint32(IntPtr pObject, getVisibilityFlags_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_addListener_void_CMovableObjectListener(IntPtr pObject, addListener_CallBack_void_CMovableObjectListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_removeListener_void_CMovableObjectListener(IntPtr pObject, removeListener_CallBack_void_CMovableObjectListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_existListener_ev_bool_CMovableObjectListener(IntPtr pObject, existListener_CallBack_ev_bool_CMovableObjectListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getListenerCount_ev_uint32(IntPtr pObject, getListenerCount_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getListener_CMovableObjectListener_ev_uint32(IntPtr pObject, getListener_CallBack_CMovableObjectListener_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_queryLights_LightList(IntPtr pObject, queryLights_CallBack_LightList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getLightMask_ev_uint32(IntPtr pObject, getLightMask_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setLightMask_void_ev_uint32(IntPtr pObject, setLightMask_CallBack_void_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject__getLightList_LightList(IntPtr pObject, _getLightList_CallBack_LightList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setCastShadows_void_ev_bool(IntPtr pObject, setCastShadows_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getReceivesShadows_ev_bool(IntPtr pObject, getReceivesShadows_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getTypeFlags_ev_uint32(IntPtr pObject, getTypeFlags_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor_ev_bool(IntPtr pObject, visitRenderables_CallBack_void_CVisitor_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor(IntPtr pObject, visitRenderables_CallBack_void_CVisitor pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setDebugDisplayEnabled_void_ev_bool(IntPtr pObject, setDebugDisplayEnabled_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isDebugDisplayEnabled_ev_bool(IntPtr pObject, isDebugDisplayEnabled_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getCastShadows_ev_bool(IntPtr pObject, getCastShadows_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getEdgeList_CEdgeData(IntPtr pObject, getEdgeList_CallBack_CEdgeData pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_hasEdgeList_ev_bool(IntPtr pObject, hasEdgeList_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getWorldBoundingBox_CAxisAlignedBox_ev_bool(IntPtr pObject, getWorldBoundingBox_CallBack_CAxisAlignedBox_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getWorldBoundingBox_CAxisAlignedBox(IntPtr pObject, getWorldBoundingBox_CallBack_CAxisAlignedBox pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getLightCapBounds_CAxisAlignedBox(IntPtr pObject, getLightCapBounds_CallBack_CAxisAlignedBox pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getDarkCapBounds_CAxisAlignedBox_CLight_Real(IntPtr pObject, getDarkCapBounds_CallBack_CAxisAlignedBox_CLight_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(IntPtr pObject, getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(IntPtr pObject, getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getPointExtrusionDistance_Real_CLight(IntPtr pObject, getPointExtrusionDistance_CallBack_Real_CLight pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_updateEdgeListLightFacing_void_CEdgeData_CVector4(IntPtr pObject, updateEdgeListLightFacing_CallBack_void_CEdgeData_CVector4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(IntPtr pObject, generateShadowVolume_CallBack_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObject_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(IntPtr pObject, extrudeBounds_CallBack_void_CAxisAlignedBox_CVector4_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_clear_CallBack_void = EarthView_World_Graphic_CManualObject_clear_void_Function;
						GC.KeepAlive(m_clear_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_clear_void(this.NativeObject, m_clear_CallBack_void);
						m_estimateVertexCount_CallBack_void_ev_size_t = EarthView_World_Graphic_CManualObject_estimateVertexCount_void_ev_size_t_Function;
						GC.KeepAlive(m_estimateVertexCount_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_estimateVertexCount_void_ev_size_t(this.NativeObject, m_estimateVertexCount_CallBack_void_ev_size_t);
						m_estimateIndexCount_CallBack_void_ev_size_t = EarthView_World_Graphic_CManualObject_estimateIndexCount_void_ev_size_t_Function;
						GC.KeepAlive(m_estimateIndexCount_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_estimateIndexCount_void_ev_size_t(this.NativeObject, m_estimateIndexCount_CallBack_void_ev_size_t);
						m_begin_CallBack_void_EVString_OperationType_EVString = EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_EVString_Function;
						GC.KeepAlive(m_begin_CallBack_void_EVString_OperationType_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_EVString(this.NativeObject, m_begin_CallBack_void_EVString_OperationType_EVString);
						m_begin_CallBack_void_EVString_OperationType = EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType_Function;
						GC.KeepAlive(m_begin_CallBack_void_EVString_OperationType);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_begin_void_EVString_OperationType(this.NativeObject, m_begin_CallBack_void_EVString_OperationType);
						m_begin_CallBack_void_EVString = EarthView_World_Graphic_CManualObject_begin_void_EVString_Function;
						GC.KeepAlive(m_begin_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_begin_void_EVString(this.NativeObject, m_begin_CallBack_void_EVString);
						m_setDynamic_CallBack_void_ev_bool = EarthView_World_Graphic_CManualObject_setDynamic_void_ev_bool_Function;
						GC.KeepAlive(m_setDynamic_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setDynamic_void_ev_bool(this.NativeObject, m_setDynamic_CallBack_void_ev_bool);
						m_getDynamic_CallBack_ev_bool = EarthView_World_Graphic_CManualObject_getDynamic_ev_bool_Function;
						GC.KeepAlive(m_getDynamic_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getDynamic_ev_bool(this.NativeObject, m_getDynamic_CallBack_ev_bool);
						m_beginUpdate_CallBack_void_ev_size_t = EarthView_World_Graphic_CManualObject_beginUpdate_void_ev_size_t_Function;
						GC.KeepAlive(m_beginUpdate_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_beginUpdate_void_ev_size_t(this.NativeObject, m_beginUpdate_CallBack_void_ev_size_t);
						m_position_CallBack_void_CVector3 = EarthView_World_Graphic_CManualObject_position_void_CVector3_Function;
						GC.KeepAlive(m_position_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_position_void_CVector3(this.NativeObject, m_position_CallBack_void_CVector3);
						m_position_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CManualObject_position_void_Real_Real_Real_Function;
						GC.KeepAlive(m_position_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_position_void_Real_Real_Real(this.NativeObject, m_position_CallBack_void_Real_Real_Real);
						m_normal_CallBack_void_CVector3 = EarthView_World_Graphic_CManualObject_normal_void_CVector3_Function;
						GC.KeepAlive(m_normal_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_normal_void_CVector3(this.NativeObject, m_normal_CallBack_void_CVector3);
						m_normal_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CManualObject_normal_void_Real_Real_Real_Function;
						GC.KeepAlive(m_normal_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_normal_void_Real_Real_Real(this.NativeObject, m_normal_CallBack_void_Real_Real_Real);
						m_tangent_CallBack_void_CVector3 = EarthView_World_Graphic_CManualObject_tangent_void_CVector3_Function;
						GC.KeepAlive(m_tangent_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_tangent_void_CVector3(this.NativeObject, m_tangent_CallBack_void_CVector3);
						m_tangent_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CManualObject_tangent_void_Real_Real_Real_Function;
						GC.KeepAlive(m_tangent_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_tangent_void_Real_Real_Real(this.NativeObject, m_tangent_CallBack_void_Real_Real_Real);
						m_textureCoord_CallBack_void_Real = EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Function;
						GC.KeepAlive(m_textureCoord_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_Real(this.NativeObject, m_textureCoord_CallBack_void_Real);
						m_textureCoord_CallBack_void_Real_Real = EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Function;
						GC.KeepAlive(m_textureCoord_CallBack_void_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real(this.NativeObject, m_textureCoord_CallBack_void_Real_Real);
						m_textureCoord_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Function;
						GC.KeepAlive(m_textureCoord_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real(this.NativeObject, m_textureCoord_CallBack_void_Real_Real_Real);
						m_textureCoord_CallBack_void_Real_Real_Real_Real = EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Real_Function;
						GC.KeepAlive(m_textureCoord_CallBack_void_Real_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_Real_Real_Real_Real(this.NativeObject, m_textureCoord_CallBack_void_Real_Real_Real_Real);
						m_textureCoord_CallBack_void_CVector2 = EarthView_World_Graphic_CManualObject_textureCoord_void_CVector2_Function;
						GC.KeepAlive(m_textureCoord_CallBack_void_CVector2);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_CVector2(this.NativeObject, m_textureCoord_CallBack_void_CVector2);
						m_textureCoord_CallBack_void_CVector3 = EarthView_World_Graphic_CManualObject_textureCoord_void_CVector3_Function;
						GC.KeepAlive(m_textureCoord_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_CVector3(this.NativeObject, m_textureCoord_CallBack_void_CVector3);
						m_textureCoord_CallBack_void_CVector4 = EarthView_World_Graphic_CManualObject_textureCoord_void_CVector4_Function;
						GC.KeepAlive(m_textureCoord_CallBack_void_CVector4);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_textureCoord_void_CVector4(this.NativeObject, m_textureCoord_CallBack_void_CVector4);
						m_colour_CallBack_void_CColourValue = EarthView_World_Graphic_CManualObject_colour_void_CColourValue_Function;
						GC.KeepAlive(m_colour_CallBack_void_CColourValue);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_colour_void_CColourValue(this.NativeObject, m_colour_CallBack_void_CColourValue);
						m_colour_CallBack_void_Real_Real_Real_Real = EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Real_Function;
						GC.KeepAlive(m_colour_CallBack_void_Real_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Real(this.NativeObject, m_colour_CallBack_void_Real_Real_Real_Real);
						m_colour_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real_Function;
						GC.KeepAlive(m_colour_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_colour_void_Real_Real_Real(this.NativeObject, m_colour_CallBack_void_Real_Real_Real);
						m_index_CallBack_void_ev_uint32 = EarthView_World_Graphic_CManualObject_index_void_ev_uint32_Function;
						GC.KeepAlive(m_index_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_index_void_ev_uint32(this.NativeObject, m_index_CallBack_void_ev_uint32);
						m_triangle_CallBack_void_ev_uint32_ev_uint32_ev_uint32 = EarthView_World_Graphic_CManualObject_triangle_void_ev_uint32_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_triangle_CallBack_void_ev_uint32_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_triangle_void_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, m_triangle_CallBack_void_ev_uint32_ev_uint32_ev_uint32);
						m_quad_CallBack_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32 = EarthView_World_Graphic_CManualObject_quad_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_quad_CallBack_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_quad_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, m_quad_CallBack_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32);
						m_getCurrentVertexCount_CallBack_size_t = EarthView_World_Graphic_CManualObject_getCurrentVertexCount_size_t_Function;
						GC.KeepAlive(m_getCurrentVertexCount_CallBack_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getCurrentVertexCount_size_t(this.NativeObject, m_getCurrentVertexCount_CallBack_size_t);
						m_getCurrentIndexCount_CallBack_size_t = EarthView_World_Graphic_CManualObject_getCurrentIndexCount_size_t_Function;
						GC.KeepAlive(m_getCurrentIndexCount_CallBack_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getCurrentIndexCount_size_t(this.NativeObject, m_getCurrentIndexCount_CallBack_size_t);
						m_end_CallBack_CManualObjectSection = EarthView_World_Graphic_CManualObject_end_CManualObjectSection_Function;
						GC.KeepAlive(m_end_CallBack_CManualObjectSection);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_end_CManualObjectSection(this.NativeObject, m_end_CallBack_CManualObjectSection);
						m_setMaterialName_CallBack_void_ev_size_t_EVString_EVString = EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_EVString_Function;
						GC.KeepAlive(m_setMaterialName_CallBack_void_ev_size_t_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_EVString(this.NativeObject, m_setMaterialName_CallBack_void_ev_size_t_EVString_EVString);
						m_setMaterialName_CallBack_void_ev_size_t_EVString = EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString_Function;
						GC.KeepAlive(m_setMaterialName_CallBack_void_ev_size_t_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setMaterialName_void_ev_size_t_EVString(this.NativeObject, m_setMaterialName_CallBack_void_ev_size_t_EVString);
						m_convertToMesh_CallBack_CMeshPtr_EVString_EVString = EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_EVString_Function;
						GC.KeepAlive(m_convertToMesh_CallBack_CMeshPtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_EVString(this.NativeObject, m_convertToMesh_CallBack_CMeshPtr_EVString_EVString);
						m_convertToMesh_CallBack_CMeshPtr_EVString = EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString_Function;
						GC.KeepAlive(m_convertToMesh_CallBack_CMeshPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_convertToMesh_CMeshPtr_EVString(this.NativeObject, m_convertToMesh_CallBack_CMeshPtr_EVString);
						m_resetTempAreas_CallBack_void = EarthView_World_Graphic_CManualObject_resetTempAreas_void_Function;
						GC.KeepAlive(m_resetTempAreas_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_resetTempAreas_void(this.NativeObject, m_resetTempAreas_CallBack_void);
						m_resizeTempVertexBufferIfNeeded_CallBack_void_ev_size_t = EarthView_World_Graphic_CManualObject_resizeTempVertexBufferIfNeeded_void_ev_size_t_Function;
						GC.KeepAlive(m_resizeTempVertexBufferIfNeeded_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_resizeTempVertexBufferIfNeeded_void_ev_size_t(this.NativeObject, m_resizeTempVertexBufferIfNeeded_CallBack_void_ev_size_t);
						m_resizeTempIndexBufferIfNeeded_CallBack_void_ev_size_t = EarthView_World_Graphic_CManualObject_resizeTempIndexBufferIfNeeded_void_ev_size_t_Function;
						GC.KeepAlive(m_resizeTempIndexBufferIfNeeded_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_resizeTempIndexBufferIfNeeded_void_ev_size_t(this.NativeObject, m_resizeTempIndexBufferIfNeeded_CallBack_void_ev_size_t);
						m_copyTempVertexToBuffer_CallBack_void = EarthView_World_Graphic_CManualObject_copyTempVertexToBuffer_void_Function;
						GC.KeepAlive(m_copyTempVertexToBuffer_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_copyTempVertexToBuffer_void(this.NativeObject, m_copyTempVertexToBuffer_CallBack_void);
						m_getAnimableObjectPtr_CallBack_CMovableObjectInternalAnimableObject = EarthView_World_Graphic_CMovableObject_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Function;
						GC.KeepAlive(m_getAnimableObjectPtr_CallBack_CMovableObjectInternalAnimableObject);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(this.NativeObject, m_getAnimableObjectPtr_CallBack_CMovableObjectInternalAnimableObject);
						m_getRenderQueueId_CallBack_ev_uint8 = EarthView_World_Graphic_CMovableObject_getRenderQueueId_ev_uint8_Function;
						GC.KeepAlive(m_getRenderQueueId_CallBack_ev_uint8);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderQueueId_ev_uint8(this.NativeObject, m_getRenderQueueId_CallBack_ev_uint8);
						m__notifyCreator_CallBack_void_CMovableObjectFactory = EarthView_World_Graphic_CMovableObject__notifyCreator_void_CMovableObjectFactory_Function;
						GC.KeepAlive(m__notifyCreator_CallBack_void_CMovableObjectFactory);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyCreator_void_CMovableObjectFactory(this.NativeObject, m__notifyCreator_CallBack_void_CMovableObjectFactory);
						m__getCreator_CallBack_CMovableObjectFactory = EarthView_World_Graphic_CMovableObject__getCreator_CMovableObjectFactory_Function;
						GC.KeepAlive(m__getCreator_CallBack_CMovableObjectFactory);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__getCreator_CMovableObjectFactory(this.NativeObject, m__getCreator_CallBack_CMovableObjectFactory);
						m__notifyManager_CallBack_void_CSceneManager = EarthView_World_Graphic_CMovableObject__notifyManager_void_CSceneManager_Function;
						GC.KeepAlive(m__notifyManager_CallBack_void_CSceneManager);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyManager_void_CSceneManager(this.NativeObject, m__notifyManager_CallBack_void_CSceneManager);
						m__getManager_CallBack_CSceneManager = EarthView_World_Graphic_CMovableObject__getManager_CSceneManager_Function;
						GC.KeepAlive(m__getManager_CallBack_CSceneManager);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__getManager_CSceneManager(this.NativeObject, m__getManager_CallBack_CSceneManager);
						m_getName_CallBack_EVString = EarthView_World_Graphic_CMovableObject_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_getMovableType_CallBack_EVString = EarthView_World_Graphic_CMovableObject_getMovableType_EVString_Function;
						GC.KeepAlive(m_getMovableType_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getMovableType_EVString(this.NativeObject, m_getMovableType_CallBack_EVString);
						m_getParentNode_CallBack_CNode = EarthView_World_Graphic_CMovableObject_getParentNode_CNode_Function;
						GC.KeepAlive(m_getParentNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getParentNode_CNode(this.NativeObject, m_getParentNode_CallBack_CNode);
						m_getParentSceneNode_CallBack_CSceneNode = EarthView_World_Graphic_CMovableObject_getParentSceneNode_CSceneNode_Function;
						GC.KeepAlive(m_getParentSceneNode_CallBack_CSceneNode);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getParentSceneNode_CSceneNode(this.NativeObject, m_getParentSceneNode_CallBack_CSceneNode);
						m_isParentTagPoint_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isParentTagPoint_ev_bool_Function;
						GC.KeepAlive(m_isParentTagPoint_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isParentTagPoint_ev_bool(this.NativeObject, m_isParentTagPoint_CallBack_ev_bool);
						m__notifyAttached_CallBack_void_CNode_ev_bool = EarthView_World_Graphic_CMovableObject__notifyAttached_void_CNode_ev_bool_Function;
						GC.KeepAlive(m__notifyAttached_CallBack_void_CNode_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyAttached_void_CNode_ev_bool(this.NativeObject, m__notifyAttached_CallBack_void_CNode_ev_bool);
						m__notifyAttached_CallBack_void_CNode = EarthView_World_Graphic_CMovableObject__notifyAttached_void_CNode_Function;
						GC.KeepAlive(m__notifyAttached_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyAttached_void_CNode(this.NativeObject, m__notifyAttached_CallBack_void_CNode);
						m_isAttached_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isAttached_ev_bool_Function;
						GC.KeepAlive(m_isAttached_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isAttached_ev_bool(this.NativeObject, m_isAttached_CallBack_ev_bool);
						m_detachFromParent_CallBack_void = EarthView_World_Graphic_CMovableObject_detachFromParent_void_Function;
						GC.KeepAlive(m_detachFromParent_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_detachFromParent_void(this.NativeObject, m_detachFromParent_CallBack_void);
						m_isInScene_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isInScene_ev_bool_Function;
						GC.KeepAlive(m_isInScene_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isInScene_ev_bool(this.NativeObject, m_isInScene_CallBack_ev_bool);
						m__notifyMoved_CallBack_void = EarthView_World_Graphic_CMovableObject__notifyMoved_void_Function;
						GC.KeepAlive(m__notifyMoved_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyMoved_void(this.NativeObject, m__notifyMoved_CallBack_void);
						m__notifyLightsQueried_CallBack_void_LightList = EarthView_World_Graphic_CMovableObject__notifyLightsQueried_void_LightList_Function;
						GC.KeepAlive(m__notifyLightsQueried_CallBack_void_LightList);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyLightsQueried_void_LightList(this.NativeObject, m__notifyLightsQueried_CallBack_void_LightList);
						m_setLightQueriedListener_CallBack_void_CLightQueriedListener = EarthView_World_Graphic_CMovableObject_setLightQueriedListener_void_CLightQueriedListener_Function;
						GC.KeepAlive(m_setLightQueriedListener_CallBack_void_CLightQueriedListener);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setLightQueriedListener_void_CLightQueriedListener(this.NativeObject, m_setLightQueriedListener_CallBack_void_CLightQueriedListener);
						m_getLightQueriedListener_CallBack_CLightQueriedListener = EarthView_World_Graphic_CMovableObject_getLightQueriedListener_CLightQueriedListener_Function;
						GC.KeepAlive(m_getLightQueriedListener_CallBack_CLightQueriedListener);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getLightQueriedListener_CLightQueriedListener(this.NativeObject, m_getLightQueriedListener_CallBack_CLightQueriedListener);
						m_getLightListUpdated_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getLightListUpdated_ev_uint32_Function;
						GC.KeepAlive(m_getLightListUpdated_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getLightListUpdated_ev_uint32(this.NativeObject, m_getLightListUpdated_CallBack_ev_uint32);
						m_setLightListUpdated_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_setLightListUpdated_void_ev_uint32_Function;
						GC.KeepAlive(m_setLightListUpdated_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setLightListUpdated_void_ev_uint32(this.NativeObject, m_setLightListUpdated_CallBack_void_ev_uint32);
						m__notifyCurrentCamera_CallBack_void_CCamera = EarthView_World_Graphic_CMovableObject__notifyCurrentCamera_void_CCamera_Function;
						GC.KeepAlive(m__notifyCurrentCamera_CallBack_void_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__notifyCurrentCamera_void_CCamera(this.NativeObject, m__notifyCurrentCamera_CallBack_void_CCamera);
						m_getBoundingBox_CallBack_CAxisAlignedBox = EarthView_World_Graphic_CMovableObject_getBoundingBox_CAxisAlignedBox_Function;
						GC.KeepAlive(m_getBoundingBox_CallBack_CAxisAlignedBox);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getBoundingBox_CAxisAlignedBox(this.NativeObject, m_getBoundingBox_CallBack_CAxisAlignedBox);
						m_getBoundingRadius_CallBack_Real = EarthView_World_Graphic_CMovableObject_getBoundingRadius_Real_Function;
						GC.KeepAlive(m_getBoundingRadius_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getBoundingRadius_Real(this.NativeObject, m_getBoundingRadius_CallBack_Real);
						m_getWorldBoundingSphere_CallBack_CSphere_ev_bool = EarthView_World_Graphic_CMovableObject_getWorldBoundingSphere_CSphere_ev_bool_Function;
						GC.KeepAlive(m_getWorldBoundingSphere_CallBack_CSphere_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getWorldBoundingSphere_CSphere_ev_bool(this.NativeObject, m_getWorldBoundingSphere_CallBack_CSphere_ev_bool);
						m_getWorldBoundingSphere_CallBack_CSphere = EarthView_World_Graphic_CMovableObject_getWorldBoundingSphere_CSphere_Function;
						GC.KeepAlive(m_getWorldBoundingSphere_CallBack_CSphere);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getWorldBoundingSphere_CSphere(this.NativeObject, m_getWorldBoundingSphere_CallBack_CSphere);
						m__updateRenderQueue_CallBack_void_CRenderQueue = EarthView_World_Graphic_CMovableObject__updateRenderQueue_void_CRenderQueue_Function;
						GC.KeepAlive(m__updateRenderQueue_CallBack_void_CRenderQueue);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__updateRenderQueue_void_CRenderQueue(this.NativeObject, m__updateRenderQueue_CallBack_void_CRenderQueue);
						m_setVisible_CallBack_void_ev_bool = EarthView_World_Graphic_CMovableObject_setVisible_void_ev_bool_Function;
						GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
						m_getVisible_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_getVisible_ev_bool_Function;
						GC.KeepAlive(m_getVisible_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getVisible_ev_bool(this.NativeObject, m_getVisible_CallBack_ev_bool);
						m_isVisible_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isVisible_ev_bool_Function;
						GC.KeepAlive(m_isVisible_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isVisible_ev_bool(this.NativeObject, m_isVisible_CallBack_ev_bool);
						m_setRenderingMaxDistance_CallBack_void_Real = EarthView_World_Graphic_CMovableObject_setRenderingMaxDistance_void_Real_Function;
						GC.KeepAlive(m_setRenderingMaxDistance_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderingMaxDistance_void_Real(this.NativeObject, m_setRenderingMaxDistance_CallBack_void_Real);
						m_getRenderingMaxDistance_CallBack_Real = EarthView_World_Graphic_CMovableObject_getRenderingMaxDistance_Real_Function;
						GC.KeepAlive(m_getRenderingMaxDistance_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderingMaxDistance_Real(this.NativeObject, m_getRenderingMaxDistance_CallBack_Real);
						m_setRenderingMinDistance_CallBack_void_Real = EarthView_World_Graphic_CMovableObject_setRenderingMinDistance_void_Real_Function;
						GC.KeepAlive(m_setRenderingMinDistance_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderingMinDistance_void_Real(this.NativeObject, m_setRenderingMinDistance_CallBack_void_Real);
						m_getRenderingMinDistance_CallBack_Real = EarthView_World_Graphic_CMovableObject_getRenderingMinDistance_Real_Function;
						GC.KeepAlive(m_getRenderingMinDistance_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderingMinDistance_Real(this.NativeObject, m_getRenderingMinDistance_CallBack_Real);
						m_setRenderingMinPixelSize_CallBack_void_Real = EarthView_World_Graphic_CMovableObject_setRenderingMinPixelSize_void_Real_Function;
						GC.KeepAlive(m_setRenderingMinPixelSize_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderingMinPixelSize_void_Real(this.NativeObject, m_setRenderingMinPixelSize_CallBack_void_Real);
						m_getRenderingMinPixelSize_CallBack_Real = EarthView_World_Graphic_CMovableObject_getRenderingMinPixelSize_Real_Function;
						GC.KeepAlive(m_getRenderingMinPixelSize_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderingMinPixelSize_Real(this.NativeObject, m_getRenderingMinPixelSize_CallBack_Real);
						m_setSelectionColour_CallBack_void_CColourValue = EarthView_World_Graphic_CMovableObject_setSelectionColour_void_CColourValue_Function;
						GC.KeepAlive(m_setSelectionColour_CallBack_void_CColourValue);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setSelectionColour_void_CColourValue(this.NativeObject, m_setSelectionColour_CallBack_void_CColourValue);
						m_setSelected_CallBack_ev_bool_IntVector = EarthView_World_Graphic_CMovableObject_setSelected_ev_bool_IntVector_Function;
						GC.KeepAlive(m_setSelected_CallBack_ev_bool_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setSelected_ev_bool_IntVector(this.NativeObject, m_setSelected_CallBack_ev_bool_IntVector);
						m_getSelected_CallBack_IntVector = EarthView_World_Graphic_CMovableObject_getSelected_IntVector_Function;
						GC.KeepAlive(m_getSelected_CallBack_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getSelected_IntVector(this.NativeObject, m_getSelected_CallBack_IntVector);
						m_selectBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3 = EarthView_World_Graphic_CMovableObject_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Function;
						GC.KeepAlive(m_selectBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(this.NativeObject, m_selectBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3);
						m_selectBy_CallBack_ev_bool_CAxisAlignedBox_ev_bool_IntVector = EarthView_World_Graphic_CMovableObject_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Function;
						GC.KeepAlive(m_selectBy_CallBack_ev_bool_CAxisAlignedBox_ev_bool_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(this.NativeObject, m_selectBy_CallBack_ev_bool_CAxisAlignedBox_ev_bool_IntVector);
						m_selectBy_CallBack_ev_bool_CSphere_ev_bool_IntVector = EarthView_World_Graphic_CMovableObject_selectBy_ev_bool_CSphere_ev_bool_IntVector_Function;
						GC.KeepAlive(m_selectBy_CallBack_ev_bool_CSphere_ev_bool_IntVector);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_selectBy_ev_bool_CSphere_ev_bool_IntVector(this.NativeObject, m_selectBy_CallBack_ev_bool_CSphere_ev_bool_IntVector);
						m_selectComponentBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3 = EarthView_World_Graphic_CMovableObject_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Function;
						GC.KeepAlive(m_selectComponentBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.NativeObject, m_selectComponentBy_CallBack_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3);
						m_renderSelection_CallBack_void = EarthView_World_Graphic_CMovableObject_renderSelection_void_Function;
						GC.KeepAlive(m_renderSelection_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_renderSelection_void(this.NativeObject, m_renderSelection_CallBack_void);
						m_clearSelection_CallBack_void = EarthView_World_Graphic_CMovableObject_clearSelection_void_Function;
						GC.KeepAlive(m_clearSelection_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_clearSelection_void(this.NativeObject, m_clearSelection_CallBack_void);
						m_startEditing_CallBack_ev_bool_ev_uint32 = EarthView_World_Graphic_CMovableObject_startEditing_ev_bool_ev_uint32_Function;
						GC.KeepAlive(m_startEditing_CallBack_ev_bool_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_startEditing_ev_bool_ev_uint32(this.NativeObject, m_startEditing_CallBack_ev_bool_ev_uint32);
						m_endEditing_CallBack_void = EarthView_World_Graphic_CMovableObject_endEditing_void_Function;
						GC.KeepAlive(m_endEditing_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_endEditing_void(this.NativeObject, m_endEditing_CallBack_void);
						m_getEditBoundingBox_CallBack_CEditBoundingBox = EarthView_World_Graphic_CMovableObject_getEditBoundingBox_CEditBoundingBox_Function;
						GC.KeepAlive(m_getEditBoundingBox_CallBack_CEditBoundingBox);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getEditBoundingBox_CEditBoundingBox(this.NativeObject, m_getEditBoundingBox_CallBack_CEditBoundingBox);
						m_getSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4 = EarthView_World_Graphic_CMovableObject_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Function;
						GC.KeepAlive(m_getSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(this.NativeObject, m_getSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4);
						m_setSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4 = EarthView_World_Graphic_CMovableObject_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Function;
						GC.KeepAlive(m_setSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(this.NativeObject, m_setSelectedObjectWorldMatrix_CallBack_ev_bool_ev_uint32_CMatrix4);
						m_setRenderQueueGroup_CallBack_void_ev_uint8 = EarthView_World_Graphic_CMovableObject_setRenderQueueGroup_void_ev_uint8_Function;
						GC.KeepAlive(m_setRenderQueueGroup_CallBack_void_ev_uint8);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderQueueGroup_void_ev_uint8(this.NativeObject, m_setRenderQueueGroup_CallBack_void_ev_uint8);
						m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16 = EarthView_World_Graphic_CMovableObject_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Function;
						GC.KeepAlive(m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(this.NativeObject, m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16);
						m_getRenderQueueGroup_CallBack_ev_uint8 = EarthView_World_Graphic_CMovableObject_getRenderQueueGroup_ev_uint8_Function;
						GC.KeepAlive(m_getRenderQueueGroup_CallBack_ev_uint8);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getRenderQueueGroup_ev_uint8(this.NativeObject, m_getRenderQueueGroup_CallBack_ev_uint8);
						m__getParentNodeFullTransform_CallBack_CMatrix4 = EarthView_World_Graphic_CMovableObject__getParentNodeFullTransform_CMatrix4_Function;
						GC.KeepAlive(m__getParentNodeFullTransform_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__getParentNodeFullTransform_CMatrix4(this.NativeObject, m__getParentNodeFullTransform_CallBack_CMatrix4);
						m_setQueryFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_setQueryFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_setQueryFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setQueryFlags_void_ev_uint32(this.NativeObject, m_setQueryFlags_CallBack_void_ev_uint32);
						m_addQueryFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_addQueryFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_addQueryFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_addQueryFlags_void_ev_uint32(this.NativeObject, m_addQueryFlags_CallBack_void_ev_uint32);
						m_removeQueryFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_removeQueryFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_removeQueryFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_removeQueryFlags_void_ev_uint32(this.NativeObject, m_removeQueryFlags_CallBack_void_ev_uint32);
						m_getQueryFlags_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getQueryFlags_ev_uint32_Function;
						GC.KeepAlive(m_getQueryFlags_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getQueryFlags_ev_uint32(this.NativeObject, m_getQueryFlags_CallBack_ev_uint32);
						m_setVisibilityFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_setVisibilityFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_setVisibilityFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setVisibilityFlags_void_ev_uint32(this.NativeObject, m_setVisibilityFlags_CallBack_void_ev_uint32);
						m_addVisibilityFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_addVisibilityFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_addVisibilityFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_addVisibilityFlags_void_ev_uint32(this.NativeObject, m_addVisibilityFlags_CallBack_void_ev_uint32);
						m_removeVisibilityFlags_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_removeVisibilityFlags_void_ev_uint32_Function;
						GC.KeepAlive(m_removeVisibilityFlags_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_removeVisibilityFlags_void_ev_uint32(this.NativeObject, m_removeVisibilityFlags_CallBack_void_ev_uint32);
						m_getVisibilityFlags_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getVisibilityFlags_ev_uint32_Function;
						GC.KeepAlive(m_getVisibilityFlags_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getVisibilityFlags_ev_uint32(this.NativeObject, m_getVisibilityFlags_CallBack_ev_uint32);
						m_addListener_CallBack_void_CMovableObjectListener = EarthView_World_Graphic_CMovableObject_addListener_void_CMovableObjectListener_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CMovableObjectListener);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_addListener_void_CMovableObjectListener(this.NativeObject, m_addListener_CallBack_void_CMovableObjectListener);
						m_removeListener_CallBack_void_CMovableObjectListener = EarthView_World_Graphic_CMovableObject_removeListener_void_CMovableObjectListener_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CMovableObjectListener);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_removeListener_void_CMovableObjectListener(this.NativeObject, m_removeListener_CallBack_void_CMovableObjectListener);
						m_existListener_CallBack_ev_bool_CMovableObjectListener = EarthView_World_Graphic_CMovableObject_existListener_ev_bool_CMovableObjectListener_Function;
						GC.KeepAlive(m_existListener_CallBack_ev_bool_CMovableObjectListener);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_existListener_ev_bool_CMovableObjectListener(this.NativeObject, m_existListener_CallBack_ev_bool_CMovableObjectListener);
						m_getListenerCount_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getListenerCount_ev_uint32_Function;
						GC.KeepAlive(m_getListenerCount_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getListenerCount_ev_uint32(this.NativeObject, m_getListenerCount_CallBack_ev_uint32);
						m_getListener_CallBack_CMovableObjectListener_ev_uint32 = EarthView_World_Graphic_CMovableObject_getListener_CMovableObjectListener_ev_uint32_Function;
						GC.KeepAlive(m_getListener_CallBack_CMovableObjectListener_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getListener_CMovableObjectListener_ev_uint32(this.NativeObject, m_getListener_CallBack_CMovableObjectListener_ev_uint32);
						m_queryLights_CallBack_LightList = EarthView_World_Graphic_CMovableObject_queryLights_LightList_Function;
						GC.KeepAlive(m_queryLights_CallBack_LightList);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_queryLights_LightList(this.NativeObject, m_queryLights_CallBack_LightList);
						m_getLightMask_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getLightMask_ev_uint32_Function;
						GC.KeepAlive(m_getLightMask_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getLightMask_ev_uint32(this.NativeObject, m_getLightMask_CallBack_ev_uint32);
						m_setLightMask_CallBack_void_ev_uint32 = EarthView_World_Graphic_CMovableObject_setLightMask_void_ev_uint32_Function;
						GC.KeepAlive(m_setLightMask_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setLightMask_void_ev_uint32(this.NativeObject, m_setLightMask_CallBack_void_ev_uint32);
						m__getLightList_CallBack_LightList = EarthView_World_Graphic_CMovableObject__getLightList_LightList_Function;
						GC.KeepAlive(m__getLightList_CallBack_LightList);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject__getLightList_LightList(this.NativeObject, m__getLightList_CallBack_LightList);
						m_setCastShadows_CallBack_void_ev_bool = EarthView_World_Graphic_CMovableObject_setCastShadows_void_ev_bool_Function;
						GC.KeepAlive(m_setCastShadows_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setCastShadows_void_ev_bool(this.NativeObject, m_setCastShadows_CallBack_void_ev_bool);
						m_getReceivesShadows_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_getReceivesShadows_ev_bool_Function;
						GC.KeepAlive(m_getReceivesShadows_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getReceivesShadows_ev_bool(this.NativeObject, m_getReceivesShadows_CallBack_ev_bool);
						m_getTypeFlags_CallBack_ev_uint32 = EarthView_World_Graphic_CMovableObject_getTypeFlags_ev_uint32_Function;
						GC.KeepAlive(m_getTypeFlags_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getTypeFlags_ev_uint32(this.NativeObject, m_getTypeFlags_CallBack_ev_uint32);
						m_visitRenderables_CallBack_void_CVisitor_ev_bool = EarthView_World_Graphic_CMovableObject_visitRenderables_void_CVisitor_ev_bool_Function;
						GC.KeepAlive(m_visitRenderables_CallBack_void_CVisitor_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor_ev_bool(this.NativeObject, m_visitRenderables_CallBack_void_CVisitor_ev_bool);
						m_visitRenderables_CallBack_void_CVisitor = EarthView_World_Graphic_CMovableObject_visitRenderables_void_CVisitor_Function;
						GC.KeepAlive(m_visitRenderables_CallBack_void_CVisitor);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_visitRenderables_void_CVisitor(this.NativeObject, m_visitRenderables_CallBack_void_CVisitor);
						m_setDebugDisplayEnabled_CallBack_void_ev_bool = EarthView_World_Graphic_CMovableObject_setDebugDisplayEnabled_void_ev_bool_Function;
						GC.KeepAlive(m_setDebugDisplayEnabled_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_setDebugDisplayEnabled_void_ev_bool(this.NativeObject, m_setDebugDisplayEnabled_CallBack_void_ev_bool);
						m_isDebugDisplayEnabled_CallBack_ev_bool = EarthView_World_Graphic_CMovableObject_isDebugDisplayEnabled_ev_bool_Function;
						GC.KeepAlive(m_isDebugDisplayEnabled_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_isDebugDisplayEnabled_ev_bool(this.NativeObject, m_isDebugDisplayEnabled_CallBack_ev_bool);
						m_getCastShadows_CallBack_ev_bool = EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Function;
						GC.KeepAlive(m_getCastShadows_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getCastShadows_ev_bool(this.NativeObject, m_getCastShadows_CallBack_ev_bool);
						m_getEdgeList_CallBack_CEdgeData = EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Function;
						GC.KeepAlive(m_getEdgeList_CallBack_CEdgeData);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getEdgeList_CEdgeData(this.NativeObject, m_getEdgeList_CallBack_CEdgeData);
						m_hasEdgeList_CallBack_ev_bool = EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Function;
						GC.KeepAlive(m_hasEdgeList_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_hasEdgeList_ev_bool(this.NativeObject, m_hasEdgeList_CallBack_ev_bool);
						m_getWorldBoundingBox_CallBack_CAxisAlignedBox_ev_bool = EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Function;
						GC.KeepAlive(m_getWorldBoundingBox_CallBack_CAxisAlignedBox_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getWorldBoundingBox_CAxisAlignedBox_ev_bool(this.NativeObject, m_getWorldBoundingBox_CallBack_CAxisAlignedBox_ev_bool);
						m_getWorldBoundingBox_CallBack_CAxisAlignedBox = EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Function;
						GC.KeepAlive(m_getWorldBoundingBox_CallBack_CAxisAlignedBox);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getWorldBoundingBox_CAxisAlignedBox(this.NativeObject, m_getWorldBoundingBox_CallBack_CAxisAlignedBox);
						m_getLightCapBounds_CallBack_CAxisAlignedBox = EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Function;
						GC.KeepAlive(m_getLightCapBounds_CallBack_CAxisAlignedBox);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getLightCapBounds_CAxisAlignedBox(this.NativeObject, m_getLightCapBounds_CallBack_CAxisAlignedBox);
						m_getDarkCapBounds_CallBack_CAxisAlignedBox_CLight_Real = EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Function;
						GC.KeepAlive(m_getDarkCapBounds_CallBack_CAxisAlignedBox_CLight_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getDarkCapBounds_CAxisAlignedBox_CLight_Real(this.NativeObject, m_getDarkCapBounds_CallBack_CAxisAlignedBox_CLight_Real);
						m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32 = EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Function;
						GC.KeepAlive(m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.NativeObject, m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32);
						m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real = EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Function;
						GC.KeepAlive(m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.NativeObject, m_getShadowVolumeRenderableIterator_CallBack_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real);
						m_getPointExtrusionDistance_CallBack_Real_CLight = EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Function;
						GC.KeepAlive(m_getPointExtrusionDistance_CallBack_Real_CLight);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_getPointExtrusionDistance_Real_CLight(this.NativeObject, m_getPointExtrusionDistance_CallBack_Real_CLight);
						m_updateEdgeListLightFacing_CallBack_void_CEdgeData_CVector4 = EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Function;
						GC.KeepAlive(m_updateEdgeListLightFacing_CallBack_void_CEdgeData_CVector4);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_updateEdgeListLightFacing_void_CEdgeData_CVector4(this.NativeObject, m_updateEdgeListLightFacing_CallBack_void_CEdgeData_CVector4);
						m_generateShadowVolume_CallBack_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32 = EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Function;
						GC.KeepAlive(m_generateShadowVolume_CallBack_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.NativeObject, m_generateShadowVolume_CallBack_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32);
						m_extrudeBounds_CallBack_void_CAxisAlignedBox_CVector4_Real = EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Function;
						GC.KeepAlive(m_extrudeBounds_CallBack_void_CAxisAlignedBox_CVector4_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObject_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(this.NativeObject, m_extrudeBounds_CallBack_void_CAxisAlignedBox_CVector4_Real);
					}
				}
				public override EarthView.World.Graphic.MovableObject.MovableObjectInternalAnimableObject GetAnimableObjectPtr()
				{
					return base.GetAnimableObjectPtr_NoVirtual();
				}
				public override byte GetRenderQueueId()
				{
					return base.GetRenderQueueId_NoVirtual();
				}
				public override void _notifyCreator(EarthView.World.Graphic.MovableObjectFactory ref_fact)
				{
					base._notifyCreator_NoVirtual(ref_fact);
				}
				public override EarthView.World.Graphic.MovableObjectFactory _getCreator()
				{
					return base._getCreator_NoVirtual();
				}
				public override void _notifyManager(EarthView.World.Graphic.SceneManager ref_mgr)
				{
					base._notifyManager_NoVirtual(ref_mgr);
				}
				public override EarthView.World.Graphic.SceneManager _getManager()
				{
					return base._getManager_NoVirtual();
				}
				public override string GetName()
				{
					return base.GetName_NoVirtual();
				}
				public override EarthView.World.Graphic.Node GetParentNode()
				{
					return base.GetParentNode_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneNode GetParentSceneNode()
				{
					return base.GetParentSceneNode_NoVirtual();
				}
				public override bool IsParentTagPoint()
				{
					return base.IsParentTagPoint_NoVirtual();
				}
				public override void _notifyAttached(EarthView.World.Graphic.Node ref_parent, bool isTagPoint)
				{
					base._notifyAttached_NoVirtual(ref_parent,isTagPoint);
				}
				public override void _notifyAttached(EarthView.World.Graphic.Node ref_parent)
				{
					base._notifyAttached_NoVirtual(ref_parent);
				}
				public override bool IsAttached()
				{
					return base.IsAttached_NoVirtual();
				}
				public override void DetachFromParent()
				{
					base.DetachFromParent_NoVirtual();
				}
				public override bool IsInScene()
				{
					return base.IsInScene_NoVirtual();
				}
				public override void _notifyMoved()
				{
					base._notifyMoved_NoVirtual();
				}
				public override void _notifyLightsQueried(EarthView.World.Graphic.LightList lightList)
				{
					base._notifyLightsQueried_NoVirtual(lightList);
				}
				public override void SetLightQueriedListener(EarthView.World.Graphic.MovableObject.LightQueriedListener listener)
				{
					base.SetLightQueriedListener_NoVirtual(listener);
				}
				public override EarthView.World.Graphic.MovableObject.LightQueriedListener GetLightQueriedListener()
				{
					return base.GetLightQueriedListener_NoVirtual();
				}
				public override uint GetLightListUpdated()
				{
					return base.GetLightListUpdated_NoVirtual();
				}
				public override void SetLightListUpdated(uint frame)
				{
					base.SetLightListUpdated_NoVirtual(frame);
				}
				public override void _notifyCurrentCamera(EarthView.World.Graphic.Camera ref_cam)
				{
					base._notifyCurrentCamera_NoVirtual(ref_cam);
				}
				public override EarthView.World.Spatial.Math.Sphere GetWorldBoundingSphere(bool derive)
				{
					return base.GetWorldBoundingSphere_NoVirtual(derive);
				}
				public override EarthView.World.Spatial.Math.Sphere GetWorldBoundingSphere()
				{
					return base.GetWorldBoundingSphere_NoVirtual();
				}
				public override void SetVisible(bool visible)
				{
					base.SetVisible_NoVirtual(visible);
				}
				public override bool GetVisible()
				{
					return base.GetVisible_NoVirtual();
				}
				public override bool IsVisible()
				{
					return base.IsVisible_NoVirtual();
				}
				public override void SetRenderingMaxDistance(double dist)
				{
					base.SetRenderingMaxDistance_NoVirtual(dist);
				}
				public override double GetRenderingMaxDistance()
				{
					return base.GetRenderingMaxDistance_NoVirtual();
				}
				public override void SetRenderingMinDistance(double dist)
				{
					base.SetRenderingMinDistance_NoVirtual(dist);
				}
				public override double GetRenderingMinDistance()
				{
					return base.GetRenderingMinDistance_NoVirtual();
				}
				public override void SetRenderingMinPixelSize(double pixelSize)
				{
					base.SetRenderingMinPixelSize_NoVirtual(pixelSize);
				}
				public override double GetRenderingMinPixelSize()
				{
					return base.GetRenderingMinPixelSize_NoVirtual();
				}
				public override bool SetSelected(EarthView.World.Core.IntVector objIndics)
				{
					return base.SetSelected_NoVirtual(objIndics);
				}
				public override EarthView.World.Core.IntVector GetSelected()
				{
					return base.GetSelected_NoVirtual();
				}
				public override bool StartEditing(uint objectIndex)
				{
					return base.StartEditing_NoVirtual(objectIndex);
				}
				public override void EndEditing()
				{
					base.EndEditing_NoVirtual();
				}
				public override EarthView.World.Graphic.EditBoundingBox GetEditBoundingBox()
				{
					return base.GetEditBoundingBox_NoVirtual();
				}
				public override bool GetSelectedObjectWorldMatrix(uint objectIndex, ref EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					return base.GetSelectedObjectWorldMatrix_NoVirtual(objectIndex,ref matrix);
				}
				public override bool SetSelectedObjectWorldMatrix(uint objectIndex, EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					return base.SetSelectedObjectWorldMatrix_NoVirtual(objectIndex,matrix);
				}
				public override void SetRenderQueueGroup(byte queueID)
				{
					base.SetRenderQueueGroup_NoVirtual(queueID);
				}
				public override void SetRenderQueueGroupAndPriority(byte queueID, ushort priority)
				{
					base.SetRenderQueueGroupAndPriority_NoVirtual(queueID,priority);
				}
				public override byte GetRenderQueueGroup()
				{
					return base.GetRenderQueueGroup_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Matrix4 _getParentNodeFullTransform()
				{
					return base._getParentNodeFullTransform_NoVirtual();
				}
				public override void SetQueryFlags(uint flags)
				{
					base.SetQueryFlags_NoVirtual(flags);
				}
				public override void AddQueryFlags(uint flags)
				{
					base.AddQueryFlags_NoVirtual(flags);
				}
				public override void RemoveQueryFlags(uint flags)
				{
					base.RemoveQueryFlags_NoVirtual(flags);
				}
				public override uint GetQueryFlags()
				{
					return base.GetQueryFlags_NoVirtual();
				}
				public override void SetVisibilityFlags(uint flags)
				{
					base.SetVisibilityFlags_NoVirtual(flags);
				}
				public override void AddVisibilityFlags(uint flags)
				{
					base.AddVisibilityFlags_NoVirtual(flags);
				}
				public override void RemoveVisibilityFlags(uint flags)
				{
					base.RemoveVisibilityFlags_NoVirtual(flags);
				}
				public override uint GetVisibilityFlags()
				{
					return base.GetVisibilityFlags_NoVirtual();
				}
				public override void AddListener(EarthView.World.Graphic.MovableObject.MovableObjectListener ref_listener)
				{
					base.AddListener_NoVirtual(ref_listener);
				}
				public override void RemoveListener(EarthView.World.Graphic.MovableObject.MovableObjectListener listener)
				{
					base.RemoveListener_NoVirtual(listener);
				}
				public override bool ExistListener(EarthView.World.Graphic.MovableObject.MovableObjectListener listener)
				{
					return base.ExistListener_NoVirtual(listener);
				}
				public override uint GetListenerCount()
				{
					return base.GetListenerCount_NoVirtual();
				}
				public override EarthView.World.Graphic.MovableObject.MovableObjectListener GetListener(uint index)
				{
					return base.GetListener_NoVirtual(index);
				}
				public override EarthView.World.Graphic.LightList QueryLights()
				{
					return base.QueryLights_NoVirtual();
				}
				public override uint GetLightMask()
				{
					return base.GetLightMask_NoVirtual();
				}
				public override void SetLightMask(uint lightMask)
				{
					base.SetLightMask_NoVirtual(lightMask);
				}
				public override EarthView.World.Graphic.LightList _getLightList()
				{
					return base._getLightList_NoVirtual();
				}
				public override void SetCastShadows(bool enabled)
				{
					base.SetCastShadows_NoVirtual(enabled);
				}
				public override bool GetReceivesShadows()
				{
					return base.GetReceivesShadows_NoVirtual();
				}
				public override uint GetTypeFlags()
				{
					return base.GetTypeFlags_NoVirtual();
				}
				public override void SetDebugDisplayEnabled(bool enabled)
				{
					base.SetDebugDisplayEnabled_NoVirtual(enabled);
				}
				public override bool IsDebugDisplayEnabled()
				{
					return base.IsDebugDisplayEnabled_NoVirtual();
				}
				public override bool GetCastShadows()
				{
					return base.GetCastShadows_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetWorldBoundingBox(bool derive)
				{
					return base.GetWorldBoundingBox_NoVirtual(derive);
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetWorldBoundingBox()
				{
					return base.GetWorldBoundingBox_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetLightCapBounds()
				{
					return base.GetLightCapBounds_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox GetDarkCapBounds(EarthView.World.Graphic.Light light, double dirLightExtrusionDist)
				{
					return base.GetDarkCapBounds_NoVirtual(light,dirLightExtrusionDist);
				}
				public override double GetPointExtrusionDistance(EarthView.World.Graphic.Light l)
				{
					return base.GetPointExtrusionDistance_NoVirtual(l);
				}
				protected override void UpdateEdgeListLightFacing(EarthView.World.Graphic.EdgeData edgeData, EarthView.World.Spatial.Math.Vector4 lightPos)
				{
					base.UpdateEdgeListLightFacing_NoVirtual(edgeData,lightPos);
				}
				protected override void GenerateShadowVolume(EarthView.World.Graphic.EdgeData edgeData, EarthView.World.Graphic.HardwareIndexBufferSharedPtr indexBuffer, EarthView.World.Graphic.Light light, ref EarthView.World.Graphic.ShadowCaster.ShadowRenderableList shadowRenderables, uint flags)
				{
					base.GenerateShadowVolume_NoVirtual(edgeData,indexBuffer,light,ref shadowRenderables,flags);
				}
				protected override void ExtrudeBounds(ref EarthView.World.Spatial.Math.AxisAlignedBox box, EarthView.World.Spatial.Math.Vector4 lightPos, double extrudeDist)
				{
					base.ExtrudeBounds_NoVirtual(ref box,lightPos,extrudeDist);
				}
				public static ManualObject FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ManualObject obj = baseObj as  ManualObject;
					if (object.Equals(obj, null))
					{
						obj = new ManualObject(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CManualObject");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ManualObjectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ManualObject emptyInstance = new ManualObject(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 手动创建对象类工厂
			/// 创建对象实例
			/// </summary>
			public class ManualObjectFactory : EarthView.World.Graphic.MovableObjectFactory
			{

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
				private static extern IntPtr EarthView_World_Graphic_CManualObjectFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, IntPtr EVparams);

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="params">参数</param>
				/// <returns></returns>
				protected new EarthView.World.Graphic.MovableObject CreateInstanceImpl_NoVirtual(string name, EarthView.World.Core.CommonStringPairList EVparams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObjectFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_NoVirtual(this.NativeObject, name, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MovableObject csObj = new EarthView.World.Graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMovableObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject;
						csObj.BindNativeObject(__ptr, "CMovableObject");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObjectFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList(IntPtr pNativeObject, string name, IntPtr EVparams);

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="params">参数</param>
				/// <returns></returns>
				protected override EarthView.World.Graphic.MovableObject CreateInstanceImpl(string name, EarthView.World.Core.CommonStringPairList EVparams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObjectFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList(this.NativeObject, name, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MovableObject csObj = new EarthView.World.Graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMovableObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MovableObject;
						csObj.BindNativeObject(__ptr, "CMovableObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ManualObjectFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CManualObjectFactoryProxy", null);
					if (!"EarthView.World.Graphic.ManualObjectFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				private static string FACTORY_TYPE_NAMEField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_CManualObjectFactory_FACTORY_TYPE_NAME( );

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
				private static extern void Set_EarthView_World_Graphic_CManualObjectFactory_FACTORY_TYPE_NAME( string value );

				public 				static string FACTORY_TYPE_NAME
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_CManualObjectFactory_FACTORY_TYPE_NAME();
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					set
					{
						FACTORY_TYPE_NAMEField = value;
						Set_EarthView_World_Graphic_CManualObjectFactory_FACTORY_TYPE_NAME( value );
					}
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
				private static extern IntPtr EarthView_World_Graphic_CManualObjectFactory_getType_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得移动对象的值类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>动画的值类型</returns>
				public new string GetType_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObjectFactory_getType_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
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
				private static extern IntPtr EarthView_World_Graphic_CManualObjectFactory_getType_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获得移动对象的值类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>动画的值类型</returns>
				public override string GetType()
				{
					IntPtr __ptr = EarthView_World_Graphic_CManualObjectFactory_getType_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
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
				private static extern void EarthView_World_Graphic_CManualObjectFactory_destroyInstance_void_CMovableObject_NoVirtual(IntPtr pNativeObject, IntPtr obj);

				/// <summary>
				/// 销毁实例
				/// </summary>
				/// <param name="obj">实例</param>
				/// <returns></returns>
				public new void DestroyInstance_NoVirtual(EarthView.World.Graphic.MovableObject obj)
				{
					EarthView_World_Graphic_CManualObjectFactory_destroyInstance_void_CMovableObject_NoVirtual(this.NativeObject, object.Equals(obj, null) ? IntPtr.Zero : obj.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CManualObjectFactory_destroyInstance_void_CMovableObject(IntPtr pNativeObject, IntPtr obj);

				/// <summary>
				/// 销毁实例
				/// </summary>
				/// <param name="obj">实例</param>
				/// <returns></returns>
				public override void DestroyInstance(EarthView.World.Graphic.MovableObject obj)
				{
					EarthView_World_Graphic_CManualObjectFactory_destroyInstance_void_CMovableObject(this.NativeObject, object.Equals(obj, null) ? IntPtr.Zero : obj.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadManualObjectFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadManualObjectFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadManualObjectFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadManualObjectFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadManualObjectFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadManualObjectFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadManualObjectFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadManualObjectFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadManualObjectFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadManualObjectFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadManualObjectFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadManualObjectFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObjectFactory", new ManualObjectFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CManualObjectFactoryProxy", new ManualObjectFactoryClassFactory());

				public ManualObjectFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList(IntPtr pObject, createInstanceImpl_CallBack_CMovableObject_EVString_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_createInstanceImpl_CMovableObject_EVString(IntPtr pObject, createInstanceImpl_CallBack_CMovableObject_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList(IntPtr pObject, createInstance_CallBack_CMovableObject_EVString_CSceneManager_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_createInstance_CMovableObject_EVString_CSceneManager(IntPtr pObject, createInstance_CallBack_CMovableObject_EVString_CSceneManager pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_destroyInstance_void_CMovableObject(IntPtr pObject, destroyInstance_CallBack_void_CMovableObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_requestTypeFlags_ev_bool(IntPtr pObject, requestTypeFlags_CallBack_ev_bool pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createInstanceImpl_CallBack_CMovableObject_EVString_CommonStringPairList = EarthView_World_Graphic_CMovableObjectFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Function;
						GC.KeepAlive(m_createInstanceImpl_CallBack_CMovableObject_EVString_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList(this.NativeObject, m_createInstanceImpl_CallBack_CMovableObject_EVString_CommonStringPairList);
						m_createInstanceImpl_CallBack_CMovableObject_EVString = EarthView_World_Graphic_CMovableObjectFactory_createInstanceImpl_CMovableObject_EVString_Function;
						GC.KeepAlive(m_createInstanceImpl_CallBack_CMovableObject_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_createInstanceImpl_CMovableObject_EVString(this.NativeObject, m_createInstanceImpl_CallBack_CMovableObject_EVString);
						m_getType_CallBack_EVString = EarthView_World_Graphic_CMovableObjectFactory_getType_EVString_Function;
						GC.KeepAlive(m_getType_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
						m_createInstance_CallBack_CMovableObject_EVString_CSceneManager_CommonStringPairList = EarthView_World_Graphic_CMovableObjectFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Function;
						GC.KeepAlive(m_createInstance_CallBack_CMovableObject_EVString_CSceneManager_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList(this.NativeObject, m_createInstance_CallBack_CMovableObject_EVString_CSceneManager_CommonStringPairList);
						m_createInstance_CallBack_CMovableObject_EVString_CSceneManager = EarthView_World_Graphic_CMovableObjectFactory_createInstance_CMovableObject_EVString_CSceneManager_Function;
						GC.KeepAlive(m_createInstance_CallBack_CMovableObject_EVString_CSceneManager);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_createInstance_CMovableObject_EVString_CSceneManager(this.NativeObject, m_createInstance_CallBack_CMovableObject_EVString_CSceneManager);
						m_destroyInstance_CallBack_void_CMovableObject = EarthView_World_Graphic_CMovableObjectFactory_destroyInstance_void_CMovableObject_Function;
						GC.KeepAlive(m_destroyInstance_CallBack_void_CMovableObject);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_destroyInstance_void_CMovableObject(this.NativeObject, m_destroyInstance_CallBack_void_CMovableObject);
						m_requestTypeFlags_CallBack_ev_bool = EarthView_World_Graphic_CMovableObjectFactory_requestTypeFlags_ev_bool_Function;
						GC.KeepAlive(m_requestTypeFlags_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CManualObjectFactory_requestTypeFlags_ev_bool(this.NativeObject, m_requestTypeFlags_CallBack_ev_bool);
					}
				}
				protected override EarthView.World.Graphic.MovableObject CreateInstanceImpl(string name)
				{
					return base.CreateInstanceImpl_NoVirtual(name);
				}
				public override EarthView.World.Graphic.MovableObject CreateInstance(string name, EarthView.World.Graphic.SceneManager ref_manager, EarthView.World.Core.CommonStringPairList EVparams)
				{
					return base.CreateInstance_NoVirtual(name,ref_manager,EVparams);
				}
				public override EarthView.World.Graphic.MovableObject CreateInstance(string name, EarthView.World.Graphic.SceneManager ref_manager)
				{
					return base.CreateInstance_NoVirtual(name,ref_manager);
				}
				public override bool RequestTypeFlags()
				{
					return base.RequestTypeFlags_NoVirtual();
				}
				public static ManualObjectFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ManualObjectFactory obj = baseObj as  ManualObjectFactory;
					if (object.Equals(obj, null))
					{
						obj = new ManualObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CManualObjectFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ManualObjectFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ManualObjectFactory emptyInstance = new ManualObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
