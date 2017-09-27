/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			/// <summary>
			/// 挂接对象基类
			/// </summary>
			public class BaseBandingObject : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				public BaseBandingObject() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CBaseBandingObjectProxy", null);
					if (!"EarthView.IndustryEngine.IndustryGraphic.BaseBandingObject".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				public BaseBandingObject(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					Create("CBaseBandingObjectProxy", list);
					if (!"EarthView.IndustryEngine.IndustryGraphic.BaseBandingObject".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getCanSwapBuffer_CallBack_ev_bool();

				protected getCanSwapBuffer_CallBack_ev_bool m_getCanSwapBuffer_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否能够交换buffer
				/// </summary>
				/// <returns>是否能够交换buffer</returns>
				public virtual bool GetCanSwapBuffer_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Function()
				{
					bool csret=GetCanSwapBuffer();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否能够交换buffer
				/// </summary>
				/// <returns>是否能够交换buffer</returns>
				public virtual bool GetCanSwapBuffer()
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setName_CallBack_void_EarthView_World_Core_ev_string(ref IntPtr name);

				protected setName_CallBack_void_EarthView_World_Core_ev_string m_setName_CallBack_void_EarthView_World_Core_ev_string;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 设置名称
				/// </summary>
				/// <param name="name">名称</param>
				public virtual void SetName_NoVirtual(string name)
				{
					EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					SetName(strname);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string(IntPtr pNativeObject, string name);

				/// <summary>
				/// 设置名称
				/// </summary>
				/// <param name="name">名称</param>
				public virtual void SetName(string name)
				{
					EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string(this.NativeObject, name);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getName_CallBack_EarthView_World_Core_ev_string();

				protected getName_CallBack_EarthView_World_Core_ev_string m_getName_CallBack_EarthView_World_Core_ev_string;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取名称
				/// </summary>
				/// <returns>名称</returns>
				public virtual string GetName_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Function()
				{
					string csret=GetName();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string(IntPtr pNativeObject);

				/// <summary>
				/// 获取名称
				/// </summary>
				/// <returns>名称</returns>
				public virtual string GetName()
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setNeedUpdate_CallBack_void_ev_bool(ref byte needUpdate);

				protected setNeedUpdate_CallBack_void_ev_bool m_setNeedUpdate_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool needUpdate);

				/// <summary>
				/// 设置是否需要更新
				/// </summary>
				/// <param name="needUpdate">更新状态</param>
				public virtual void SetNeedUpdate_NoVirtual(bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_NoVirtual(this.NativeObject, ref needUpdate);
					
				}

				protected  void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Function(ref byte needUpdate)
				{
					bool needUpdateBool = Convert.ToBoolean(needUpdate);
					
					SetNeedUpdate(needUpdateBool);
					
					needUpdate = Convert.ToByte(needUpdateBool);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool(IntPtr pNativeObject, ref bool needUpdate);

				/// <summary>
				/// 设置是否需要更新
				/// </summary>
				/// <param name="needUpdate">更新状态</param>
				public virtual void SetNeedUpdate(bool needUpdate)
				{
					EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool(this.NativeObject, ref needUpdate);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getNeedUpdate_CallBack_ev_bool();

				protected getNeedUpdate_CallBack_ev_bool m_getNeedUpdate_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否需要更新
				/// </summary>
				/// <returns>是否需要更新</returns>
				public virtual bool GetNeedUpdate_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Function()
				{
					bool csret=GetNeedUpdate();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否需要更新
				/// </summary>
				/// <returns>是否需要更新</returns>
				public virtual bool GetNeedUpdate()
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getNode_CallBack_CNode();

				protected getNode_CallBack_CNode m_getNode_CallBack_CNode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取绑定的节点
				/// </summary>
				/// <returns>绑定的节点</returns>
				public virtual EarthView.World.Graphic.Node GetNode_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Node csObj = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Node;
						csObj.BindNativeObject(__ptr, "CNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Function()
				{
					EarthView.World.Graphic.Node csret=GetNode();
					
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
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode(IntPtr pNativeObject);

				/// <summary>
				/// 获取绑定的节点
				/// </summary>
				/// <returns>绑定的节点</returns>
				public virtual EarthView.World.Graphic.Node GetNode()
				{
					IntPtr __ptr = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Node csObj = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Node;
						csObj.BindNativeObject(__ptr, "CNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void update_CallBack_void();

				protected update_CallBack_void m_update_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 更新
				/// </summary>
				public virtual void Update_NoVirtual()
				{
					EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Function()
				{
					Update();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void(IntPtr pNativeObject);

				/// <summary>
				/// 更新
				/// </summary>
				public virtual void Update()
				{
					EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadBaseBandingObject = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject", new BaseBandingObjectClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObjectProxy", new BaseBandingObjectClassFactory());

				public BaseBandingObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool(IntPtr pObject, getCanSwapBuffer_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string(IntPtr pObject, setName_CallBack_void_EarthView_World_Core_ev_string pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string(IntPtr pObject, getName_CallBack_EarthView_World_Core_ev_string pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool(IntPtr pObject, setNeedUpdate_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool(IntPtr pObject, getNeedUpdate_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode(IntPtr pObject, getNode_CallBack_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void(IntPtr pObject, update_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getCanSwapBuffer_CallBack_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Function;
						GC.KeepAlive(m_getCanSwapBuffer_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool(this.NativeObject, m_getCanSwapBuffer_CallBack_ev_bool);
						m_setName_CallBack_void_EarthView_World_Core_ev_string = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Function;
						GC.KeepAlive(m_setName_CallBack_void_EarthView_World_Core_ev_string);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string(this.NativeObject, m_setName_CallBack_void_EarthView_World_Core_ev_string);
						m_getName_CallBack_EarthView_World_Core_ev_string = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Function;
						GC.KeepAlive(m_getName_CallBack_EarthView_World_Core_ev_string);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string(this.NativeObject, m_getName_CallBack_EarthView_World_Core_ev_string);
						m_setNeedUpdate_CallBack_void_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Function;
						GC.KeepAlive(m_setNeedUpdate_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool(this.NativeObject, m_setNeedUpdate_CallBack_void_ev_bool);
						m_getNeedUpdate_CallBack_ev_bool = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Function;
						GC.KeepAlive(m_getNeedUpdate_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool(this.NativeObject, m_getNeedUpdate_CallBack_ev_bool);
						m_getNode_CallBack_CNode = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Function;
						GC.KeepAlive(m_getNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode(this.NativeObject, m_getNode_CallBack_CNode);
						m_update_CallBack_void = EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Function;
						GC.KeepAlive(m_update_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void(this.NativeObject, m_update_CallBack_void);
					}
				}
				public static BaseBandingObject FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					BaseBandingObject obj = baseObj as  BaseBandingObject;
					if (object.Equals(obj, null))
					{
						obj = new BaseBandingObject(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CBaseBandingObject");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class BaseBandingObjectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					BaseBandingObject emptyInstance = new BaseBandingObject(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
